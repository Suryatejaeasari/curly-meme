#!/bin/bash
file_path="text2"
lc=$(wc -l < "$file_path")
wc=$(wc -w < "$file_path")
echo "$lc"
echo "$wc"

