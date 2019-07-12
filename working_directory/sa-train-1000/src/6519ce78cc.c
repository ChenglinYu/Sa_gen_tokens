#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 35;              // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_4[19];          // Tag.BODY
    entity_7 = 84;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    if (entity_0 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_0 = 69;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_0){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_4[entity_7] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 58;              // Tag.BODY
    char entity_1[50];          // Tag.BODY
    entity_1[entity_2] = 'C';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER