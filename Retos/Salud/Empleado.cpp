#include <iostream>
#include "./Persona.cpp"
using namespace std;

class Empleado : public Persona{

    

    public:
    string cargo, departamento;
    int valorHora, horasTrabajadas, fechaNacimiento, anoActual, edad ;
    float honorarios = 0, reteica = 0;

    void pedirDatos(){
        cout << "Ingrese su cargo "<< endl;
        cin >> cargo;
        cout << "Ingrese su departamento " << endl;
        cin >> departamento;
        cout << "Ingrese el valor por hora " << endl;
        cin >> valorHora;
        cout << "Ingrese las horas trabajadas " << endl;
        cin >> horasTrabajadas;
        cout << "Ingrese su año de nacimiento: " << endl;
        cin >> fechaNacimiento;
        cout << "Ingrese el año actual: " << endl;
        cin >> anoActual;

    }

    void mostraDatos(){

        cout << "Tipo de documento: " << getTipoDoc() << endl;
        cout << "Numero de documento: " <<  getEstatura() << endl;
        cout << "Nombre: " << getName() << endl;
        cout << "Apellido: " << getApellido() << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "Horas trbajadas: " << horasTrabajadas<< endl;
        cout << "valor por hora: " << valorHora << endl;
        cout << "Total a pagar: " << honorarios << endl;

    }
    
    void calcularHonorarios(){
        honorarios = (valorHora*horasTrabajadas);
        reteica = (honorarios * 0.966)/100;
        honorarios = honorarios - reteica;
    }

    int mayorEdad(){
        edad = anoActual - fechaNacimiento;
        return edad;
        
    }

    



};