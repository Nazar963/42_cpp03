CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp ClapTrap.cpp
MAIN = claptrap

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) ClapTrap.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re