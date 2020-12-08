//
// Created by rudri on 10/11/2020.
//Grupo:
//Marcelo Surco
//Harold Canto	
//Paulo Cuaresma
#ifndef POO1_UNIT6_P2_H
#define POO1_UNIT6_P2_H

#include <queue>
#include <cmath>
#include <functional>
using namespace std;

template<typename T>
class distancia {
    pair<T, T> origin;
    priority_queue<pair<T, T>, vector<pair<T, T>>, function<bool(pair<T, T>,pair<T, T>)>> data;
    bool compare(pair<T, T> p1, pair<T, T> p2) {
        auto dist1 = sqrt(pow(p1.first-this->origin.first,2) + pow(p1.second-this->origin.second,2));
        auto dist2 = sqrt(pow(p2.first-this->origin.first,2) + pow(p2.second-this->origin.second,2));
        return dist1 > dist2;
    }
public:
    distancia(): data (compare) {}
    distancia(T x, T y): origin{x, y}, data([=](pair<T, T> p1, pair<T, T> p2){ return this->compare(p1, p2);}) {}

    distancia<T>& operator=(const initializer_list<pair<T, T>>& list) {
        for(auto i:list){
            data.push(i);
        }
        return *this;
    }
    vector<pair<T, T>> operator()(size_t top_values) {
        vector<pair<T,T>> res;
        for(size_t i = 0; i < top_values && data.size(); i++) {
            res.push_back(data.top());
            data.pop();
        }
        return res;
    }

    void push(pair<T,T> p){
        data.push(p);
    }

    void pop(){
        if(!data.empty())
            data.pop();
    }
};

void pregunta_2_case_1();

#endif //POO1_UNIT6_P2_H
