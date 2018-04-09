#include <iostream>
using namespace std;

void copiar1(char *x,char *y){
    int a=0,b=0;
    while(*(x+a)!='\0'){
        a++;
    }
    while(*(y+b)!='\0'){
        b++;
    }
    for (int i=0;i<b;i++){
        *(y+i)=' ';
    }
    for (int i=0;i<a;i++)
        if (*(x+i)!='\0'){
            *(y+i)=*(x+i);
        }
}
void copiar2(char x[],char y[]){
    int a=0,b=0;
    while(x[a]!='\0'){
        a++;
    }
    while(y[b]!='\0'){
        b++;
    }
    for (int i=0;i<b;i++){
        y[i]=' ';
    }
    for(int i=0;i<a;i++){
        y[i]=x[i];
    }
}
int main(){
    //Con punteros
    char *ttt=new char[10];
    ttt="gratis";
    char sss[]="mens";
    
    copiar1(ttt,sss);
    cout<<sss<<endl;
    
    
    //Con arreglos    
    char tttt[]="pan";
    char ssss[]="jamon";
    
    copiar2(tttt,ssss);
    cout<<ssss<<endl;
    return 0;
}