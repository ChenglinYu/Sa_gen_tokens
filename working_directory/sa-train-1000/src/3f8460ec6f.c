#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_0[83];                                   // Tag.BODY
    char entity_3[73];                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_6 = 21;                                       // Tag.BODY
    entity_2 = 89;                                       // Tag.BODY
    if (entity_7 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 65;                                       // Tag.BODY
    entity_3[entity_2] = '7';                            // Tag.BUFWRITE_TAUT_UNSAFE
    }                                                    // Tag.BODY
    for(entity_4 = 36; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_0[entity_4] = '4';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER