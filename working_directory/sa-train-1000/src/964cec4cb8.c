#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_1[10];          // Tag.BODY
    char entity_6[17];          // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 15;              // Tag.BODY
    char entity_9[15];          // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_2 = 19;              // Tag.BODY
    entity_8 = 77;              // Tag.BODY
    entity_9[entity_8] = 'q';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 86;              // Tag.BODY
    while(entity_5 < entity_7){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    entity_6[entity_2] = 'y';   // Tag.BUFWRITE_TAUT_UNSAFE
    }                           // Tag.BODY
    entity_1[entity_5] = 'H';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER