OCAMLOPT = ocamlopt

all:  kth.exe complete_btree.exe compress.exe gcd.exe insert.exe remove.exe

complete_btree.exe:
	$(OCAMLOPT) -o $@ complete_btree.ml

compress.exe:
	$(OCAMLOPT) -o $@ compress.ml

gcd.exe:
	$(OCAMLOPT) -o $@ gcd.ml

insert.exe:
	$(OCAMLOPT) -o $@ insert.ml

kth.exe:
	$(OCAMLOPT) -o $@ kth.ml

remove.exe:
	$(OCAMLOPT) -o $@ remove.ml
clean:
	rm -rf *.c* *.d* *.exe kth complete_btree compress gcd insert remove
