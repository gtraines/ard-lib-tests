#!/bin/bash
rm -rf build

set -e

for fn in *; do
   if [ -d $fn ]; then
     ./build.sh $fn normal
   fi
done

