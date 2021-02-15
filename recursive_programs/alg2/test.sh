#/bin/bash

make clean

for file in ./*; do
	if [[ $file == *.py ]]
	then
		echo "Running " "$file" && time ./$file
	fi
done;

for d in ./*; do
  if [ -d "$d" ]; then
    echo -$d; ../../dig.py -trace "${d}/traces" -maxdeg 6 -r; echo -e "\n\n\n"
  fi
done
