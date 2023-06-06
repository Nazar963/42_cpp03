CC = g++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
MAIN = frag

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re