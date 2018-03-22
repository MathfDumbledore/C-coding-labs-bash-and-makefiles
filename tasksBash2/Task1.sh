#!/bin/bash


for file in *
do
	if [ ! -s "$file" ]; then
	echo "the file $file has a 0 size would you like to remove it? Y/N"
	read response
		if [ $response = "Y" ]; then
			rm $file
			echo "removed $file"
		fi
	
	else
	echo "there are no 0 sized files"
	fi
done
exit 0
