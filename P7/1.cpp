#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>

using namespace std;

int main(){
    
    char name[100];
        // cout<<"Enter the text - ";
        // cin.getline(name,100);

        // for(int i=0;i<strlen(name);i++){
        //     name[i]=toupper(namethod[i]);
        // }
    ifstream i ("output.txt");
        while(getline(i,name)){
            cout<<name;
        }
        // cout<<i;
    i.close();
}
