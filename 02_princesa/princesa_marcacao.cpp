//josephus
#include <iostream>
#include <vector>

    void fill_vet (int n, std::vector<int> &v){
        for (int i = 0; i < n; i++){
            v[i] = i+1;
        }
    }

    void print_vet (std::vector<int> v){
        for (int i = 0; i < v.size(); i++){
            std::cout << v[i] << " ";
        }
        std::cout << std::endl;
    }

    void josephus (int inicio, std::vector<int> &v){
        int i = 0;
        while (v.size() > 1){
            i = (inicio -1);
            v.erase(v.begin() + i);
            inicio = i; 
        }
    }

    int procurar_vivo(std::vector<int> e, int size, int chosen){
        return 0;
    }

int main (){

    int size, chosen;
    std:: cout <<"Enter the number of people:"; std:: cin >> size; 
    std:: cout <<"Enter the first assassins's number:"; std:: cin >> chosen;

    std::vector<int> elements(size);
    bool vivos[chosen] = {true};
    fill_vet(size, elements);
    print_vet(elements);
    josephus(chosen, elements);
    print_vet(elements);
    ///int prox = procurar_vivo(elements, size, chosen);








    return 0;
}