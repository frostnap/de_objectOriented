#include "container.h"

using namespace std;

namespace namesp {
    void container::in(ifstream &ifstr) {
        int inputToGet;
        bool error = false;
        ifstr >> inputToGet;
        for(int i = 0; i < inputToGet; i++) {
            figure *inputElement = figure::inGlobal(ifstr);
            if(inputElement == nullptr) {
                cout << "Error reading file" << endl;
                error = true;
                break;
            }
            int finalIndex = hashAdd(inputElement->getKey());
            if(finalIndex == -1) // Если заполнена таблица
                return;
            hash[finalIndex].data = inputElement;
        }
        if(!error)
            cout << "Successfully read!\n";
    }
}