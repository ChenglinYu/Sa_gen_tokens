#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[80];        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[20];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 5;             // Tag.BODY
    entity_1 = 89;            // Tag.BODY
    entity_4[entity_7] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 30;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_5[entity_6] = '1'; // Tag.BUFWRITE_COND_UNSAFE
    entity_2 = 55;            // Tag.BODY
    char entity_3[16];        // Tag.BODY
    entity_3[entity_2] = 'd'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER