#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int data [10] = {4,1,0,-9,8,5,-1,2,3,-7};
	int isi, max,min;
	float rata,total=0;
	max = data[0];
	min=max;
	for (isi=0; isi<=9; isi++)
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
