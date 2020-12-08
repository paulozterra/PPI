//
// Created by rudri on 10/11/2020.
//Grupo:
//Marcelo Surco
//Harold Canto	
//Paulo Cuaresma

#ifndef POO1_PC2_P1_H
#define POO1_PC2_P1_H

#include <queue>
#include <functional>
using namespace std;

template<typename T>
class distancia {
    pair<T, T> origin;
    priority_queue<pair<T, T>, vector<pair<T, T>>, function<bool(pair<T, T>,pair<T, T>)>> data;
    bool compare(pair<T, T> p1, pair<T, T> p2) {
        // TODO
        return bool{};
    }
public:
    distancia(): data (compare) {}
    distancia(T x, T y): origin{x, y},
                         data([=](pair<T, T> p1, pair<T, T> p2){ return this->compare(p1, p2);}) {}
    distancia<T>& operator=(const initializer_list<pair<T, T>>& list) {
        // TODO
        return *this;
    }
    vector<pair<T, T>> operator()(size_t top_values) {
        // TODO
        return vector<pair<T, T>>();
    }
    // TODO
};

void pregunta_2_case_1();

#endif //POO1_PC2_P1_H
