#include <iostream>
using namespace std;



void insertionSort(int[], int); // ekleme sýralamasý protorip
void ArrayiYaz(int[], int);     // Düzenlenen diziyi yaz prototip
 
int main()
{
    int Dizi[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(Dizi) / sizeof(Dizi[0]);

    insertionSort(Dizi, N);
    ArrayiYaz(Dizi, N);

    return 0;
}

void ArrayiYaz(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}


void insertionSort(int array[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}