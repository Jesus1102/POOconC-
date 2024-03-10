#include <iostream>

using namespace std;

class Animal{
    //Atributos./
    public:
        string nombreAnimal;
        int edadAnimal;

    //Metodos modificador de acceso valor retorno nombre (parametro)/
    public:
    
    void crearAnimal(){
        cout << "Por favor registre el nombre del animal: " << endl;
        cin >> nombreAnimal;

        cout << "Por favor registre la edad del animal: " << endl;
        cin >> edadAnimal;
    }

    void consultarAnimal(){
        cout << "El nombre del animal es " << nombreAnimal << ". Y la edad es " << edadAnimal << endl;
    }
};

class Carro{
    //Atributos./

    string motor;
    string modelo;
    int anio;

    Carro(string x, string y, int z){

        motor = x;
        modelo = y;
        anio = z;
    }

};

int main(){

    //nstancia de clase -> Objeto nombre de la clase nombre del objeto./

    Animal oso;
    Animal tigre;
    Animal ave;

    //Acceder a los atributos nombre_del_objeto. nombre_atributo/

    oso.nombreAnimal = "Tony";

    cout << "Por favor ingrese el nombre del tigre" << endl;
    cin >> tigre.nombreAnimal;

    //Acceder a métodos./

    oso.crearAnimal();

    return 0;
}

/*Persona(string tipoDoc1,string nombre1, string apellido1, string sexo1, int documento1, int edad1, float peso1, float estatura1){

        tipoDoc = tipoDoc1;
        nombre = nombre1;
        apellido = apellido1;
        sexo = sexo1;
        documento = documento1;
        edad = edad1;
        peso = peso1;
        estatura = estatura1;      

    }
    */ 
