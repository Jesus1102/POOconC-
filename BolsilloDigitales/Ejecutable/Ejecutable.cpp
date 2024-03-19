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
            cout << "Eliga la opcion para la funcion que desea: " << endl;
            cin >> opcion;

            if(opcion == 1){
                user1.recarga();
            }
            if(opcion == 2){
                user1.colchon();
            }
            if(opcion == 3){
                user1.meta();
            }
            if(opcion == 4){
                user1.bolsillo();
            }
            if(opcion == 5){
                user1.sacarPlata();
            }
            if(opcion == 6){
                break;
            }
        }
    }

    return 0;
}