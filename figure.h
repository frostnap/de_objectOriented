#ifndef FIGURE_H
#define FIGURE_H
#include "mType.h"
#include "fstream"
using namespace std;
namespace namesp {

    class figure {
    public:
        int getKey();
        virtual void out(ofstream &ofstr) = 0;
        virtual bool in(ifstream &ifstr) = 0;
        virtual double function() = 0;
        void outGlobal(ofstream &ofstr);
        static figure *inGlobal(ifstream &ifstr);
        mType type; // Тип объекта
        int density;
        int temperatureOfMelting;
    };
}

#endif //FIGURE_H