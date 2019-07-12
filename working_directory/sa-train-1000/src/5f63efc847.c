#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_9;               // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_7 = 69;              // Tag.BODY
    entity_4 = 51;              // Tag.BODY
    entity_9 = rand();          // Tag.BODY
    char entity_5[29];          // Tag.BODY
    if (entity_9 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_9 = 90;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_9){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_4] = 'X';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER