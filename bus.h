
#ifndef __bus__
#define __bus__

//------------------------------------------------------------------------------
// bus.h - содержит описание автобуса  и его интерфейса
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// прямоугольник
struct bus {
    int passenger_capacity; // пасажировместимость
    int fuel_capasity;//емкость топливного бака
    double fuel_consumption;//расход топлива
};

// Ввод параметров автобуса из файла
void In(bus &b, ifstream &ifst);

// Случайный ввод параметров автобуса
void InRnd(bus &b);

// Вывод параметров автобуса в форматируемый поток
void Out(bus &b, ofstream &ofst);

// Вычисление периметра автобуса
double Distance(bus &b);

#endif //__rectangle__

#ifndef HOMEWORK1_TRUCK_H
#define HOMEWORK1_TRUCK_H

#endif //HOMEWORK1_TRUCK_H

#ifndef HOMEWORK1_BUS_H
#define HOMEWORK1_BUS_H

#endif //HOMEWORK1_BUS_H
