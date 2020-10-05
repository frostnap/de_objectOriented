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
        virtual void in(ifstream &ifstr) = 0;
        void outGlobal(ofstream &ofstr);
        static figure *inGlobal(ifstream &ifstr);
    private:
        int density;
        mType type; // Тип объекта
    };
}

#endif //FIGURE_H