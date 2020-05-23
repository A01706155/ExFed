#ifndef OvernightPackage
#define OvernightPackage

#include "Package"
#include <string>

// Clase derivada OvernightPackage
class OvernightPackage : public Package {
  public:
  TwoDayPackage(char rem[30], char dest[30], double kg, double cost, double tarnoch)
  double getcalculateCost();
  
  protected:
  double tarifanoche;
};

OvernightPackage::OvernightPackage(char rem[30], char dest[30], double kg, double cost, double tarnoch) {
  remitente = rem
  destinatario = dest
  peso = kg
  costo = cost
  tarifanoche = tarnoch
}

double OvernightPackage::getcalculateCost() {
  return Package::getcalculateCost() + (peso * tarifanoche);
}