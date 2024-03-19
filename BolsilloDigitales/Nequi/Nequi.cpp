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