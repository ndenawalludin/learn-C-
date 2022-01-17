#include <iostream>
using namespace std;
int main()
{
	int i,j, k;
	float l=0;
	int data[100];
	int min, max;
	min=1000;
	max=-1000;
	cout<<"Masukan Banyaknya data yang di inputkan: ";cin>>i;
	for(j=0; j<i; j++)
	{
		cout<<"Data ke "<<j+1<<" : ";
		cin>>data[j];
	}
	for(j=0; j<i; j++)
	{	
	if (data[j]<min){min=data[j];}
	else if (data[j]>max){max=data[j];}
	else 
	l+=data[j];
	}
		cout<<"Max: "<<max<<""<<endl;
		cout<<"Min: "<<min<<""<<endl;
		cout<<"Rata-Rata: "<<l/j;
}
