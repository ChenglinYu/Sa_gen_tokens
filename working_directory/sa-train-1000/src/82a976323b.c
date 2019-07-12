#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_3;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_0[27];          // Tag.BODY
    entity_5 = 23;              // Tag.BODY
    entity_3 = 25;              // Tag.BODY
    while(entity_5 < entity_3){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 35;              // Tag.BODY
    entity_0[entity_5] = 'W';   // Tag.BUFWRITE_COND_SAFE
    char entity_9[9];           // Tag.BODY
    char entity_2[77];          // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 17;              // Tag.BODY
    entity_2[entity_7] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_4] = 'I';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER