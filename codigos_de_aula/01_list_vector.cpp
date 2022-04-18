#include <iostream>
#include <list>
#include <vector>



int main(){
    //inicializando
    {
        //vazio
        std::vector<int> v;
        size_t v_size { v.size()};
        size_t v_capacity { v.capacity()};
        v.reserve(10); //reserva espaço para a deteminada quantidade de elentos
        v_size = v.size();
        v_capacity = v.capacity(); 

        std::list<double> l;        
    }

    {
        //definindo valores iniciais
        std::vector<int> v = {1,2,3};
        size_t v_size {v.size()};
        size_t v_capacity {v.capacity()};
    }
    return 0;
}