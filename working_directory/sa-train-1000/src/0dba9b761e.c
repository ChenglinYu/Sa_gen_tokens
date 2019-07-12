#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_2[24];          // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_5 = 25;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 28;              // Tag.BODY
    if (entity_4 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 67;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_4){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_7] = 'Z';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER