#!/bin/bash
cat file1.dat | while read line 
do 
   variable1="$line"
   function($variable1)
done
