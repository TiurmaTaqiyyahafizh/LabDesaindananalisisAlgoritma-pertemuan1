#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Graf {
    int jumlahSimpul;
    vector<vector<int> > daftarAdjasi;

public:
    Graf(int simpul);
    void tambahkanTepi(int src, int dest);
    void cetakGraf();
};

Graf::Graf(int simpul) {
    jumlahSimpul = simpul;
    daftarAdjasi.resize(simpul);
}

void Graf::tambahkanTepi(int src, int dest) {
    daftarAdjasi[src].push_back(dest);
    // Jika graf tidak berarah, tambahkan juga sebaliknya
    // daftarAdjasi[dest].push_back(src);
}

void Graf::cetakGraf() {
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Daftar tetangga simpul " << i << ": ";
        for (int simpul : daftarAdjasi[i]) {
            cout << simpul << " ";
        }
        cout << endl;
    }
}

int main() {
    Graf g(4);

    g.tambahkanTepi(0, 1);
    g.tambahkanTepi(0, 2);
    g.tambahkanTepi(1, 2);
    g.tambahkanTepi(2, 0);
    g.tambahkanTepi(2, 3);
    g.tambahkanTepi(3, 3);

    cout << "Representasi graf menggunakan daftar adjasi:" << endl;
    g.cetakGraf();

    return 0;
}
