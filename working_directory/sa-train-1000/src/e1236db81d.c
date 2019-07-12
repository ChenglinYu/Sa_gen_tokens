#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_1[21];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_0 = 54;              // Tag.BODY
    entity_5 = 3;               // Tag.BODY
    while(entity_0 < entity_5){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_0] = '6';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER