all: test
	./test

compile: $(file)
	ocamlopt -o test $(file) ; mkdir -p double_rec_call ; mkdir -p binary_search ; mkdir -p merge_sort; mkdir -p merge_sort_split ; rm -f -r double_rec_call/* binary_search/* merge_sort/* merge_sort_split/*

# FIXME: doesn't work as expected. Loop runs only once.
gen-logs: 
	./run-loop.sh 

clean:
	rm -r -f test *.mli *.cmx *.cmi *.o binary_search/ double_rec_call/ merge_sort/ merge_sort_split/

