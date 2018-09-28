#include <iostream>
#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#include <vector>
#include <sstream>


using namespace std;
 vector<vector<string> > person; // for read from file
struct FileRead{
    void readFromFile();
   
};
void FileRead::readFromFile(){
    ifstream list("ds-set-input.txt"); // we are reading from hs-set-10k.txt
   
    string line;
    
//her satýr için;
while (getline(list, line)) {
    string feature;
    stringstream stream(line);
    vector<string> features;
    //her özellik için
    while( getline(stream, feature,'\t') ){
    	 
  
        features.push_back(feature);
    }
    person.push_back(features);
        
}
    }
    string dizi[100][4];
    
    struct FileWrite{
    	void WritetoFile();
    };
    
    void FileWrite::WritetoFile(){
    
   ofstream dosya1;
  	dosya1.open("hs-set-input-edit.txt"); //we are writing to this file 
  
  for(int i=0;i<100;i++){
  	for(int j=0;j<4;j++){
  		dizi[i][j]=person[i][j]; // we are writing to array what we read from hs.txt
  	}
  }
    	
    		for(int x=0;x<1000;x++){ // we are writing to file what we read from hs.txt
		for(int y=0;y<4;y++){
		dosya1<<dizi[x][y]<<"\t";
		}
		dosya1<<endl;
	
	}
dosya1.close();
    }
    
    int main(){
    	
    	
    FileRead file;
  		file.readFromFile();
	FileWrite write;
	write.WritetoFile();
     
    	return 0;
    }
