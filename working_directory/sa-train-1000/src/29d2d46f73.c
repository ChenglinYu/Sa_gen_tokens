#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_3[0];         // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_5 = 14;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    if(entity_8 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 29;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_7[63];        // Tag.BODY
    entity_3[entity_8] = 'h'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 65;            // Tag.BODY
    entity_7[entity_2] = '8'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER