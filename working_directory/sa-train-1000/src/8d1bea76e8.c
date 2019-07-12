#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    char entity_3[17];                                   // Tag.BODY
    entity_5 = 2;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    if (entity_6 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 8;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_7 = 52; entity_7 < entity_6; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_1[11];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_0 = 52;                                       // Tag.BODY
    entity_2 = 66;                                       // Tag.BODY
    entity_1[entity_0] = 'S';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_7] = 'F';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_9[21];                                   // Tag.BODY
    entity_9[entity_2] = 'C';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER