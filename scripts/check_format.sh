#!/bin/bash

if hash astyle;
then
	for f in $(find ../ -type f -name "*.c" -or -name "*.h")
    do
        astyle --style=kr -p $f
        astyle --pad-oper -p $f
        astyle --pad-header -p $f
        astyle --lineend=linux -p $f
    done


    for f in $(find ../ -type f -name "*.orig")
    do
    	rm $f
	done
else
	echo "You do not have astyle installed so you code style is not being checked!"
fi

