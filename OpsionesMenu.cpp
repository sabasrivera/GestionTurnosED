#include "Banco.hpp"

//mostrando las opsiones que tendra el menu 

int Banco::OpsionesMenu(){
    cout << "1. Registrar cliente general" << endl;
    cout << "2. Registrar cliente VIP" << endl;
    cout << "3. Atender cliente" << endl;
    cout << "4. Consultar historial de turnos atendidos" << endl;
    cout << "5. Salir" << endl;
    cout << "---------------------------------------------------" << endl;
    cout <<"ELIJA UNA OPSION:";
    cin >> OpsionesDelMenu;
    return OpsionesDelMenu;
}