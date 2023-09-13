#include <iostream>
#include <string>
using namespace std;
class cuenta{
public:
  cuenta(unsigned int valor, string Nombre ,string Apellido ,double Saldo ):valores(valor),nombre(Nombre),apellido(Apellido),saldo(Saldo){
  }
void setva(unsigned int valor){
  valores=valor;
}
unsigned int getva()const{
  return valores;
}
void setno(string Nombre){
  nombre=Nombre;
}
std::string getno()const{
  return nombre;
}
void setapel(string Apellido){
  apellido=Apellido;
}std::string getapel()const{
  return apellido;
}
void setsal(double Saldo){
  saldo=Saldo;
}
double getsal()const{
  return saldo;
}
private:
  unsigned int valores;
  string nombre;
  string apellido;
  double saldo;
};
