#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_7 = rand();          // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_3[72];          // Tag.BODY
    entity_6 = 15;              // Tag.BODY
    entity_4 = 82;              // Tag.BODY
    if (entity_7 < entity_6){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_7 = 86;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_4 < entity_7){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_4] = '6';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER