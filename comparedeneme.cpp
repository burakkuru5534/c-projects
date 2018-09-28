#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <vector>
#include <sstream>
using namespace std;

class CardManager{
	
public:
	CardManager(){


    static string Hearthstone[3][6];
    
    Hearthstone[0][0]="Lotus Assassin";
    Hearthstone[0][1]="Rogue";
	Hearthstone[0][2]="Epic";
	Hearthstone[0][3]="Gadgetzan";
	Hearthstone[0][4]="Minion";
	Hearthstone[0][5]="5";
	Hearthstone[1][0]="Zoobot";
	Hearthstone[1][1]="Neutral";
	Hearthstone[1][2]="Common";
	Hearthstone[1][3]="Karazhan";
	Hearthstone[1][4]="Minion";
	Hearthstone[1][5]="3";
	Hearthstone[2][0]="Innervate";//
	Hearthstone[2][1]="Druid";
	Hearthstone[2][2]="Basic";
	Hearthstone[2][3]="Basic";
	Hearthstone[2][4]="Spell";
	Hearthstone[2][5]="0";

	int n=3;
	
		int i,j;
	
		
		for(int x=0;x<3;x++){
		for(int y=0;y<6;y++){
		cout<<Hearthstone[x][y]<<"\t";
		}
		cout<<endl;
	
	}
	cout<<endl;
	
	for (j=1;j<n;j++){ //insertion
	
string key1 = Hearthstone[j][0];
string key2 = Hearthstone[j][1];
string key3 = Hearthstone[j][2];
string key4 = Hearthstone[j][3];
string key5 = Hearthstone[j][4];
string key6 = Hearthstone[j][5];
	
	i = j-1;
	
	switch(i){
		case 0:	while(i>=0) {
				
				if(Hearthstone[i][1].compare(key2)){
				
					Hearthstone[i+1][0]=Hearthstone[i][0];
					Hearthstone[i+1][1]=Hearthstone[i][1];
					
					Hearthstone[i+1][2]=Hearthstone[i][2];
					Hearthstone[i+1][3]=Hearthstone[i][3];
					Hearthstone[i+1][4]=Hearthstone[i][4];
					Hearthstone[i+1][5]=Hearthstone[i][5];
		i=i-1;
				}
	}
	Hearthstone[i+1][0]=key1;
	Hearthstone[i+1][1]=key2;
	Hearthstone[i+1][2]=key3;
	Hearthstone[i+1][3]=key4;
	Hearthstone[i+1][4]=key5;
	Hearthstone[i+1][5]=key6;


i=i+2;;
break;
		case 1:
				while(i>=1) {
				
				if(Hearthstone[i][1].compare(key2)){
				
					Hearthstone[i+1][0]=Hearthstone[i][0];
					Hearthstone[i+1][1]=Hearthstone[i][1];
					
					Hearthstone[i+1][2]=Hearthstone[i][2];
					Hearthstone[i+1][3]=Hearthstone[i][3];
					Hearthstone[i+1][4]=Hearthstone[i][4];
					Hearthstone[i+1][5]=Hearthstone[i][5];
		i=i-1;
				}
	}
	Hearthstone[i+1][0]=key1;
	Hearthstone[i+1][1]=key2;
	Hearthstone[i+1][2]=key3;
	Hearthstone[i+1][3]=key4;
	Hearthstone[i+1][4]=key5;
	Hearthstone[i+1][5]=key6;


i=i+2;;
break;
		case 2:	while(i>=2) {
				
				if(Hearthstone[i][1].compare(key2)){
				
					Hearthstone[i+1][0]=Hearthstone[i][0];
					Hearthstone[i+1][1]=Hearthstone[i][1];
					
					Hearthstone[i+1][2]=Hearthstone[i][2];
					Hearthstone[i+1][3]=Hearthstone[i][3];
					Hearthstone[i+1][4]=Hearthstone[i][4];
					Hearthstone[i+1][5]=Hearthstone[i][5];
		i=i-1;
				}
	}
	Hearthstone[i+1][0]=key1;
	Hearthstone[i+1][1]=key2;
	Hearthstone[i+1][2]=key3;
	Hearthstone[i+1][3]=key4;
	Hearthstone[i+1][4]=key5;
	Hearthstone[i+1][5]=key6;


}
}
	



for(int x=0;x<3;x++){
		for(int y=0;y<6;y++){
		cout<<Hearthstone[x][y]<<"\t";
		}
		cout<<endl;
	
	}




	/*	
		int n=6;
		int i,j;
	
		static string CardsClasses[]={"Druid","Hunter","Mage","Paladin","Priest","Rogue","Shaman",
		"Warlock","Warrior"};
		
		
		
		
		
		for(int x=0;x<6;x++){
		for(int y=0;y<2;y++){
		cout<<Hearthstone[x][y]<<endl;
		}
	
	}
	
	for (j=1;j<n;j++){ // j=2 to n;
	
string key = CardsClasses[j][0];
	
	i = j-1;
	
	
	while(i>=0 & CardsClasses[i].compare(key)){
		
		CardsClasses[i+1]=CardsClasses[i];
		i=i-1;
		
	}
	CardsClasses[i+1]=key;
	
	
	
}
cout<<"Dizinin siralanmis Hali: "<<CardsClasses[0]<<endl<<
CardsClasses[1]<<endl<<CardsClasses[2]<<endl<<CardsClasses[3]<<endl<<CardsClasses[4]<<endl<<
CardsClasses[5]<<endl<<CardsClasses[6]<<endl<<CardsClasses[7]<<endl<<CardsClasses[8]<<endl;
	
	int sonuc = CardsClasses[0].compare(CardsClasses[1]);
	
		if(sonuc<0){
			ofstream dosyadeneme;
dosyadeneme.open("dosyadeneme.txt");
dosyadeneme<<CardsClasses[0]<<endl<<CardsClasses[1];
dosyadeneme.close();
		}
		else {
			ofstream dosyadeneme;
dosyadeneme.open("dosyadeneme.txt");
dosyadeneme<<CardsClasses[1]<<endl<<CardsClasses[0];
dosyadeneme.close();
		}*/
		

	
	}

	

}CMn;




int main() {
	


	
	return 0;
}
