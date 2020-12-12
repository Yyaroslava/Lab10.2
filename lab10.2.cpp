// ���� ��������� ���� t.
// ����� �������, ���������� �������� (����� ��� �������) � �� �� ������ ������, ������ �������� �������.
// ���������, �� � � ���� ����-��� �����, �� ���������� � ����� �a�. 
#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

bool Find(ifstream &f) {
    char line[200];
    // ch - �������� ������
    char ch;
    while (f.getline(line, sizeof(line))) {
        // � - ����� ����� � ��������� �����
        int i = 0;
        // � - ��������� ������
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

