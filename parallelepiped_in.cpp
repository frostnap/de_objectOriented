#include "parallelepiped.h"

namespace namesp {

    bool parallelepiped::in(ifstream &ifstr) {
        ifstr >> data_A;
        if(ifstr.fail() || ifstr.bad()) return false;
        ifstr >> data_B;
        if(ifstr.fail() || ifstr.bad()) return false;
        ifstr >> data_C;
        if(ifstr.fail() || ifstr.bad()) return false;
        if (!ifstr.eof()) ifstr.get();
        return true;
    }
}