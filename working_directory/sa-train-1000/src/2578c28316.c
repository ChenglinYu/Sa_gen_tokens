#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_6[42];          // Tag.BODY
    entity_5 = 65;              // Tag.BODY
    entity_4 = 49;              // Tag.BODY
    if (entity_9 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 60;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_9){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_6[entity_4] = 'b';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER