#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 71;            // Tag.BODY
    entity_0 = 9;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_6[75];        // Tag.BODY
    char entity_3[44];        // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6[entity_9] = 'W'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 88;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_2] = '5'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER