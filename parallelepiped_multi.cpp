#include "parallelepiped.h"

namespace namesp {

    void parallelepiped::multi(ofstream &ofstr) {
        ofstr << "Parallelepiped" << endl;
        outGlobal(ofstr);
    }

    void parallelepiped::multi(figure *fig, ofstream &ofstr) {
        ofstr << "Parallelepiped + ";
        fig->multi(ofstr); // Вывод второй половины
        outGlobal(ofstr);
    }
}