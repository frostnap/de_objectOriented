#include "tetraedr.h"
#include <fstream>

using namespace std;

namespace namesp {

    void tetraedr::out(ofstream &ofstr) {
        ofstr << "tetraedr: length=" << length << ";";
    }
}
