CC=gcc
CFLAGS=-I. -Iinc -Iunity -std=c99
DEPS = student.h
OBJ = src/ll.o src/student.o src/main.o
TEST = test/test.o unity/unity.o src/ll.o src/student.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) -fPIC

exam: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) -fPIC

utest: $(TEST)
	$(CC) -o $@ $^ $(CFLAGS) -fPIC

all: exam utest	
valgrind:
	valgrind ./exam
clean:
	rm -f src/*.o *.exam test/*.o *.utest
