#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[6];           // Tag.BODY
    char entity_9[13];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_5[50];          // Tag.BODY
    entity_2 = 0;               // Tag.BODY
    entity_7 = 37;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_3 = 4;               // Tag.BODY
    entity_8 = rand();          // Tag.BODY
    entity_4 = 42;              // Tag.BODY
    entity_6[entity_2] = '9';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_4] = '9';   // Tag.BUFWRITE_TAUT_UNSAFE
    if (entity_8 < entity_7){   // Tag.BODY
    } else {                    // Tag.BODY
    entity_8 = 25;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_8){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_3] = 'N';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER