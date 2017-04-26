CC = g++
CFLAGS = -g -O0
PROGRAM = simple_tree
OBJECTS = main.o particle.o

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS)

main.o: main.cc particle.h
	$(CC) -c $<

particle.o: particle.cc particle.h
	$(CC) -c $<

.PHONY: clean
clean:
	rm -f $(PROGRAM) $(OBJECTS)
