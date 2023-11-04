#include "student_file.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
    Jugadores players;
    //Pruebas del proyecto
   
    vector<int> habilidades1 = {1, 2, 3};
    int N1 = 2, K1 = 2;
    vector<int> resultado1 = players.Torneo(habilidades1, N1, K1);
    cout << "{" << resultado1[0] << "," << resultado1[1] << "}" << endl;

    vector<int> habilidades2 = {49, 24, 26, 12, 5, 33, 25, 30, 35, 41, 46, 23, 21, 3, 38, 43, 11, 19, 34, 29, 20, 32, 39, 7, 50};
    int N2 = 10, K2 = 399;
    vector<int> resultado2 = players.Torneo(habilidades2, N2, K2);
    cout << "{" << resultado2[0] << "," << resultado2[1] << "}" << endl;
  
    vector<int> habilidades3 = {1, 2, 3};
    int N3 = 2, K3 = 4;
    vector<int> resultado3 = players.Torneo(habilidades3, N3, K3);
    cout << "{" << resultado3[0] << "," << resultado3[1] << "}" << endl;

    vector<int> habilidades4 = {30, 12};
    int N4 = 34, K4 = 80;
    vector<int> resultado4 = players.Torneo(habilidades4, N4, K4);
    cout << "{" << resultado4[0] << "," << resultado4[1] << "}";

    return 0;
}

