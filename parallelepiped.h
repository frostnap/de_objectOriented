#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "figure.h"

namespace namesp {

    class parallelepiped: public figure {
    public:
        void in(ifstream &ifstr);
        void out(ofstream &ofstr);
    private:
        double density;
        mType num_type; // Тип объекта
        int data_A;
        int data_B;
        int data_C;
    };
}

#endif //PARALLELEPIPED_H