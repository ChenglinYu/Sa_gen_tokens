#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_9;                                        // Tag.BODY
    char entity_7[26];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_9 = rand();                                   // Tag.BODY
    entity_1 = 1;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_8[73];                                   // Tag.BODY
    entity_6 = 40;                                       // Tag.BODY
    if (entity_9 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_9 = 1;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_2 = 83; entity_2 < entity_9; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_2] = 'C';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_7[entity_6] = 'F';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER