#include <vector>
#include "DyV.h"
#include <iostream>
#include <chrono>
using namespace::std;

 template<typename Func, typename T>
void testTime(Func f, vector<T> v, const string& name) {
    auto start = chrono::system_clock::now();
    f(v, 0, v.size() - 1);
    auto end = chrono::system_clock::now();
    chrono::duration<float, std::milli> duration = end - start;

    cout << name << " - Tiempo: " << duration.count() << " ms" << endl;
}


int main(){
    vector<int>V1={1,2,3,4,5};
    vector<int>V2={5,4,3,2,1};
    vector<int>V3={9,4,6,2,8,1,3,5,7};

    int valor = 4;


    cout<<"Posicion de 4 en el vector ascendente:"<<BusquedaBinaria(V1,valor,0,V1.size()-1)<<endl;

    cout<<"Posicion de 4 en el vector descendente:"<<BusquedaBinaria_INV(V2,valor,0,V2.size()-1)<<endl;

    QuickSort(V3,0,V3.size()-1);
    for (int i = 0; i < V3.size(); i++){
    cout << V3[i] << " ";
    }
    cout<<endl;
    
    testTime(QuickSort<int>, V3, "QuickSort Ultimo");
    
    return 0;



}
