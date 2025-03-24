#!/bin/bash

for file in ./*; do
    if [ -f "$file" ] && ! git ls-files --error-unmatch "$file" &>/dev/null; then
        echo "File: $file"
		git add "$file"
		git commit -m "$file"
    fi
done