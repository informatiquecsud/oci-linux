all: sum sum.s

sum: sum.c
	gcc sum.c -o sum

sum.s: sum.c
	gcc -S -fverbose-asm sum.c

clean:
	rm -rf sum sum.s __pycache__ sum_bytecode.txt

compile_py:
	python -m py_compile sum.py

disassemble_bytecode:
	python disassemble.py sum > sum_bytecode.txt