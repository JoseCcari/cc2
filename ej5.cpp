#include <iostream>
using namespace std;

int tamCadenaArreglo(char cadena[]){
	int tamanho= 0;
	while( cadena[tamanho] != '\0'){
		tamanho = tamanho +1;
	}
	return tamanho;
}

int tamCadenaPuntero( char* cadena){
	return (sizeof(cadena)/sizeof(char)) -1;
}

int main(int argc, char const *argv[])
{
	char texto[100] = "1234567";

	cout << tamCadenaArreglo( texto) << endl;
	cout << tamCadenaPuntero( texto) << endl;

	return 0;
}