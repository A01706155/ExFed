#ifndef Package
#define Package

#include <string>

using namespace std;

// Clase padre Package:
class Package {  
  public:
   Package();
   Package(string rem, string dest, double kg, double cost);
    char getremitente();
    char getdestinatario();
    double getpeso();
    double getcostoporkg();
    double getcalculateCost();

  protected:
   char remitente[30];
   char destinatario[30];
   double peso;
   double costoporkg;
};

Package::Package() {
  remitente = "noon";
  destinatario = "noon";
  peso = 0;
  costo = 0;
}

Package::Package(char rem[30], char dest[30], double kg, double cost) {
  remitente = rem;
  destinatario = dest;
  peso = kg;
  costo = cost;
}

char Package:getremitente() {
  return remitente;
}

char Package::getdestinatario() {
  return destinatario;
}

double Package:getpeso() {
  return peso;
}

double Package::getcostoporkg() {
  return peso*costo
}

#endif