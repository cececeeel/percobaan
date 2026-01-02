#include <iostream>
using namespace std;

int main() {
    int jumlahPemilih, pilihan;
    string kandidat[3];
    int suara[3] = {0, 0, 0};

    cout << "=== SISTEM VOTING SEDERHANA ===\n";

    // Input nama kandidat
    for (int i = 0; i < 3; i++) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << " : ";
        cin >> kandidat[i];
    }

    cout << "\nMasukkan jumlah pemilih: ";
    cin >> jumlahPemilih;

    // Proses voting
    for (int i = 1; i <= jumlahPemilih; i++) {
        cout << "\nPemilih ke-" << i << endl;
        cout << "1. " << kandidat[0] << endl;
        cout << "2. " << kandidat[1] << endl;
        cout << "3. " << kandidat[2] << endl;
        cout << "Pilih (1-3): ";
        cin >> pilihan;

        if (pilihan == 1) {
            suara[0]++;
        } else if (pilihan == 2) {
            suara[1]++;
        } else if (pilihan == 3) {
            suara[2]++;
        } else {
            cout << "Pilihan salah, ulangi!\n";
            i--;
        }
    }

    // Menentukan pemenang
    int pemenang = 0;
    if (suara[1] > suara[pemenang]) {
        pemenang = 1;
    }
    if (suara[2] > suara[pemenang]) {
        pemenang = 2;
    }

    // Output hasil
    cout << "\n=== HASIL VOTING ===\n";
    for (int i = 0; i < 3; i++) {
        cout << kandidat[i] << " : " << suara[i] << " suara\n";
    }

    cout << "\nPemenang voting adalah: " 
         << kandidat[pemenang] << endl;

    return 0;
}
