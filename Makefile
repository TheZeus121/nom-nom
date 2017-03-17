CC=g++

.PHONY: default

default: all

%.o: %.cpp
	$(CC) -o $@ $<

.PHONY: all

all: eat.o restore.o

.PHONY: clean

clean:
	rm *.o

.PHONY: install

install: all
	sudo cp eat.o "/usr/bin/*eats"
	sudo cp restore.o "/usr/bin/*restores"

.PHONY: uninstall

uninstall:
	sudo rm -f "usr/bin/*eats"
	sudo rm -f "usr/bin/*restores"

