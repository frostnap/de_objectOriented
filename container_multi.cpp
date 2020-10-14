#include "container.h"

using namespace std;

namespace namesp {
    void container::multi(ofstream &ofstr) {
        ofstr << "Multimethod: " << endl;
        for(int i = 0; i < namesp::container::Q; i++) { // Проход по основным индексам
            for(int j = 0; i+j < namesp::container::MAXSIZE; j++) { // Проход по индексам коллизий
                figure* fig1 = (figure *)(hash[i + j * namesp::container::Q].data);
                figure* fig2 = nullptr;
                if(fig1 == nullptr) // Прекращение поиска
                    break;
                for(int z = 0; z < namesp::container::Q; z++) { // Проход по основным индексам
                    for(int q = 0; z+q < namesp::container::MAXSIZE; q++) { // Проход по индексам коллизий
                        fig2 = (figure *)(hash[z + q * namesp::container::Q].data);
                        if(fig2 == nullptr) // Прекращение поиска
                            break;
                        fig1->multi(fig2, ofstr);
                        ofstr << endl;
                    }
                }


                ofstr << endl;
            }
        }
    }
}