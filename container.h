
#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - содержит тип данных,
// представляющий простейший контейнер
//------------------------------------------------------------------------------
#include <fstream>
using namespace std;
#include "car.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
struct container {
    enum {max_len = 100001}; // максимальная длина
    int len; // текущая длина
    car *cont[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst);

// Вычисление суммы периметров всех фигур в контейнере
//double PerimeterSum(container &c);
void Sort(container &c);

#endif

#ifndef HOMEWORK1_CONTAINER_H
#define HOMEWORK1_CONTAINER_H

#endif
