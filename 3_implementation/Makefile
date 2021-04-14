CC=gcc
CFLAGS=-I. -Iinc -std=c99
DEPS = student.h
OBJ = src/ll.o src/student.o src/main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exam: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	
valgrind:
	valgrind ./exam.exe
clean:
	rm -f src/*.o *.exe
