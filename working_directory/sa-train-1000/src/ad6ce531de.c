#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    char entity_6[39];                                   // Tag.BODY
    char entity_7[13];                                   // Tag.BODY
    entity_4 = 73;                                       // Tag.BODY
    entity_3 = 99;                                       // Tag.BODY
    entity_1 = rand();                                   // Tag.BODY
    if (entity_1 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_1 = 22;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 27; entity_8 < entity_1; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_8] = 'D';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;                                        // Tag.BODY
    char entity_5[86];                                   // Tag.BODY
    entity_6[entity_3] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 96;                                       // Tag.BODY
    entity_5[entity_2] = 'p';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER