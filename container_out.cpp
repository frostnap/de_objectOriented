#include "container.h"
#include "figure.h"

namespace namesp {
    void container::out(ofstream &ofstr, mType ignore) {
        for(int i = 0; i < namesp::container::Q; i++) { // Проход по основным индексам
            for(int j = 0; i+j < namesp::container::MAXSIZE; j++) { // Проход по индексам коллизий
                if(hash[i+j*namesp::container::Q].data == nullptr) // Прекращение поиска
                    break;
                if(((figure*)hash[i+j*namesp::container::Q].data)->type == ignore)
                    continue;
                ofstr << "Table index: " << i+j*namesp::container::Q << ". ";
                ((figure*)hash[i+j*namesp::container::Q].data)->outGlobal(ofstr);
                ofstr << endl;
            }
        }
    }
}