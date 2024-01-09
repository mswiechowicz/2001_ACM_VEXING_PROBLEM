#include <iostream>
#include <list>

int main() {
    std::cout << "Podaj input:" << std::endl;

    std::list<std::string> lines;
    std::string line;
//    while(true) {
        getline(std::cin, line);
        lines.push_back(line);
        std::cout << line.size() << std::endl;
//    }

//    lines.emplace_back("10");
//    lines.emplace_back("20");
    std::cout << "lines =" << std::endl;
    for (const auto& c : lines)
        std::cout << " " << c;
    std::cout << std::endl;

    return 0;
}

//4 5 SAMPLE-01
//#A--#
//##-B#
//#AB##
//#####
//6 7 SAMPLE-02
//#--Y--#
//#-ZX-X#
//#-##-##
//#-XZ--#
//####YZ#
//#######
//0 0 END