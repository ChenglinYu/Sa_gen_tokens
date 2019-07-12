#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[75];        // Tag.BODY
    char entity_5[20];        // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_2 = 95;            // Tag.BODY
    entity_6 = 52;            // Tag.BODY
    entity_3 = rand();        // Tag.BODY
    if(entity_3 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 29;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    char entity_4[74];        // Tag.BODY
    entity_5[entity_3] = 'L'; // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_6] = 'R'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 90;            // Tag.BODY
    entity_4[entity_8] = 'h'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER