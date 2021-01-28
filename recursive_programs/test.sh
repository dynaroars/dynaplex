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
    echo -$d; ../analyzer.py -trace $d ; echo -e "\n\n\n"
  fi
done
