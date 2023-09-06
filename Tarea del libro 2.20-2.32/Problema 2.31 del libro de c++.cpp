
#include <iostream>
using namespace std;
int main(){
    
    float millas_conducidas{0},costo_galon{0}, millas_por_galon{0};
    float estacionamiento{0}, peaje_dia{0};
    float costo_peaje{13.5};
    
    
    cout<<"Ingrese el total de millas que conduce por dia: ";
    cin>> millas_conducidas;
    
    
    cout<<"Costo por galon de gasolina:";
    cin>> costo_galon;
    
    
    cout<<"Millas promedio por galon:";
    cin>> millas_por_galon;
    
    
    cout<<"Tarifas de estacionamiento por dia:";
    cin>> estacionamiento;
    
    
    cout<<"Peajes por dia: ";
    cin>> peaje_dia;



    float galon_gasolina = millas_conducidas/millas_por_galon;
    float costo_gasolina = costo_galon*galon_gasolina;
    float peajes = peaje_dia*costo_peaje;

    float costo_conduccion = costo_gasolina + peajes + estacionamiento;
    
    

    cout<< "Su costo por dia de conduccion al trabajo es "<<costo_conduccion;

    return 0;
}

