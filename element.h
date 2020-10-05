#ifndef ELEMENT_H
#define ELEMENT_H
#include "parallelepiped.h"
#include "sphere.h"

namespace namesp {
    class element {
    public:
        ~element() {
            if(data == nullptr) return;
            switch (((figure*) data)->getKey()) {
                case 0:
                    delete (sphere*)data;
                case 1:
                    delete (parallelepiped*)data;
            }
        }
        void *data = nullptr;
    };
}

#endif //ELEMENT_H