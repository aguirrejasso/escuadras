#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    int n;
    int coord_x;
    int coord_y;
    string coord;

    ifstream entryFile("file.in");

    if(!entryFile){
        cerr << "Ups.. No abrio el archivo" << endl;
    }

    entryFile >> n;

    //Leer las cordenadas del cuadro que tiene que quedar descubierto
    getline(entryFile, coord, ',');
    entryFile.get();
    entryFile >> coord_y;
    coord_x = atoi(coord.c_str());

    //Generar la matriz
    bool matrix[(const int)2^n][(const int)2^n];

    //Limpiar la matris -> x, y = false
    for(int i(0); i < 2^n; i++){
        for(int j(0); j < 2^n; j++){
            matrix[i][j] = false;
        }
    }

    //Inhabilitar el cuadro que debe quedar descubierto
    matrix[coord_x - 1][coord_y - 1] = true;



    cout << n << endl;
    cout << coord_x;
    cout << coord_y;



    return 0;
}
