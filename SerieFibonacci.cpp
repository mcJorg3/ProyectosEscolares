#include <iostream>

/* Ejercicio serie de fibonacci utilizando ciclo for*/
using namespace std;
int main() {
	
	int i,f,g;
	i=0;
	f=1;
	g=1;
	cout<<i<<" "<<f<<" "<<g<<" ";
	for(i=0;i<10;i++){		
	f=f+g;
	g=f-g;
	cout<<f<<" ";	
	}
	
	return 0;
}
