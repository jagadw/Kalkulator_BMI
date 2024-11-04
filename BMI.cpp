#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main () {
    char ulang;
    string jkel;
    float bb_anda;
    float tb_anda;
    float bb_ideal;
    
    do {
    cout << endl << "KALKULATOR INDEKS MASSA TUBUH" <<endl;
    cout << "<===============================>" <<endl;
    cout << "Masukan jenis kelamin anda! (pria/wanita):";
    cin >> jkel;

    if (jkel=="pria"||jkel=="Pria") {
        cout << "Masukan tinggi badan :";
        cin >> tb_anda;
        cout << "Masukan berat badan :";
        cin >> bb_anda;
        cout << "<===============================>" <<endl;

        bb_ideal = ( tb_anda - 100 ) - ( tb_anda - 100 ) * 10/100;

        if (bb_anda == bb_ideal) {
            cout << "Selamat berat badan anda sudah IDEAL!"<<endl;
        } else if (bb_anda != bb_ideal) {
            cout << "Berat badan anda belum IDEAL, rubahlah pola hidup anda!"<<endl;
        } else {
            cout << "Berat badan anda tidak valid!"<<endl;
            return 0;
        }

        cout << "Berat badan ideal anda adalah " << bb_ideal << " kg"<<endl;
        cout << "<===============================>" <<endl;
        cout << endl;
    cout << "Mau coba lagi? (Y/T):";
    cin >> ulang;

    } else if (jkel=="wanita"||jkel=="Wanita") {
        cout << "Masukan tinggi badan :";
        cin >> tb_anda;
        cout << "Masukan berat badan :";
        cin >> bb_anda;
        cout << "<===============================>" <<endl;

        bb_ideal = ( tb_anda - 100 ) - ( tb_anda - 100 ) * 15/100;

        if (bb_anda == bb_ideal) {
            cout << "Selamat berat badan anda sudah IDEAL!"<<endl;
        } else if (bb_anda != bb_ideal) {
            cout << "Berat badan anda belum IDEAL, rubahlah pola hidup anda!"<<endl;
        } else {
            cout << "Berat badan anda tidak valid!"<<endl;
            return 0;
        }

        cout << "Berat badan ideal anda adalah " << bb_ideal << " kg"<<endl;
        cout << "<===============================>" <<endl;
        cout << endl << endl;
    cout << "Mau coba lagi? (Y/T):";
    cin >> ulang;

    } else {
        cout << "Input tidak valid!";
        return 0;
    }
} while(ulang=='Y'||ulang=='y');
    cin.ignore();
    cout << "Tekan ENTER untuk KELUAR!";

    getchar();
    return 0;
}