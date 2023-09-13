#include<iostream>
#include<string>

using namespace std;

class Factura {
public:

    Factura(string N_depieza, string D_pieza, int C_articulo , int P_articulo ,double T_IVA=0.20, double T_descuento = 0.00) : pieza(N_depieza), d_pieza (D_pieza) , c_articulo(C_articulo) , p_articulo(P_articulo) , t_IVA(T_IVA) , t_descuento(T_descuento){}

    void setNpiezas(string N_depieza) {
        pieza = N_depieza;
    }

    string getNpiezas() const {
        return pieza;
    }
   void setDpiezas(string D_pieza) {
        d_pieza = D_pieza;
    }

    string getDpiezas() const {
        return d_pieza;
    }
    void setCpiezas(int C_articulo){
      if (C_articulo>0){
        c_articulo=C_articulo;
      }
    }
    int getCpiezas() const{
      return c_articulo;
    }

  void setParticulo(int P_articulo){
    if(P_articulo>0){
      p_articulo=P_articulo;
    }
  }
  int getParticulo() const{
    return p_articulo;
  }

  void setTIVA(double T_IVA){
    if(T_IVA>=0){
      t_IVA = T_IVA;
    }
  }
  double getTIVA() const{
    return t_IVA;
  }
  void setTdescuento(double T_descuento){
    if(T_descuento>=0){
      t_descuento = T_descuento;
    }
  }
  double getTdescuento() const{
    return t_descuento;
  }

double getInvoiceAmount() const{
  double subtotal= c_articulo*p_articulo*t_IVA;
  double descuento= (c_articulo*p_articulo)*t_descuento;
  return subtotal-descuento;
}
  
private:
    string pieza;
    string d_pieza;
    int c_articulo;
    int p_articulo;
    double t_IVA;
    double t_descuento;
};


