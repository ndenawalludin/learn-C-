#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Masukan banyaknya data: ";
	cin>>a;
	for(b=1; b<=a; b++)
	{
		cout<<"data ke"<<b<<" : ";
		cin>>c;
	}
	int data [a];
	int isi, max,min;
	float rata,total=0;
	max = data[0];
	min=max;
	for (isi=0; isi<=c; isi++)
	{
		if(data[isi]>max){max = data[isi];}
		else if(data[isi]<min){min = data[isi];}
		else { max = max, min=min;}
		total+=data[isi];
	}

	
	
	cout<<"Nilai maksimum adalah :"<<max<<endl;
	cout<<"Nilai minimum adalah  :"<<min<<endl;
	cout<<"Rata-rata             :"<<total/isi;
	getch();
}
