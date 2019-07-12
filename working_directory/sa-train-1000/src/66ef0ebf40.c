#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    char entity_0[65];          // Tag.BODY
    entity_1 = 16;              // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 75;              // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[41];          // Tag.BODY
    entity_0[entity_1] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_5;               // Tag.BODY
    entity_5 = 52;              // Tag.BODY
    entity_4[entity_5] = 'S';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER