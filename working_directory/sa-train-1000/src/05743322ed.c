#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    char entity_6[8];         // Tag.BODY
    entity_9 = 73;            // Tag.BODY
    if(entity_3 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 96;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[41];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_2 = 58;            // Tag.BODY
    entity_5[entity_2] = 'R'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6[entity_3] = 'w'; // Tag.BUFWRITE_COND_UNSAFE
    entity_8 = 88;            // Tag.BODY
    char entity_4[74];        // Tag.BODY
    entity_4[entity_8] = '0'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER