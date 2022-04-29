#include <iostream>
#include <algorithm>
#include <iterator>

#include <vector>
#include <set>  //treeset
#include <map>  //treemap
#include <unordered_set>  //hashset
#include <unordered_map> //hashmap


using namespace std;

vector<int> get_unicos (vector<int> vet){
    vector<int> unicos;

    for(auto elem : vet){
        if( unicos.find(elem) == unicos.end())
            ordenados.push_back (elem);
    return ordenados;

    }
}


int main () {
    auto unicos = get_unicos ({1,2,3,4,5,6,7,8,});

    for (auto elem : unicos)
        cout << elem << " ";
    cout <<'\n';

    map<int, string>  nomes;
    nomes [1] = "um";
    nomes[2]    = "dois";

    map<string, int> idade;

}