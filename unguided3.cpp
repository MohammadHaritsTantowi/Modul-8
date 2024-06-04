#include <iostream>
using namespace std;


int hitungAngka(const int data[], int ukuran, int angka)
{
    int jumlah = 0;
    for (int i = 0; i < ukuran; ++i)
    {
        if (data[i] == angka)
        {
            jumlah++;
        }
    }
    return jumlah;
}

int main()
{
    const int ukuran = 10;
    int data[ukuran] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int angkaYangDicari = 4;

    int jumlahAngka4 = hitungAngka(data, ukuran, angkaYangDicari);

    cout << "Jumlah angka 4 dalam data adalah: " << jumlahAngka4 << endl;

    return 0;
}
