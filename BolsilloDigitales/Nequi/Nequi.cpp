#include <iostream>
using namespace std;

class Nequi{

    private:
    int opcion;
    string clavesRegistradas[10] = {}, usuariosRegistrados[10] = {}, clave, usuario;

    bool accesoApp(){

        while(true){
            cout << "Ingrese su usuario: " << endl;
            cin >> usuario;

            cout << "Ingrese su clave: " << endl;
            cin >> clave;

            for (int i = 0; i < 10; i++){
                
                if (clave == clavesRegistradas[i] && usuario == usuariosRegistrados[i]){
                    return true;

                }                

            }

            cout << "Clave o usuario incorrestos" << endl;
            cout << "Ingrese un usuario y clave validos" << endl;

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