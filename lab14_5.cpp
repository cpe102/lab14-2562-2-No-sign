#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *w,int *x,int *y, int *z){
	int i=0,k=0;
	
	int g[4]={*w,*x,*y,*z};
	int *l[4]={w,x,y,z};

	while(i<4){
		k=rand()%(4-i);
	*l[3-i]=g[k];
	g[k]=g[3-i];
	
		
		i++;
	}
}
