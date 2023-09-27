#include <iostream>
using namespace std;

   /*
   int arr[4];

    //Inicializando
    arr[0] =  15 ;  
    arr[1]=25;    
    arr[2]=35;    
    arr[3]=45;    

    cout << arr[0]<< endl;    
  
  int arr2[4]= {3,4,5,6};
    cout << arr2[0]<< endl;
   */ 
    




 int sumar(const int array[], const int tam) {
    if(tam<0){
        return 0;
   }
    else
        return array[tam-1] + sumar(array,tam-1);
 }
    
void imprimir(int const arra[], int tamaño){
    if (tamaño<0){
        return 0;
    }
    else{

        return 
    }

} 

 

 int main(){
   int tamaño=7;
   int arr[tamaño] = {3, 2, 1, 4, 5, 6, 7};
   
   
   imprimir(arr, tamaño);

}













