#include<iostream>
using namespace std;

struct Isiperut{
    int nomorIsiperut;
    string nama;
    Isiperut *next;
} *head, *newNode, *temporaryNode, *currentnode, *tail;

void Isiperutbaru(int);
void enqueue(Isiperut *);
void dequeue();
void cetakIsiperut();
bool isEmpty();
void clear();

int main(){
    head = tail = NULL;
    char pilihan;
    bool ongoing = true;
    int nomorIsiperut = 1;

    while(ongoing){
        cout << endl;
    
        cout << "SISTEM PENCERNAAN" << endl;
        cout << "1. Makan makanan baru" << endl;
        cout << "2. Cerna Makanan" << endl;
        cout << "3. Mengingat makanan apa" << endl;
        cout << "4. Exit sistem" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;
        switch (pilihan){
            case '1':
                Isiperutbaru(nomorIsiperut);
                nomorIsiperut++;
                break;
            case '2':
                dequeue();
                break;
            case '3':
                cetakIsiperut();
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
void Isiperutbaru(int nomorIsiperut){
    string inputNama;

    cout << "Masukkan Nama Makanan: ";
    cin >> inputNama;

    newNode = new Isiperut();
    newNode->nomorIsiperut = nomorIsiperut;
    newNode->nama = inputNama;
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

void enqueue(Isiperut *newNode){
    if(isEmpty()){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }

    cout << "Makanan " << newNode->nama << " Dimakan" << endl; 
}

void dequeue(){
    if(isEmpty()){
        cout << "Perut Kosong." << endl;
    }else{
        currentnode = head;
        cout << "Makanan " << currentnode->nama << " Telah Dimakan" << endl; 
        head = head->next;
    }
}

void cetakIsiperut(){
    cout << "SISTEM PENCERNAAN" << endl;
 
    if(isEmpty()){ 
        cout << "Perut Kosong." << endl;
    }else{
        currentnode = head;
        cout << "NO  Nama" << endl;
        while(currentnode != NULL){
            cout << currentnode->nomorIsiperut << ".  " << currentnode->nama << endl;
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
    cout << "Makanan telah dikonsumsi" << endl;
}
