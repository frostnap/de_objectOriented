#include "parallelepiped.h"

namespace namesp {
    void parallelepiped::out(ofstream &ofstr) {
        ofstr << "parallelepiped: A=" << data_A << ";B=" << data_B << ";C=" << data_C << ";";
    }
}