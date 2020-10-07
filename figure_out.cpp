#include "figure.h"

using namespace std;

namespace namesp {

    void figure::outGlobal(ofstream &ofstr) {
        out(ofstr);
        ofstr << "temperature of melting=" << temperatureOfMelting << ";";
        ofstr << "density=" << density << ";";
    }

}