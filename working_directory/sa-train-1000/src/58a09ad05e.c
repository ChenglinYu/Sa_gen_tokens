#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_3;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_1 = 44;              // Tag.BODY
    char entity_2[55];          // Tag.BODY
    entity_3 = 53;              // Tag.BODY
    char entity_6[68];          // Tag.BODY
    entity_7 = 47;              // Tag.BODY
    while(entity_1 < entity_7){ // Tag.BODY
    entity_6[entity_3] = '8';   // Tag.BUFWRITE_TAUT_SAFE
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_1] = 'O';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER