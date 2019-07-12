#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_1 = 55;              // Tag.BODY
    char entity_2[93];          // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_5 = 12;              // Tag.BODY
    if (entity_7 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 34;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_1] = 'W';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER