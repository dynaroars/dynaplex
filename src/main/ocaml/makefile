all: test
	./test

compile: $(file)
	ocamlopt -o test $(file) ; mkdir -p double_rec_call ; mkdir binary_search ; rm -f -r double_rec_call/* binary_search/*

# FIXME: doesn't work as expected. Loop runs only once.
gen-logs: 
	./run-loop.sh 

clean:
	rm -r -f test *.mli binary_search/ double_rec_call/

