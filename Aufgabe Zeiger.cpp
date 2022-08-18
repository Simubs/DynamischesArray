
#include <iostream>

using namespace std;
int* fuegeZahlArrayHinzu(int zahl, int* arr, int);
int groeßeUngerade = 0;
int groeßeGerade = 0;
int main()
{
  
    
   /* int iZahl1 = 5;
    int iZahl2 = 6;
    int* piMult1;
    int* piMult2;
    
    piMult1 = &iZahl1;
    piMult2 = &iZahl2;

    cout << iZahl1 << " Wert 2: " << iZahl2 << " ergibt " << *piMult1 * *piMult2 << endl;
    cout << "Wert iZahl1:\t\t" << iZahl1 << endl;
    cout << "Adresse iZahl1:\t\t" << &iZahl1 << endl;
    cout << "Wert piMult1:\t\t" << piMult1 << endl;
    cout << "Adresse piMult1:\t" << &piMult1 << endl;
    cout << "Inhalt piMult1:\t\t" << *piMult1 << endl;*/

    const int GROEßE_ARRAY = 10;
    int arr[GROEßE_ARRAY];

    for (int i = 0; i < GROEßE_ARRAY; i++) {
        arr[i] = rand();
    }

    

    int* arrUngerade = new int[groeßeUngerade];
    int* arrGerade = new int[groeßeGerade];

    for (int i = 0; i < GROEßE_ARRAY; i++) {
        if (arr[i] % 2 == 0) {
            arrGerade = fuegeZahlArrayHinzu(arr[i], arrGerade, groeßeGerade);
        }
        else {
            arrUngerade = fuegeZahlArrayHinzu(arr[i], arrUngerade, groeßeUngerade);
        }
        cout << arr[i] << ",";
    }
    cout << endl;
    for (int i = 0; i < groeßeGerade; i++) {
        cout << arrGerade[i] << ",";
    }

    cout << endl;
    for (int i = 0; i < groeßeUngerade; i++) {
        cout << arrUngerade[i] << ",";
    }
}

int* fuegeZahlArrayHinzu(int zahl, int* arr, int groeße) {
    groeße++;

    int* newArr = new int[groeße];

    for (int i = 0; i < groeße - 1; ++i) {
        newArr[i] = arr[i];
    }
    
    newArr[groeße - 1] = zahl;

    if (zahl % 2 == 0) { groeßeGerade = groeße; }
    else { groeßeUngerade = groeße; }

    delete[] arr;
    return newArr;
}

