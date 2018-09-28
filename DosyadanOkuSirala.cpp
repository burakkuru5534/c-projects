#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;
 vector<vector<string> > person;
struct FileRead{
    void readFromFile();
   
};
void FileRead::readFromFile(){
    ifstream list("hs.txt");
   
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




void InsertionSort(string A[][6],int n){	
	int i,j;
	
		
	for (j=1;j<n;j++){ //insertion
	
string key1 = A[j][0];
string key2 = A[j][1];
string key3 = A[j][2];
string key4 = A[j][3];
string key5 = A[j][4];
string key6 = A[j][5];
	
	i = j-1;
	while(i>=0 && A[i][5]>key6){
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
	
	}
}




int main() {


  
    FileRead file;
   
  file.readFromFile();
   
     ofstream dosya1;
  
  string dizi[10000][6];
  for(int i=0;i<10000;i++){
  	for(int j=0;j<6;j++){
  		dizi[i][j]=person[i][j];
  	}
  }
   
  
   dosya1.open("dosya1.txt");
   
    for(int i=0;i<10;i++){
   	for(int j=0;j<6;j++){
   		cout << dizi[i][j]<<'\t';
   		
   	}
   	cout<<endl;
   }
   
   InsertionSort(dizi,10000);
   
		 for(int i=0;i<10000;i++){
   	for(int j=0;j<6;j++){
   		dosya1 << dizi[i][j]<<'\t';
   		
   	}
   	dosya1<<endl;
   }
    dosya1.close();
  cout<<endl<<endl;
 for(int i=0;i<10;i++){
   	for(int j=0;j<6;j++){
   		cout << dizi[i][j]<<'\t';
   		
   	}
   	cout<<endl;
   }


/*string ifade[10][6];

ifstream dosyadeneme;
ofstream dosya1;

dosyadeneme.open("dosyadeneme.txt");
	 for(int i=0;i<10;i++){
   	for(int j=0;j<6;j++){
   		dosyadeneme>> ifade[i][j];
   		
   	}
   	
   }
   
    dosyadeneme.close();
for(int x=0;x<10;x++){
		for(int y=0;y<6;y++){
		cout<< ifade[x][y]<<"\t";
		}
		cout<<endl;
	
	}

dosya1.open("dosya1.txt");  
   

	
InsertionSort(ifade,10);

for(int x=0;x<2;x++){
		for(int y=0;y<6;y++){
		dosya1 << ifade[x][y]<<"\t";
		}
		dosya1<<endl;
	
	}
	dosya1.close();



*/



return 0;

}
