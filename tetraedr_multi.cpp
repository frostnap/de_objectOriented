#include "tetraedr.h"

namespace namesp {

    void tetraedr::multi(ofstream &ofstr) {
        ofstr << "Tetraedr" << endl;
        outGlobal(ofstr);
    }

    void tetraedr::multi(figure *fig, ofstream &ofstr) {
        ofstr << "Tetraedr + ";
        fig->multi(ofstr); // Вывод второй половины
        outGlobal(ofstr);
    }
}