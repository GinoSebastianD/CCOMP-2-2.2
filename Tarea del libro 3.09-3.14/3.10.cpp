#include <iostream>
#include "3.10.h"

using namespace std;

 int main()
 {
   Factura factura("12345","herramienta",2,100,0.55,0.05);

    cout << "Número de parte: " << factura.getNpiezas() <<endl;
       cout << "Descripcion: " << factura.getDpiezas() <<endl;
   cout << "Cantidad de piezas:  " << factura.getCpiezas() <<endl;
  cout << "Precio del Producto:  " << factura.getParticulo() <<endl;
   cout << "IVA:   " << factura.getTIVA() <<endl;
cout << "Tasa de descuento:   " << factura.getTdescuento() <<endl;
   cout << "Monto total:   " << factura.getInvoiceAmount()<< "$" <<endl;
 }
