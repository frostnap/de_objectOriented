#include <fstream>
#include <iostream>

#include "parallelepiped.h"
#include "sphere.h"
#include "tetraedr.h"

using namespace std;

namespace namesp {

    figure *figure::inGlobal(ifstream &ifstr) {
        figure *element;
        char data[255];
        if (!ifstr.eof()) ifstr.get();
        ifstr.getline(data, 255);
        if (std::string(data) == "1") {
            element = new sphere;
            element->type = mType::SPHERE;
        } else if (std::string(data) == "2") {
            element = new parallelepiped;
            element->type = mType::PARALLELEPIPED;
        } else if (std::string(data) == "3") {
            element = new tetraedr;
            element->type = mType::TETRAEDR;
        } else {
            delete element;
            cout << "Error!" << endl;
            return nullptr;
        }
        element->in(ifstr);
        ifstr >> element->density;
        ifstr >> element->temperatureOfMelting;
        return element;
    }
}