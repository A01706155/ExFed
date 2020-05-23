#ifndef OvernightPackage_h
#define OvernightPackage_h

#include "package.h"
#include <string>

// Clase derivada OvernightPackage
class OvernightPackage : public Package {
  public:
  OvernightPackage(string rem, string dest, double kg, double costo, double tarnoch);
  double getcalculateCost();
  
  protected:
  double tarifanoche;
};

OvernightPackage::OvernightPackage(string rem, string dest, double kg, double costo, double tarnoch) {
  remitente = rem;
  destinatario = dest;
  peso = kg;
  costoporkg = costo;
  tarifanoche = tarnoch;
}

double OvernightPackage::getcalculateCost() {
  return Package::getcalculateCost() + (peso * tarifanoche);
}

#endif