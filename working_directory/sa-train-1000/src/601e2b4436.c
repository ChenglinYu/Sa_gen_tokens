#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_2 = 74;              // Tag.BODY
    entity_3 = 76;              // Tag.BODY
    char entity_5[65];          // Tag.BODY
    while(entity_2 < entity_3){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_0[42];          // Tag.BODY
    entity_5[entity_2] = 'k';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 43;              // Tag.BODY
    entity_0[entity_6] = 'B';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER