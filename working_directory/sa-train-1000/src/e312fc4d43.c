#include <stdlib.h>             // Tag.OTHER
int main()                      // Tag.OTHER
{                               // Tag.OTHER
    int entity_0;               // Tag.BODY
    int entity_1;               // Tag.BODY
    char entity_8[1];           // Tag.BODY
    entity_0 = 23;              // Tag.BODY
    entity_1 = 80;              // Tag.BODY
    while(entity_1 < entity_0){ // Tag.BODY
    entity_1++;                 // Tag.BODY
    }                           // Tag.BODY
    int entity_9;               // Tag.BODY
    entity_8[entity_1] = 'F';   // Tag.BUFWRITE_COND_UNSAFE
    entity_9 = 26;              // Tag.BODY
    char entity_4[51];          // Tag.BODY
    entity_4[entity_9] = 'Y';   // Tag.BUFWRITE_TAUT_SAFE
    return 0;                   // Tag.BODY
}                               // Tag.OTHER