#include <iostream>
#include "../Daviplata/Daviplata.cpp"
#include "../Nequi/Nequi.cpp"
using namespace std;


int main(){

    int opcion, opApp;
    Nequi user1;
    Daviplata user2;
    
    cout << "Bienvenido a Bolsillos digitales " << endl ;
    
    while (true){
        
        cout <<"Eliga el bolsilo que desea: "<< endl << "1. para Nequi " << endl << "2. para Daviplata" << endl << "0. para salir" << endl;
        cin >> opApp;

        if (opApp == 1){
            if(user1.accesoApp() == true){
                while (true)
                {   
                    cout << "su valor disponible es: " << user1.getSaldoCuenta() << endl; 
                    cout << "Eliga la opcion para la funcion que desea: " << endl;
                    cout << "1. Recarga " << endl << "2. Colchon " << endl << "3. Meta" << endl << "4. Bolsillo" << endl << "5. Sacar plata" << endl << "6. Movimientos " << endl << "7. Salida " << endl;
                    cin >> opcion;
                    
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
                        return 0;
                    }
                    else {
                        cout << "Ingrese una opcion valida "<< endl;
                        
                    }
                }
            }
        }
        else if (opApp == 2)
        {
            if (user2.accesoApp() == true){
                while (true)
                {   
                    cout << "su valor disponible es: " << user2.getSaldoCuenta1() << endl; 
                    cout << "Eliga la opcion para la funcion que desea: " << endl;
                    cout << "1. Recarga " << endl << "2. Bolsillos" << endl << "3. Sacar plata" << endl << "4. Convenios " << endl << "5. Movimientos " << endl << "6. Salida" << endl;
                    cin >> opcion;
                    
                    if(opcion == 1){
                        user2.recarga();
                        user2.agregarMovimientoTipo("Recarga");
                        user2.agregarMovimientoValor(user2.getValor());
                    }
                    else if(opcion == 2){
                        user2.bolsillo();
                        user2.agregarMovimientoTipo("Bolsillo");
                        user2.agregarMovimientoValor(user2.getValorBolsillo());
                    }
                    else if(opcion == 3){
                        user2.sacarPlata();
                        user2.agregarMovimientoTipo("Sacar plata");
                        user2.agregarMovimientoValor(user2.getValorRetiro());
                    }
                    else if(opcion == 4){
                        user2.pagos();
                        user2.agregarMovimientoTipo("Convenios");
                        user2.agregarMovimientoValor(0);
                    }
                    else if(opcion == 5){
                        user2.imprimirMovimientoTipo();
                        cout << endl;
                        user2.imprimirMovimientoValor();
                    }
                    else if(opcion == 6){
                        cout << "Gracias por usar Daviplata" << endl;
                        return 0;
                    }
                    else{
                        cout << "Ingrese una opcion valida "<< endl;
                        
                    }
                }
            }
        }
        else if(opApp == 0){
            cout << "Gracias " << endl;
            return 0;
        }
        else {
            cout << "Ingrese una opcion valida" << endl;
            
        }
    }


    return 0;
}