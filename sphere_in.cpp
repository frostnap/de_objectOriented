#include "sphere.h"

using namespace std;

namespace namesp {

    void sphere::in(ifstream &ifstr){
        ifstr >> radius;
        if (!ifstr.eof()) ifstr.get();
    }

}