#include "figure.h"

using namespace std;

namespace namesp {

    void figure::outGlobal(ofstream &ofstr) {
        out(ofstr);
        ofstr << "density=" << density << ";";
    }

}