#include <iostream>

void    to_upp(char *str)
{
    while(*str)
    {
        if (*str >= 97 && *str <= 122)
            *str -= 32;
        str++;
    }
}

int main( int argc, char **argv){

    if (argc > 1){
        int i = 0;
        while(++i < argc)
        {
            to_upp(argv[i]);
            std::cout << argv[i];
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }

    return 0;
}