#include<iostream>
#include<fstream>

int main(){

    char sourceFile[]="S1.txt";

    char destinationFile[]= "S2.txt";

    ifstream sourceFile(sourceFile,ios::in);

    sourceFile.close();

        if(!sourceFile){
            
        }
}