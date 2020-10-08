#include "tetraedr.h"

using namespace std;

namespace namesp {

    void tetraedr::in(ifstream &ifstr){
        ifstr >> length;
        if (!ifstr.eof()) ifstr.get();
    }

}