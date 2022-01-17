#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int nilai[5];
int i, j, total, jml;
char nama[30], nim[20], alamat[30];
cout<<"Masukan Nama Mahasiswa 		: ";
gets(nama);
cout<<"Masukan NIM Mahasiswa 		: ";
gets(nim);
cout<<"Masukan Alamat Mahasiswa 	: ";
gets(alamat);
awal:
cout<<"Masukan Berapa Nilai Ujian Mahasiswa	: ";
cin>>j;
for(i=1; i<=j; i++)
{
cout<<"Nilai yang ke-"<<i<<": ";
cin>>nilai[i];
}
total+=nilai[i];
jml=total/j;
cout<<"\n\nMahasiswa yang bernama "<<nama<<""<<endl;

if (jml>=80 && jml<=100)
cout<<"Mendapatkan Nilai "<<jml<<" (A Luar Biasa)";
else if (jml>=60 && jml<=79)
cout<<"Mendapatkan Nilai "<<jml<<" (B Baik)";
else if (jml=40 && jml<=59)
cout<<"Mendapatkan Nilai "<<jml<<" (C Kurang)";
else if (jml>=0 && jml<=39)
cout<<"Mendapatkan Nilai "<<jml<<" (D Buruk)";
else
{
	cout<<"Anda Salah Memasukan Nilai!!!!"<<endl;
	goto awal;
}
cout<<"\n\nTerimakasih.";

getch();


}
