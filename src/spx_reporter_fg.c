#include "spx_reporter_fg.h"

typedef struct {
    spx_profiler_reporter_t base;
} fg_reporter_t;

static spx_profiler_reporter_cost_t fg_notify(spx_profiler_reporter_t * reporter, const spx_profiler_event_t * event);

spx_profiler_reporter_t * spx_reporter_fg_create(
    spx_output_stream_t * output
) {
    fg_reporter_t * reporter = (fg_reporter_t *) spx_profiler_reporter_create(
        sizeof(*reporter),
        output,
        fg_notify,
        NULL
    );

    if (!reporter) {
        return NULL;
    }

    return (spx_profiler_reporter_t *) reporter;
}

static spx_profiler_reporter_cost_t fg_notify(spx_profiler_reporter_t * reporter, const spx_profiler_event_t * event)
{
    return SPX_PROFILER_REPORTER_COST_LIGHT;
}
