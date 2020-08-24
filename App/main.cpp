#include <stdio.h>
#include <iostream>
#include "App.h"

using namespace std;


/* Application entry */
int main(int argc, char *argv[]){

    cout << "Hello world" << endl;
    cout << "Soma: " << somar(5,6) << endl;
    cout << "Multiplicar: " << multiplicar(5,6) << endl;
    cout << "Subtração: " << subtrair(5,6) << endl;
   
    return 0;
}