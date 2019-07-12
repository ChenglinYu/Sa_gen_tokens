#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_0[23];        // Tag.BODY
    entity_9 = 52;            // Tag.BODY
    entity_4 = 4;             // Tag.BODY
    char entity_5[52];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 22;            // Tag.BODY
    }                         // Tag.BODY
    char entity_6[27];        // Tag.BODY
    entity_0[entity_2] = 'G'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;             // Tag.BODY
    entity_5[entity_4] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    entity_3 = 70;            // Tag.BODY
    entity_6[entity_3] = 'K'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER