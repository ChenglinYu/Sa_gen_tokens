#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    entity_2 = 14;              // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_9[5];           // Tag.BODY
    entity_4 = 29;              // Tag.BODY
    while(entity_4 < entity_2){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_4] = 'x';   // Tag.BUFWRITE_COND_UNSAFE
    int entity_5;               // Tag.BODY
    entity_5 = 16;              // Tag.BODY
    char entity_7[89];          // Tag.BODY
    entity_7[entity_5] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER