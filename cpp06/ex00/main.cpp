#include <iostream>
#include "Convertor.hpp"

int main(int argc, char** argv){

    if (argc != 2){
        std::cout << "Argument error" << std::endl;
        return 1;
    }
    Convertor c(argv[1]);

    c.use();
    return 0;
}