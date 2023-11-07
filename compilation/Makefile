all: build sum sum.s compile_py disassemble_bytecode

build:
	mkdir build

sum: sum.c
	gcc sum.c -o build/sum

sum.s: sum.c
	gcc -S -fverbose-asm sum.c -o build/sum.s

clean:
	#rm -rf sum sum.s __pycache__ sum_bytecode.txt
	rm -rf build/* __pycache__ build

compile_py:
	python -m py_compile sum.py

disassemble_bytecode:
	python disassemble.py sum > build/sum_bytecode.txt

install-pypy:
	wget https://downloads.python.org/pypy/pypy3.10-v7.3.13-linux64.tar.bz2
	tar -xjf pypy3.10-v7.3.13-linux64.tar.bz2
	rm -f pypy3.10-v7.3.13-linux64.tar.bz2
	mv pypy3.10-v7.3.13-linux64 pypy