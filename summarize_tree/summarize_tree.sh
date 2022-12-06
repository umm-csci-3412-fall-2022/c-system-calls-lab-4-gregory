#!/bin/bash

dirname=$1

    echo "Processed all the files from <"$dirname">."
    echo "There were "$(find $dirname -type d |wc -l)" directories."
    echo "There were "$(find $dirname -type f |wc -l)" regular files."
