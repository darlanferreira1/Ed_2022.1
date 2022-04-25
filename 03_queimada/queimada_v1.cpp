#include <iostream>
#include <vector>
#include <fstream>

void show (std::vector<std::string> mapa){
    for(auto line : mapa ){
        std::cout << line << '\n';
    }
    getchar(); // travar terminal pra ir vendo passo a passo
}

void burn (std::vector<std::string> &mapa, int lpos, int cpos){
    //certificando que posso acessar o valor
    int nl = mapa.size();
    int nc = mapa[0].size();

    if(lpos < 0 || lpos >= nl || cpos < 0 || cpos >=nc){ //antes do zero ou depois ou igal o max
        return;
    }

    if(mapa[lpos][cpos] != '#'){
        return;
    
    }

            
    mapa [lpos][cpos] = 'o';
    show(mapa);  

    burn(mapa, lpos, cpos - 1);
    burn(mapa, lpos -1, cpos);
    burn(mapa, lpos, cpos + 1);
    burn(mapa, lpos + 1, cpos);

    //mapa[lpos][cpos] = '*';
    //show(mapa);
}


int main (void){
    std::vector<std::string> mapa; 
    std::ifstream arq("input.txt"); 
    int nl {}, nc {}, l {}, c {};
    arq >> nl >> nc >> l >> c;
   
    for(int i=0; i<nl; i++){
        std::string line;
        arq >> line;
        mapa.push_back(line);
    }
    
    burn(mapa,l,c);
    show(mapa);
    
    


    return 0;
}