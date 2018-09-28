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
    ifstream list("hs.txt"); // we are reading from hs.txt
   
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
    
    	string A[10000][6]; // for 10 k hs-set 10k.txt
    	
    struct FileWrite{
    	void WritetoFile();
    };
    
    void FileWrite::WritetoFile(){
    
    	
   
   ofstream dosya1;
  	dosya1.open("dosya1.txt"); //we are writing to this file 
  
  for(int i=0;i<10000;i++){
  	for(int j=0;j<6;j++){
  		A[i][j]=person[i][j]; // we are writing to array what we read from hs.txt
  	}
  }
    	
    		for(int x=0;x<10000;x++){ // we are writing to file what we read from hs.txt
		for(int y=0;y<6;y++){
		cout<<A[x][y]<<"\t";
		}
		cout<<endl;
	
	}
dosya1.close();
    }
int main(){
	
	for (int j=1;j<10000;j++){ 

	
string key1 = A[j][0];
string key2 = A[j][1];
string key3 = A[j][2];
string key4 = A[j][3];
string key5 = A[j][4]; // type key
string key6 = A[j][5];
	

	int i = j-1;
	while(i>=0 & A[i][4].compare(key5)){
					A[i+1][0]=A[i][0];
					A[i+1][1]=A[i][1];
					A[i+1][2]=A[i][2];
					A[i+1][3]=A[i][3];
					A[i+1][4]=A[i][4];
					A[i+1][5]=A[i][5];
		i=i-1;
		
	}
	
	A[i+1][0]=key1;
	A[i+1][1]=key2;
	A[i+1][2]=key3;
	A[i+1][3]=key4;
	A[i+1][4]=key5;
	A[i+1][5]=key6;
	
	} //
	
		for(int x=0;x<10000;x++){ // we are writing to file what we read from hs.txt
		for(int y=0;y<6;y++){
		cout<<A[x][y]<<"\t";
		}
		cout<<endl;
}
	return 0;
}

	
