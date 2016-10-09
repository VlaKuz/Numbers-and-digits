#include "conio.h"
#include "iostream"

using namespace std;

int Chisl(int N)
{
	int mil=1000000;
	int k=0;
	int t,l;
	int g=0;
	int s=0;
	int i=0;
	int res=0;
	int st=1;
	int h[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int *b;
	if ((N<=mil) && (N>0))
	{
	while (k!=10)
	{
		t=N*st;
		l=t;
		res=t;
		while (t>0)
		{
			t=t/10;
			s++;
		}

	b=new int [s];

		for (int jc=0;jc<s;jc++)
		{
			b[jc]=l%10;
			l=l/10;
		}

		for (int jc=0;jc<s;jc++)
					if ((h[0]!=b[jc]) && (h[1]!=b[jc]) && (h[2]!=b[jc]) && (h[3]!=b[jc]) && (h[4]!=b[jc]) && (h[5]!=b[jc]) && (h[6]!=b[jc]) && (h[7]!=b[jc]) && (h[8]!=b[jc]) && (h[9]!=b[jc]))
						{
						h[i]=b[jc];
						g++;
						i++;
						}
		k=g+k;
		st++;
		s=0;
		g=0;
		delete b;
		
	}

	}
	else
		cout<<"FAIL"<<endl;

		return res;
}
void main(void)
{
	int K1=1692;
	int K2=15375;
	int K3=1234567890;
	int K4=-1;
	int K5=0;
	int K6=1;
	int K7=111;
	cout<<"Tests number #1: "<<K1<<endl;
	int TEST_1=Chisl(K1);
	cout<<"Tests result #1: "<<TEST_1<<endl;

	cout<<endl;

	cout<<"Tests number #2: "<<K2<<endl;
	int TEST_2=Chisl(K2);	
	cout<<"Tests result #2: "<<TEST_2<<endl;

	cout<<endl;

	cout<<"Tests number #3: "<<K3<<endl;
	int TEST_3=Chisl(K3);

	cout<<endl;

	cout<<"Tests number #4: "<<K4<<endl;
	int TEST_4=Chisl(K4);

	cout<<endl;

	cout<<"Tests number #5: "<<K5<<endl;
	int TEST_5=Chisl(K5);

	cout<<endl;

	cout<<"Tests number #6: "<<K6<<endl;
	int TEST_6=Chisl(K6);
	cout<<"Tests result #6: "<<TEST_6<<endl;

	cout<<endl;

	cout<<"Tests number #7: "<<K7<<endl;
	int TEST_7=Chisl(K7);
	cout<<"Tests result #7: "<<TEST_7<<endl;

	_getch();
}