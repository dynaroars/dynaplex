#/bin/bash

for file in ./*; do
	if [[ $file == *.exe ]]
	then
		echo "Running " "$file" && time ./$file
	fi
done;

for d in ./*; do
  if [ -d "$d" ]; then
    echo -$d; python3 -W ignore ../../analyzer.py -trace $d -nlog; echo -e "\n\n\n"
  fi
done
