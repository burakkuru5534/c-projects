#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <fstream>	// File operations
#include <iomanip>
#include <vector>
#include <sstream>


using namespace std;
#define RED 1
#define BLACK 0


typedef struct Node{
	
	string Name;  //key
	string Gender; //F or M
	int Age;
	struct Node* Left;
  struct Node* Right;
  struct Node* Parent;
  struct Node* Color;
  struct Node* nodes[20];	
}Rbt;


 
		

struct FileRead{
    void readFromFile();
    vector<vector<string> > person;
};
void FileRead::readFromFile(){ // for read from file
    ifstream list("input.txt");
   
    string line;
    

while (getline(list, line)) {
    string feature;
    stringstream stream(line);
    vector<string> features;
    
    while( getline(stream, feature,'\t') ){
    	 
  
        features.push_back(feature);
    }
    person.push_back(features);
        
}
    }	
    

	class RedBlackTree {
	public:
	Node *Root;
	Node *Nill;
	
	void Insert(Node *nNode){ //insert fonk
		
		Node *x;
		Node *y;

		x = Root;
		y = Nill;
		
		while (x!= Nill){
			
			y=x;
			
			if (nNode->Age < x->Age){
				
				x= x->Left;
			}
			else {
				x = x->Right;
			}
		}
	
		nNode->Parent= y;

		if (y== Nill)
			Root= nNode;	
		
			
		else {
			
			if (nNode->Age < y->Age){
					y->Left = nNode;
			}
			
			else{
				y->Right= nNode;
			}
				
		}
		nNode->Left = Nill;
		nNode->Right = Nill;
		nNode->Color = 0; //if color == 0 then it's black
		
	}
	void Fix_Up(Node *nNode) {
		Node *y;

		while (nNode->Parent->Color == RED){
		
			if (nNode->Parent == nNode->Parent->Parent->Left) {
				y = nNode->Parent->Parent->Right;
				if (y->Color == RED){
				
					nNode->Parent->Color = BLACK;
					y->Color = BLACK;
					nNode->Parent->Parent->Color = RED;
					nNode = nNode->Parent->Parent;
				}
				else {
					if (nNode == nNode->Parent->Right){
					
						nNode = nNode->Parent;
						Left_Rotate(nNode);
					}
					nNode->Parent->Color = BLACK;
					nNode->Parent->Parent->Color = RED;
					Right_Rotate(nNode->Parent->Parent);
				}
			}
			else {
				y = nNode->Parent->Parent->Left;
				if (y->Color == RED){
				
					nNode->Parent->Color = BLACK;
					y->Color = BLACK;
					nNode->Parent->Parent->Color = RED;
					nNode = nNode->Parent->Parent;
				}
				else {
					if (nNode == nNode->Parent->Left){
						
						nNode = nNode->Parent;
						Right_Rotate(nNode);
					}
					nNode->Parent->Color = BLACK;
					nNode->Parent->Parent->Color = RED;
					Left_Rotate(nNode->Parent->Parent);
				}
			}
		}
		Root->Color = BLACK;
	}

	void Print(Node *node, int i){ //print fonk
		if (node != Nill){

			if (node->Right){
				Print(node->Right, i+10);
			}

			cout << setw(i) << ' ' << node->Name << "{" << node->Age << "-"  << "} -- (M: " <<")" << endl;

			if (node->Left != Nill){
				Print(node->Left, i+10);
			}
		}
	}
		void Left_Rotate(Node *xNode){
	
		Node *y;

		y = xNode->Right;
		xNode->Right = y->Left;
		y->Left->Parent = xNode;

		y->Parent = xNode->Parent;
		if (xNode->Parent == Nill)	{
			Root = y;
		}
		else{
			if (xNode == xNode->Parent->Left)	{
				xNode->Parent->Left = y;
			}
			else	{
				xNode->Parent->Right = y;
			}
		}
		y->Left = xNode;
		xNode->Parent = y;
	}

	void Right_Rotate(Node *yNode){
		Node *y;

		y = yNode->Left;
		yNode->Left = y->Right;
		y->Right->Parent = yNode;

		y->Parent = yNode->Parent;
		if (yNode->Parent == Nill)
		{
			Root = y;
		}
		else{
			if (yNode == yNode->Parent->Right){
				yNode->Parent->Right = y;
			}
			else	{
				yNode->Parent->Left = y;
			}
		}
		y->Right = yNode;
		yNode->Parent = y;
	}

}n1;


int main(int argc, char** argv) {
FileRead file;
file.readFromFile();

/*
for(int i=0;i<20;i++){
	for(int j=0;j<3;j++){
		cout<<file.person[i][j]<<" ";
	}cout<<endl;
}
*/
Node Rb;
Rbt nodes[20];
for(int x=0;x<20;x++){ //person to nodes for name,gender and name
	
nodes[x].Name=file.person[x][0];
nodes[x].Gender=file.person[x][1];
string a=file.person[x][2];
nodes[x].Age=atoi(a.c_str());
	
}


	n1.Insert(Rb.nodes[0]); //Inserting new node
	n1.Print(Rb.nodes[0],1); //printing tree

/*
cout<<endl;
for(int a=0;a<20;a++){
	cout<<nodes[a].name<<" "<<nodes[a].gender<<" "<<nodes[a].age<<endl;
}
*/
}
