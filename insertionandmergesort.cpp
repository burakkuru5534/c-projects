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
    ifstream list("hs-set-10k.txt"); // we are reading from hs-set-10k.txt
   
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
    
    	string Hearthstone[10000][6]; // for 10 k hs-set 10k.txt
    	
    struct FileWrite{
    	void WritetoFile();
    };
    
    void FileWrite::WritetoFile(){
    
   ofstream dosya1;
  	dosya1.open("dosya1.txt"); //we are writing to this file 
  
  for(int i=0;i<10000;i++){
  	for(int j=0;j<6;j++){
  		Hearthstone[i][j]=person[i][j]; // we are writing to array what we read from hs.txt
  	}
  }
    	
    		for(int x=0;x<10000;x++){ // we are writing to file what we read from hs.txt
		for(int y=0;y<6;y++){
		dosya1<<Hearthstone[x][y]<<"\t";
		}
		dosya1<<endl;
	
	}
dosya1.close();
    }
 class CardManager{ //our class

public:
		
void InsertionSort(string A[][6],int n,int x){	//insertion sort fonk.FOR fullsort and filter sort
	int i,j;

	clock_t start,finish; 
			
start = clock(); // insertion start time started
if(x==1){
	//for fullsort. which mean is that this fonk. is going to sort by class and cost and name.
	
	for (j=1;j<n;j++){ 

	
string key1 = A[j][0];  //name key
string key2 = A[j][1];	//class key
string key3 = A[j][2];	
string key4 = A[j][3];
string key5 = A[j][4];	// type key
string key6 = A[j][5];	//cost key
	

	i = j-1;
	while(i>=0 && A[i][1].compare(key2)){ // sorting by class
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
	
	} // sorting by class is over
		FileRead file;
  		file.readFromFile();
	FileWrite write;
	write.WritetoFile();
	

	// sorting by cost start
		for (int k=1;j<n;k++){ 
int i;
	
string key1 = A[k][0];
string key2 = A[k][1];
string key3 = A[k][2];
string key4 = A[k][3];
string key5 = A[k][4];
string key6 = A[k][5];
	

	i = k-1;
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
	
	} // sorting by cost is over
	
		
	write.WritetoFile();
	
	
	// sorting by name is starting
		for (int z=1;j<n;z++){ 

int i;	
string key1 = A[z][0];
string key2 = A[z][1];
string key3 = A[z][2];
string key4 = A[z][3];
string key5 = A[z][4];
string key6 = A[z][5];
	

	i = z-1;
	while(i>=0 && A[i][1].compare(key1)){
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
	
	} // sorting by name is over 
			
	write.WritetoFile();

finish = clock();


cout<<"Time elapsed: "<<(finish-start)/3600.0<<"ms";
}

else if(x==2){
	// it's for filtersort fonk. which mean this fonk. is going to sort by type
		// sorting by type is starting
			clock_t start,finish; 
		//n=2	
start = clock(); // insertion start time
		
		for (j=1;j<n;j++){ 

	
string key1 = A[j][0];
string key2 = A[j][1];
string key3 = A[j][2];
string key4 = A[j][3];
string key5 = A[j][4]; // type key
string key6 = A[j][5];
	

	i = j-1;
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
	
	} // sorting by type is over 
		FileRead file;
  		file.readFromFile();
	FileWrite write;
	write.WritetoFile();

finish = clock();
cout<<"Time elapsed: "<<(finish-start)/3600.0<<"ms";	

}

 } //insertion fonk. over


void Merge(string A[][6],int p, int q,int r){ // merge fonk.
		
	int n1,n2;
	n1=(q-p)+1;
	n2=(r-q);
	
	string L[n1][6];
	string R[n2][6];
	
	for(int i=0;i<n1;i++){
		
		L[i][0]=A[(p+i)][0];

	}
	for(int j=0;j<n2;j++){
	
		R[j][0]=A[q+j+1][0];

	}
	int i=0;
	int j=0;
	for(int k=p;k<r;k++){
		
		if(L[i][0]<=R[j][0]){
			A[k][0]=L[i][0];
			i=i+1;
		}
		else{
			A[k][0]=R[j][0];
			j=j+1;
		}
		
	}	
}

int MergeSort(string A[][6],int p,int r){ // Merge sort fonk.

if(p<r){
		int q=(p+r)/2;
	 	MergeSort( A, p, q);
 		MergeSort( A, q+1, r);
 			Merge( A, p,  q, r);

	}
	
}


void FullSort(string A[][6], int n,int p, int r){ 
// The FullSort function is sorted the array by the CLASS, COST and NAME of array.
int x=1;	
int y;
	cout<<"For InsertionSort press:1 "<<endl<<"For MergeSort press:2"<<endl;

cin>>y;
if(y==1)
{
	InsertionSort(A,n,x);

}
else if(y==2){
	
	MergeSort(A,p,r);
		
}
else "Wrong input!";
}

void FilterSort(string A[][6],int n, int p, int r){ //Filter sort fonk. which classified by TYPE
// The FilterSort function is sorted the array by the TYPE of array.
int x=2;
	cout<<"For InsertionSort press:1 "<<endl<<"For MergeSort press:2"<<endl;

int y;
cin>>y;
if(y==1)
{	
	InsertionSort(A,n,x);
	
}
else if(y==2){
	
	MergeSort(A,p,r);

}
else "Wrong input!";
}
	}CMn;

int main(int argc, char** argv) {

    int p=0;
    int r=10000;
  
cout<<"For FullSort press:1"<<endl<<"For FilterSort press:2"<<endl;

int a;

cin>>a;
if(a==1){
		
	CMn.FullSort(Hearthstone,10000,p,r);
}
else if(a==2){
	
	CMn.FilterSort(Hearthstone,10000,p,r);
}
else "Wrong input!";

	return 0;
}
