#include <iostream>
#include <vector>

void scan_vet(std::vector<int> &v){
    int n;
    std::cin >> n;
    v.resize(n); //dimensiona o tamanho do vector
    
    std::cout << "Elementos do vetor: " << std::endl;

    for(int i=0; i<n; i++){
        std::cin >> v[i];
    }

    
}

void vet (std::vector<int> &v, int pos=0) {
    if(pos < v.size()){
        std::cout << v[pos] << " ";
        vet(v, pos+1);
    }   
}

void rvet(std::vector<int> &v, int pos=0){
    if(pos < v.size()){
        rvet(v, pos+1);
        std::cout << v[pos] << " ";
    }
}

int sum (std::vector<int> &v, int pos=0) {
    if(pos < v.size()){
        return v[pos] + sum (v, pos+1);
    }
    return 0;
}

//multiplicar numeros de um vetor
int mult_v (std::vector<int> &v, int pos=0) {
    if(pos < v.size()){
        return v[pos] * mult_v (v, pos+1);
    }
}

int mult (std::vector<int> &v, int pos=0) {
    if(pos < v.size()){
        return v[pos] * mult (v, pos+1);
    }
}

int minor (std::vector<int> &v, int pos=0) {
    if(pos < v.size()){
        if(pos == 0){
            return v[pos];
        }
        else{
            return std::min(v[pos], minor (v, pos+1));
        }
    }
}

void inv (std::vector<int> &v, int pos=0) {
    int aux = 0;
    if(pos < v.size()){
        aux = v[pos];
        v[pos] = v[v.size()-1];
        v[v.size()-1] = aux;
        inv(v, pos+1);
    }
}

void inv_and_print_inv(std::vector<int> &v, int pos=0){
    
}


int main (){
    std::vector<int> vetor;
    std::cout << "Numero de elementos do vetor: " << std::endl;
    scan_vet(vetor); vet (vetor); 
    std::cout << std::endl;
    rvet(vetor);
    std::cout << std::endl;
    std::cout << "Soma dos elementos: " <<  sum(vetor) <<std::endl;
    std::cout << "Multiplicacao dos elementos: " <<  mult_v(vetor) <<std::endl;
    std::cout << "Menor elemento: " <<  minor(vetor) <<std::endl;
    inv(vetor); std::cout << "Vetor invertido: " << std::endl; vet(vetor);


    return 0;
}