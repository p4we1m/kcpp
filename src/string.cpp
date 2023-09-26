#include <iostream>
#include <string>
using namespace std;

int dlugosc(string str1){
    return str1.size();
}

string append(string str1, string str2) {
    str1.append(str2);
    return str1;
}

char at(string str1, int liczba) {
    return str1.at(liczba);
}

void swap(string& str1, string& str2){
    str1.swap(str2);
}

string substr(string str1,int l1,int l2){
    return str1.substr(l1,l2);
}

string erase(string str1,int l1){
    return str1.erase(l1); // Poprawiono argument funkcji erase
}

string clear(string str1){
    str1.clear(); // Poprawiono implementację funkcji clear
    return str1;
}

int main(){
    string s1 = "Hello, ";
    string s2 = "world!";
    cout <<"Dlugosc: " << dlugosc(s2) << endl;
    cout <<"Dodawanie: " << append(s1,s2) << endl;
    cout <<"Metoda at: " << at(s1,4) << endl;
    cout <<"Metoda swap: przed swap: " << s1 << ", " << s2 << endl;
    swap(s1, s2);
    cout <<"Metoda swap: po swap: " << s1 << ", " << s2 << endl;
    cout <<"Metoda substr: " << substr(s1,4,1) << endl;
    cout <<"Metoda erase: " << erase(s1,3) << endl; // Dodano wywołanie funkcji erase
    cout <<"Metoda clear: " << clear(s1) << endl; // Dodano wywołanie funkcji clear
    
    return 0;
}
