#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a,int *b,int *c,int *d){
    *a = rand()%4+1;
	*b = rand()%4+1;
    *c = rand()%4+1;
	*d = rand()%4+1;
	while (*a==*b || *a==*c ||*a==*d){
		*a = rand()%4+1;
	}
	while ( *b==*a||*b==*c ||*b==*d){
		*b = rand()%4+1;
	}
	while (*c==*a || *c==*b ||*c==*d){
		*c = rand()%4+1;
	}
	if(*a==1)*a=50;
	if(*a==2)*a=100;
	if(*a==3)*a=500;
	if(*a==4)*a=1000;
	if(*b==1)*b=50;
	if(*b==2)*b=100;
	if(*b==3)*b=500;
	if(*b==4)*b=1000;
	if(*c==1)*c=50;
	if(*c==2)*c=100;
	if(*c==3)*c=500;
	if(*c==4)*c=1000;
	if(*d==1)*d=50;
	if(*d==2)*d=100;
	if(*d==3)*d=500;
	if(*d==4)*d=1000;
}
