
#include <iostream>

int main(){
    using namespace std;
	    float millas_conducidas{0},costo_galón{0}, millas_por_galón{0};
	    float estacionamiento{0}, peaje_día{0};
	    float costo_peaje{13.5};
    
    
    cout<<"Ingrese el total de millas que conduce por día: ";
    cin>> millas_conducidas;
    
    
    cout<<"Costo por galón de gasolina:";
    cin>> costo_galón;
    
    
    cout<<"Millas promedio por galón:";
    cin>> millas_por_galón;
    
    
    cout<<"Tarifas de estacionamiento por día:";
    cin>> estacionamiento;
    
    
    cout<<"Peajes por día: ";
    cin>> peaje_día;



    float galon_gasolina = millas_conducidas/millas_por_galón;
    float costo_gasolina = costo_galón*galon_gasolina;
    float peajes = peaje_día*costo_peaje;

    float costo_conduccion = costo_gasolina + peajes + estacionamiento;
    
    

    cout<< "Su costo por día de conducción al trabajo es "<<costo_conduccion;

    return 0;
}

