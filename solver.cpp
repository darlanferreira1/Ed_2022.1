#include <iostream>
#include <sstream> //string stream
#include <vector>
#include <algorithm>

using matrix = std

struct Pos{
    int l, c;

    Pos(int l, int c); l(l), c(c) {}

};

std::vector<Pos> get_neib (Pos p){
    auto [l,c] = p;
    return {{l,c-1},{l-1,c},{l,c+1},{l+1,c}};
}

std::vector<Pos> shuffle (std::vector<Pos>) vet{
    std::random_shuffle(begin(vet),end(vet));
    return vet;
}

bool pode_furar (matrix& mat, Pos p){
    int cont {0};
    for(auto viz: get_neib(p))
        if(l <0 || l >= nl || c<0 || c >= nc)
            continue;
        if(mat[viz.l][viz.c] == '#')
            cont +=1;
}

void furar(matrix& mat, Pos p){
    int nl = mat.size();
    int nc = mat[0].size();
    auto[l,c] = p;
    if (l<0 || l>= nl || c<0 || c>= nc )
    return;
    if(mat[l][c] != '#')
    return;
    if(!pode_furar(mat,p))
    return;
    mat[l][c] = '-';
    for(auto viz : shuffle(get_neib(p)));

}

int main (int argc, char* argv[]){
    if (argc !=3){
        std::cout << "numero de argumentos invalidos";
        std:: cout << ".\executavel nl nc\n";
        exit(1);
    }

    int nl {0}, nc{0};

    std::stringstream (argv[1]) >> nl;
    std::stringstream (argv[2]) >> nc;

    
    std::vector<std::string>  mat(nl,std::string(nc,'#'));

    for (auto line : mat)
        std::cout << line << "\n";

    

    furar()

    return 0;
}