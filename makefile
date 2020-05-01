CC = gcc
target = StarWars
objs = main.o count.o printArr.o

$(target): $(objs)
	$(CC) -o $@ $^

.PHONY: clean
clean:
	rm $(target) $(objs)
