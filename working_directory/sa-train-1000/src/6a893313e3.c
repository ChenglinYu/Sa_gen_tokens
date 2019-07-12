#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_2 = 8;               // Tag.BODY
    char entity_5[60];          // Tag.BODY
    entity_1 = 6;               // Tag.BODY
    while(entity_2 < entity_1){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    char entity_4[67];          // Tag.BODY
    char entity_7[96];          // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_6 = 41;              // Tag.BODY
    int entity_0;               // Tag.BODY
    entity_5[entity_2] = '1';   // Tag.BUFWRITE_COND_SAFE
    entity_0 = 44;              // Tag.BODY
    entity_7[entity_0] = 'C';   // Tag.BUFWRITE_TAUT_SAFE
    entity_4[entity_6] = '0';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER