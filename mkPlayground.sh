#!/usr/bin/env bash 
#Simple shell script to make the playground folder
#in all of the subdirectories
for d in */; do mkdir -p "$d/playground" ; done
