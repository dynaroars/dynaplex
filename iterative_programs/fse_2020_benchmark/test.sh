#/bin/bash

make clean && make 

for file in ./*; do
	if [[ $file == *.o ]]
	then
		echo "Running " "$file" && time ./$file  
	fi
done;

for d in ./*; do
  if [ -d "$d" ]; then
    echo -e "\n\n\nRunning${d}" && ../../dig.py -trace "${d}/traces" -maxdeg 5 
  fi
done
