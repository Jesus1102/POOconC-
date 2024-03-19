#include <iostream>
using namespace std;

class Nequi{

    private:
    int opcion,i = 3;
    string clavesRegistradas[10] = {"1234","4567","7890"}, usuariosRegistrados[10] = {"3214459100","3214459300","3214459200"}, clave, usuario;


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

        int numCuenta, cedula;
        float valor;

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
                        return "Recarga realizada con exito";
                    }

                }

            }
            if(opcion == 2){
                
            }
            if(opcion == 3){
                
            }
            if(opcion == 4){
                
            }
            if(opcion == 5){
                
            }
        }

    }
    void colchon(){

    }
    void meta(){

    }
    void bolsillo(){

    }
    void sacarPlata(){

    }
    void movimientos(){
        
    }



};