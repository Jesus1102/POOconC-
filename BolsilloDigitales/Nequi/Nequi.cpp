#include <iostream>
using namespace std;

class Nequi{

    private:
    int opcion,i = 3;
    float saldoCuenta = 0, valor, colchon, bolsillo;
    string clavesRegistradas[10] = {"1234","4567","7890"}, usuariosRegistrados[10] = {"3214459100","3214459300","3214459200"}, clave, usuario;

    public:
    Nequi (){

    };
    bool accesoApp(){

        while( i > 0){
            cout << "Ingrese su usuario: " << endl;
            cin >> usuario;

            cout << "Ingrese su clave: " << endl;
            cin >> clave;

            for (int i = 0; i < 10; i++){
                
                if (clave == clavesRegistradas[i] && usuario == usuariosRegistrados[i]){
                    return true;

                }                

            }
            i--;

            cout << "Clave o usuario incorrectos" << endl;
            cout << "Ingrese un usuario y clave validos" << endl;
            cout << "Tiene " << i << "intentos mas" << endl;

        };
    }

    string recarga(){

        int numCuenta, cedula, opBanco;
        string listaBancos[5] = {"AVVILLAS","BBVA","Colpatria","Davivienda","Itau"}, codigoRegalo;

        cout << "ingrese la opcion que desea para recargar: " << endl;
        cout << "1. Plata al toque" << endl;
        cout << "2. Con efectivo" << endl;
        cout << "3. Desde otro banco" << endl;
        cout << "4. Codigo de regalo" << endl;
        cout << "0. para retroceder" << endl;
        cin >> opcion;
        while (true)
        {              
            if(opcion == 1){
                cout << "Bienvenido a Plata al toque" << endl;
                cout << "Ingrese el numero de cuenta bancolombia: " << endl;
                cin >> numCuenta;
                cout << "Ingrese su numero de cedula: " << endl;
                cin >> cedula;
                while (true)
                {
                    cout << "Ingrese el valor a enviar: " << endl;
                    cin >> valor;
                    if(valor <= 0){
                        cout << "Ingrese un valor valido" << endl;
                    }
                    else{
                        saldoCuenta = valor;
                        return "Recarga realizada con exito";
                    }

                }

            }
            if(opcion == 2){
                cout << "Bienvenido a recagar con efectivo" << endl;
                cout << "Dirigase al corresponsal mas cercano" << endl;
                cout << "los podra encontrar en el siguiente link: " << endl;
                cout << "https://www.bancolombia.com/puntos-de-atencion/buscar-en-mapa" << endl;
            }
            if(opcion == 3){
                
                cout << "Bienvenido a recarga desde otro banco" << endl;
                cout << "Eliga el banco que desea: " << endl;
                for (int i = 1; i < listaBancos->length(); i++)
                {
                    cout << i << listaBancos[i] << endl;
                }
                cin >> opBanco;
                cout << "Ingrese el numero de cuenta para su banco: " << endl;
                cin >> numCuenta;
                cout << "Ingrese su numero de cedula: " << endl;
                cin >> cedula;
                while (true)
                {
                    cout << "Ingrese el valor a enviar: " << endl;
                    cin >> valor;
                    if(valor <= 0){
                        cout << "Ingrese un valor valido" << endl;
                    }
                    else{
                        saldoCuenta = valor;
                        return "Recarga realizada con exito";
                    }

                }

            }
            if(opcion == 4){
                cout << "Bienvenido a codigo de regalo" << endl;
                cout << "Ingrese el codigo de regalo" << endl;
                cin >> codigoRegalo;
                while (true)
                {
                    cout << "Ingrese el valor a enviar: " << endl;
                    cin >> valor;
                    if(valor <= 0){
                        cout << "Ingrese un valor valido" << endl;
                    }
                    else{
                        saldoCuenta = valor;
                        return "Recarga realizada con exito";
                    }

                }
                
            }
            if(opcion == 0){

                return "";
                
            }
            else{
                cout << "ingrese una opcion valida" << endl;
            }
        }

    }
    
    void colchon(){
    
        cout << "Tu colchon " << endl;
        
        while (true){
        
            cout << "Cuanto vas a meter? " << endl;
            cin >> valor;
            if(valor < saldoCuenta){
                cout << "Ingrese un valor valido" << endl;
            }
            else{
                colchon = valor;
                saldoCuenta -= colchon;
            }
            
        }
        
    }
    
    void meta(){
        string nombreMeta;
        float valorMeta;
        int dia, mes, anio,diasMeta;

        cout << "Crea tu meta" << endl;

        cout << "Ingresa el nombre de la meta:" << endl;
        cin >> nombreMeta;

        cout << "Ingresa el valor de tu meta: " << endl;
        cin >> valorMeta;

        cout << "Cuando quieres lograrlo? " << endl;
        cout << "El dia: ";
        cin >> dia;
        cout << "El mes: ";
        cin >> mes;
        cout << "El año: ";
        cin >> anio;

        cout << "Desea descontar del disponible? 1. si / 2.no";
        cin >> opcion;
        if(opcion == 1){
            saldoCuenta -= (valorMeta/10);
        }
    }
    
    void bolsillo(){
        
        string nombreBolsillo;
        float valorBolsillo;

        cout << "Crea tu primer bolsillo " << endl;

        cout << "Nombre del bolsillo " << endl;
        cin >> nombreBolsillo;

        cout << "¿Cuanto vas a dejar?" << endl;
        cin >> valorBolsillo;
        while (true)
        {
            if(valorBolsillo < saldoCuenta){
                cout << "Ingrese un valor valido" << endl;
            }
            else{
                bolsillo = valorBolsillo;
                saldoCuenta -= valorBolsillo;
            }
        }

    }
    void sacarPlata(){

    }
    void movimientos(){
        
    }



};