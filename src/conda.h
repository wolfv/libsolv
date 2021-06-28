/*
 * Copyright (c) 2019, SUSE LLC
 *
 * This program is licensed under the BSD license, read LICENSE.BSD
 * for further information
 */

/*
 * conda.h
 *
 */

#ifndef LIBSOLV_CONDA_H
#define LIBSOLV_CONDA_H

#include "queue.h"
#include "pool.h"

int pool_evrcmp_conda(const Pool *pool, const char *evr1, const char *evr2, int mode);
int solvable_conda_matchversion(Solvable *s, const char *version);
Id pool_addrelproviders_conda(Pool *pool, Id name, Id evr, Queue *plist);
Id pool_conda_matchspec(Pool *pool, const char *name);
int conda_compare_bounds(const char* b1, const char* b2);
void normalize_bound(int* f, char* b);
Reldep* select_best_bound(Pool* pool, Queue* q, Id name);

#endif /* LIBSOLV_CONDA_H */

