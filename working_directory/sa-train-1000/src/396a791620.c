#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_8[0];           // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_4[65];          // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    char entity_1[40];          // Tag.BODY
    entity_6 = 17;              // Tag.BODY
    int entity_5;               // Tag.BODY
    entity_5 = 22;              // Tag.BODY
    entity_7 = 89;              // Tag.BODY
    entity_3 = 37;              // Tag.BODY
    while(entity_5 < entity_6){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_8[entity_7] = 'Q';   // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_3] = 'n';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_5] = 'l';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER