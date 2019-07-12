#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_6[26];          // Tag.BODY
    entity_3 = 91;              // Tag.BODY
    entity_2 = rand();          // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 65;              // Tag.BODY
    if (entity_2 < entity_3){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_2 = 45;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_7 < entity_2){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_8;               // Tag.BODY
    char entity_9[57];          // Tag.BODY
    entity_8 = 59;              // Tag.BODY
    entity_9[entity_8] = 'A';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_7] = '2';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER