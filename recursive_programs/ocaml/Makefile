OCAMLOPT = ocamlopt

all:  kth.exe truth_table.exe totient.exe prime.exe compress.exe gcd.exe remove.exe

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

kth.exe:
	$(OCAMLOPT) -o $@ kth.ml

remove.exe:
	$(OCAMLOPT) -o $@ remove.ml
clean:
	rm -rf *.cm* *.o *.exe kth truth_table prime totient compress gcd  remove
