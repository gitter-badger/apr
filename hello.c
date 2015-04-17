
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <apr_general.h>
#include <apr_pools.h>


#define MEM_ALLOC_SIZE 4096


int main()
{
    apr_status_t rv;

    /* per-process initialization */
    rv = apr_initialize();
    if (rv != APR_SUCCESS) {
        assert(0);
        return -1;
    }

    apr_pool_t *mp;
    /* create a memory pool. */
    apr_pool_create(&mp, NULL);

    /* allocate memory chunks from the memory pool */
    char *buf1;
    buf1 = apr_palloc(mp, MEM_ALLOC_SIZE);

    // Allocated ...
    strcpy(buf1, "Hello, 123!");
    fprintf(stdout, "%s", buf1);
    
    apr_pool_clear(mp);
    apr_pool_destroy(mp);

    apr_terminate();

    return 0;
}
