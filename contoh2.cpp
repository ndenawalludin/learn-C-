#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int a[5]={10,15,20,15,30};
	int b[5]={10,20};
	int c[5]={15,0,30};
	int j;
	
	cout<<endl;
	for(j=0; j<5; j++)
	{
		cout<<"A["<<j<<"]="<<a[j]<<", B ["<<j<<"]="<<b[j]<<", C ["<<j<<"]="<<c[j]<<endl;
	}
	getch();
}
