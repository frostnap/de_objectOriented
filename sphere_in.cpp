#include "sphere.h"

using namespace std;

namespace namesp {

    bool sphere::in(ifstream &ifstr){
        ifstr >> radius;
        if(ifstr.fail() || ifstr.bad()) return false;
        if (!ifstr.eof()) ifstr.get();
        return true;
    }

}