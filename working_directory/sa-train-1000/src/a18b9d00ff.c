#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[60];                                   // Tag.BODY
    entity_8 = 78;                                       // Tag.BODY
    entity_5 = rand();                                   // Tag.BODY
    if (entity_5 < entity_8){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_5 = 31;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_6 = 31; entity_6 < entity_5; entity_6++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_4[entity_6] = 'M';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[16];                                   // Tag.BODY
    entity_1 = 67;                                       // Tag.BODY
    entity_3[entity_1] = 'm';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER