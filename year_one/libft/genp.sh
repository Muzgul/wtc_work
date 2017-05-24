#!/bin/bash
ctags *.c
cat tags | cut -f 2 -d '^' | tr -s "\t" "\t" | sed "s/\$\//\;/g" > prototypes.txt
rm tags
