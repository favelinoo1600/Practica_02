#include <iostream>

using namespace std;

class Gato{
	public:
	Gato(int edadInicial);
	~Gato();
	int ObtenerEdad();
	void AsignarEdad(int edad);
	void Maullar();
	private:
	int suEdad;
};

Gato::Gato(int edadInicial){
	suEdad = edadInicial;
	cout << "Se ha creado un objeto Gato de edad " << edadInicial << endl;
}

Gato::~Gato(){
	cout << "El objeto Gato se destruira en 3, 2, 1 .... ya fue...." << endl;
}

int Gato::ObtenerEdad(){
	return suEdad;
}

void Gato::AsignarEdad(int edad){
	suEdad = edad;
}

void Gato::Maullar(){
	cout << "Miau" << endl;
}

int main(){
	Gato Pelusa(5);
	Pelusa.Maullar();
	cout << "Pelusa es un gato que tiene ";
	cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
	Pelusa.Maullar();
	Pelusa.AsignarEdad(7);
	cout << "Ahora pelusa tiene " ;
	cout << Pelusa.ObtenerEdad() << " anios de edad" << endl;
	return 0;
}
