#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_1;               // Tag.BODY
    int entity_4;               // Tag.BODY
    char entity_7[51];          // Tag.BODY
    entity_1 = 79;              // Tag.BODY
    entity_4 = 90;              // Tag.BODY
    while(entity_1 < entity_4){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_7[entity_1] = '7';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER