#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    int entity_0;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_7 = 97;              // Tag.BODY
    entity_0 = rand();          // Tag.BODY
    entity_2 = 25;              // Tag.BODY
    entity_3 = 85;              // Tag.BODY
    char entity_6[52];          // Tag.BODY
    char entity_5[7];           // Tag.BODY
    if (entity_0 < entity_7){   // Tag.BODY
    entity_6[entity_2] = '9';   // Tag.BUFWRITE_TAUT_SAFE
    } else {                    // Tag.BODY
    entity_0 = 97;              // Tag.BODY
    }                           // Tag.BODY
    while(entity_3 < entity_0){ // Tag.BODY
    entity_3++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_3] = 'O';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER