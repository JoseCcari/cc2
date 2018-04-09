#include <vector>
#include <iostream>
using namespace std;

int* InsertSort(int* list,int tam)
{
    cout<<" 'InsertSort' "<<endl;
    int i,j;
    for( i=0;i<tam-1;i++){
        int min=i;
        for( j=i+1; j<tam; j++)
            if(*(list + j)<*(list + min))
                min = j;

        if(min != i)
            swap(*(list + i),*(list + min));
    }
    return list;
}


int Particion(int *list, int start, int end)
{
    int left , right, pivot;

    pivot = *(list+start);
    left = start;
    right = end;
    
    // Mientras no se cruzen los índices
    while (left < right){
        while ( *(list+right) > pivot ) // para los menores
            right--;

        while ( left < right and *(list+left)<=pivot )
            left++;

        // Si todavía no se cruzan los indices seguimos intercambiando
        if (left < right)
            swap(*(list+left),*(list+right));
    }

    // Los índices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    swap(*(list+right),*(list+start));

    // La nueva posición del pivot
    return right;
}

// Función recursiva para hacer el ordenamiento
int* QuickSort(int *list, int start, int end)
{
    //cout << " \t ****************  QuickSort  ********************"<< endl;
    int pivot;

    if (start < end)
    {
        pivot = Particion(list, start, end);

        // Ordeno la lista de los menores
        QuickSort(list, start, pivot - 1);

        // Ordeno la lista de los mayores
        QuickSort(list, pivot + 1, end);
    }
    return list;
}


void imprimirLista(int *a, int tam)
{
    for(int i=0;i<tam;i++)
        cout << *(a+i) << " " ;

    cout << endl;
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

    int* insert = InsertSort(a,tam);
    int* quick = QuickSort(a,0,tam-1);
    
    cout << " InsertSort:" ;
    imprimirLista( insert, tam) ;
    cout << " QuickSort:" ;
    imprimirLista( quick, tam) ;
    return 0;
}