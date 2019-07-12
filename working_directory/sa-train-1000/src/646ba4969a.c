#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_1 = 12;              // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    entity_2 = 19;              // Tag.BODY
    char entity_4[92];          // Tag.BODY
    if (entity_7 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 34;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_4[entity_1] = 'H';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER