#!/bin/bash

$1=dirname

    echo "Processed all the files from <"$dirname">."
    echo "There were "$(find $dirname -type d" directories."
    echo "There were "$(find $dirname -type f" regular files."
