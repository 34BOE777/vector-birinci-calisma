#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector <int>cu;
	cu.push_back(31);
	cu.push_back(32);
	cu.push_back(313);
	cu.push_back(314);
	
	for(int a:cu){
		cout<<a<<endl;
	}

	cout<<endl;
	cu.erase(cu.begin()+1);
	for(int a:cu){
		cout<<a<<endl;
	}

	
	return 0;
}