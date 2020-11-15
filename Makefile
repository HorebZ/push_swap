
##
## EPITECH PROJECT, 2018
## PUSH_SWAP
## File description:
## Makefile for for push_swap project
##

CC		=	gcc

EXT		=	.c

NAME	=	push_swap

SRCDIR	=	sources/

INCDIR	=	include/


SRC	=	$(SRCDIR)push_swap		\
		$(SRCDIR)my_getnbr		\
		$(SRCDIR)swap_ra		\
		$(SRCDIR)swap_pa		\
		$(SRCDIR)swap_pb		\
		$(SRCDIR)node			\
		$(SRCDIR)alternate_node

NOM		=	$(basename $(notdir $(SRC)))

OBJ		=	$(addprefix objects/, $(addsuffix .o, $(NOM)))

CFLAGS =	-g3 -Iinclude $(WARN) -Wall -Wextra

RED		=\033[0m\e[1m\e[31m
GREEN	=\033[0m\e[1m\e[32m
NC		=\033[0m
GREY	=\033[40m
BG_CL	=\033[42m

all:		$(NAME)

$(NAME):	$(OBJ) | objects/
	@$(CC) -o $(NAME) $(OBJ)
	@echo  -e '${BG_CL}| Flags  : $(CFLAGS)${NC}'
	@echo  -e '${GREEN}╰ Create${NC} : ${GREY}./$(NAME)${NC}'

objects/%.o:	sources/%.c | objects
	@mkdir -p objects
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e "${GREEN}|  [OK]${GREEN}   " $< "${NC}" || echo -e "\e[91;5m|  [KO]\e[25m   " $< "${NC}"

objects:
	@mkdir -p $@
	@echo  -e '${GREEN}╭ Object${NC} : objects/ dir create'
clean:
	@rm    -f $(OBJ)
	@echo  -e '${RED}╭ Clean${NC}  : OK'

fclean:		clean
	@$(RM) -r objects
	@$(RM) $(NAME)
	@echo  -e '${RED}| Fclean${NC} : $(NAME) removed'
	@echo  -e '${RED}╰ Fclean${NC} : objects/ dir removed'

re:		fclean all

.PHONY:		all clean fclean re
