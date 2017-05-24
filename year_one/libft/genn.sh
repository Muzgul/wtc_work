#!/bin/bash
find . -type f | grep ".ft" | cut -c 3- | tr "\n" " " | cut -c 1- | cat > names.txt
