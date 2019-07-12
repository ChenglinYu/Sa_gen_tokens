#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    char entity_3[3];           // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_8[12];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4 = 7;               // Tag.BODY
    entity_0 = 66;              // Tag.BODY
    entity_2 = 16;              // Tag.BODY
    while(entity_0 < entity_4){ // Tag.BODY
    entity_0++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_2] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_8[entity_0] = 'C';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER