#include <iostream>
using namespace std;

int tam2 (char V[]){
    char *p1=V;
    char *p2=V;
    while (*p2 != '\0'){
        p2++;
    }
    return p2-p1;
}

char * invertir(char *s){
    char *t= new char[10]; // reserva de espacio de memoria
    int tam =tam2(s);
    for (int i =0;i<tam;i++){
        *(t+i)=*(s+tam-1-i);
    }
    *(t+tam)='\0';
    return t;
}

int main() {
  char cad[] = "";
  cout<<"Cadena? ";
  cin>> cad;
  cout<<"Palabra al revez: "<<invertir(cad)<<endl;
  return 0;
}
