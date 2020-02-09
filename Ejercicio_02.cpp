#include <iostream>

using namespace std;

class Gato{
public:
	Gato(int edadInicial, int pesoInicial);
	~Gato();
	int ObtenerPeso() const;
	void AsignarPeso(int peso);
	int ObtenerEdad() const;
	void AsignarEdad(int edad);
	void Maullar();
private:
	float suPeso;
	int suEdad;
};

Gato::Gato(int edadInicial, int pesoInicial){
	suEdad = edadInicial;
	suPeso = pesoInicial;
	cout << "Se ha creado un objeto Gato de edad " << edadInicial <<" y pesa " << pesoInicial << " kilogramos." << endl;
}

Gato::~Gato(){
	cout << "El objeto Gato se destruira en 3, 2, 1 .... ya fue...." << endl;
}

int Gato::ObtenerPeso(){
	return suPeso;
}

void Gato::AsignarPeso(int peso){
	suPeso = peso;
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
	Gato Pelusa(5, 3.5);
	Pelusa.Maullar();
	cout << "Pelusa es un gato que tiene ";
	cout << Pelusa.ObtenerEdad() << " anios de edad y pesa " << Pelusa.ObtenerPeso() <<" kilogramos."<< endl;
	Pelusa.Maullar();
	Pelusa.AsignarEdad(7);
	Pelusa.AsignarPeso(5.4);
	cout << "Ahora pelusa tiene " ;
	cout << Pelusa.ObtenerEdad() << " anios de edad y pesa " << Pelusa.ObtenerPeso() <<" kilogramos." << endl;
	return 0;
}
