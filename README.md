# smap
Simple C Map Implementation

## Usage
```C

_map * map = newMap();

// put
mapPut(map,"username","fcannizzaro");

// get
char* username = mapGet(map,"username");

printf(" >> Username is %s", username);

```

## Constructor

### _map* newMap()
create Map Struct

### _pair* newPair(char* key, void* value)
create Pair Struct

### _pair* newIntPair(char* key, int value)
create Int Pair Struct

## Get

### pair* mapGetPair(_map* map, char\* key)
get pair by key

### void* mapGet(_map* map, char\* key)
get value by key

## Put

### void mapPutPair(_map* map, \_pair\* pair)
put pair

### void mapPut(_map* map,char\* key, void\* value)
put key value pair

## Size

### map->size
number of pairs

## Extra

### char** keys(_map* map);
array of keys

### void** values(_map* map);
array of values
