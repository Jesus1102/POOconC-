#include <iostream>
#include "../Daviplata/Daviplata.cpp"
#include "../Nequi/Nequi.cpp"
using namespace std;


int main(){

    int opcion, opApp;
    Nequi user1;
    Davipalta User2;
    
    
    while (true){
        
        cout << "Bienvenido a Bolsillos digitales " << endl <<"Eliga el bolsilo que desea: "<< endl << "1. para Nequi " << "2. para Daviplata" << endl << "0. para salir" << endl;
        cin >> opApp;

        if (opApp == 1){
            if(user1.accesoApp() == true){
            while (true)
            {   
                cout << "su valor disponible es: " << user1.getSaldoCuenta() << endl; 
                cout << "Eliga la opcion para la funcion que desea: " << endl;
                cin >> opcion;
                /*
                switch (opcion)
                {
                case 1:
                    user1.recarga();
                    user1.agregarMovimientoTipo("Recarga");
                    user1.agregarMovimientoValor(user1.getValor());
                    break;
                case 2:
                    user1.colchon();
                    user1.agregarMovimientoTipo("Colchon");
                    user1.agregarMovimientoValor(user1.getValor());
                    break;
                case 3:
                    user1.meta();
                    user1.agregarMovimientoTipo("Meta");
                    user1.agregarMovimientoValor(user1.getValor());
                    break;
                case 4:
                    user1.bolsillo();
                    user1.agregarMovimientoTipo("Bolsillo");
                    user1.agregarMovimientoValor(user1.getValor());
                    break;
                case 5:
                    user1.sacarPlata();
                    user1.agregarMovimientoTipo("Sacar plata");
                    user1.agregarMovimientoValor(user1.getValor());
                    break;
                case 6:
                    user1.getMovimientosTipo();
                    user1.getMovimientosValor();
                    break;
                case 7:
                    cout << "hi";
                    break;
                default:
                    cout << "no valida" << endl;
                    break;
                }
                */
                
                if(opcion == 1){
                    user1.recarga();
                    user1.agregarMovimientoTipo("Recarga");
                    user1.agregarMovimientoValor(user1.getValor());
                }
                else if(opcion == 2){
                    user1.colchon();
                    user1.agregarMovimientoTipo("Colchon");
                    user1.agregarMovimientoValor(user1.getValorColchon());
                }
                else if(opcion == 3){
                    user1.meta();
                    user1.agregarMovimientoTipo("Meta");
                    user1.agregarMovimientoValor(user1.getValorMeta());
                }
                else if(opcion == 4){
                    user1.bolsillo();
                    user1.agregarMovimientoTipo("Bolsillo");
                    user1.agregarMovimientoValor(user1.getValorBolsillo());
                }
                else if(opcion == 5){
                    user1.sacarPlata();
                    user1.agregarMovimientoTipo("Sacar plata");
                    user1.agregarMovimientoValor(user1.getValorRetiro());
                }
                else if(opcion == 6){
                    user1.imprimirMovimientoTipo();
                    cout << endl;
                    user1.imprimirMovimientoValor();
                }
                else if(opcion == 7){
                    cout << "Gracias por usar Nequi" << endl;
                    break;
                }
                else {
                    cout << "Ingrese una opcion valida "<< endl;
                    
                }
                
            }
        }
        }
        else if (opApp == 2)
        {
            if (User2.accesoApp() == true){

            }
        }
        else {
            cout << "ingrese una opcion valida" << endl;
            break;
        }
    }


    return 0;
}