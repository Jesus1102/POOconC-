#include <iostream>
#include <list>
#include "./BolsilloDigitales/Nequi/Nequi.cpp"
using namespace std;

class Davipalta : public Nequi{

    private:

    string correo;


    public:
    Davipalta(float saldoCuenta){

    };
    
    void pagos(){

        int numCuenta, cedula, opPago, opcion, opcion1, random, valorPago1 [4] = {15000,30000, 45000,90000}, valorPago2 [3] = {11900,14900,149000}, valorPago3[4] = {12000,24000,12900,13000};
        float saldoCuenta = getSaldoCuenta();
        srand(time(NULL));

        random = 100000+rand()%(999999+1-100000);
        string listaPagos[3] = {"1. Spotify","2. Crunchyroll","3. Cine Colombia"};


        cout << "Bienvenido a recarga desde otro banco" << endl;
        cout << "Eliga el banco que desea: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << listaPagos[i] << endl;
        }
        while (true){
            cin >> opPago;

            if(opPago > 0 && opPago < 4){
                if (opPago == 1)
                {
                    cout << "1. Bono 15.000 " << endl <<  "2. Bono 30.000 " << endl << "3. Bono 45.000 " << endl << "4. Bono 90.000 " << endl;
                    while (true){
                        cin >>  opcion;
                        if (opcion > 0 || opcion < 5){
                            
                            cout << "Bono valido por " << opcion << "meses" << endl;
                            cout << "1. para comprar / 2. para cancelar" << endl;
                            cin >> opcion1;
                            if (opcion1 == 1 && saldoCuenta > 0)
                            {
                                cout << "Su compra se realzo con exito " << endl;
                                cout << "Su codigo es " << random;
                                saldoCuenta -= valorPago1[opcion-1];

                                break;
                            }
                            if (opcion1 == 2 && getSaldoCuenta() > 0)
                            {
                                cout << "Pago cancelado " << endl;
                                break;
                            }
                            else{
                                cout << "Ingrese una opcion valida" << endl;
                                break;
                            }
                            
                        }
                        else{
                            cout << "Ingrese una opcion valida " << endl;
                            break;
                        }
                        
                    }
                }
                if (opPago == 2){
                    cout << "1. Fan 11.900 por 1 mes " << endl <<  "2. MegaFan 14.900 por 1 mes " << endl << "3. MegaFan 149.000 por 1 año " << endl;
                    while (true){
                        cin >>  opcion;
                        if (opcion > 0 || opcion < 4){
                            
                            cout << "1. para comprar / 2. para cancelar" << endl;
                            cin >> opcion1;
                            if (opcion1 == 1 && saldoCuenta > 0)
                            {
                                cout << "Su compra se realzo con exito " << endl;
                                cout << "Su codigo es " << random;
                                saldoCuenta -= valorPago2[opcion-1];

                                break;
                            }
                            else if (opcion1 == 2 && getSaldoCuenta() > 0)
                            {
                                cout << "Pago cancelado " << endl;
                                break;
                            }
                            else if(saldoCuenta < 0){
                                cout << "Fondos Insuficientes " << endl;
                                break;
                            }
                            else{
                                cout << "Ingrese una opcion valida " << endl;
                                break;
                            }
                            
                        }
                        else{
                            cout << "Ingrese una opcion valida " << endl;
                            break;
                        }
                        
                    }
                }
                if (opPago == 3){
                    cout << "1. Entrada sencilla 12.000 " << endl <<  "2. Entrada doble 24.000" << endl << "3. Combo Crispetas + gaseosa 12.900" << endl << "Crispetas, gaseosa y chocolatina 13000" << endl;
                    while (true){
                        cin >>  opcion;
                        if (opcion > 0 || opcion < 5){
                            
                            cout << "1. para comprar / 2. para cancelar" << endl;
                            cin >> opcion1;
                            if (opcion1 == 1 && saldoCuenta > 0)
                            {
                                cout << "Su compra se realzo con exito " << endl;
                                cout << "Su codigo es " << random;
                                saldoCuenta -= valorPago3[opcion -1];

                                break;
                            }
                            else if (opcion1 == 2 && getSaldoCuenta() > 0)
                            {
                                cout << "Pago cancelado " << endl;
                                break;
                            }
                            else if(saldoCuenta < 0){
                                cout << "Fondos Insuficientes " << endl;
                                break;
                            }
                            else{
                                cout << "Ingrese una opcion valida " << endl;
                                break;
                            }
                            
                        }
                        else{
                            cout << "Ingrese una opcion valida " << endl;
                            break;
                        }
                        
                    }
                }
            }
            else{
                cout << "Ingrese una opcion valida " << endl;
                break;
            }
        }
    }
    
    
};