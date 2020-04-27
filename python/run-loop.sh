#/bin/sh

rm -f -r logs/* && for i in {1..19}; do ./test ; done
