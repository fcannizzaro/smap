#include<stdio.h>
#include "map.h"

int main(){
	
	_map * map = newMap();

	// put
	mapPut(map,"username","fcannizzaro");

	// get
	char* username = mapGet(map,"username");

	printf(" >> Username is %s\n", username);

	char** keys = mapKeys(map);
	void** values = mapValues(map);

	for (int i = 0; i < map->size; i++)
		printf(" > %s\n", keys[i]);

	for (int i = 0; i < map->size; i++)
		printf(" > %s\n", values[i]);
	

}