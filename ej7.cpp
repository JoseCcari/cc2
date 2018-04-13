#include <iostream>

using namespace std;

void cadena1(char *char1,char *char2)
{
    int tam1=0,tam2=0;
    while(*(char1+tam1)!='\0'){
        tam1++;
    }
    while(*(char2+tam2)!='\0'){
        tam2++;
    }
    for(int i=0;i<tam2;i++)
        *(char1+tam1+i)=*(char2+i) ;

}

int main(){
    char s[]="hola";
    char t[]="mundo";
    cadena1(s,t);

    cout<<s<<endl;

    return 0;
}
