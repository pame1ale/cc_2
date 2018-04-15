#include <iostream>
#include <cmath>
using namespace std;


//-------1 ADDITIONAL MATERIAL
void printNTimes ( char * msg = "\n", int n = 1) {
	for ( int i = 0; i < n ; ++ i ) {
	std :: cout << msg ;}
}

//-------2 A SIMPLE FUNCTION
//la funcion devuelve n*2 , si no posee argumento se le asigna;
//5 es el valor por defecto realiza la operacion
void f( const int a = 5){cout << a*2 << "\n";}

//--------------------3 FIX THE FUNCION
//-------3.1
//como la funcion printNum iba debajo de la funcion main no detectaba a la funcion declarada en main
void printNum(int number ){cout<< number ;}
 
//-------3.2
//La funcion no tiene declarado el valor number
void printNum2(int number){cout<< number <<endl;}

//------3.3
//Se debe realizar un paso por referencia del argumento
void doubleNumber (int &num){num = num * 2;}

//------3.4 
//Retornar diff o abs(x-y)
int difference( const int x, const int y) {
    return abs(x -y);
    }
    
//------3.5
//Se debe agregar el argumento faltante
int sum( const int x, const int y ,const int z) {
    return x + y + z;
}
int a = 123;//2
int main () {
	//1.1
	printNTimes();
	//2
	f (1) ;
	f(a) ;
	int b = 3;
	f(b) ;
	int a = 4;
	f(a) ;
	f();
    //3.1
    printNum(35) ;
    //3.2
    printNum2(5);
    //3.3
    int x= 35; 
    doubleNumber(x) ;
    cout << a ;
    //3.4
    cout << difference (24 , 1238) ;
    //3.5
    cout<<sum(1, 2, 3);
    return 0;
    }
 
