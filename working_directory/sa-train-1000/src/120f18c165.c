#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    char entity_9[62];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_3 = 51;              // Tag.BODY
    entity_1 = rand();          // Tag.BODY
    entity_2 = 14;              // Tag.BODY
    if (entity_1 < entity_2){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_1 = 18;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_1){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_3] = 'D';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER