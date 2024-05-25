#include <iostream>
#include <queue>
#include <string>

using namespace std;
// Struktur untuk menyimpan informasi pelanggan
struct Customer {
    string name;
    int ticketNumber;
};

int main() {
    queue<Customer> ticketQueue; // menyimpan antrian pelanggan.
    int ticketCounter = 1; //memberikan nomor tiket
    int choice;
    string customerName;

    do {
        cout << "=== Loket Tiket ===\n";
        cout << "1. Tambah Pelanggan ke Antrian\n";
        cout << "2. Layani Pelanggan\n";
        cout << "3. Tampilkan Antrian\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;
        cin.ignore(); // Mengabaikan karakter newline setelah input angka

        switch (choice) {
            case 1: //Menambahkan pelanggan ke antrian
                cout << "Masukkan nama pelanggan: ";
                getline(cin, customerName);
                ticketQueue.push({customerName, ticketCounter++});
                cout << "Pelanggan ditambahkan ke antrian.\n";
                break;

            case 2: //Melayani pelanggan terdepan dalam antrian
                if (!ticketQueue.empty()) {
                    Customer nextCustomer = ticketQueue.front();
                    ticketQueue.pop();
                    cout << "Melayani pelanggan: " << nextCustomer.name << " dengan nomor tiket: " << nextCustomer.ticketNumber << "\n";
                } else {
                    cout << "Antrian kosong, tidak ada pelanggan untuk dilayani.\n";
                }
                break;

            case 3: //Menampilkan semua pelanggan yang ada dalam antrian.
                if (!ticketQueue.empty()) {
                    queue<Customer> tempQueue = ticketQueue;
                    cout << "Antrian saat ini:\n";
                    while (!tempQueue.empty()) {
                        Customer customer = tempQueue.front();
                        tempQueue.pop();
                        cout << "Nama: " << customer.name << ", Nomor Tiket: " << customer.ticketNumber << "\n";
                    }
                } else {
                    cout << "Antrian kosong.\n";
                }
                break;

            case 4: //Keluar dari program
                cout << "Keluar dari program.\n";
                break;

            default:
                cout << "Opsi tidak valid. Silakan coba lagi.\n";
                break;
        }
        cout << std::endl;
    } while (choice != 4);

    return 0;
}
