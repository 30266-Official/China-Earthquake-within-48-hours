#include <fstream>  
#include <string>  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    system("upgrade.java");
    system("file.bat");
    ifstream in("time2.json");  
    ofstream out("time2.dat");  
    string filename;  
    string line;  
  
    if(in)
    {  
        while (getline (in, line)) 
        { 
            cout << line << endl;
            out << line << endl;
        }  
    }  
    return 0;  
}  