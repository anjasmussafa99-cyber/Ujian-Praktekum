#include <iostream>
using namespace std;

int main() {
    int p;

    cout << "Masukkan bilangan: ";
    cin >> p;


    if (p % 2 == 0) {
        cout << "Genap" << endl;
    }
    else {
        cout << "Ganjil" << endl;
    }

    if (p > 10) {
        cout << "Di atas 10" << endl;
    }
    else if (p< 10) {
        cout << "Di bawah 10" << endl;
    }
    else {
        cout << "Sama dengan 10" << endl;
    }

    return 0;
}