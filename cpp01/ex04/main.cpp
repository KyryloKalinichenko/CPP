#include <iostream>
#include <fstream>
#include <string>



int main(int argc, char **argv){
    if (argc != 4)
        return 1;
    std::ifstream ifs(argv[1]);
    if (ifs.fail()){
        return 1;
    }
    std::ofstream ofs("FILENAME.replace,");
    std::string read_it;
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    while (getline(ifs, read_it))
    {
        std::size_t found = read_it.find(s1);
        while (found != std::string::npos)
        {
            read_it.erase(found, s1.length());
            read_it.insert(found, s2);
            found = read_it.find(s1);
        }
        ofs << read_it << std::endl;
    }
    ifs.close();
    ofs.close();

    return 0;
}

/*ARGS FOR TESTS
** to_read love code
*/