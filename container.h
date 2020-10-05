#ifndef CONTAINER_H
#define CONTAINER_H

#include "element.h"
#include "iostream"
#include "fstream"
using namespace std;

namespace namesp {
    class container {
    public:
        void out(ofstream &ofstr);
        void in(ifstream &ifstr);
        int hashLinear(int index);
        int hashAdd(int typeKey);
        static const int MAXSIZE = 1024;
        static const int q = 3; // Шаг поиска при коллизиях
    private:
        int currentAmount = 0;
        element hash[MAXSIZE];
    };
}

#endif //CONTAINER_STRUCT