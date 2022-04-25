#include <iostream>
#include <vector>
#include <sstream>

auto print (auto &ss, auto &vet, int i) -> void {
        if(i == (int) vet.size())
            reurn;
        ss << vet[i] << " ";
        print(ss,vet, i+1);
    };

void fazer_linha (std::vector<int> vet) {
    if (vet.size() <= 1){
        std:: cout << to_string (vet) << '\n';
        return;
    }
    std::vector<int> filho;

    for(int i =0; i < (int) vet.size() - 1; i++)
        filho.push_back(vet[i] + vet [i+1]);
    
    fazer_linha(filho);

    std::cout << to_string(vet) << '\n';
}

// std::vector<std::vector<int>> fazer_triangulo(std::vector<int> vet){
//     std::vector<std::vector<int>> resp;
    
//     resp.push_back(vet);
    
//     while(vet.size() > 1){
//         auto copia = vet;
        
//         vet.clear();
        
//         for(int i =0 ; i < (int) copia.size() -1; i++)
//             vet.push_back(copia[i] + copia[i=1]);
//         resp.push_back(vet);
//     }
//     return resp;
// }

std::string to_string (std::vector<int> vet){
    std::stringstream ss;
    ss << "[ ";
        
    for(auto elem : vet)
        ss << elem << " ";
    ss << " ]";

    return ss.str();


}

int main(){

    fazer_linha({1,2,3,4,5,6,7});

    return 0;
}