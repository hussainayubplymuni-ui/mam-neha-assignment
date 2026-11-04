#!/usr/bin/env bash
# Builds the W1 program and checks the output of each task.
# A task that is not written yet is SKIPPED, not failed.
# The expected text matches the wording used in Version 2;
# if you word an output line differently, update the pattern here.
set -u
SRC="${1:-task1.cpp}"
fail=0

echo "== Build (warnings are treated as errors)"
if ! g++ -std=c++17 -Wall -Wextra -Wshadow -Werror "$SRC" -o app; then
  echo "BUILD FAILED"; exit 1
fi
echo "Build OK"

has_task() {  # is void taskN(...) defined (not just a prototype)?
  grep -Eq "^[[:space:]]*void[[:space:]]+task$1[[:space:]]*\([^;]*$" "$SRC"
}

check() {  # task number, test name, input, expected pattern (regex)
  if ! has_task "$1"; then echo "SKIP: Task $1 not written yet ($2)"; return; fi
  out=$(printf -- "$3" | timeout 5 ./app 2>&1); code=$?
  if [ $code -eq 124 ]; then echo "FAIL: Task $1 $2 (program got stuck, timed out)"; fail=1; return; fi
  if grep -qE -- "$4" <<<"$out"; then echo "PASS: Task $1 $2"; else echo "FAIL: Task $1 $2 (expected to see: $4)"; fail=1; fi
}

M='80\n70\n-1\n'   # normal marks for Task 9; other tasks should not read input
echo "== Tests"
check 1  "sum of 8 and 7 is 15"         "$M" '15'
check 2  "21 x 5 is 105"                "$M" '105'
check 3  "table up to 8"                "$M" '8 x 8 = 64'
check 4  "4827 is odd"                  "$M" '4827 is odd'
check 5  "month is April"               "$M" 'April'
check 6  "third value is 7"             "$M" '[Tt]hird value.*7'
check 7  "marks are 27"                 "$M" '27'
check 8  "called 5 times"               "$M" 'count is 5'
check 9  "average of 80 and 70"         "$M" 'average.*: 75'
check 9  "negative marks ignored"       '50\n-5\n100\n-1\n' 'average.*: 75'
check 9  "no valid marks gives 0"       '-1\n'              'average.*: 0'
check 9  "letter typed by mistake"      'abc\n60\n-1\n'     'average.*: 60'
check 10 "local resets to 4828"         "$M" 'Local: 4828'

if [ $fail -eq 0 ]; then echo "== All written tasks passed"; else echo "== Some tests FAILED"; fi
exit $fail
