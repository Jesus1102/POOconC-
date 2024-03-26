#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <list>
using namespace std;


class Daviplata {

    private:
    int opcion,i = 3;
    float saldoCuenta = 0, valor = 0, bolsillo1 = 0, valorBolsillo, valorRetiro;
    string clavesRegistradas[10] = {"1234","4567","7890"}, usuariosRegistrados[10] = {"3214459100","3214459300","3214459200"}, clave , usuario;
    list <string> movimientosTipo;
    list <float> movimientosValor;
    

    public:
    Daviplata(){

    };
    
    float getSaldoCuenta1(){
        return saldoCuenta;
    }
    
    float getValor(){
        return valor;
    }

    float getValorBolsillo(){
        return bolsillo1;
    }
    
    float getValorRetiro(){
        return valorRetiro;
    }

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
            cout << "Tiene " << i << " intentos mas" << endl;

        }
        return false;
    }
    
    string pagos(){

        int numCuenta, cedula, opPago, opcion, opcion1, random, valorPago1 [4] = {15000,30000, 45000,90000}, valorPago2 [3] = {11900,14900,149000}, valorPago3[4] = {12000,24000,12900,13000};
        
        srand(time(NULL));

        random = 100000+rand()%(999999+1-100000);
        string listaPagos[3] = {"1. Spotify","2. Crunchyroll","3. Cine Colombia"};


        cout << "Bienvenido a la seccion de pagos" << endl;
        cout << "Eliga el convenio que desea: " << endl;
        for (int i = 0; i < 3; i++)
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
                            
                            cout << "Bono valido por " << opcion << " meses" << endl;
                            cout << "1. para comprar / 2. para cancelar" << endl;
                            cin >> opcion1;
                            if (opcion1 == 1 && saldoCuenta > 0)
                            {
                                cout << "Su compra se realzo con exito " << endl;
                                saldoCuenta -= valorPago1[opcion-1];
                                cout << "su codigo es " << random << endl;
                                return "Su compra se realzo con exito ";
                            }
                            if (opcion1 == 2 && saldoCuenta > 0)
                            {
                                return "Pago cancelado";
                            }
                            else if(saldoCuenta < 0){
                                return "Fondos insuficientes";
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
                                saldoCuenta -= valorPago1[opcion-1];
                                cout << "su codigo es " << random << endl;
                                return "Su compra se realzo con exito ";
                            }
                            else if (opcion1 == 2 )
                            {
                                return "Pago cancelado ";
                                
                            }
                            else if(saldoCuenta < 0){
                                return "Fondos insuficientes";
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
                                saldoCuenta -= valorPago1[opcion-1];
                                cout << "su codigo es " << random << endl;
                                return "Su compra se realzo con exito ";
                            }
                            else if (opcion1 == 2 )
                            {
                                return "Pago cancelado ";
                            }
                            else if(saldoCuenta < 0){
                                return "Fondos insuficientes";
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
        return "";
    }
    
    string recarga(){

        int numCuenta, cedula, opBanco;
        string listaBancos[5] = {"1. AVVILLAS","2. BBVA","3. Colpatria","4. Davivienda","5. Itau"}, codigoRegalo;

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
                    cout << "Ingrese el valor a recargar: " << endl;
                    cin >> valor;
                    if(valor <= 0){
                        cout << "Ingrese un valor valido" << endl;
                    }
                    else{
                        saldoCuenta += valor;
                        return "Recarga realizada con exito";
                    }

                }
            }
            if(opcion == 2){
                cout << "Bienvenido a recagar con efectivo" << endl;
                cout << "Dirigase al corresponsal mas cercano" << endl;
                cout << "los podra encontrar en el siguiente link: " << endl;
                cout << "https://www.bancolombia.com/puntos-de-atencion/buscar-en-mapa" << endl;
                while (true)
                {
                    cout << "Ingrese el valor a recargar: " << endl;
                    cin >> valor;
                    if(valor <= 0){
                        cout << "Ingrese un valor valido" << endl;
                    }
                    else{
                        saldoCuenta += valor;
                        return "Recarga realizada con exito";
                    }

                }

            }
            if(opcion == 3){
                
                cout << "Bienvenido a recarga desde otro banco" << endl;
                cout << "Eliga el banco que desea: " << endl;
                for (int i = 0; i < 5; i++)
                {
                    cout << listaBancos[i] << endl;
                }
                while (true){
                    cin >> opBanco;
                    if(opBanco > 0 && opBanco < 6){
                        opBanco -= 1;
                        cout << "Ingrese el numero de cuenta para su banco: " << endl;
                        cin >> numCuenta;
                        cout << "Ingrese su numero de cedula: " << endl;
                        cin >> cedula;
                        while (true)
                        {
                            cout << "Ingrese el valor a recargar: " << endl;
                            cin >> valor;
                            if(valor <= 0){
                                cout << "Ingrese un valor valido" << endl;
                            }
                            else{
                                saldoCuenta += valor;
                                return "Recarga realizada con exito";
                            }

                        }
                    }
                    else{
                        cout << "Ingrese una opcion valida " << endl;
                        break;
                    }
                }

            }
            if(opcion == 4){
                cout << "Bienvenido a codigo de regalo" << endl;
                cout << "Ingrese el codigo de regalo" << endl;
                cin >> codigoRegalo;
                while (true)
                {
                    cout << "Ingrese el valor a recargar: " << endl;
                    cin >> valor;
                    if(valor <= 0){
                        cout << "Ingrese un valor valido" << endl;
                    }
                    else{
                        saldoCuenta += valor;
                        return "Recarga realizada con exito";
                    }

                }
                
            }
            if(opcion == 0){

                return "";
                
            }
            else{
                cout << "ingrese una opcion valida" << endl;
            }
        }


        return "";
    }
    
    void bolsillo(){
        
        string nombreBolsillo;

        cout << "Crea tu primer bolsillo " << endl;

        cout << "Nombre del bolsillo " << endl;
        cin >> nombreBolsillo;

        while (true)
        {   
            cout << "¿Cuanto vas a dejar?" << endl;
            cout << "0. para salir" << endl;
            cin >> valorBolsillo;
            
            if(valorBolsillo > saldoCuenta || valorBolsillo < 0 ){
                cout << "Ingrese un valor valido" << endl;
                ;
            }
            else if(valor == 0){
                break;
            }
            else if (valorBolsillo < saldoCuenta ){
                bolsillo1 = valorBolsillo;
                saldoCuenta -= valorBolsillo;
                break;
            }
        }

    }
    
    void sacarPlata (){

        srand(time(NULL));

        int opcion1, random;
        random = 100000+rand()%(999999+1-100000);

        cout << "Opciones para sacar" << endl;
        cout << "1. Para cajero bancolombia" << endl;
        cout << "2. Para punto fisico (Corresponsales y puntos nequi)" << endl;
        cout << "3. Para conocer los lugares de retiro " << endl;   
        cin >> opcion1;
    
        if (opcion1 == 1 || opcion1 == 2){
            cout << "De donde desea que saga la plata? " << endl;
            cout << "1. Disponible " << endl << "2. Bolsillo " << endl;
            cin >> opcion;
            if (opcion == 1){
                cout << "Cuanto desea sacar? " << endl;
                cin >> valorRetiro;
                while(valorRetiro > saldoCuenta){
                    cout << "Ingrese un valor valido" << endl;
                    cin >> valorRetiro;
                    if (valorRetiro <= saldoCuenta){
                        break;
                    }
                }
                saldoCuenta -= valorRetiro;
                cout << "El codigo para retirar es: " << random << endl;

            }
            if (opcion == 2){
                cout << "Cuanto desea sacar? " << endl;
                cin >> valorRetiro;
                while(valorRetiro > bolsillo1){
                    cout << "Ingrese un valor valido" << endl;
                    cin >> valorRetiro;
                    if (valorRetiro <= bolsillo1){
                        break;
                    }
                }
                bolsillo1 -= valorRetiro;
                cout << "El codigo para retirar es: " << random << endl;
                cout << "su nuevo saldo en bolsillo es " << bolsillo1 << endl;
            }

        }
        else if (opcion1 == 3){   
            cout << "Copie este link para saber sus puntos de retiro cercano " << endl;
            cout << "https://www.bancolombia.com/puntos-de-atencion/buscar-en-mapa";
        }
    

    }
    
    void agregarMovimientoTipo(string tipo) {
        

        movimientosTipo.push_back(tipo);

        // Verificar si hay más de 3 movimientos
        if (movimientosTipo.size() > 3) {
            // Eliminar el movimiento más antiguo (el primero en la lista)
            movimientosTipo.pop_front();
        }
    }
    
    void agregarMovimientoValor(float monto) {
    
        movimientosValor.push_back(monto);

        // Verificar si hay más de 3 movimientos
        if (movimientosValor.size() > 3) {
            // Eliminar el movimiento más antiguo (el primero en la lista)
            movimientosValor.pop_front();
        }
    }

    void imprimirMovimientoTipo(){

        for(const auto & Tipo: movimientosTipo){
            cout << Tipo << " " ;
        }
        cout << endl;
    }

    void imprimirMovimientoValor(){

        for(const auto & Tipo: movimientosValor){
            cout << Tipo << " " ;
        }
        cout << endl;
    }

    
    
};