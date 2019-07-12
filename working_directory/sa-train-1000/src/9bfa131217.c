#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[72];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    entity_3 = 9;                                        // Tag.BODY
    if (entity_2 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 99;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 33; entity_0 < entity_2; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_4[73];                                   // Tag.BODY
    char entity_1[46];                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 87;                                       // Tag.BODY
    entity_6[entity_0] = 'W';                            // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;                                        // Tag.BODY
    entity_4[entity_8] = 'J';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_9 = 26;                                       // Tag.BODY
    entity_1[entity_9] = 'z';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER