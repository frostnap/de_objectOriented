#ifndef CONTAINER_H
#define CONTAINER_H

#include "element.h"
#include "iostream"
#include "fstream"
using namespace std;

namespace namesp {
    class container {
    public:
        void out(ofstream &ofstr, mType ignore = mType::NONE);
        void in(ifstream &ifstr);
        void sort();
        int hashLinear(int index);
        int hashAdd(int typeKey);
        static const int MAXSIZE = 1024;
        static const int Q = 3; // Шаг поиска при коллизиях
        element hash[MAXSIZE];
    private:
        int currentAmount = 0;
    };
}

#endif //CONTAINER_STRUCT