#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_5[39];                                   // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 12;                                       // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_9){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 64;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 31; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_5[entity_3] = '9';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[72];                                   // Tag.BODY
    entity_7 = 95;                                       // Tag.BODY
    char entity_1[66];                                   // Tag.BODY
    entity_0[entity_7] = 'I';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_6 = 24;                                       // Tag.BODY
    entity_1[entity_6] = 'r';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER