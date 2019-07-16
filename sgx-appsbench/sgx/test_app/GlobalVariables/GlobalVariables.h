#ifndef _GLOBAL_VARIABLES_
#define _GLOBAL_VARIABLES_

#include "UtilsStructs.h"

#ifdef RUNTIME_PARSER

    extern globalConfig_t GLOBAL_CONFIG;


#else

    globalConfig_t GLOBAL_CONFIG = {
#ifdef WRITE_LOG_FILE
            .DATA_FILE_NAME = PLOTDATA_FILE_NAME,
#endif
            .NUM_OF_ITERATION = NUMBER_OF_ITERATIONS,
            .RUNTIME = RUNTIME_PHASE,
            .WARMUP_TIME = WARMUP_PHASE
#ifdef CUSTOM_SHA256_TEST
            ,
            .HASH256_LEN = SHA_INPUT_LEN
#endif
#ifdef DNA_PATTERN_MATCHING
            ,
            .DNA_INPUT = INPUT_DNA,
            .PATTERN_INPUT = PATTERN,
            .SHOW_DIST = DIST_FLAG,
            .SHOW_POS = SHOW_POS_FLAG,
            .SHOW_LINE = SHOW_LINE_FLAG,
            .PRINT_LINE = PRINT_LINE_FLAG,
            .MATCH_ONLY = MATCH_ONLY_FLAG,
            .COUNT = COUNT_FLAG,
            .COMPACT = COMPACT_FLAG,
            .DIST = DIST_FLAG,
            .VERBOSE = VERBOSE_FLAG,
            .END_LINE = END_LINE_FLAG,
            .PREFIX = PREFIX_FLAG,
            .INVERT = INVERT_FLAG,
            .BEST = BEST_FLAG,
            .NON_DNA = NON_DNA_FLAG,
            .ALL = ALL_FLAG,
            .MEMORY = (size_t)MEMORY_ARG

#endif
    };

#endif




#endif
