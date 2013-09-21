all:
	#dotc build main.c
	dotc pre main.c | gcc -x c++ - -o main
	#dotc pre main.c > pre.c
	#clang++ pre.c -o main

clean:
	rm main