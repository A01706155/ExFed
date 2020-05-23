#include <iostream>
#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"

using namespace std;

int main(int argc, char* argv[]) {
	Package a("Lala", "Lolo", 1, 20;
	TwoDayPackage b("Tangananica", "Tanganana", 5, 20, 50);
	OvernightPackage c("Juan Carlos", "Tulio Trivino", 1, 20, 20);

//Para envio normal
	cout << "Envio estandar:" << endl;
  cout << "Remitente: " << a.getremitente() << endl; 
  cout << "Destinatario: " << a.getdestinatario() << endl;
  cout << "Peso: " << a.getpeso() << endl;
  cout << "Costo: " << a.calculateCost() << endl;
  
	
//Para envio en dos dias  

	
//Para envio en una noche

return 0;

}