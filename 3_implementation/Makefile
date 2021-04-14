CC=gcc
CFLAGS=-I. -Iinc -Iunity -std=c99
DEPS = student.h
OBJ = src/ll.o src/student.o src/main.o
TEST = test/test.o unity/unity.o src/ll.o src/student.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -fPIE

exam: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) -fPIE

utest: $(TEST)
	$(CC) -o $@ $^ $(CFLAGS) -fPIE

all: exam utest	
valgrind:
	valgrind ./exam
clean:
	rm -f src/*.o *.exam test/*.o *.utest
