#include <iostream>
#include <vector>


template <typename T>
struct my_vector{
    int _size; //atributes
    int _capacity;
    T * _data;


    my_vector(int size = 0): _size(size), _capacity(size) {
        
        this->_data = new T [size]; // n de inteiros
        
        //new int(size) // um inteiro com esse valor 

    }

    my_vector (int size, T elemento): my_vector(size) {
        for (int i = 0; i < size; i++)
            _data[i] = elemento;
    }

    ~my_vector() {
        delete [] _data;
    }

    void push_back (T value){
        if(_size == _capacity){
            if(_capacity == 0 )
                this->reserve(1);
            else
                this->reserve(2 * _capacity);
        }
        _data[_size] = value;
        _size +=1 ;
    }

    T & t (int index) {
        if ( index < 0 || index >= _size)
            throw std::string ("indice invalido");
        return _data[index];
    }
    
    void pop_back (){
        if (size() == 0)
            return;
        _size -=1;
    }

    void reserve (int capacity) {
        T* _new_data = new T [capacity];
        int qtd = std::min(_size, capacity);
        for(int i  = 0; i < qtd; i++)
            _new_data[i] = _data[i];
        _size = qtd; //pode ter diminuido
        _capacity = capacity;
        delete [] _data; //devolve o bloco antigo
        _data = _new_data;  //atualiza a reference
    }
    
    T& operator[] (int index){
        return _data[index];
    }

    int capacity (){
        return _capacity;
    }

    int size () {
        return _size;
    }

    T& front (){
        return _data[0];
    }

    T& back() {
        return _data[_size - 1];
    }

    T * begin(){
        return &_data[0];
    }

    T * end(){
        return _data + _size;
    }

    void insert (T * it, T value) {
        int pos = it - _data;
        if(_size == _capacity)
            this->reserve(2* _capacity);
        for(int i = _size; i > pos ; --i)
            _data[i] = _data[i-1];
        _size+= 1;
        _data[pos] = value;
    }

    void erase (T* it){
        int pos = it - _data;
        for (int i = pos; i < _size -1; i++)
            _data[i] = _data[i+1];
        _size -=1;
    }
};

int main () {
    my_vector<float> vet(5,1.66);
    
    std::cout << vet.size() << " " << vet.capacity() << "\n";

    std::cout << vet[2] << ' ' << vet.front() << ' ' << vet.back();

    vet[2] = 6;
    vet.front () = 7;
    vet.back() = 9;
    std::cout << '\n';
    std::cout << vet[2] << ' '  << vet.front()  << ' ' << vet.back() << '\n';
    std::cout << std::endl;

    for (int i = 0; i < vet.size(); i++)
        std::cout << vet[i] << ' ';
    std::cout << ' ';

    auto print = [&vet] {
        std::cout << "[ ";
        for (int i = 0; i < vet.size(); i++)
            std::cout << vet[i] << ' ';
        std::cout << "] " << vet.size() << "/" << vet.capacity() << '\n';
    };
    
    print();
    vet.push_back(3);
    vet.push_back(4);
    print();

    //vet.push_back(6);
    //vet.reserve(200); //alocar memoria para tantos elementos
    //vet.pop_back();

    //vet.insert(vet.begin() + 1, 9);
    //vet.erase(vet.begin() + 1);

    for (auto it = vet.begin(); it!= vet.end(); ++it)
        std::cout << *it << " ";
    std::cout << '\n';

    //for (auto elem : vet)
    //    std::cout <<elem << " ";
    //std::cout << '\n';

}