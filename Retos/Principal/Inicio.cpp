#include <iostream>
#include "../Salud/Persona.cpp"

using namespace std;

class Inicio{
    
   


};

int main (){

    Persona user1;

    user1.pedirDatos();
    user1.mostrarPersona();
    if (user1.calcularImc() == "Peso bajo"){
        cout << "Peso bajo";
    };
    if (user1.calcularImc() == "Peso ideal"){
        cout << "Peso ideal";
    };
    if (user1.calcularImc() == "Sobrepeso"){
        cout << "Sobrepeso";
    };
    user1.mayorEdad();
    
    return 0;
}
