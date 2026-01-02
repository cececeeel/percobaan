#include <iostream>
using namespace std;

int main() {
    string nama[10];
    int berat[10];
    int totalHarga[10];
    int jumlah;
    int hargaPerKg = 7000;

    cout << "=== APLIKASI PENGELOLAAN LAUNDRY ===" << endl;
    cout << "Masukkan jumlah pelanggan: ";
    cin >> jumlah;

    // Input data pelanggan
    for (int i = 0; i < jumlah; i++) {
        cout << "\nPelanggan ke-" << i + 1 << endl;
        cout << "Nama           : ";
        cin >> nama[i];
        cout << "Berat Laundry  : ";
        cin >> berat[i];

        if (berat[i] > 0) {
            totalHarga[i] = berat[i] * hargaPerKg;
        } else {
            totalHarga[i] = 0;
        }
    }

    // Output data
    cout << "\n=== DAFTAR LAUNDRY ===" << endl;
    cout << "Nama\tBerat\tTotal Harga" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << nama[i] << "\t"
             << berat[i] << "kg\tRp "
             << totalHarga[i] << endl;
    }

    cout << "\nTerima kasih telah menggunakan aplikasi laundry." << endl;

    return 0;
}
