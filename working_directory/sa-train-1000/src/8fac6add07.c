#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[29];          // Tag.BODY
    int entity_6;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 44;              // Tag.BODY
    entity_6 = 42;              // Tag.BODY
    while(entity_4 < entity_6){ // Tag.BODY
    entity_4++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_4] = 'K';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER