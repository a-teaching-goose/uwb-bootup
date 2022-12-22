#!/usr/bin/env python

import re
import sys

def validate_coverage_bar(val):
  return bool(0 <= val <=100)

num_arg = len(sys.argv)
if num_arg != 4:
  print("Error: wrong number of parameter")
  print("Format:")
  print("\t./test.py [string to parse] [coverage bar in percentage for line] [coverage bar in percentage for function]")
  exit(1)


line_coverage_bar = float(sys.argv[2])
func_coverage_bar = float(sys.argv[3])
if validate_coverage_bar(line_coverage_bar) == False or validate_coverage_bar(func_coverage_bar) == False:
  print("Error: invalid coverage bar. Range mush be in [0,100].") 
  print("line_coverage_bar is %.2f, func_coverage_bar is %.2f" % (line_coverage_bar, func_coverage_bar))
  exit(1)

# extra coverage from input
str = sys.argv[1]
result = re.findall(r"[-+]?\d*\.\d+|\d+", str)

actual_line_coverage = float(result[0])
actual_func_coverage = float(result[3])

print("line coverage bar: EXPECTED %.2f, ACTUAL %.2f" % (line_coverage_bar, actual_line_coverage))
print("function coverage bar: EXPECTED %.2f, ACTUAL %.2f" % (func_coverage_bar, actual_func_coverage))
if actual_line_coverage >= line_coverage_bar and actual_func_coverage >= func_coverage_bar:
  print("coverage check PASSED! SOLID!!")
  exit(0)

print("coverage check FAILED! :(")
exit(1)
