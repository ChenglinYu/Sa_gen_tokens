#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    char entity_6[18];                                   // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    entity_3 = 35;                                       // Tag.BODY
    if (entity_7 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 74;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 47; entity_5 < entity_7; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_2[86];                                   // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_6[entity_5] = 'B';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_0 = 40;                                       // Tag.BODY
    entity_2[entity_0] = '2';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER