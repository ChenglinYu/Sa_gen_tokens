#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_2;               // Tag.BODY
    int entity_5;               // Tag.BODY
    char entity_9[66];          // Tag.BODY
    entity_2 = 60;              // Tag.BODY
    entity_5 = 50;              // Tag.BODY
    while(entity_2 < entity_5){ // Tag.BODY
    entity_2++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_3;               // Tag.BODY
    char entity_7[60];          // Tag.BODY
    entity_9[entity_2] = 'm';   // Tag.BUFWRITE_COND_SAFE
    entity_3 = 34;              // Tag.BODY
    entity_7[entity_3] = '4';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER