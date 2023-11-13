#!/bin/bash
f="output.out"
cmd=$(curl $1 > input.in)
cmd=$(./a.out)
while read -r line
do
  echo "$line"
done < "$f"
