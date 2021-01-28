#/bin/bash

make clean -C iterative_programs/fse_2020_benchmark && make -C iterative_programs/fse_2020_benchmark

for file in iterative_programs/fse_2020_benchmark/*; do
	if [[ $file == *.o ]]
	then
		echo $file;
		./$file
	fi
done;

