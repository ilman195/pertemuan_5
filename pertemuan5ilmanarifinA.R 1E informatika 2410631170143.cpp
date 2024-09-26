#include <iostream>
#include <string>

using namespace std;


float pokok(int jamKerja);
float lembur(int jamKerja);
int makan(int jamKerja);
int transport(int jamKerja);

int main() {
    string NIP, Nama;
    int jamKerja;


    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, Nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;


    float gajiPokok = pokok(jamKerja);
    float lemburGaji = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);


    cout << "\nNIP: " << NIP << endl;
    cout << "Nama: " << Nama << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Lembur: Rp. " << lemburGaji << endl;
    cout << "Uang Makan: Rp. " << uangMakan << endl;
    cout << "Transport: Rp. " << uangTransport << endl;
    cout << "Total Gaji Harian: Rp. " << (gajiPokok + lemburGaji + uangMakan + uangTransport) << endl;

    return 0;
}


float pokok(int jamKerja) {
    const float gajiPerJam = 7500;
    return (jamKerja <= 8) ? jamKerja * gajiPerJam : 8 * gajiPerJam;
}


float lembur(int jamKerja) {
    const float gajiPerJam = 7500;
    if (jamKerja > 8) {
        return (jamKerja - 8) * 1.5 * gajiPerJam;
    } else {
        return 0;
    }
}


int makan(int jamKerja) {
    return (jamKerja >= 9) ? 10000 : 0;
}


int transport(int jamKerja) {
    return (jamKerja >= 10) ? 13000 : 0;
}
