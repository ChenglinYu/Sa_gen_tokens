#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[71];          // Tag.BODY
    int entity_1;               // Tag.BODY
    int entity_7;               // Tag.BODY
    entity_7 = 0;               // Tag.BODY
    entity_1 = 19;              // Tag.BODY
    while(entity_7 < entity_1){ // Tag.BODY
    entity_7++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_7] = 'R';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER