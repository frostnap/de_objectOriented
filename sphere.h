#ifndef SPHERE_H
#define SPHERE_H

#include "figure.h"

namespace namesp {

    class sphere: public figure {
    public:
        void out(ofstream &ofstr);
        void in(ifstream &ifstr);
        void multi(figure *fig, ofstream &ofstr);
        void multi(ofstream &ofstr);
    private:
        double density;
        mType num_type; // Тип объекта
        int radius;
    };
}

#endif //SPHERE_H