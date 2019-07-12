#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_3 = 66;            // Tag.BODY
    char entity_1[37];        // Tag.BODY
    int entity_5;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_7[27];        // Tag.BODY
    entity_2 = 39;            // Tag.BODY
    entity_8 = 60;            // Tag.BODY
    char entity_4[47];        // Tag.BODY
    entity_4[entity_3] = '9'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_1[entity_2] = 'u'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_5 = 89;            // Tag.BODY
    if(entity_8 < entity_5){  // Tag.BODY
    entity_8 = 14;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 95;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = 'a'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER