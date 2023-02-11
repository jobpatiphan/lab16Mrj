#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 

void shuffle(int *a,int *b, int *c, int *d){
	int temp;
	int x = rand()%4;
	if(x==0){
		temp = *a;
		*a = *b;
		*b = temp;
	}
	else if(x==1){
		temp = *a;
		*a = *c;
		*c = temp;
	}
	else if(x==2){
		temp = *c;
		*c = *d;
		*d = temp;
	}
	else {
		temp = *d;
		*d = *b;
		*b = temp;
	}

}

