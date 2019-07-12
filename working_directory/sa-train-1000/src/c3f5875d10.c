#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_6;               // Tag.BODY
    entity_6 = 21;              // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 37;              // Tag.BODY
    char entity_9[2];           // Tag.BODY
    while(entity_4 < entity_6){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_9[entity_4] = 'N';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER