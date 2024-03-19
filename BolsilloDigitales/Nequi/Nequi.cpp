#include <iostream>
using namespace std;

class Nequi{

    private:
    int opcion,i = 0;
    string clavesRegistradas[10] = {}, usuariosRegistrados[10] = {}, clave, usuario;


    Nequi (){

    };
    bool accesoApp(){

        while( i < 3){
            cout << "Ingrese su usuario: " << endl;
            cin >> usuario;

            cout << "Ingrese su clave: " << endl;
            cin >> clave;

            for (int i = 0; i < 10; i++){
                
                if (clave == clavesRegistradas[i] && usuario == usuariosRegistrados[i]){
                    return true;

                }                

            }
            i++;

            cout << "Clave o usuario incorrestos" << endl;
            cout << "Ingrese un usuario y clave validos" << endl;
            cout << "Tiene " << i << "intentos mas" << endl;

        };
    }

    void recarga(){

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