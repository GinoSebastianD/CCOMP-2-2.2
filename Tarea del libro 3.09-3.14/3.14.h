#include <iostream>
#include <string>
class cuenta{
public:
  cuenta(unsigned int va,std::string no,std::string apel,double sal):valores(va),nombre(no),apellido(apel),saldo(sal){
  }
void setva(unsigned int va){
  valores=va;
}
unsigned int getva()const{
  return valores;
}
void setno(std::string no){
  nombre=no;
}
std::string getno()const{
  return nombre;
}
void setapel(std::string apel){
  apellido=apel;
}std::string getapel()const{
  return apellido;
}
void setsal(double sal){
  saldo=sal;
}
double getsal()const{
  return saldo;
}
private:
  unsigned int valores;
  std::string nombre;
  std::string apellido;
  double saldo;
};