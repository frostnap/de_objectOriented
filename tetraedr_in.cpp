#include "tetraedr.h"

using namespace std;

namespace namesp {

    bool tetraedr::in(ifstream &ifstr){
        ifstr >> length;
        if(ifstr.fail() || ifstr.bad()) return false;
        if (!ifstr.eof()) ifstr.get();
        return true;
    }

}