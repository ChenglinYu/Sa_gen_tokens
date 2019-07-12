#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_5[81];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_2 = 16;              // Tag.BODY
    char entity_8[44];          // Tag.BODY
    entity_3 = 90;              // Tag.BODY
    entity_1 = 70;              // Tag.BODY
    while(entity_2 < entity_3){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_7[50];          // Tag.BODY
    entity_5[entity_2] = 'V';   // Tag.BUFWRITE_COND_UNSAFE
    entity_8[entity_1] = 't';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 36;              // Tag.BODY
    entity_7[entity_9] = 'D';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER