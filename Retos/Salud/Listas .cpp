#include <iostream>
#include <list>
using namespace std;

int main(){
    
    list <string> Frutas;
    //push_back (coloca en la ultima posicion)  push_front (coloca en la primera)
    Frutas.push_back("Manzana");
    Frutas.push_back("Pera");
    Frutas.push_back("Uva");
    Frutas.push_back("Melon");
    Frutas.push_back("Fresa");
    

    //imprimir la lista
    for (const auto & elemento:Frutas)
    {   
        cout << elemento << "";
    }

    //ingresar un valor
    auto it = next(Frutas.begin(),1);
    Frutas.insert(it,"Arandano");

    for (const auto & elemento:Frutas)
    {   
        cout << elemento << "";
    }
    
    //quitar un elemento
    //pop_front (quita el primer elemento), pop_back (quita el ultimo elemento)
    Frutas.pop_front();

    auto it1 = next(Frutas.begin(),2);
    Frutas.erase(it1); // con iterador o posicion
    Frutas.remove("Uvas"); //con el elemento que quiero eliminar


    Frutas.front();
    Frutas.back();

    auto it2 = next(Frutas.begin(),3);
    cout << *it2;

    Frutas.at(2);// localizador en memoria
    Frutas.clear();//limpia la lista
    Frutas.resize(10); //agranda la lista sin un tamaño fijo
    Frutas.empty(); // si tiene elementos o no
    Frutas.size(); // tamaño de la lista
    Frutas.min_size(); //tamaño maximo de elemntos

    return 0;
}    




