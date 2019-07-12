#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_9[66];          // Tag.BODY
    char entity_3[62];          // Tag.BODY
    entity_2 = 85;              // Tag.BODY
    entity_0 = 41;              // Tag.BODY
    entity_7 = 26;              // Tag.BODY
    while(entity_7 < entity_2){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_0] = 'l';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3[entity_7] = '1';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER