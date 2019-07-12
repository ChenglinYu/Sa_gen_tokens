#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 57;                                       // Tag.BODY
    char entity_4[0];                                    // Tag.BODY
    char entity_8[57];                                   // Tag.BODY
    entity_2 = 93;                                       // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 97;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 74; entity_7 < entity_5; entity_7++){ // Tag.BODY
    entity_4[entity_2] = 'p';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    entity_8[entity_7] = 'x';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;                                        // Tag.BODY
    entity_9 = 52;                                       // Tag.BODY
    char entity_1[40];                                   // Tag.BODY
    entity_1[entity_9] = 'g';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER