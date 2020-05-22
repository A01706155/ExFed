#ifndef Package
#define Package

#include <string>

using namespace std;

// Clase padre Package:
class Package {
  public:
   Package();
   Package(char rem[30], char dest[30], double kg, double cost);
    char getremitente();
    char getdestinatario();
    double getpeso();
    double getcostoporkg();

   
  protected:
   char remitente[30];
   char destinatario[30];
   double peso;
   double costoporkg;

};
 
// Clase derivada TwoDayPackage:
class TwoDayPackage : public Package {
  public:

  protected:

};

// Clase derivada OvernightPackage:
class OvernightPackage : public Package {
  public:
   
  protected:
};