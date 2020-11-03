#include<iostream>
#include "computadora.h"
#include "arreglo.h"

using namespace std;

int main()
{
    Arreglo<Computadora> arreglo;

    Computadora c01("DELL L A T I T U D E","5400","Windows 10", "6144MB RAM");
    Computadora c02("Acer Aspire", "NX.M0RAL.016", "WINDOWS 7", "2 GB");
    Computadora c03("Laptop HP Pavilion Gaming", "162D3LA", "Windows 10", "265 GB SSD");
    Computadora c04("DELL L A T I T U D E 2", "5401", "Windows 10", "6144MB RAM");

    //arreglo << c01 << c02 << c03 << c03 << c04 << c02 << c02;

    arreglo << c01 << c02 << c03 << c04 <<c02 << c02;
    Computadora c05("Acer Aspire", "NX.M0RAL.016", "WINDOWS 7", "2 GB");

    Arreglo<Computadora*> ptrs=arreglo.buscar_todos(c05);
    if(ptrs.size()>0) //si al menos tiene un elemento
    {
        for(size_t i=0;i<ptrs.size();i++)
    {
        Computadora *c=ptrs[i]; //cada puntero de computadora
        std::cout<< *c << endl; //imprimira cada personaje encontrado.
    }
    }
    else{
        std::cout<< "Sin coincidencias."<<endl;
    }

    /*Computadora *ptr= arreglo.buscar(c05);

    if(ptr!=nullptr)
    {
        cout<< *ptr << endl;
    }
    else{
        cout<< "No existente."<<endl;
    }*/



    return 0;
}
