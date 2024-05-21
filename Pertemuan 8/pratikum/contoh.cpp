#include<iostream>
using namespace std;

// node untuk linked list
struct antrian{
    int nomorAntrian;
    string nama;
    antrian *next;
} *head, *newNode, *temporaryNode, *currentnode, *tail;

// prototipe fungsi
void antrianbaru(int);
void enqueue(antrian *);
void dequeue();
void cetakAntrian();
bool isEmpty();
void clear();

/*
 * Main Function
 */
int main(){
    head = tail = NULL;
    char pilihan;
    bool ongoing = true;
    int nomorAntrian = 1;

    while(ongoing){
        cout << endl;
        cout << "=================================" << endl;
        cout << "        Sistem Pencernaan        " << endl;
        cout << "=================================" << endl;
        cout << "1. Tambah Makanan (enqueue)" << endl;
        cout << "2. cerna makanan (dequeue)" << endl;
        cout << "3. mengingat makanan apa" << endl;
        cout << "4. Hapus & reset Antrian" << endl;
        cout << "5. Exit sistem" << endl;
        cout << "Pilihan [1-5]: ";
        cin >> pilihan;
        switch (pilihan){
            case '1':
                antrianbaru(nomorAntrian);
                nomorAntrian++;
                break;
            case '2':
                dequeue();
                break;
            case '3':
                cetakAntrian();
                break;
            case '4':
                clear();
                nomorAntrian = 1;
                break;
            case '5':
                cout << "Program selesai." << endl;
                ongoing = false;
                break;
            default:
                cout << "Input Salah." << endl;
                break;
        }
    } // akhir looping

     return 0;
} // akhir int main

// fungsi untuk membuat sebuah node baru
void antrianbaru(int nomorAntrian){
    string inputNama;

    cout << "masukkan makanan: ";
    cin >> inputNama;

    newNode = new antrian();
    newNode->nomorAntrian = nomorAntrian;
    newNode->nama = inputNama;
    newNode->next = NULL;

    // untuk menambahkan node baru ke bagian akhir linked list
    enqueue(newNode);
}

bool isEmpty(){
    if(head == NULL){
        return true;
    } else {
        return false;
    }
}

void enqueue(antrian *newNode){
    if(isEmpty()){
        // jika linked list kosong, node baru akan menjadi node head dan tail
        head = tail = newNode;
    }else{
        // jika tidak, node baru akan menjadi node tail
        tail->next = newNode;
        tail = newNode;
    }
    
    cout << " makan " << newNode->nama << endl; 
}

void dequeue(){
    if(isEmpty()){
        cout << "perut Kosong,laparrrrr!!!!!!!" << endl;
    }else{
        currentnode = head;
        cout << " makanan " << currentnode->nama << " di cerna " << endl; 
        head = head->next;
    }
}

void cetakAntrian(){
    cout << "=================" << endl;
    cout << "     makanan     " << endl;
    cout << "=================" << endl;
    if(isEmpty()){ 
        cout << "perut Kosong." << endl;
    }else{
        currentnode = head;
        cout << "makanan :" << endl;
        while(currentnode != NULL){
            cout << currentnode->nama << endl;
            currentnode = currentnode->next; 
        }
        cout << "=================" << endl;
    }
}

void clear(){
    currentnode = head;
    while(currentnode != NULL){
        temporaryNode = currentnode;
        temporaryNode->next = NULL;
        currentnode = currentnode->next;
    }
    head = NULL;
    temporaryNode == NULL;
    cout << "Antrian telah dihapus dan di-reset ke semula." << endl;
}

