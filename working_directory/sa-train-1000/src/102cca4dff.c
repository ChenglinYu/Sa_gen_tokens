#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_0[50];          // Tag.BODY
    entity_2 = 15;              // Tag.BODY
    entity_9 = 97;              // Tag.BODY
    entity_5 = 6;               // Tag.BODY
    char entity_3[1];           // Tag.BODY
    entity_3[entity_2] = 'a';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_5 < entity_9){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_0[entity_5] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER