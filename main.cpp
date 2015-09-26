/* 
 * File:   main.cpp
 * Author: Benet
 *
 * Created on 23 de septiembre de 2015, 18:24
 */

#include <iostream>

using namespace std;

/*
 * bucles c
 */



int main() {

    cout <<"Bucle For"<< endl;
    
    for(int i=0; i<10; i++){
        if(i<10-1){
            cout <<"Hola, ";
        }else{
            cout <<"Hola."<< endl;
        }
    }
    
    cout <<"Bucle Wile"<< endl;
    int i=0; 
    while(i<10){
        if(i<10-1){
            cout << "Hola, ";
        }else{
            cout << "Hola."<< endl;
        }
        i++;
    }
    
    cout <<"Bucle Do Wile"<< endl;
    i=0;
    do{
        if(i<10-1){
            cout << "Hola, ";
        }else{
            cout << "Hola."<< endl;
        }
        i++;
    }while(i<10);
    
    
    return 0;
}

