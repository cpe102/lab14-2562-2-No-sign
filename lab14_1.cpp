#include <iostream>
using namespace std;
int a=5;
char b='A';
char &c=b;
int *x=&a;
char*y=&b;
int **z=&x;


int main(){
	cout<<a<<"	"<<b<<"	"<<c<<"	"<<x<<"	"<<(int *)y<<"	"<<z<<"\n\n";
	cout<<&a<<"	"<<&b<<"	"<<&c<<"	"<<&x<<"	"<<&y<<"	"<<&z<<"\n\n";
	c='F';
		cout<<a<<"	"<<b<<"	"<<c<<"	"<<x<<"	"<<(int *)y<<"	"<<z<<"\n\n";
	*y='W';
		cout<<a<<"	"<<b<<"	"<<c<<"	"<<x<<"	"<<(int *)y<<"	"<<z<<"\n\n";
	*x=6;
		cout<<a<<"	"<<b<<"	"<<c<<"	"<<x<<"	"<<(int *)y<<"	"<<z<<"\n\n";
	**z=7;
		cout<<a<<"	"<<b<<"	"<<c<<"	"<<x<<"	"<<(int *)y<<"	"<<z<<"\n\n";
	return 0;
}
