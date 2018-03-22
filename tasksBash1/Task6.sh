#!/bin/bash

for filename in *.data #looking for all files ending in ./data
do
	#rename .data data *.data just messing around keeping it for future reference
	if [ -f "$filename.bak" ]; then #if there is a file with .data.bak there must be a .bak for this file
		echo "there exists $filename.bak for a file $filename"
	else
		echo "there is no backup for $filename one will be created"
		cp "$filename" "$filename.bak" #copying contents of ./data to a bak with the same number
	fi
done
exit 0
