#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int data [10] = {4,1,0,-9,8,5,-1,2,3,-7};
	int isi, max;
	max = data[0];
	for (isi=0; isi<=9; isi++)
	{
		if(data[isi]>max){max = data[isi];}
		else { max = max;}
	}
	cout<<"Nilai maksimum adalah :"<<max;
	getch();
}
