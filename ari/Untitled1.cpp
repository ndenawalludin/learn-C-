#include <iostream>
using namespace std;
int main()
{
	int a[100];
	int max, b, i, min;
	float rata;
	cout<<"Masukan banyaknya angka yang mau di inputkan: ";
	cin>>b;
	for (i=0; i<b; i++)
	{
		cout<<"A ["<<i<<"] : ";
		cin>>a[i];
		if (i==0)
		{
			max=a[0];
			min=a[0];
		}
		else if (a[i]>max)
		{
			max=a[i];
		}
		else if (a[i]<min)
		{
			min=a[i];
		}
		else
		
			rata+=a[i];
		
	}
	cout<<"Max:" <<max<<endl;
	cout<<"Min:" <<min<<endl;
	cout<<"Rata-Rata:"<<i/b;
}
