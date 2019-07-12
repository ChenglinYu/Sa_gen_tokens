#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[27];        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 80;            // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_1] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER