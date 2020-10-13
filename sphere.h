#ifndef SPHERE_H
#define SPHERE_H

#include "figure.h"

namespace namesp {

    class sphere: public figure {
    public:
        double function();
        void out(ofstream &ofstr);
        void in(ifstream &ifstr);
        int radius;
    private:
        double density;
        mType num_type; // Тип объекта
    };
}

#endif //SPHERE_H