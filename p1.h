//
// Created by rudri on 10/11/2020.
//Grupo:
//Marcelo Surco
//Harold Canto	
//Paulo Cuaresma
#ifndef POO1_UNIT6_P1_H
#define POO1_UNIT6_P1_H

#include <initializer_list>
#include <vector>
#include <functional>
#include <queue>
#include <algorithm>
using namespace std;


template<typename T>
class mediana {
    queue<T> elems;
    vector<T> vec;
public:
    mediana(){};
    void push(int num){
        elems.push(num);
        vec.push_back(num);
        sort(vec.begin(),vec.end());

    }
    void pop(){
        int low=lower_bound (vec.begin(), vec.end(), elems.back()) - vec.begin();    
        vec.erase(vec.begin()+low);
        elems.pop();
    }
    double med(){
        return vec[(vec.size()-1)/2];
    }
    
    mediana<T> &operator=(const initializer_list<T> q){
        vec = q;
        for(auto i:q){
            elems.push(i);
        }
        return *this;
    }
};

template<typename T>
ostream& operator<<(ostream& os,mediana<T>& x)
{
    os<< x.med(); 
    return os;
}

void pregunta_1_case_1();

#endif //POO1_UNIT6_P1_H
