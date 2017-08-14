#include<iostream>
#include "ObjData.h"

int main(){
	ObjData objdata("D:\\cube.obj");
	objdata.readObjFile();
	objdata.printObj();

	system("pause");
	return 0;

}