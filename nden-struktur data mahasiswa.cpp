#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int nilai[5];
int i;
char nama[30], nim[20], alamat[30];
cout<<"Masukan Nama Mahasiswa 		: ";
gets(nama);
cout<<"Masukan NIM Mahasiswa 		: ";
gets(nim);
cout<<"Masukan Alamat Mahasiswa 	: ";
gets(alamat);
awal:
cout<<"Masukan Nilai Ujian Mahasiswa	: ";
cin>>nilai[i];
cout<<"\n\nMahasiswa yang bernama "<<nama<<""<<endl;

if (nilai[i]>=80 && nilai[i]<=100)
cout<<"Mendapatkan Nilai "<<nilai[i]<<" (A Luar Biasa)";
else if (nilai[i]>=60 && nilai[i]<=79)
cout<<"Mendapatkan Nilai "<<nilai[i]<<" (B Baik)";
else if (nilai[i]>=40 && nilai[i]<=59)
cout<<"Mendapatkan Nilai "<<nilai[i]<<" (C Kurang)";
else if (nilai[i]>=0 && nilai[i]<=39)
cout<<"Mendapatkan Nilai "<<nilai[i]<<" (D Buruk)";
else
{
	cout<<"Anda Salah Memasukan Nilai!!!!"<<endl;
	goto awal;
}
cout<<"\n\nTerimakasih.";

getch();


}
