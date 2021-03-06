
//------------------------------------------------------------------------------
// truck.cpp - содержит функции обработки грузовика
//------------------------------------------------------------------------------

#include "truck.h"

//------------------------------------------------------------------------------
// Ввод параметров грузовика из потока
void In(truck &t, ifstream &ifst) {
    ifst >> t.lifting_capacity;
    ifst>>t.fuel_capasity;
    ifst>>t.fuel_consumption;

}

// Случайный ввод параметров грузовика
void InRnd(truck &t) {
    t.lifting_capacity = Random(5000);
    t.fuel_consumption = Random(50);
    t.fuel_capasity = Random(20);
}

//------------------------------------------------------------------------------
// Вывод параметров грузовика в поток
void Out(truck &t, ofstream &ofst) {
    ofst << "It is Truck: capacity = "
         << t.lifting_capacity
            <<", fuel_capasity = "
            <<t.fuel_capasity
            <<", fuel_consumption = "
            <<t.fuel_consumption
         << ". Distance = " << Distance(t) << "\n";
}

//------------------------------------------------------------------------------
// Вычисление максимального расстояния машины
double Distance(truck &t) {
    return double(t.fuel_capasity/t.fuel_consumption);
}


