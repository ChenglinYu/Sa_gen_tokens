#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    entity_5 = 60;            // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_2[39];        // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    if(entity_7 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 38;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_7] = '8'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER