#include <iostream>

using namespace std;

int main() {
    // Bagian 1: Bilangan Ganjil, Genap, dan Prima
    int batas;
    cout<< "NO 1" << endl;
    cout << "Masukkan batas: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    // Bilangan Ganjil
    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jumlahGanjil += i;
        }
    }
    cout << "\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl;

    // Bilangan Genap
    cout << "\nBilangan Genap: ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahGenap += i;
        }
    }
    cout << "\nJumlah Bilangan Genap: " << jumlahGenap << endl;

    // Bilangan Prima
    cout << "\nBilangan Prima: ";
    for (int i = 2; i <= batas; i++) {
        bool isPrima = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrima = false;
                break;
            }
        }
        if (isPrima) {
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << "\nJumlah Bilangan Prima: " << jumlahPrima << endl;



    // Bagian 2: Deret Fibonacci
    int n;

    cout << "\n\nNO. 2" << endl;
    cout << "Masukkan jumlah deret Fibonacci yang diinginkan: ";
    cin >> n;

    cout << "Deret Fibonacci: ";
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    // Bagian 3: Piramida Bintang
    int tinggi;
    cout << "\n\nNO. 3" << endl;
    cout << "Masukkan tinggi piramida bintang: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = tinggi; j > i; j--) {
            cout << " "; // Untuk spasi
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*"; // Untuk bintang
        }
        cout << endl;
    }

    return 0;
}
