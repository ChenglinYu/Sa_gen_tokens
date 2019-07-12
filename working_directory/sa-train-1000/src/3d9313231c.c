#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_7[38];        // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_5 = 48;            // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 61;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_1] = 'g'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER