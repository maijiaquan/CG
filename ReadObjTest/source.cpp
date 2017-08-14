#include<iostream>
#include<string>   

#include<fstream>
#include <sstream>    //istringstream

using namespace std;


string g_str;
ifstream g_in;

int main(){
	g_in.open("D:\\cube.obj");

	while(getline(g_in, g_str)){
		istringstream in(g_str);
	}

	system("pause");
	return 0;

}