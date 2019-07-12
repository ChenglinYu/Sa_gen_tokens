#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_1 = 66;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_7[69];                                   // Tag.BODY
    entity_5 = 31;                                       // Tag.BODY
    char entity_4[23];                                   // Tag.BODY
    entity_7[entity_5] = '2';                            // Tag.BUFWRITE_TAUT_SAFE
    if (entity_0 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 88;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 35; entity_2 < entity_0; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_8[80];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_4[entity_2] = '8';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_6 = 70;                                       // Tag.BODY
    entity_8[entity_6] = 'G';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER