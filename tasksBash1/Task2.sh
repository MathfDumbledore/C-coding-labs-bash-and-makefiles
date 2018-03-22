#/bin/bash

#throws out an error message by default if dir exist...
#mkdir data/processed
#mkdir docs

if [ -d "data/processed" ];then #checks if there exist a directory with such a name
	echo "there already exists a directory named processed."
else
	mkdir data/processed #creates one if if is false
fi

if [ -d "docs" ];then
	echo "there already exist a directory named docs"
else
	mkdir docs #creates docs if if is false
fi

echo "No bugs exiting with 0"
exit 0
