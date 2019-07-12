#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    entity_1 = 60;              // Tag.BODY
    char entity_0[59];          // Tag.BODY
    int entity_7;               // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_2[88];          // Tag.BODY
    entity_7 = 15;              // Tag.BODY
    entity_3 = 13;              // Tag.BODY
    entity_0[entity_3] = '9';   // Tag.BUFWRITE_TAUT_SAFE
    while(entity_7 < entity_1){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_2[entity_7] = 's';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER