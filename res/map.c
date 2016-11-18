#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include "map.h"

// find pair by key
_pair * _mapGet(_pair * pair, char * key){
	return !pair ? NULL : !strcmp(pair->key,key) ? pair : _mapGet(pair->next,key);
}

// create Map Struct
_map * newMap(){
	_map * map = malloc(sizeof(_map));
	map->size = 0;
	map->items = NULL;
	return map;
}

_map * newMapFill(_pair * pair){
	_map * map = newMap();
	mapPutPair(map,pair);
	return map;
}

// create a Pair Struct
_pair * newPair(char * key, void* value){
	_pair * pair = malloc(sizeof(_pair));
	pair->key = key;
	pair->value = value;
	return pair;
}

// create an Int Pair Struct
_pair * newIntPair(char * key, int value){
	_pair * pair = malloc(sizeof(_pair));
	pair->key = key;
	pair->nvalue = value;
	return pair;
}

// get value by key
void* mapGet(_map * map, char * key){
	_pair * obj = _mapGet(map->items,key);
	return obj ? obj->value : NULL;
}

// get pair by key
_pair * mapGetPair(_map * map, char * key){
	return _mapGet(map->items,key);
}

// map put pair [pair]
_map * mapPutPair(_map* map,_pair* pair){
	return !pair ? map : mapPut(map,pair->key,pair->value);
}

// map put pair [key,value]
_map * mapPut(_map * map, char * key, void * value){
	_pair * pair = malloc(sizeof(_pair));
	pair->key = key;
	pair->value = value;
	pair->next = map->items;
	map->items = pair;
	map->size++;
	return map;
}

// array of keys
char** mapKeys(_map*map){
	
	int i = 0;
	char** keys = malloc(map->size * sizeof(char*));
	_pair * item = map->items;

	while( item){
		keys[i++] = strdup(item->key);
		item = item->next;
	}
	
	return keys;
}

// array of values
void** mapValues(_map*map){
	
	int i = 0;
	void** values = malloc(map->size * sizeof(void*));
	_pair * item = map->items;

	while( item){
		values[i++] = strdup(item->value);
		item = item->next;
	}
	
	return values;

}