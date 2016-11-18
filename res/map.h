#ifndef _MAP
#define _MAP

typedef struct _pair{
   char* key;
   void* value;
   int nvalue;
   struct _pair * next;
} _pair;

typedef struct _map{
	_pair * items;
	int size;
} _map;

/* Constructor */

_map * newMap();

_map * newMapFill(_pair*);

_pair * newPair(char*,void*);

_pair * newIntPair(char*,int);

/* Map Methods */

void* mapGet(_map*,char*);

_map * mapPut(_map*,char*,void*);

_pair * mapGetPair(_map*,char*);

_map * mapPutPair(_map*,_pair*);

/* Keys / Values */

char** mapKeys(_map*);

void** mapValues(_map*);

#endif