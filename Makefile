ifeq ($(OS),Windows_NT)
  ifeq ($(shell uname -s),) # not in a bash-like shell
	CLEANUP = del /F /Q
	MKDIR = mkdir
  else # in a bash-like shell, like msys
	CLEANUP = rm -f
	MKDIR = mkdir -p
  endif
	TARGET_EXTENSION=exe
else
	CLEANUP = rm -f
	MKDIR = mkdir -p
	TARGET_EXTENSION=out
endif

BASH=/bin/bash

# definitions generales
OBJECTS=$(SOURCES:.c=.o)
PATHB = build/
PATHO = build/objs/
PATHR = build/results/

c00:
	make clean
	gcc -c -I. -Iunity/src/ -Isrc/ -DTEST unity/src/unity.c -o build/objs/unity.o

	gcc -Wall -Wextra -Werror -c -I. -Iunity/src/ -Isrc/ -DTEST src/calc/calc.c -o build/objs/calc.o
	gcc -Wall -Wextra -Werror -c -I. -Iunity/src/ -Isrc/ -DTEST test/Testcalc.c -o build/objs/Testcalc.o
	gcc -o build/Testcalc.out build/objs/Testcalc.o build/objs/calc.o build/objs/unity.o
	./build/Testcalc.out > build/results/Testcalc.txt 2>&1

	gcc -Wall -Wextra -Werror -c -I. -Iunity/src/ -Isrc/ -DTEST src/C00/ex00/ft_putchar.c -o build/objs/ft_putchar.o
	gcc -Wall -Wextra -Werror -c -I. -Iunity/src/ -Isrc/ -DTEST test/TestC00.c -o build/objs/TestC00.o
	gcc -o build/TestC00.out build/objs/TestC00.o  build/objs/unity.o
	./build/TestC00.out
	./build/TestC00.out > build/results/TestC00.txt

c01:
	make clean
	gcc -c -I. -Iunity/src/ -Isrc/ -DTEST unity/src/unity.c -o build/objs/unity.o

	gcc -Wall -Wextra -Werror -c -I. -Iunity/src/ -Isrc/ -DTEST src/C01/ex00/ft_ft.c -o build/objs/ft_ft.o
	gcc -Wall -Wextra -Werror -c -I. -Iunity/src/ -Isrc/ -DTEST test/TestC01.c -o build/objs/TestC01.o
	gcc -o build/TestC01.out build/objs/TestC01.o build/objs/unity.o
	./build/TestC01.out
	cd src/C01; norminette `ls */*`

clean:
	rm -rf $(PATHO)*.o
	rm -rf $(PATHB)*.$(TARGET_EXTENSION)
	rm -rf $(PATHR)*.txt
	rm -rf calc.$(TARGET_EXTENSION)

tests :
	cd src/C00/ex00
	norminette -R CheckForbiddenSourceHeader
