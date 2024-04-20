#include <iostream>
#include <string>

using namespace std;

class biodata {
protected:
    string status;
    string nama;
    int umur;
    string jurusan;
    string fakultas;

public:
    biodata(string _status, string _nama, int _umur, string _jurusan, string _fakultas)
        : status(_status), nama(_nama), umur(_umur), jurusan(_jurusan), fakultas(_fakultas) {}

    virtual ~biodata() {}

    virtual void tampilkanData() {
        cout << "Jenis: " << status << endl;
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Fakultas: " << fakultas << endl;
    }

    virtual void masukkanData() {
        cout << "Masukkan nama: ";
        cin >> nama;
        cout << "Masukkan umur: ";
        cin >> umur;
        cout << "Masukkan jurusan: ";
        cin >> jurusan;
        cout << "Masukkan fakultas: ";
        cin >> fakultas;
    }
};

class mahasiswa : public biodata {
public:
    mahasiswa(string _status, string _nama, int _umur, string _jurusan, string _fakultas)
        : biodata(_status, _nama, _umur, _jurusan, _fakultas) {}

    void tampilkanData() override {
        biodata::tampilkanData();
    }

    void masukkanData() override {
        biodata::masukkanData();
    }
};

class Alumni : public biodata {
public:
    Alumni(string _nama, int _umur, string _jurusan, string _fakultas)
        : biodata("Alumni", _nama, _umur, _jurusan, _fakultas) {}

    void tampilkanData() override {
        biodata::tampilkanData();
    }

    void masukkanData() override {
        biodata::masukkanData();
    }
};

int main() {
    int x;
    cout << "Masukkan Jumlah Data: ";
    cin >> x;

    biodata* daftarMahasiswa[x];

    for (int i = 0; i < x; ++i) {
        string status;
        cout << "Apakah mahasiswa ke-" << i + 1 << " adalah mahasiswa Aktif atau Alumni? (Aktif / Alumni): ";
        cin >> status;

        if (status == "Aktif") {
            daftarMahasiswa[i] = new mahasiswa(status, "", 0, "", "");
            daftarMahasiswa[i]->masukkanData();
        } else if (status == "Alumni") {
            daftarMahasiswa[i] = new Alumni("", 0, "", "");
            daftarMahasiswa[i]->masukkanData();
        } else {
            cout << "Masukan tidak valid. Harap masukkan 'Aktif' atau 'Alumni'." << endl;
            --i;
        }
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < x; ++i) {
        daftarMahasiswa[i]->tampilkanData();
        cout << endl;
    }

    for (int i = 0; i < x; ++i) {
        delete daftarMahasiswa[i];
    }

    return 0;
}
