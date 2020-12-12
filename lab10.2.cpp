// ƒано текстовий файл t.
// √рупи символ≥в, в≥докремлен≥ проб≥лами (одним або к≥лькома) ≥ €к≥ не м≥ст€ть проб≥л≥в, будемо називати словами.
// ¬изначити, чи Ї у файл≥ будь-€ке слово, що починаЇтьс€ з букви УaФ. 
#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

bool Find(ifstream &f) {
    char line[200];
    // ch - поточний символ
    char ch;
    while (f.getline(line, sizeof(line))) {
        // ≥ - номер букви у поточному р€дку
        int i = 0;
        // р - попередн≥й символ
        char p = 0; 
        do {
            ch = line[i];
            if (i == 0 && ch == 'a') return true;
            if (p == ' ' && ch == 'a') return true;
            p = ch;
            i++;
        }
        while(ch != 0);
    }
    return false;
}

int main() {
    ifstream f("t.txt");
    bool found = Find(f);

    if (found) {
        cout << "Word starting with 'a' was found." << endl;
    }
    else {
        cout << "Word starting with 'a' was not found." << endl;
    }

    return 0;
}

