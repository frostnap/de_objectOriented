#include "sphere.h"

namespace namesp {

    void sphere::multi(ofstream &ofstr) {
        ofstr << "Sphere" << endl;
        outGlobal(ofstr);
    }

    void sphere::multi(figure *fig, ofstream &ofstr) {
        ofstr << "Sphere + ";
        fig->multi(ofstr); // Вывод второй половины
        outGlobal(ofstr);
    }
}