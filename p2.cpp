//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "p2.h"

using namespace std;

void pregunta_2_case_1() {
    distancia<int> d1(0, 0);
    d1 = {{1,1}, {10, 20}, {30, 30}, {4, 5}, {11, 22}};
    for (auto p: d1(2))
        cout << "punto = " << p.first << ", " << p.second << endl;

    int n = 20;
    distancia<int> d2(10, 10);
    for (int i = 0; i < n; ++i) {
        int x = 0;
        int y = 0;
        cin >> x >> y;
        d2.push({x, y});
    }
    for (const auto& p: d2(10))
        cout << "punto = " << p.first << ", " << p.second << endl;
    n = 50;
    for (int i = 0; i < n; ++i)
        d2.pop();
    for (const auto& p: d2(10))
        cout << "punto = " << p.first << ", " << p.second << endl;
}