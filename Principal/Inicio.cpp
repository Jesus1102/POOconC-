#include <iostream>
#include "../Salud/Persona.cpp"

using namespace std;

class Inicio{
    
   


};

int main (){

    Persona user1;

    user1.pedirDatos();
    user1.mostrarPersona();
    user1.calcularImc();
    user1.mayorEdad();
    
    return 0;
}
