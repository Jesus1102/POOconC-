#include <iostream>
#include "../Salud/Persona.cpp"
#include "../Salud/Empleado.cpp"

using namespace std;

class Inicio{
    
   


};

int main (){

    Persona user1;

    user1.pedirDatos();
    user1.mostrarPersona();
    if (user1.calcularImc() == "Peso bajo"){
        cout << "Peso bajo" << endl;
    };
    if (user1.calcularImc() == "Peso ideal"){
        cout << "Peso ideal" << endl;
    };
    if (user1.calcularImc() == "Sobrepeso"){
        cout << "Sobrepeso" << endl;
    };
    user1.mayorEdad();
    
    return 0;
}
