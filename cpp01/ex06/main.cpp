#include "Karen.hpp"

int main(int argc, char **argv){
    std::string	msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (argc != 2)
	{
		std::cout << "ARG error!\n";
		return 1;
	}
    Karen here(argv[1]);

    for (int i = 0; i < 4; i++){
        here.complain(msg[i]);
    }
    return 0;
}