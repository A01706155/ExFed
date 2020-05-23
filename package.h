#ifndef Package_h
#define Package_h

#include <string>

using namespace std;

// Clase padre Package:
class Package {  
public:
  Package();
  Package(string rem, string dest, double kg, double costo);
  string getremitente();
  string getdestinatario();
  double getpeso();
  double getcalculateCost();

  protected:
   string remitente;
   string destinatario;
   double peso;
   double costoporkg;
};

Package::Package() {
  remitente = "noon";
  destinatario = "noon";
  peso = 0;
  costoporkg = 0;
}

Package::Package(string rem, string dest, double kg, double costo) {
  remitente = rem;
  destinatario = dest;
  peso = kg;
  costoporkg = costo;
}

string Package::getremitente() {
  return remitente;
}

string Package::getdestinatario() {
  return destinatario;
}

double Package::getpeso() {
  return peso;
}

double Package::getcalculateCost() {
  return peso*costoporkg;
}

#endif