#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_2[94];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_7[55];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_6 = 88;                                       // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    entity_1 = 24;                                       // Tag.BODY
    if (entity_0 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 11;                                       // Tag.BODY
    entity_2[entity_1] = 'b';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    for(entity_8 = 22; entity_8 < entity_0; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_9 = 99;                                       // Tag.BODY
    entity_7[entity_8] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[3];                                    // Tag.BODY
    entity_4[entity_9] = '2';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER