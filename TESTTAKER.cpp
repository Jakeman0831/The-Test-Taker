#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <time.h>

using namespace std;
int main(){
int counter = 0;
    string myArray[5];
     string myA[5];
     int wrongs = 0;
int a;
string line;
string aline;
  ifstream mfile ("inputs.txt"); //name of import file
  if (mfile.is_open())
  {
    while ( getline (mfile,line) )
    {
cout << line << endl;
cin >> myA[counter];
counter++;
    }
    mfile.close(); //close file
  }

counter = 0;
    ifstream Afile ("answers.txt"); //name of import file
  if (Afile.is_open())
  {
    while ( getline (Afile,aline) )
    {

if(myA[counter] != aline){
    cout << "Wrong!" << endl;
    wrongs++;
}
    if(myA[counter] == aline){
            -
        cout << "Right!" << endl;

}
counter++;
    }
    Afile.close(); //close file
  }


  ofstream myfile;
     myfile.open ("results.txt"); //name of export file



  myfile << "Questions wrong: " << wrongs << "\n" << "Questions right: " << 5-wrongs << endl; //content exported

     myfile.close(); //close file

}

