#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{

if (argc!=3)
	{
		cout<<"Wrong number of parameters"<<endl;
		return 0;
	}

 ifstream input_file;
 input_file.open (argv[1]); 
 ofstream output_file;
 output_file.open (argv[2]);


  char c = input_file.get();

output_file<<"Kopia pliku "<<argv[2]<<endl;
  
  while (input_file.good()) 
  {
    cout << c;
	output_file << c;
	//input_file>>Liczba;
    c = input_file.get();
  }
  
  input_file.close();
  output_file.close();  

}
