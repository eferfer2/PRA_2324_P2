#include "DyV.h"
#include <algorithm>
using namespace::std;


int BusquedaBinaria(vector<int> &V, int x, int ini, int fin){
    if(ini>fin){
        return -1;
    }
    int mid=(ini+fin)/2;
    if(V[mid]==x){
        return mid;
    }
    if(V[mid]>x){
        return BusquedaBinaria(V,x,ini,mid-1);
    }
    if(V[mid]<x){
        return BusquedaBinaria(V,x,mid+1,fin);
    }
}

int BusquedaBinaria_INV(vector<int> &V, int x, int ini, int fin){
    if(ini>fin){
        return -1;
    }
    int mid=(ini+fin)/2;
    if(V[mid]==x){
        return mid;
    }
    if(V[mid]>x){
        return BusquedaBinaria_INV(V,x,mid+1,fin);
    }
    if(V[mid]<x){
        return BusquedaBinaria_INV(V,x,ini,mid-1);
    }
}

int Partition(vector<int> &V, int ini, int fin){
    int x=V[fin];
    int i=ini;
    for(int j=ini; j<fin;j++){
        if(V[j]<=x){
            swap(V[i],V[j]);
            i++;
        }
    }
    swap(V[i],V[fin]);
    return i;
}

void QuickSort(vector<int> &V, int ini, int fin){
    if(ini<fin){
        int pivote=Partition(V,ini,fin);
        QuickSort(V,ini, pivote-1);
        QuickSort(V, pivote+1,fin);
    }
}
