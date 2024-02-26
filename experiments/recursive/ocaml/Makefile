OCAMLOPT = ocamlopt

all: truth_table.exe totient.exe prime.exe compress.exe gcd.exe

truth_table.exe:
	$(OCAMLOPT) -o $@ truth_table.ml

totient.exe:
	$(OCAMLOPT) -o $@ totient.ml

prime.exe:
	$(OCAMLOPT) -o $@ prime.ml

compress.exe:
	$(OCAMLOPT) -o $@ compress.ml

gcd.exe:
	$(OCAMLOPT) -o $@ gcd.ml

clean:
	rm -rf *.cm* *.o *.exe truth_table prime totient compress gcd
