#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    char entity_3[55];          // Tag.BODY
    int entity_5;               // Tag.BODY
    int entity_4;               // Tag.BODY
    entity_4 = 80;              // Tag.BODY
    entity_5 = 59;              // Tag.BODY
    while(entity_5 < entity_4){ // Tag.BODY
    entity_5++;                 // Tag.BODY
    }                           // Tag.BODY
    entity_3[entity_5] = '0';   // Tag.BUFWRITE_COND_UNSAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER