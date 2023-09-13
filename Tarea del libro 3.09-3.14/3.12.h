#include<iostream>
#include<string>
using namespace std;
class Fecha{
public:
    Fecha( int mes,int dia , int año):Mes(mes), Dia(dia),Año(año){}

void setmes(int mes) {
    if (mes >= 1 && mes <= 12) {
        Mes = mes;
    } else {
        Mes = 1;  
    }
}


  int getmes() const{
    return Mes;
    
  }

void setdia(int dia){
  Dia=dia;
   }
  int getdia() const{
    return Dia;
  }
  


void setaño(int año){
  Año=año;
}
int getaño() const{
  return Año;
}


void displayDate() const{
  cout<< "La fecha es: "<< getdia()<<"/"<< getmes()<<"/"<<getaño();
}

private:
int Mes;
int Dia;
int Año;

};