#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    char entity_7[4];                                    // Tag.BODY
    int entity_6;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_1 = 16;                                       // Tag.BODY
    if (entity_6 < entity_1){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 70;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_5 = 95; entity_5 < entity_6; entity_5++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_5] = 'c';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER