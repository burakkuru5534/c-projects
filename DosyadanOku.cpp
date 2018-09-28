#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

typedef struct veri{
	int k,v;
}v;
v a[100];
struct FileRead{
    void readFromFile();
    vector<vector<string> > person;
};
void FileRead::readFromFile(){
    ifstream list("ds-set-input.txt");
   
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




int main() {
  
   
   
     
    FileRead file;
   
  file.readFromFile();
   
     ofstream dosya1;
   
   dosya1.open("ds-set-input-edit.txt");
		 for(int i=0;i<100;i++){
   	for(int j=0;j<4;j++){
   		dosya1 << file.person[i][j]<<'\t';
   		
   	}
   	dosya1<<endl;
   }
   
    dosya1.close();
  
 
  int key[100];
  string a;
  int b;
  for(int i=0; i<30;i++){
  
  //	 int a=atoi(file.person[i][0].c_str());
  //int b=atoi(file.person[i][1].c_str());
 //int c =atoi(file.person[i][2].c_str());
 	a=file.person[i][0]+file.person[i][1]+file.person[i][2];
  	b=atoi(a.c_str());
  	key[i]=b;	
  }
  
  for(int x=0;x<30;x++){
  	cout<<key[x]<<endl;
  }
  
    return 0;
  
}
