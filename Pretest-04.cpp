/*
Nama Program	: Pretest-04
Nama			: Meira Dwiana Anjani
NPM				: 140810180015
Tanggal Buat 	: 26 Maret 2018
*/

#include <iostream>

using namespace std;

struct ElemtList{
    char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First);
void createElemt(pointer& pBaru);
void insertLast (List& First, pointer pBaru);

void traversal (List First);


int main()
{
    pointer p;
    List mahasiswa;
    int pilih;

    createList(mahasiswa);
    while(1){
        system("cls");
        cout<<"Menu"<<endl;
        cout<<"1. Tambah Data "<<endl;
        cout<<"2. Tampilkan"<<endl;
        cout<<"3. Exit"<<endl;
        cout << "Masukan Pilihan : "; cin >> pilih;
        switch(pilih){
        case 1:
            createElemt(p);
            insertLast(mahasiswa, p);
        break;

        case 2:
            traversal(mahasiswa);
        break;

        case 3:
            return 0;
            break;
        }
        system("pause");
    }
}
void createList(List& First){
    First = NULL;
    }

void createElemt(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"Nama               : "; cin.ignore();cin.getline(pBaru->nama,40);
    cout<<"NPM                : "; cin>>pBaru->npm;
    cout<<"IPK                : "; cin>>pBaru->ipk;
    pBaru->next=NULL;
}
void traversal(List First){
    cout<<"\nNo\t"<<"Nama\t\t"<<"\t\tNPM\t\t"<<"IPK\t"<<endl;
    pointer pBantu;
    pBantu=First;
    int i=1;
    while(pBantu != NULL){
        cout<<i<<"\t"<<pBantu->nama<<"\t\t\t"<<pBantu->npm<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
        i++;
    }
}

void insertLast(List& First, pointer pBaru){
    pointer Last;
    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}


