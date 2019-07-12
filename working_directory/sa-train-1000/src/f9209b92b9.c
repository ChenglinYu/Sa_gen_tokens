#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_9[73];          // Tag.BODY
    char entity_5[69];          // Tag.BODY
    entity_7 = 75;              // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_6[26];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_4 = 56;              // Tag.BODY
    entity_2 = 58;              // Tag.BODY
    entity_8 = 47;              // Tag.BODY
    entity_6[entity_4] = 'w';   // Tag.BUFWRITE_TAUT_UNSAFE
    while(entity_2 < entity_8){ // Tag.BODY
    entity_9[entity_7] = 'd';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_5[entity_2] = 'r';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER