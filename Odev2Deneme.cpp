#include <iostream>
#include <iostream>
#include <cstring>
#include <ctime>
#include <fstream>
#include <vector>
#include <sstream>
#include <stdlib.h>

using namespace std;

 vector<vector<string> > dizi; // for read from file
struct FileRead{
    void readFromFile();
   
};
void FileRead::readFromFile(){
    ifstream list("population_by_zip_2010.txt"); // we are reading from hs-set-10k.txt
   
    string line;
    
//her satýr için;
while (getline(list, line)) {
    string feature;
    stringstream stream(line);
    vector<string> features;
    //her özellik için
    while( getline(stream, feature,',') ){
    	 
  
        features.push_back(feature);
    }
    dizi.push_back(features);
        
}
    }
     
	 string Population[10][6];

     struct FileWrite{
    	void WritetoFile1();
    	void WritetoFile2();
    };
   
    void FileWrite::WritetoFile1(){
    
   
   //we are writing to this file 
  
  for(int i=1;i<10;i++){
  	for(int j=0;j<6;j++){
  		Population[i][j]=dizi[i][j]; 
		  // we are writing to array what we read from population_by_zip_2010.txt
  	}
  }}
    	 void FileWrite::WritetoFile2(){
    	  	ofstream dosya1;
		 	dosya1.open("PopulationSorted.txt");
		 	for(int x=0;x<10;x++){ // we are writing to file what we read from hs.txt
		for(int y=0;y<6;y++){
		dosya1<<Population[x][y]<<",";
		}
		dosya1<<endl;
	
	}
dosya1.close();
    	 }
    		
    
    
   class Population{
   	
   	public :
   
   void fonk(){ // read from Population_zip_2010
   
   	FileRead file;
  		file.readFromFile();
   }
   void fonk2(){ // write to array Population from array dizi
   	FileWrite write;
	write.WritetoFile1();
	}
	void fonk3(){ // write to PopulationSorted.txt from array Population
   	FileWrite write;
	write.WritetoFile2();
	}
   
   int Partition(string A[][6],int p,int r){
		
	string x;
	x=A[r-1][0]; 
	int i;
	i=p-2;

	string temp[10][6];
	string temp2[10][6];




	for(int j=p-1;j<r-1;j++){
		
		
		if(A[j][0]<=x){
		
			i=i+1;
			
			for(int x=1;x<6;x++){
			
			temp[j][x]= A[i][x];
			A[i][x]=A[j][x];
			A[j][x]=temp[j][x];	
			}
					
		}
	}

	for(int a=1;a<6;a++){
	
	temp2[i+1][a]=A[i+1][a];
	A[i+1][a]=A[r-1][a];
	A[r-1][a]=temp2[i+1][a];
	return i+1;
	
	
	}
	
}

void QuickSort(string A[][6],int p,int r){

	if(p<r){
		
		int q = Partition(A,p,r);
		QuickSort(A,p,q-1);
		QuickSort(A,q+1,r);
		
		
	}

}	

   	
   }p1;
    

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
clock_t start,finish; 			
start = clock(); // Quicksort time started		
p1.fonk();
p1.fonk2();

p1.QuickSort(Population,1,9);
p1.fonk3();
finish = clock();
cout<<"Time elapsed: "<<(finish-start)/3600<<"ms";
	return 0;
}
