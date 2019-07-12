#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_8;               // Tag.BODY
    int entity_0;               // Tag.BODY
    char entity_6[62];          // Tag.BODY
    entity_8 = 61;              // Tag.BODY
    entity_0 = 22;              // Tag.BODY
    while(entity_8 < entity_0){ // Tag.BODY
    entity_8++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_1;               // Tag.BODY
    entity_6[entity_8] = 'n';   // Tag.BUFWRITE_COND_SAFE
    char entity_7[14];          // Tag.BODY
    entity_1 = 10;              // Tag.BODY
    entity_7[entity_1] = 'd';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER