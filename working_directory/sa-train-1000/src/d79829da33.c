#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[68];        // Tag.BODY
    int entity_7;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_6[16];        // Tag.BODY
    entity_7 = 70;            // Tag.BODY
    entity_9 = 90;            // Tag.BODY
    if(entity_2 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 97;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_2] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;             // Tag.BODY
    char entity_0[21];        // Tag.BODY
    entity_5[entity_9] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_4 = 26;            // Tag.BODY
    entity_0[entity_4] = 'p'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER