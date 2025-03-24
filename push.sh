#!/bin/bash

for file in ./*; do
    if [ -f "$file" ] && ! git ls-files --error-unmatch "$file" &>/dev/null; then
        echo "File: $(basename $file)"
		git add "$file"
		git commit -m "$(basename $file)"
    fi
done

git push