#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_4;               // Tag.BODY
    int entity_9;               // Tag.BODY
    char entity_2[60];          // Tag.BODY
    entity_9 = 52;              // Tag.BODY
    entity_4 = 64;              // Tag.BODY
    while(entity_9 < entity_4){ // Tag.BODY
    entity_9++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    entity_1 = 25;              // Tag.BODY
    entity_2[entity_9] = 'D';   // Tag.BUFWRITE_COND_UNSAFE
    char entity_6[58];          // Tag.BODY
    char entity_7[58];          // Tag.BODY
    entity_6[entity_1] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 13;              // Tag.BODY
    entity_7[entity_3] = 'Z';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER