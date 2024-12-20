#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void crypting(){
    string tekst;
    cout<<"Podaj tekst: ";
    getline(cin, tekst);
    cin.ignore();

    fstream image;
    image.open("image.ppm", ios::out | ios::in);
    image.close();
}
void decrypting(){}
int main(){
    int wybor;
    cout<<"---------------"<<endl;
    cout<<"1.Crypting"<<endl;
    cout<<"2.Decrypting"<<endl;
    cout<<"---------------"<<endl;
    cin>>wybor;
    switch(wybor){
        case 1:
            crypting();
        break;
        case 2:
            decrypting();
        break;
    }
}