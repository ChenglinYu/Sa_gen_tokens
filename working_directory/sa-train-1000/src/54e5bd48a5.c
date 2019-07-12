#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_1[92];                                   // Tag.BODY
    char entity_3[69];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_2 = 97;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    char entity_0[97];                                   // Tag.BODY
    entity_0[entity_2] = 'J';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 86;                                       // Tag.BODY
    entity_7 = 0;                                        // Tag.BODY
    for(entity_4 = 44; entity_4 < entity_6; entity_4++){ // Tag.BODY
    entity_1[entity_7] = 'b';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_3[entity_4] = 'g';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER