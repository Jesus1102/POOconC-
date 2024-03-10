#include <iostream>
using namespace std;
class Persona{
    
    private:
    string tipoDoc,nombre,apellido,sexo;
    int documento, edad;
    float peso, estatura,pesoActual = 0;
    
    public:
    Persona(){
        
    };

    
    /*accesores
    //setter es cambiar y registrar una variable(s)
    Void setName(string x o name){
     name = x si es diferente;

     this -> name = name si son iguales

     }
    // leer una(s) variable
     String getName(){

        return name;
     
     }
     */

    void setTipoDoc(string tipoDoc){
        this -> tipoDoc = tipoDoc;
    }
    void setDocumento(int documento){
        this -> documento = documento;
    }
    void setName (string nombre){
        this -> nombre = nombre;
    }
    void setApellido (string apellido){
        this -> apellido = apellido;
    }
    void setPeso (float peso){
        this -> peso = peso;
    }
    void setEstatura (float estatura){
        this -> estatura = estatura;
    }
    void setEdad (int edad){
        this -> edad = edad;
    }
    void setSexo (string){
        this -> sexo = sexo;
    }
    
    string getTipoDoc(){
        return tipoDoc;
    }
    int getDocumento(){
        return documento;
    }
    string getName(){
        return nombre;
    }
    string getApellido(){
        return apellido;
    }
    float getPeso(){
        return peso;
    }
    float getEstatura(){
        return estatura;
    }
    int getEdad(){
        return edad;
    }
    string getSexo(){
        return sexo;
    }
    
   // Metodos
    public:
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
    
    string calcularImc(){
        
        pesoActual = peso/(estatura * estatura);
        
        if(pesoActual < 20 ){
            return "Peso bajo";

        }
        else if(pesoActual >= 20 && pesoActual <= 25){
            return "Peso ideal";
        }
        else{
            return "Sobrepeso";
        }
        
    }

    void mayorEdad(){

    if(edad <= 17){

        cout << "Es menor de edad" << endl;
        
    }
    else {
        cout << "Es mayor de edad" << endl;
    }
    
}
    
};

class Empleado : Persona{

    Persona user1;

    public:
    string cargo, departamento;
    int valorHora, horasTrabajadas;
    float honorarios = 0, reteica = 0;

    void pedirDatosE(){
        cout << "Ingrese su cargo "<< endl;
        cin >> cargo;
        cout << "Ingrese su departamento " << endl;
        cin >> departamento;
        cout << "Ingrese el valor por hora " << endl;
        cin >> valorHora;
        cout << "Ingrese las horas trabajadas " << endl;
        cin >> horasTrabajadas;
    }

    void calcularHonorarios(){
        honorarios = (valorHora*horasTrabajadas);
        reteica = (honorarios * 0.966)/100;
        honorarios = honorarios - reteica;
    }

    void mostraDatosE(){

        cout << "Tipo de documento: " << user1.getTipoDoc() << endl;
        cout << "Numero de documento: " << user1.getEstatura() << endl;
        cout << "Nombre: " << user1.getName() << endl;
        cout << "Apellido: " << user1.getApellido() << endl;
        cout << "Cargo: " << cargo << endl;
        cout << "Horas trbajadas: " << horasTrabajadas<< endl;
        cout << "valor por hora: " << valorHora << endl;
        cout << "Total a pagar: " << honorarios << endl;

    }



};

int main()
{
    Persona user1;
    
    user1.pedirDatos();
    user1.mostrarPersona();
    user1.calcularImc();
    user1.mayorEdad();
    


    return 0;
}
