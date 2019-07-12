#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    int entity_2;               // Tag.BODY
    char entity_4[85];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_2 = 4;               // Tag.BODY
    entity_6 = 31;              // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    if (entity_8 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 25;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_2 < entity_8){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_3[25];          // Tag.BODY
    entity_4[entity_2] = 'S';   // Tag.BUFWRITE_COND_SAFE
    entity_0 = 57;              // Tag.BODY
    entity_3[entity_0] = 'l';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER