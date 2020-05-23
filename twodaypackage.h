#ifndef TwoDayPackage_h
#define TwoDayPackage_h

#include "package.h"
#include <string>

// Clase derivada TwoDayPackage
class TwoDayPackage : public Package {
  public:
  TwoDayPackage(string rem, string dest, double kg, double costo, double tar);
  double getcalculateCost();
  
  protected:
  double tarifa;
};

TwoDayPackage::TwoDayPackage(string rem, string dest, double kg, double costo, double tar) {
  remitente = rem;
  destinatario = dest;
  peso = kg;
  costoporkg = costo;
  tarifa = tar;
}

double TwoDayPackage::getcalculateCost() {
  return Package::getcalculateCost() + tarifa;
}

#endif