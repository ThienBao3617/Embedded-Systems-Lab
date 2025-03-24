gcc -E (stage 1 preprocessing)
-> e.g. gcc -E file.c -o file.i
gcc -S (stage 2 compilation)
-> e.g. gcc -S file.i -o file.s
gcc -c (stage 3 assembly)
-> e.g. gcc -c file.s -o file.o
gcc -o (stage 4 linking)
-> e.g. gcc -o FILE file.o
