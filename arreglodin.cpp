#include <iostream>
using namespace std;

int factorial(int N);

int main(){
    
    int* arreglo = NULL;
    
    cout<<"Ingrese un número"<<endl;
    int N=0;
    cin>>N;
    
    arreglo = new int[N];
        
    for(int i = 0; i < N; i++){

            arreglo[i] = factorial(i);
            cout << arreglo[i] << endl;
        }
    
    
    return 0;
}


int factorial(int N){
    int r = 1;    
    int n = N;   
    
    if(N == 0 || N == 1){ return r;
            }   
    else{
        while(n>0){
            r *= n;
            n = n-1;
        }     
    }
    
    return r;
}

