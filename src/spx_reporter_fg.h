#ifndef SPX_REPORTER_FG_H_DEFINED
#define SPX_REPORTER_FG_H_DEFINED

#include "spx_output_stream.h"
#include "spx_profiler.h"

spx_profiler_reporter_t * spx_reporter_fg_create(
    spx_output_stream_t * output
);

#endif /* SPX_REPORTER_FG_H_DEFINED */
