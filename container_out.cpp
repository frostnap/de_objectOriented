#include "container.h"
#include "figure.h"

namespace namesp {
    void container::out(ofstream &ofstr) {
        for(int i = 0; i < namesp::container::q; i++) { // Проход по основным индексам
            for(int j = 0; i+j < namesp::container::MAXSIZE; j++) { // Проход по индексам коллизий
                if(hash[i+j*namesp::container::q].data == nullptr) // Прекращение поиска
                    break;
                ofstr << "Table index: " << i+j*namesp::container::q << ". ";
                ((figure*)hash[i+j*namesp::container::q].data)->out(ofstr);
                ofstr << endl;
            }
        }
    }
}