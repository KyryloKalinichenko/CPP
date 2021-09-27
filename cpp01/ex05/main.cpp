#include "Karen.hpp"

int main(void){
    std::string	msg[4] = {"debug", "info", "warning", "error"};
    Karen here;

    for (int i = 0; i < 4; i++){
        here.complain(msg[i]);
    }
    return 0;
}