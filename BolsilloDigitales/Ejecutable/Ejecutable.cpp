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
                user1.agregarMovimientoTipo("Recarga");
                user1.agregarMovimientoValor(user1.getValor());
            }
            if(opcion == 2){
                user1.colchon();
                user1.agregarMovimientoTipo("Colchon");
                user1.agregarMovimientoValor(user1.getValor());
            }
            if(opcion == 3){
                user1.meta();
                user1.agregarMovimientoTipo("Meta");
                user1.agregarMovimientoValor(user1.getValor());
            }
            if(opcion == 4){
                user1.bolsillo();
                user1.agregarMovimientoTipo("Bolsillo");
                user1.agregarMovimientoValor(user1.getValor());
            }
            if(opcion == 5){
                user1.sacarPlata();
                user1.agregarMovimientoTipo("Sacar plata");
                user1.agregarMovimientoValor(user1.getValor());
            }
            if(opcion == 6){
                user1.getMovimientosTipo();
                user1.getMovimientosValor();
            }
            if(opcion == 7){
                cout << "hi" ;
            }
            if(opcion <= 0 || opcion >= 8){
                cout << "Ingrese una opcion valida "<< endl;
                break;
            }
        }
    }

    return 0;
}