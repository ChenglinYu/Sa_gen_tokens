#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_3 = 65;              // Tag.BODY
    char entity_2[71];          // Tag.BODY
    entity_5 = 86;              // Tag.BODY
    char entity_6[62];          // Tag.BODY
    char entity_9[7];           // Tag.BODY
    entity_7 = 13;              // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_1 = 50;              // Tag.BODY
    if (entity_4 < entity_3){   // Tag.BODY
    entity_2[entity_5] = 'x';   // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                    // Tag.BODY
    entity_6[entity_7] = 'P';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 67;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_1] = 'o';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER