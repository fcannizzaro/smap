#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "map.h"

// find pair by key
_pair * _mapGet(_pair * pair, char * key){
	return !pair ? NULL : !strcmp(pair->key,key) ? pair : _mapGet(pair->next,key);
}

// create Map Struct
_map * newMap(){
	_map * map = malloc(sizeof(_map));
	map->items = NULL;
	return map;
}

// create Pair Struct
_pair * newPair(char * key, char * value){
	_pair * pair = malloc(sizeof(_pair));
	pair->key = key;
	pair->value = value;
	return pair;
}

// get value by key
void* mapGet(_map * map, char * key){
	pair * obj = _mapGet(map->items,key);
	return obj ? obj->value : NULL;
}

// get pair by key
_pair * mapGetPair(_map * map, char * key){
	return _mapGet(map->items,key);
}

// map put pair [pair]
void mapPutPair(_map* map,_pair* pair){
	if(!pair) return;
	mapPut(map,pair->key,pair->value);
}

// map put pair [key,value]
void mapPut(_map * map, char * key, void * value){
	_pair * pair = malloc(sizeof(_pair));
	pair->key = key;
	pair->value = value;
	pair->next = map->items;
	map->items = pair;	
}

