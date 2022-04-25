#include <iostream>
#include <vector>

int main (){

    std::vector <std::string> mapa;
    int nl{}, nc{};
    std::cin >> nl >> nc;

    for(int i=0; i<nl;i++){
        std::string line;
        std::cin >> line;
        mapa.push_back (line);
    }



    return 0;
}