#include <iostream>
using namespace std;
int data[10];
int n;
 
void tampil()
{
    for (int i = 0; i < n; i++)
    {
        cout << "[" << data[i] << "] ";
    }
    cout << endl;
}
 
int main()
{
    cout << "ALGORITMA BUBBLE SORT" << endl;
    cout << "----------------------" <<  endl;
 
    // Menentukan banyaknya jumlah data
    cout << "Masukan Jumlah Array = ";
    cin >> n;
 
    cout << endl;
 
    // Input data
    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Data Ke-" << i + 1 << " = ";
        cin >> data[i];
    }
 
    cout << endl;
    cout << "proses sorting" << endl;
 
    tampil();
 
    // Proses sorting bubble
     
    // Perulangan pertama 1 s/d n(jumlah data), 
    //sebagai batas urutan data terkecil saat melakukan perbandingan data
    for (int i = 1; i < n; i++)
    {
        // perulangan kedua (n - 1) s/d nilai i yang sedang berjalan pada perulangan pertama,
        // berguna membandingkan nilai dari urutan data terbesar ke urutan data terkecil.
        for (int j = n - 1; j >= i; j--)
        {
            if (data[j] > data[j - 1])
            {
                // Tukar posisi data
                int t;
                t = data[j - 1];
                data[j - 1] = data[j];
                data[j] = t;
            }
        }
        cout << "proses sorting"<<endl;
        tampil();
    }
    cout << "hasil akhir"<<endl;
    tampil();
    return 0;
}

