#include <iostream> 
#include <algorithm> 
#include <string> 
using namespace std;


int binarySearch(const string &str, char target)
{
    int kiri = 0;
    int kanan = str.length() - 1;

    while (kiri <= kanan)
    {
        int tengah = kiri + (kanan - kiri) / 2;

        if (str[tengah] == target)
        {
            return tengah; // huruf ditemukan
        }
        else if (str[tengah] < target)
        {
            kiri = tengah + 1;
        }
        else
        {
            kanan = tengah - 1;
        }
    }
    return -1; 
}

int main()
{
    string kalimat;
    char huruf;

    cout << "Masukkan kalimat nya: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    int posisi = binarySearch(kalimat, huruf);

    if (posisi != -1)
    {
        cout << "Huruf \"" << huruf << "\" ditemukan pada posisi " << posisi + 1 << " dari kalimat." << endl;
    }
    else
    {
        cout << "Huruf \"" << huruf << "\" tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
