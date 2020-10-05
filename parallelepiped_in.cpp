#include "parallelepiped.h"

namespace namesp {

    void parallelepiped::in(ifstream &ifstr) {
        ifstr >> data_A >> data_B >> data_C;
        if (!ifstr.eof()) ifstr.get();
    }
}