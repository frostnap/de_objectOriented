#include <iostream>

using namespace std;

void getVariant(int id) {
     cout << "Number usloviya: " << int(int(int((id-1) / 3) / 3) / 6) % 12 + 1 << "\n";
     cout << "Number container: " << int(int((id-1) / 3) / 3) % 6 + 1 << "\n";
     cout << "Number modular structure: " << int((id-1) / 3) % 3 + 1 << "\n";
     cout << "Number obobsheniya: " << (id-1) % 3 + 1 << "\n";
}

int main() {
    getVariant(31722299);
    return 0;
}
