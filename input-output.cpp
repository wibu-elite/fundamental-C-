#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
    system("cls");
    cout << "Belajar C++ Input Output" << endl;

    string nama, alamat;
    int umur;
    cout << "Masukkan Nama :"; 
    cin >> nama;
    cout << "Masukkan Alamat :";
    cin >> alamat;
    cout << "Masukkan Umur: "; cin >> umur;

    cout << "Nama Anda = " << nama << endl;
    cout << "Alamat Anda = " << alamat << endl;
    cout << "Umur Anda = " << umur << endl;


    return 0;
}