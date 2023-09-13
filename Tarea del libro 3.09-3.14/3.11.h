#include<iostream>
#include<string>
using namespace std;
class Motor_Vehiculo{
public:
    Motor_Vehiculo(string m_arca, string C_ombustible, int A_fabricacion , string color , int C_motor ) : marcas(m_arca) , Combustible(C_ombustible) , a_fabricacion(A_fabricacion), Color(color),c_motor(C_motor){ }


  void setmarc(string m_arca){
  marcas = m_arca;
}
string getmarc() const{
  return marcas;
}

void setCombust(string C_mbustible){
  Combustible = C_mbustible;
}
string getCombust() const{
  return Combustible;
}

void setfabricacion(int A_fabricacion){
  a_fabricacion = A_fabricacion;
}
int getfabricacion() const{
  return a_fabricacion;
}

void setcolores(string color){
  Color=color;
}
string getcolores() const{
  return Color;
}
void setmotor(int C_motor){
  c_motor =C_motor;
}
int getmotor() const{
  return c_motor;
}

void  displayCarDetails()
{
  cout<<"Marca: "<<getmarc()<<"\nTipo de Combustible: "<<getCombust()<<"\nAño del carro: "
            <<getfabricacion()<<"\nColor: "<<getcolores()<<"\nCapacidad: "<<getmotor();
}


private:
string marcas;
string Combustible;
int a_fabricacion;
string Color;
int c_motor;
};