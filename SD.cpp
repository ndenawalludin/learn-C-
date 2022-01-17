#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
int nilai[5];
int i;
char nama[20];
cout<<"masukan Nama Mahasiswa : ";
gets(nama);

cout<<"Masukan nilai ujuan mahasiswa,\n";
cin>>i;
for(i=1; i<5; i++)
{
cout<<"Nilai yang ke- "<<i<<" : ";
cin>>nilai[i];
}
cout<<"Mahasiswa yang bernama "<<nama<<"";
for(i=0; i<5; i++)
{
cout<<"\nNilai ke-"<<(i+1)<<" : ";
}
cout<
cout<<"\n\nTerimakasih.";
getch();


}
