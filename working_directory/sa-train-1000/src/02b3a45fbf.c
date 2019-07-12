#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_8[67];                                   // Tag.BODY
    char entity_2[52];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_6 = 56;                                       // Tag.BODY
    entity_3 = 60;                                       // Tag.BODY
    if (entity_7 < entity_6){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 68;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_4 = 20; entity_4 < entity_7; entity_4++){ // Tag.BODY
    entity_8[entity_3] = 'Q';                            // Tag.BUFWRITE_TAUT_SAFE
    }                                                    // Tag.BODY
    entity_2[entity_4] = '6';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER