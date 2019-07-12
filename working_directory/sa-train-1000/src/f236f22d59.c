#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    entity_0 = rand();                                   // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_3 = 50;                                       // Tag.BODY
    char entity_2[9];                                    // Tag.BODY
    if (entity_0 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_0 = 77;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 22; entity_6 < entity_0; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_2[entity_6] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_4[61];                                   // Tag.BODY
    entity_5 = 90;                                       // Tag.BODY
    entity_4[entity_5] = 'U';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER