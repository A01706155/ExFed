#include <iostream>
#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"

using namespace std;

int main(int argc, char* argv[]) {
  cout << "Bienvenido al bootleg de ExFed!" << "\n \n";
	Package a("Lala", "Lolo", 1, 20);
	TwoDayPackage b("Tangananica", "Tanganana", 5, 20, 30);
	OvernightPackage c("Juan Carlos Bodoque", "Tulio Trivino", 2, 20, 40);

//Para envio normal
	cout << "Envio estandar:" << endl;
  cout << "Remitente: " << a.getremitente() << endl; 
  cout << "Destinatario: " << a.getdestinatario() << endl;
  cout << "Peso: " << a.getpeso() << endl;
  cout << "Costo: " << a.getcalculateCost() << "\n \n";
  
	
//Para envio en dos dias  
	cout << "Envio rapido:" << endl;
  cout << "Remitente: " << b.getremitente() << endl; 
  cout << "Destinatario: " << b.getdestinatario() << endl;
  cout << "Peso: " << b.getpeso() << endl;
  cout << "Costo: " << b.getcalculateCost() << "\n \n";
	
//Para envio en una noche
	cout << "Envio express:" << endl;
  cout << "Remitente: " << c.getremitente() << endl; 
  cout << "Destinatario: " << c.getdestinatario() << endl;
  cout << "Peso: " << c.getpeso() << endl;
  cout << "Costo: " << c.getcalculateCost() << endl;

return 0;

}