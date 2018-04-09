#include <iostream>
using namespace std;

int sumaIterativa(int* array, int n){
	int suma = 0;
	for (int i=0; i<n ; i++){
		suma = suma + array[i];
	}

	return suma;
}

int* copiarArray(int* array, int n){
	int* res = new int[n-1];
	for (int i = 1; i < n; ++i){
		res[i-1] = array[i];
	}
	return res;
}

int sumaRecursiva(int* array, int n){
	if(n ==1) return array[0];

	int* derecha = copiarArray(array,n);
	return array[0] + sumaRecursiva(derecha,n-1);
}

int main(int argc, char const *argv[])
{
	int tam;
	cin >> tam;
	int* a = new int[tam]();

	for (int i = 0; i < tam; ++i){
		int numero;
		cout << "ingrese valor [" << i << "] :" ;
		cin >> numero;
		a[i] = numero;
	}

	cout <<" sumaRecursiva: " <<sumaRecursiva( a , 3) << endl;
	cout <<" sumaIterativa: "<<sumaIterativa( a , 3) << endl;

	return 0;
}