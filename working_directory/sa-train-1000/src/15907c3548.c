#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_2 = 26;              // Tag.BODY
    entity_6 = 81;              // Tag.BODY
    char entity_0[87];          // Tag.BODY
    while(entity_2 < entity_6){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_7[75];          // Tag.BODY
    entity_1 = 22;              // Tag.BODY
    char entity_4[65];          // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_0[entity_2] = 'k';   // Tag.BUFWRITE_COND_SAFE
    entity_8 = 21;              // Tag.BODY
    entity_7[entity_8] = 'X';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_1] = 'i';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER