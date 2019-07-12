#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[62];        // Tag.BODY
    entity_2 = 42;            // Tag.BODY
    entity_4 = 1;             // Tag.BODY
    char entity_3[30];        // Tag.BODY
    entity_3[entity_2] = '1'; // Tag.BUFWRITE_TAUT_UNSAFE
    int entity_7;             // Tag.BODY
    char entity_1[1];         // Tag.BODY
    entity_7 = 57;            // Tag.BODY
    if(entity_6 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1[entity_7] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 11;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_6] = 'C'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER