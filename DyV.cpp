#include "DyV.h"
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
