#ifndef TETRAEDR_H
#define TETRAEDR_H

#include "figure.h"

namespace namesp {

    class tetraedr: public figure {
    public:
        double function();
        void out(ofstream &ofstr);
        void in(ifstream &ifstr);
    private:
        double density;
        mType num_type; // Тип объекта
        int length;
    };
}

#endif //TETRAEDR_H