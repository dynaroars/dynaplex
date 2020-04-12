all: test
	./test

compile: $(file)
	ocamlopt -o test $(file) ; rm -f -r logs/* 

# FIXME: doesn't work as expected. Loop runs only once.
gen-logs: 
	rm -f -r logs/* && ./run-loop.sh 

clean:
	rm -f test *.mli

