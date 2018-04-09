#include <iostream>

using namespace std;

void cadena1(char *s,char *t)
{
    int a=0,b=0;
    while(*(s+a)!='\0')
    {
        a++;
    }
    while(*(t+b)!='\0')
    {
        b++;
    }
    for(int i=0;i<a+b;i++)
        *(s+b+i)=*(t+i) ;

}

int main(){
    
    char t[]="german";
    char s[]="garcia";
    
    cadena1(s,t);
    cout<<s<<endl;
    
    return 0;
}