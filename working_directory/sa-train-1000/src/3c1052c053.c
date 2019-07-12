#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_1 = 14;              // Tag.BODY
    char entity_9[36];          // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    entity_5 = 43;              // Tag.BODY
    if (entity_2 < entity_5){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 67;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_1 < entity_2){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_1] = 'M';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER