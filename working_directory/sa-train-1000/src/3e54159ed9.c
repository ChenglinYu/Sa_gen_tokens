#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_2[59];        // Tag.BODY
    entity_7 = 34;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 32;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_2[entity_4] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    char entity_6[48];        // Tag.BODY
    entity_0 = 5;             // Tag.BODY
    entity_6[entity_0] = 'g'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER