#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_1[20];          // Tag.BODY
    entity_6 = 5;               // Tag.BODY
    entity_4 = rand();          // Tag.BODY
    entity_9 = 57;              // Tag.BODY
    if (entity_4 < entity_9){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_4 = 30;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_6 < entity_4){ // Tag.BODY
    entity_6++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_1[entity_6] = 'u';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER