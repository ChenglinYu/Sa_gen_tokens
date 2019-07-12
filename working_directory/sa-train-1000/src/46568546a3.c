#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[46];          // Tag.BODY
    entity_0 = 74;              // Tag.BODY
    entity_2 = 60;              // Tag.BODY
    while(entity_2 < entity_0){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[10];          // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_3[entity_2] = 'v';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_7;               // Tag.BODY
    entity_1 = 98;              // Tag.BODY
    entity_7 = 55;              // Tag.BODY
    entity_4[entity_1] = '7';   // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_8[43];          // Tag.BODY
    entity_8[entity_7] = '6';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER