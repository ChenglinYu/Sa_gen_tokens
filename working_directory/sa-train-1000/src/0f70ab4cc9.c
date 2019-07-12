#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_6[29];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_2 = 90;                                       // Tag.BODY
    int entity_3;                                        // Tag.BODY
    for(entity_3 = 72; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_1;                                        // Tag.BODY
    char entity_0[43];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_6[entity_3] = 'T';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 42;                                       // Tag.BODY
    entity_7 = 34;                                       // Tag.BODY
    entity_0[entity_7] = 'r';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_5[40];                                   // Tag.BODY
    entity_5[entity_1] = 'e';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER