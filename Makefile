CC=gcc

SRC=src/student.c src/hashmap.c src/file.c src/utils.c src/benchmark.c main.c

all:
	$(CC) $(SRC) -o student_system

test:
	$(CC) tests/test_student.c src/student.c -o test

clean:
	rm -f student_system test