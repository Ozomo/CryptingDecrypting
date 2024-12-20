#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
void crypting(){
    int width=10;
    int height=10;
    int resolution=64;
    int r;
    int g=1;
    int b=1;
    string tekst;
    cout<<"Podaj tekst: ";
    getline(cin, tekst);
    cin.ignore();

    fstream image;
    image.open("image.ppm", ios::out | ios::in);
    image<<"P3"<<endl;
    image<<width<<" "<<height<<endl;
    image<<resolution<<endl;
    for(int i = 0; i<= tekst.length(); i++){
        char color= tekst[i] - 96;
        image<<color<<" "<<g<<" "<<b<<endl;
    }
    image.close();
}
void decrypting(){}
int main(){
    string Bletters[26] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    int Bnumbers[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    const string Sletters[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
    int Snumbers[26] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
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