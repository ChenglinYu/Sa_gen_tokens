#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_1[92];                                   // Tag.BODY
    entity_0 = 77;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_8[25];                                   // Tag.BODY
    entity_7 = 11;                                       // Tag.BODY
    entity_1[entity_7] = '5';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_5 = 43; entity_5 < entity_0; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_5] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;                                        // Tag.BODY
    entity_4 = 70;                                       // Tag.BODY
    char entity_2[38];                                   // Tag.BODY
    entity_2[entity_4] = 'L';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER