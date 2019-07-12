#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    char entity_7[68];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_0 = 23;              // Tag.BODY
    entity_2 = 75;              // Tag.BODY
    while(entity_0 < entity_2){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_0] = 'B';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER