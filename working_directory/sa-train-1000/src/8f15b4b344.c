#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    char entity_2[28];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    entity_6 = rand();                                   // Tag.BODY
    entity_5 = 49;                                       // Tag.BODY
    int entity_1;                                        // Tag.BODY
    if (entity_6 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_6 = 2;                                        // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_1 = 20; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_2[entity_1] = 'k';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER