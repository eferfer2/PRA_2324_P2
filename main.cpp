#include <vector>
#include "DyV.h"
#include <iostream>
using namespace::std;


int main(){
    vector<int>V1={1,2,3,4,5};
    vector<int>V2={5,4,3,2,1};

    int valor = 4;


    cout<<"Posicion de 4 en el vector ascendente:"<<BusquedaBinaria(V1,valor,0,V1.size()-1)<<endl;

    cout<<"Posicion de 4 en el vector descendente:"<<BusquedaBinaria_INV(V2,valor,0,V2.size()-1)<<endl;


    return 0;

}
