#include "sphere.h"
#include "figure.h"
#include <fstream>

using namespace std;

namespace namesp {

    void sphere::out(ofstream &ofstr) {
        ofstr << "sphere: radius=" << radius << ";";
    }
}
