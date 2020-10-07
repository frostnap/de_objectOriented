#include "container.h"

using namespace std;

namespace namesp {

    void container::sort(){
        if(currentAmount < 1) return;
        int i_break = 0, it = 0;
        for(int i = 0; i < currentAmount-1; i++) {
            while(hash[it].data == nullptr && i_break < 3) {
                i_break++;
                it++;
            }
            if(i_break > 2) break;
            i_break = 0;
            int j_break = 0, jt = it+1;
            for(int j = i+1; j < currentAmount; j++) {
                while(hash[jt].data == nullptr && j_break < 3) {
                    j_break++;
                    jt++;
                }
                if(j_break > 2) break;
                j_break = 0;
                //cout << FigureFunct((figure*)hash[it].data) << "vs" << FigureFunct((figure*)hash[jt].data) << "\n";
                if(((figure*)hash[it].data)->function() > ((figure*)hash[jt].data)->function()) {
                    //cout << "YES\n";
                    auto temp = hash[jt].data;
                    hash[jt].data = hash[it].data;
                    hash[it].data = temp;
                }
                jt++;
            }
            it++;
        }
        cout << "\nsorted\n";
    }

}