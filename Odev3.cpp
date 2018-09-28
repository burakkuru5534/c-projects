#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
struct FileRead{
    void readFromFile();
    void readFromFile2();
    vector<vector<string> > person;
     vector<vector<string> > person2;
};

typedef struct hashtable{
	int key;
	string value;
}h;
h table[131071];
h data;


// read from ds-set-index.txt and person vektorune ata okuduklarýný
void FileRead::readFromFile(){
    ifstream list("ds-set-input.txt");
    string line;
//for every line
while (getline(list, line)) {
    string feature;
    stringstream stream(line);
    vector<string> features;
    //for every tab
    while( getline(stream, feature,'\t') ){
        features.push_back(feature);
    }
    person.push_back(features);
}
    }	
    void FileRead::readFromFile2(){
    ifstream list("ds-set-lookup.txt");
    string line;
//for every line
while (getline(list, line)) {
    string feature;
    stringstream stream(line);
    vector<string> features;
    //for every tab
    while( getline(stream, feature,'\t') ){
        features.push_back(feature);
    }
    person2.push_back(features);
}
}
FileRead file;
/*	void keyatamainput(){// unic key atama from input.txt for insertion
	
  	string a;
  	int b;
  	for(int i=0; i<100;i++){ 
 	  a=file.person[i][0]+file.person[i][1]+file.person[i][2];
  	  b=atoi(a.c_str());
  	  table[i].key=b;	
 	  }	
	}-*/

	int	hash(int key){ // hash fonk.
			int M=131071;
	float A=(sqrt(5)-1)/2;
return M*fmod(key*A,1);
	}
	
	int	probinghash(int key){ 
		int i;
		int M=131071;
		return (hash(key)+7*i+3*i*i)%M;
	}


	
		
  
   
    

/*	void 	read()
	{
		ifstream input_file(FileName.c_str());

		if (!input_file.is_open())							// File opening control	
		{
		printf("ERROR!! File(s) can not open.\n");
		return;
		}
	
	}*/
	 // read from lookup.txt and input.txt
	
class list{
public:
	int insertion(h data){
			if(table[hash(data.key)].key == -1){
		table[hash(data.key)] = data;
		return 1;
	}
	else {// if there is a collision
		int donusSayisi =0;
		int indis = hash(data.key);
		while(table[indis].key != data.key && table[indis].key!=-1){
	
			indis ++;
			if(indis>=131071){
				if(donusSayisi>=1){
				cout<<"hash table is full";
					return -1;
				}
				indis = indis %131071;
				donusSayisi++;
					
			}	
		}
		
		table[indis].value= data.value;
		table[indis].key = data.key;
	
	}
	}



void	fonk1(){
		for(int i=0;i<10000;i++){
	string a;
  	int b;
  	 a=file.person[i][0]+file.person[i][1]+file.person[i][2];
  	  b=atoi(a.c_str());
  	  table[i].key=b;
	data.key=table[i].key;
	table[i].key=-1;
	data.value=file.person[i][3];
	insertion(data);
	
	}
	
	}
}liste1;
class dictionary{
 public:
 string lookup(int key){
    	if(table[hash(key)].key == key){
		return table[hash(key)].value;
	}
	else {
		int donusSayisi =0;
		int indis = hash(key);
		while(table[indis].key != key && table[indis].key!=key){
		//printf("%d %d %d \n",a[indis].k, data.k, indis);
			indis ++;
			if(indis>=131071){
				if(donusSayisi>=1){
					printf("hashtable'da kayit yok");
					return "-1";
				}
				indis = indis %131071;
				donusSayisi++;
			}
		}
		
		return table[indis].value;
		
	}
	}
	void fonk2(){
		for(int i=0;i<10000;i++){
		for(int j=0;j<100;j++){
	string a;
  	int b;
  	 a=file.person2[i][j];
  	  b=atoi(a.c_str());
  	  table[i].key=b;
		
		}
	
	}
	for(int i=0;i<10000;i++){
	lookup(table[i].key);		
	}
	}
	
}d1;
class bookCharacters{
	//keys which are combined by page no, line no, index no
};
int main(int argc, char** argv) {
		// hashtable'da her key'e -1 deðer atadýk. boþ olduðunu göstermek için
		for(int i = 0;i<131071;i++){ 
		table[i].key = -1;
	}
	
	

	file.readFromFile();
	liste1.fonk1();
cout<<"Avarage number of Collision First(1000)"<<endl;
cout<<"Avarage number of Collision First(10000)"<<endl;
cout<<"Avarage number of Collision First(100000)"<<endl;
cout<<"Avarage number of Collision First(overall)"<<endl;

	file.readFromFile2();
	d1.fonk2();
}


