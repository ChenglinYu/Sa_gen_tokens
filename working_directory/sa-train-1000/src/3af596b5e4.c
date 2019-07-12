#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_5[75];        // Tag.BODY
    entity_1 = 34;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 34;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 28;            // Tag.BODY
    entity_5[entity_4] = 'g'; // Tag.BUFWRITE_COND_SAFE
    char entity_0[22];        // Tag.BODY
    entity_0[entity_9] = '9'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER