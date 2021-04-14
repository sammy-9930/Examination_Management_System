CC=gcc
CFLAGS=-I.
DEPS = student.h
OBJ = ll.o student.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

exam: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -f *.o *.exe
