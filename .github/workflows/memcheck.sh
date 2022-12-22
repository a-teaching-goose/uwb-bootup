#!/bin/bash

make mem_tests

found_mem_defect=false

for memlog in `find Testing/Temporary -name "MemoryChecker.*.log"`
do
  if [ -s $memlog ]; then
    echo "Found memory issue in log file $memlog:"
    cat $memlog
    found_mem_defect=true
    echo
  fi
done

if [ "$found_mem_defect" = true ] ; then
  exit 1
else
  echo No memory issue found. Alright, Alright, Alright! 
fi
