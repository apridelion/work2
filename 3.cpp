#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
class Array1
{
protected:
	int n,a[n];
public:
	Array1(int aa[n])
	{
		int i;
		for(i=0;i<n;i++)
			a[i]=aa[i];
       /* ifstream infile1("f1.dat",ios::in);
    	if(!infile)
		{
		cerr<<"open error!"<<endl;
		exit(1);
		}
        for(int i=0;i<n;i++)
		    infile1>>aa[i];*/
	}
   int ArraySum()
   {
	    float sum=0;
	    for(int i=0;i<n;i++)
		    sum+=a[i]
        return sum;
   }
}
int main()
{
	int n;
	int a[n];
    int sum=0;
	int b,c;
    ofstream outfile1("f1.dat",ios::out);
	if(!outfile1)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		outfile1<<a[i]<<" ";
	}
    ifstream infile1("f1.dat",ios::in);
    if(!infile)
	{
		cerr<<"open error!"<<endl;
		exit(1);
	}
    for(int i=0;i<n;i++)
	{
		infile1>>a[i];
		sum+=a[i];
	}
    cout<<"ԭ�����ݹ�65536������������ͷ�Χ���ڼ��������ڼ�������"<<endl;
    cin>>b>>c;
    cout<<"�������ݺ�Ϊ��"<<sum<<endl;
    outfile1.close();
    infile1.close();
	return 0;
}