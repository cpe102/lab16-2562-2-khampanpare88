#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int v){
	vector<int> myVector(v);
	for(int i=0;i<v;i++){
		myVector[i]=rand()%10;
	}
	return myVector;
}
void showVector(vector<int> a){
	cout<<"[";
	for(int i=0;i<a.size();i++){
		cout<<a[i]<<" ";
	}
	cout<<"]";
}
int dotProduct(vector<int> x,vector<int> y){
	int dot=0, z;
	for(int i=0;i<x.size();i++){
		dot = dot + (x[i]*y[i]);
	}
	return dot;
}