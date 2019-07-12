#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_9 = 77;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_1 = 9;               // Tag.BODY
    char entity_2[22];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    char entity_6[44];          // Tag.BODY
    entity_4 = 2;               // Tag.BODY
    if (entity_0 < entity_4){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 24;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_9 < entity_0){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_9] = 'c';   // Tag.BUFWRITE_COND_UNSAFE
    entity_6[entity_1] = 'A';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER