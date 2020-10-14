#include "container.h"

namespace namesp {
    // Ключ является типом фигуры. Если объектов одного типа - два и более, то возникает коллизия.
    int container::hashAdd(int typeKey) {
        if(hash[typeKey].data != nullptr) {
            // При коллизии вызывается HashLinear, которая увеличивает индекс в таблице на шаг Q, пока коллизия не разрешится.
            // Когда с шагом Q дошли до конца таблицы, индекс берется по модулю размера таблицы. Для этого нужно, чтобы шаг и
            // размер таблицы были взаимно простыми (в нашем случае = 3 и 1024)
            return hashLinear(typeKey);
        } else {
            return typeKey;
        }
    }

    // Линейное зондирование новой ячейки в хеш массиве
    int container::hashLinear(int index) {
        // Если заполнено, выходим
        if(currentAmount >= MAXSIZE) {
            cout << "Container is full";
            return -1;
        }
        // Пока не найдено место, продолжать поиск
        while(hash[index].data != nullptr) {
            index += namesp::container::Q;
            index %= namesp::container::MAXSIZE; // Если дошли до конца, берем по модулю размера таблицы
        }
        currentAmount++;
        return index;
    }
}