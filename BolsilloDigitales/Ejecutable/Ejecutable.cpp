#include <iostream>
#include "../Daviplata/Daviplata.cpp"
#include "../Nequi/Nequi.cpp"
using namespace std;


int main(){

    int opcion = 0;
    Nequi user1;
    

    if(user1.accesoApp() == true){
        while (true)
        {   
            cout << "su valor disponible es: " << user1.getSaldoCuenta() << endl; 
            cout << "Eliga la opcion para la funcion que desea: " << endl;
            cin >> opcion;
            

            if(opcion == 1){
                user1.recarga();
                user1.agregarMovimiento("Recarga");
                user1.agregarMovimiento1(user1.getValor());
            }
            if(opcion == 2){
                user1.colchon();
                user1.agregarMovimiento("Colchon");
                user1.agregarMovimiento1(user1.getValor());
            }
            if(opcion == 3){
                user1.meta();
                user1.agregarMovimiento("Meta");
                user1.agregarMovimiento1(user1.getValor());
            }
            if(opcion == 4){
                user1.bolsillo();
                user1.agregarMovimiento("Bolsillo");
                user1.agregarMovimiento1(user1.getValor());
            }
            if(opcion == 5){
                user1.sacarPlata();
                user1.agregarMovimiento("Sacar plata");
                user1.agregarMovimiento1(user1.getValor());
            }
            if(opcion == 6){
                user1.getMovimientosTipo();
                user1.getMovimientosValor();
            }
            if(opcion == 7){
                break;
            }
            if(opcion < 1 || opcion  > 7){
                cout << "Ingrese una opcion valida "<< endl;
            }
        }
    }

    return 0;
}