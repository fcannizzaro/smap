#ifndef _MAP
#define _MAP

typedef struct _pair{
   char* key;
   void* value;
   struct _pair * next;
} _pair;

typedef struct _map{
	_pair * items;
} _map;

/* Constructor */

_map * newMap();

_pair * newPair(char*,void*);

/* Map Methods */

void* mapGet(_map*,char*);

void mapPut(_map*,char*,void*);

_pair * mapGetPair(_map*,char*);

void mapPutPair(_map*,_pair*);

#endif