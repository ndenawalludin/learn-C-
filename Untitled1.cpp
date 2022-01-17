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
cin>>i;
cout<<"\n\nMahasiswa yang bernama "<<nama<<""<<endl;

if (i>=80 && i<=100)
cout<<"Mendapatkan Nilai "<<i<<" (A Luar Biasa)";
else if (i>=60 && i<=79)
cout<<"Mendapatkan Nilai "<<i<<" (B Baik)";
else if (i>=40 && i<=59)
cout<<"Mendapatkan Nilai "<<i<<" (C Kurang)";
else if (i>=0 && i<=39)
cout<<"Mendapatkan Nilai "<<i<<" (D Buruk)";
else
{
	cout<<"Anda Salah Memasukan Nilai!!!!"<<endl;
	goto awal;
}
cout<<"\n\nTerimakasih.";

getch();


}
