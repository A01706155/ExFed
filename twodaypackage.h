#ifndef TwoDayPackage
#define TwoDayPackage

#include "Package"
#include <string>

// Clase derivada TwoDayPackage
class TwoDayPackage : public Package {
  public:
  TwoDayPackage(char rem[30], char dest[30], double kg, double cost, double tar)
  double getcalculateCost();
  
  protected:
  double tarifa;
};

TwoDayPackage::TwoDayPackage(char rem[30], char dest[30], double kg, double cost, double tar) {
  remitente = rem
  destinatario = dest
  peso = kg
  costo = cost
  tarifa2d = tarifa
}

double TwoDayPackage::getcalculateCost() {
  return Package::getcalculateCost() + tarifa2d;
}

