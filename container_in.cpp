#include "container.h"

using namespace std;

namespace namesp {
    void container::in(ifstream &ifstr) {
        int inputToGet;
        ifstr >> inputToGet;
        for(int i = 0; i < inputToGet; i++) {
            figure *inputElement = figure::inGlobal(ifstr);
            int finalIndex = hashAdd(inputElement->getKey());
            if(finalIndex == -1) // Если заполнена таблица
                return;
            hash[finalIndex].data = inputElement;
        }
        cout << "Successfully read!\n";
    }
}