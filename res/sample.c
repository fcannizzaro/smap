#include<stdio.h>
#include "map.h"

int main(){
	
	_map * map = newMap();

	// put
	mapPut(map,"username","fcannizzaro");

	// get
	char* username = mapGet(map,"username");

	printf(" >> Username is %s", username);

}