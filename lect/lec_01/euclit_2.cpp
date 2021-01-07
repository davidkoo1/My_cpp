#include<iostream>
using namespace std;

int euclid_gcd(int a, int b){
	//Алгоритм Евклида НОД
	while ( a != b){
		if (a>b){
			a-=b;
		} else {
			b-=a;
		}
	}
	return a;
}
int main(){
	int x,y;
	cout<<"Enter x number : ";
	cin>>x;
	cout<<"Enter y number : ";
	cin>>y;
	cout<<"GCD(x,y) : " <<euclid_gcd(x,y) <<endl;

	return 0;
}
