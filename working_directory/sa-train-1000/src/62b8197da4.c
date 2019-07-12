#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_4[42];          // Tag.BODY
    entity_0 = 87;              // Tag.BODY
    char entity_9[27];          // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_8 = 25;              // Tag.BODY
    entity_5 = 23;              // Tag.BODY
    entity_4[entity_5] = 'z';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_0 < entity_8){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_0] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER