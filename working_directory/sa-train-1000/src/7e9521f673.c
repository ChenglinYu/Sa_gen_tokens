#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    entity_1 = 42;              // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_8[61];          // Tag.BODY
    entity_7 = 20;              // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_1] = 'Z';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER