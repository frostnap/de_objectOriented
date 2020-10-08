#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

#include "container.h"

using namespace std;

const bool taskInfo = false;
void getVariant(int id);

int main(int argc, char* argv[]) {
    // Вывод варианта
    if(taskInfo) getVariant(31722299);
    // Проверка на корректность ввода аргументов
    if(argc !=3) {
        cout << "Command line error! " << endl;
        exit(1);
    }
    // Открытие потоков для чтения/записи
    ifstream ifst(argv[1]);
    ofstream ofst(argv[2]);
    cout << "START"<< endl;
    // Объявление numbers_array
    namesp::container c;
    // Считывание из файла
    c.in(ifst);
    c.sort();
    // Вывод в файл
    c.out(ofst);
    cout << "Program ended"<< endl;
    return 0;
}

void getVariant(int id) {
    cout << "Number usloviya: " << int(int(int((id-1) / 3) / 3) / 6) % 12 + 1 << "\n";
    cout << "Number container: " << int(int((id-1) / 3) / 3) % 6 + 1 << "\n";
    cout << "Number modular structure: " << int((id-1) / 3) % 3 + 1 << "\n";
    cout << "Number obobsheniya: " << (id-1) % 3 + 1 << "\n";
}

// 1. (2)
// Объемная геометрическая фигура:
// Шар (целочисленный радиус)
// Параллелепипед (три целочисленных ребра)
// Параметры:
// Плотность материала (double)

// 2. (6)
// Хеш массив с разрешением конфликтов через дополнительные списки для элеметов с одинаковым значением ключа

// 3. (3)
// Каждый абстрактный тип, функция, класс, метод размещается в своей единице компиляции.

// 4. (2)
// Обобщение, построенное на основе непосредственного включения специализаций.