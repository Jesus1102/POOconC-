#include <iostream>
using namespace std;
class Persona{
    
    private:
    string tipoDoc,nombre,apellido,sexo;
    int documento, edad;
    float peso, estatura,pesoActual = 0;
    
    Persona(){
        
    };
    
    void pedirDatos(){
        
        cout << "Ingrese su tipo de documento" << endl;
        cin >> tipoDoc;
        cout << "Ingrese su numero de documento" << endl;
        cin >> documento;
        cout << "Ingrese su nombre" << endl;
        cin >> nombre;
        cout << "Ingrese su apellido" << endl;
        cin >> apellido;
        cout << "Ingrese peso" << endl;
        cin >> peso;
        cout << "Ingrese estatura" << endl;
        cin >> estatura;
        cout << "Ingrese su edad" << endl;
        cin >> edad;
        cout << "Ingrese sexo" << endl;
        cin >> sexo;
        
    }
    
    void mostrarPersona(){
        
        cout << "tipo de documento: " << tipoDoc << endl;
        cout << "numero de documento: " << documento << endl;
        cout << "nombre: " << nombre << endl;
        cout << "apellido: " << apellido << endl;
        cout << "peso: " << peso << endl;
        cout << "estatura: " << estatura << endl;
        cout << "edad: " << edad << endl;
        cout << "sexo: " << sexo << endl;
        
    }
    
    void calcularImc(){
        
        pesoActual = peso/(estatura * estatura);
        
        if(pesoActual < 20 ){
            cout << "El peso esta por debajo de lo ideal" << endl;

        }
        else if(pesoActual >= 20 && pesoActual <= 25){
            cout << "El peso actual es el ideal" << endl;
        }
        else{
            cout << "El peso actual esta en sobrepeso" << endl;
        }
        
    }
    

    
    
};


int main()
{


    return 0;
}