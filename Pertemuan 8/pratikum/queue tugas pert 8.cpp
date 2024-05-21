#include<iostream>
using namespace std;


struct antrian{
    int jm;
    string makanan;
    antrian *next;
} *head, *newNode, *temporaryNode, *currentnode, *tail;


void mb(int);
void enqueue(antrian *);
void dequeue();
void cetakAntrian();
bool isEmpty();
void clear();


int main(){
    head = tail = NULL;
    char pilihan;
    bool ongoing = true;
    int jm = 1;

    while(ongoing){
        cout << endl;
        cout << "=================================" << endl;
        cout << "        Sistem Pencernaan        " << endl;
        cout << "=================================" << endl;
        cout << "1. Tambah Makanan (enqueue)" << endl;
        cout << "2. cerna makanan (dequeue)" << endl;
        cout << "3. mengingat makanan apa" << endl;
        cout << "4. Exit sistem" << endl;
        cout << "Pilihan [1-4]: ";
        cin >> pilihan;
        switch (pilihan){
            case '1':
                mb(jm);
                jm++;
                break;
            case '2':
                dequeue();
                break;
            case '3':
                cetakAntrian();
                break;
            case '4':
                 cout << "Program selesai." << endl;
                ongoing = false;
                break;
            default:
                cout << "Input Salah." << endl;
                break;
            
        }
    }

     return 0;
} 


void mb(int jm){
    string inputNama;

    cout << "masukkan makanan: ";
    cin >> inputNama;

    newNode = new antrian();
    newNode->jm = jm;
    newNode->makanan = inputNama;
    newNode->next = NULL;

    
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
     
        head = tail = newNode;
    }else{
       
        tail->next = newNode;
        tail = newNode;
    }
    
    cout << "makan " << newNode->makanan << endl; 
}

void dequeue(){
    if(isEmpty()){
        cout << "perut Kosong,laparrrrr!!!!!!!" << endl;
    }else{
        currentnode = head;
        cout << " makanan " << currentnode->makanan << " di cerna " << endl; 
        head = head->next;
    }
}

void cetakAntrian(){
	cout << endl;
    cout << "=================" << endl;
    cout << "       isi       " << endl;
    cout << "=================" << endl;
    if(isEmpty()){ 
        cout << "perut Kosong." << endl;
    }else{
        currentnode = head;
        cout << "makanan :" << endl;
        while(currentnode != NULL){
            cout << currentnode->makanan << endl;
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


