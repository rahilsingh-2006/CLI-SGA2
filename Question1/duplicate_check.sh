#!/bin/bash

processed=0
duplicates=0
backedup=0

mkdir -p backup

> report.txt
> errors.txt

declare -A seen

for file in submissions/*
do
    if [ -f "$file" ]; then

        ((processed++))

        checksum=$(md5sum "$file" 2>>errors.txt | awk '{print $1}')

        if [[ -z "${seen[$checksum]}" ]]; then

            seen[$checksum]=1

            cp "$file" backup/ 2>>errors.txt

            ((backedup++))

        else

            ((duplicates++))

        fi

    fi
done

echo "Files Processed : $processed" > report.txt
echo "Duplicate Files : $duplicates" >> report.txt
echo "Backed Up Files : $backedup" >> report.txt

