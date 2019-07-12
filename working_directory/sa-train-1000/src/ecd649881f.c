#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_6[87];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_2;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 72;              // Tag.BODY
    entity_5 = 3;               // Tag.BODY
    char entity_3[65];          // Tag.BODY
    entity_2 = 22;              // Tag.BODY
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    entity_6[entity_2] = 'Q';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_3[entity_5] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER