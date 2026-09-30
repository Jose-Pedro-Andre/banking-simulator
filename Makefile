NAME=run
CXX=g++ -std=c++11
CXXFLAGS=-Wall -Wextra -Werror -g
SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS)
fclean:
	rm -f $(OBJS) $(NAME)
re: fclean $(NAME)
