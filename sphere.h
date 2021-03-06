#ifndef SPHERE_H
#define SPHERE_H

#include "figure.h"

namespace namesp {

    class sphere: public figure {
    public:
        double function();
        void out(ofstream &ofstr);
        bool in(ifstream &ifstr);
        void multi(figure* fig, ofstream &ofstr);
        void multi(ofstream &ofstr);
        int radius;
    private:
        double density;
        mType num_type; // Тип объекта
    };
}

#endif //SPHERE_H