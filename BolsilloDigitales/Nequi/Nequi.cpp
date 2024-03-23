#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <list>
using namespace std;


class Nequi{

    private:
    int opcion,i = 3;
    float saldoCuenta = 0, valor = 0, colchon1 = 0, bolsillo1 = 0, valorBolsillo, valorMeta, valorRetiro;
    string clavesRegistradas[10] = {"1234","4567","7890"}, usuariosRegistrados[10] = {"3214459100","3214459300","3214459200"}, clave = "1234", usuario = "3214459100";
    list <string> movimientosTipo;
    list <float> movimientosValor;


    public:
    Nequi (){

    };

    float getSaldoCuenta(){
        return saldoCuenta;
    }
    
    float getValor(){
        return valor;
    }

    float getValorColchon(){
        return colchon1;
    }
    float getValorMeta(){
        return valorMeta;
    }
    float getValorBolsillo(){
        return bolsillo1;
    }
    float getValorRetiro(){
        return valorRetiro;
    }

    bool accesoApp(){

        while( i > 0){
            /*
            cout << "Ingrese su usuario: " << endl;
            cin >> usuario;

            cout << "Ingrese su clave: " << endl;
            cin >> clave;*/

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
                cin >> opBanco;
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
    
    void colchon(){
    
        cout << "Tu colchon " << endl;
        
        while (true){
        
            cout << "Cuanto vas a meter? " << endl;
            cout << "-1. para salir" << endl;
            cin >> valor;
            if(valor > saldoCuenta || valor < 0 && valor != -1){
                cout << "Ingrese un valor valido" << endl;
            }
            else if( valor == -1){
                break;
            }
            else if (valor < saldoCuenta){
                colchon1 = valor;
                saldoCuenta -= colchon1;
                break;
            }
            
            
        }
    }
    
    void meta(){
        string nombreMeta;
        float valorCuota;
        int dia, mes, anio,cuotas;

        cout << "Crea tu meta" << endl;

        cout << "Ingresa el nombre de la meta:" << endl;
        cin >> nombreMeta;

        cout << "Ingresa el valor de tu meta: " << endl;
        cin >> valorMeta;

        cout << "Cuando quieres lograrlo? " << endl;
        cout << "El dia: ";
        cin >> dia;
        cout << "El mes: ";
        cin >> mes;
        cout << "El año: ";
        cin >> anio;
        cout << "A cuantas cuotas desea la meta?" << endl;
        cin >> cuotas;
        valorCuota = valorMeta / cuotas;
        cout << "Las cuotas serian de " << valorCuota << endl;
        while (true){
            cout << "Desea descontar del disponible? 1. si / 2.no";
            cin >> opcion;
            if(opcion == 1){
                
                if(valorCuota > saldoCuenta){
                    cout << "Es imposible descontar del disponible " << endl;
                    break;
                }
                else if(valorCuota < saldoCuenta){
                    cout << "Se descontaron " << valorCuota << "del disponible " << endl;
                    break;
                }
            }
            if(opcion == 2){
                cout << "Tu bolsillo a sido creado" << endl;
            }
            else{
                cout << "Ingrese una opcion valida " << endl;
                break;
            }
        }
    }
    
    void bolsillo(){
        
        string nombreBolsillo;

        cout << "Crea tu primer bolsillo " << endl;

        cout << "Nombre del bolsillo " << endl;
        cin >> nombreBolsillo;

        cout << "¿Cuanto vas a dejar?" << endl;
        cout << "-1. para salir" << endl;
        cin >> valorBolsillo;
        
        while (true)
        {   
            if(valorBolsillo > saldoCuenta || valorBolsillo < 0 && valorBolsillo != -1){
                cout << "Ingrese un valor valido" << endl;
            }
            else if(valor == -1){
                break;
            }
            else if (valorBolsillo < saldoCuenta){
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