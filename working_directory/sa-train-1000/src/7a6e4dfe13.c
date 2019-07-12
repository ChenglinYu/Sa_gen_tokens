#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_1[75];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_7 = 23;              // Tag.BODY
    entity_2 = 39;              // Tag.BODY
    while(entity_2 < entity_7){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[58];          // Tag.BODY
    int entity_6;               // Tag.BODY
    char entity_8[25];          // Tag.BODY
    entity_6 = 37;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_4[entity_6] = 'S';   // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 47;              // Tag.BODY
    entity_1[entity_2] = 'l';   // Tag.BUFWRITE_COND_SAFE
    entity_8[entity_0] = '0';   // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER