#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_5;               // Tag.BODY
    int entity_6;               // Tag.BODY
    entity_5 = 60;              // Tag.BODY
    entity_6 = 79;              // Tag.BODY
    char entity_7[86];          // Tag.BODY
    while(entity_5 < entity_6){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_5] = 'w';   // Tag.BUFWRITE_COND_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER