#!/bin/bash

cat help-read.txt | while read line #reading the contents of help-read.txt and piping the output to while which uses the
#function read to place the output into variable line as soon as there is no more input from read which takes cat help-read.txt by line and passes that to the variable line
#while will stop once read runs out of lines. 
do
	
	echo ${line} | wc -w #echoes each line of the text file and pipes it into the fuction wc -w printing the word count of each line
done
exit 0
