#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[0];           // Tag.BODY
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_5[1];           // Tag.BODY
    entity_4 = 84;              // Tag.BODY
    entity_9 = 57;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_8 = 40;              // Tag.BODY
    entity_5[entity_4] = 'H';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_9 < entity_8){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_3[entity_9] = 'g';   // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 10;              // Tag.BODY
    char entity_7[81];          // Tag.BODY
    entity_7[entity_2] = '6';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER