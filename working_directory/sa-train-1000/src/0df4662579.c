#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_7;               // Tag.BODY
    char entity_3[92];          // Tag.BODY
    char entity_6[87];          // Tag.BODY
    int entity_2;               // Tag.BODY
    entity_7 = 43;              // Tag.BODY
    int entity_8;               // Tag.BODY
    entity_2 = 84;              // Tag.BODY
    entity_8 = 75;              // Tag.BODY
    while(entity_7 < entity_8){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    entity_3[entity_2] = 'a';   // Tag.BUFWRITE_TAUT_SAFE
    }                           // Tag.BODY
    entity_6[entity_7] = 'W';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER