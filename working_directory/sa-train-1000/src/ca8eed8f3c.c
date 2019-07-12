#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_2[21];          // Tag.BODY
    entity_5 = 99;              // Tag.BODY
    entity_7 = 12;              // Tag.BODY
    while(entity_7 < entity_5){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_7] = 'L';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER