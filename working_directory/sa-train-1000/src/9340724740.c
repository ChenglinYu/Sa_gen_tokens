#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    entity_4 = 23;              // Tag.BODY
    int entity_8;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 94;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    char entity_1[49];          // Tag.BODY
    if (entity_8 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 81;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_8){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1[entity_4] = 'X';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[73];          // Tag.BODY
    char entity_2[48];          // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 95;              // Tag.BODY
    entity_3 = 59;              // Tag.BODY
    entity_5[entity_9] = 'E';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_3] = 'c';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER