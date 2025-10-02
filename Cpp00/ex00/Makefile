Name = megaphone
cc = c++
flags = -Wall -Wextra -Werror -std=c++98
files = megaphone.cpp

OBJ = $(files:.cpp=.o)
all : $(Name)

$(Name) : $(OBJ)
	$(cc) $(flags) -o $(Name) $(OBJ)

%.o : %.cpp 
	$(cc) $(flags) -c $< -o $@

clean :
	@rm -f $(OBJ)
	
fclean : clean
	@rm -f $(Name)

re : fclean all

.PHONY: all clean fclean re