#!/bin/bash
parameters(){
	echo "Number of parameters $#"
		if [ "$#" -eq 0 ]; then #true if no arguments were suplied after inut was requested from the user
			echo "there are no valid arguments supplied exiting with 1"
		exit 1
		fi
}

process(){
		echo $1 | base64 -d #printnting whatever is uplied to the fuction and then decoding it
}

cd 						#accesing the home directory just so that the data folder can be accessed from anywhere assuming that the folder is in the directory
cd linux-lab04/data
read arg #reading user input encoded* will give all the files containing encoded in /data
parameters $arg #running func arg to check if anything was entered from the user


for file in $arg #looping for however many things are in $arg
do
	if [ ! -e $file ]; then #the file named doesnt exist one of the or the $arg names does not exist in the directory
		echo "the file $file doesnt exist, exiting with error code 1"
		exit 2
	fi
	
	topLine=$(head -n 1 $file)#creating a variable containing the top line of the file
	botLine=$(tail -n 1 $file)#creating a variable containing the bottom line of the file
	
	echo "the top line of $file is:"
	process $topLine #decoding the top line the funcion prints it automatically
	echo "and the bottom line is:"
	process $botLine ; echo "" #decoding the bottom line the funcion prints it automatically and formating the output for readability with echo ""
	
done
exit 0
