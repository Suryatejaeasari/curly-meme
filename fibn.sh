#!/bin/bash
echo "Enter: "
read n
a=0
b=1
echo -n "$a $b "
for((i=0;i<n;i++));
do
fn=$((a+b))
echo -n " $fn "
a=b
b=fn
done
