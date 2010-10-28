/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 2008-2010 WiredTiger, Inc.
 *	All rights reserved.
 *
 * $Id$
 */

#if defined(__cplusplus)
extern "C" {
#endif

struct __wt_stats {
	u_int64_t	 v;				/* 64-bit value */
	const char	*desc;				/* text description */
};

#define	WT_STAT(stats, def)						\
	(stats)[WT_STAT_ ## def].v
#define	WT_STAT_DECR(stats, def) do {					\
	--(stats)[WT_STAT_ ## def].v;					\
} while (0)
#define	WT_STAT_INCR(stats, def) do {					\
	++(stats)[WT_STAT_ ## def].v;					\
} while (0)
#define	WT_STAT_DECRV(stats, def, value) do {				\
	(stats)[WT_STAT_ ## def].v -= (value);				\
} while (0)
#define	WT_STAT_INCRV(stats, def, value) do {				\
	(stats)[WT_STAT_ ## def].v += (value);				\
} while (0)
#define	WT_STAT_SET(stats, def, value) do {				\
	(stats)[WT_STAT_ ## def].v = (value);				\
} while (0)

/*
 * DO NOT EDIT: automatically built by dist/stat.py.
 */
/* Statistics section: BEGIN */

/*
 * Statistics entries for CACHE handle.
 */
#define	WT_STAT_CACHE_ALLOC			    0
#define	WT_STAT_CACHE_BYTES_INUSE		    1
#define	WT_STAT_CACHE_BYTES_MAX			    2
#define	WT_STAT_CACHE_EVICT_HAZARD		    3
#define	WT_STAT_CACHE_EVICT_MODIFIED		    4
#define	WT_STAT_CACHE_EVICT_UNMODIFIED		    5
#define	WT_STAT_CACHE_FREE			    6
#define	WT_STAT_CACHE_HASH_BUCKETS		    7
#define	WT_STAT_CACHE_HIT			    8
#define	WT_STAT_CACHE_MAX_BUCKET_ENTRIES	    9
#define	WT_STAT_CACHE_MISS			   10
#define	WT_STAT_CACHE_PAGES_INUSE		   11
#define	WT_STAT_CACHE_READ_RESTARTS		   12

/*
 * Statistics entries for DB/IDB database.
 */
#define	WT_STAT_BASE_RECNO			    0
#define	WT_STAT_DUP_TREE			    1
#define	WT_STAT_FIXED_LEN			    2
#define	WT_STAT_INTLMAX				    3
#define	WT_STAT_INTLMIN				    4
#define	WT_STAT_ITEM_DATA_OVFL			    5
#define	WT_STAT_ITEM_DUP_DATA			    6
#define	WT_STAT_ITEM_KEY_OVFL			    7
#define	WT_STAT_ITEM_TOTAL_DATA			    8
#define	WT_STAT_ITEM_TOTAL_DELETED		    9
#define	WT_STAT_ITEM_TOTAL_KEY			   10
#define	WT_STAT_LEAFMAX				   11
#define	WT_STAT_LEAFMIN				   12
#define	WT_STAT_MAGIC				   13
#define	WT_STAT_MAJOR				   14
#define	WT_STAT_MINOR				   15
#define	WT_STAT_PAGE_COL_FIXED			   16
#define	WT_STAT_PAGE_COL_INTERNAL		   17
#define	WT_STAT_PAGE_COL_VARIABLE		   18
#define	WT_STAT_PAGE_DUP_INTERNAL		   19
#define	WT_STAT_PAGE_DUP_LEAF			   20
#define	WT_STAT_PAGE_FREE			   21
#define	WT_STAT_PAGE_INTERNAL			   22
#define	WT_STAT_PAGE_LEAF			   23
#define	WT_STAT_PAGE_OVERFLOW			   24
#define	WT_STAT_TREE_LEVEL			   25

/*
 * Statistics entries for DB/IDB handle.
 */
#define	WT_STAT_DB_CACHE_ALLOC			    0
#define	WT_STAT_DB_CACHE_FREE			    1
#define	WT_STAT_DB_CACHE_HIT			    2
#define	WT_STAT_DB_CACHE_MISS			    3
#define	WT_STAT_DUPLICATE_ITEMS_INSERTED	    4
#define	WT_STAT_HUFFMAN_DATA			    5
#define	WT_STAT_HUFFMAN_KEY			    6
#define	WT_STAT_ITEMS_INSERTED			    7
#define	WT_STAT_OVERFLOW_DATA			    8
#define	WT_STAT_OVERFLOW_KEY			    9
#define	WT_STAT_REPEAT_COUNT			   10

/*
 * Statistics entries for ENV/IENV handle.
 */
#define	WT_STAT_DATABASE_OPEN			    0
#define	WT_STAT_MEMALLOC			    1
#define	WT_STAT_MEMFREE				    2
#define	WT_STAT_MTX_LOCK			    3
#define	WT_STAT_TOTAL_READ_IO			    4
#define	WT_STAT_TOTAL_WRITE_IO			    5
#define	WT_STAT_WORKQ_PASSES			    6
#define	WT_STAT_WORKQ_YIELD			    7

/*
 * Statistics entries for FH handle.
 */
#define	WT_STAT_FSYNC				    0
#define	WT_STAT_READ_IO				    1
#define	WT_STAT_WRITE_IO			    2

/*
 * Statistics entries for Methods.
 */
#define	WT_STAT_DB_BTREE_COMPARE_DUP_GET	    0
#define	WT_STAT_DB_BTREE_COMPARE_DUP_SET	    1
#define	WT_STAT_DB_BTREE_COMPARE_GET		    2
#define	WT_STAT_DB_BTREE_COMPARE_INT_GET	    3
#define	WT_STAT_DB_BTREE_COMPARE_INT_SET	    4
#define	WT_STAT_DB_BTREE_COMPARE_SET		    5
#define	WT_STAT_DB_BTREE_DUP_OFFPAGE_GET	    6
#define	WT_STAT_DB_BTREE_DUP_OFFPAGE_SET	    7
#define	WT_STAT_DB_BTREE_ITEMSIZE_GET		    8
#define	WT_STAT_DB_BTREE_ITEMSIZE_SET		    9
#define	WT_STAT_DB_BTREE_PAGESIZE_GET		   10
#define	WT_STAT_DB_BTREE_PAGESIZE_SET		   11
#define	WT_STAT_DB_BULK_LOAD			   12
#define	WT_STAT_DB_CLOSE			   13
#define	WT_STAT_DB_COLUMN_SET			   14
#define	WT_STAT_DB_COL_DEL			   15
#define	WT_STAT_DB_COL_DEL_RESTART		   16
#define	WT_STAT_DB_COL_GET			   17
#define	WT_STAT_DB_COL_PUT			   18
#define	WT_STAT_DB_COL_PUT_RESTART		   19
#define	WT_STAT_DB_DUMP				   20
#define	WT_STAT_DB_ERRCALL_GET			   21
#define	WT_STAT_DB_ERRCALL_SET			   22
#define	WT_STAT_DB_ERRFILE_GET			   23
#define	WT_STAT_DB_ERRFILE_SET			   24
#define	WT_STAT_DB_ERRPFX_GET			   25
#define	WT_STAT_DB_ERRPFX_SET			   26
#define	WT_STAT_DB_HUFFMAN_SET			   27
#define	WT_STAT_DB_OPEN				   28
#define	WT_STAT_DB_ROW_DEL			   29
#define	WT_STAT_DB_ROW_DEL_RESTART		   30
#define	WT_STAT_DB_ROW_GET			   31
#define	WT_STAT_DB_ROW_PUT			   32
#define	WT_STAT_DB_ROW_PUT_RESTART		   33
#define	WT_STAT_DB_STAT_CLEAR			   34
#define	WT_STAT_DB_STAT_PRINT			   35
#define	WT_STAT_DB_SYNC				   36
#define	WT_STAT_DB_VERIFY			   37
#define	WT_STAT_ENV_CACHE_DRAIN_CNT_GET		   38
#define	WT_STAT_ENV_CACHE_DRAIN_CNT_SET		   39
#define	WT_STAT_ENV_CACHE_HASH_SIZE_GET		   40
#define	WT_STAT_ENV_CACHE_HASH_SIZE_SET		   41
#define	WT_STAT_ENV_CACHE_SIZE_GET		   42
#define	WT_STAT_ENV_CACHE_SIZE_SET		   43
#define	WT_STAT_ENV_CLOSE			   44
#define	WT_STAT_ENV_DATA_UPDATE_INITIAL_GET	   45
#define	WT_STAT_ENV_DATA_UPDATE_INITIAL_SET	   46
#define	WT_STAT_ENV_DATA_UPDATE_MAX_GET		   47
#define	WT_STAT_ENV_DATA_UPDATE_MAX_SET		   48
#define	WT_STAT_ENV_DB				   49
#define	WT_STAT_ENV_ERRCALL_GET			   50
#define	WT_STAT_ENV_ERRCALL_SET			   51
#define	WT_STAT_ENV_ERRFILE_GET			   52
#define	WT_STAT_ENV_ERRFILE_SET			   53
#define	WT_STAT_ENV_ERRPFX_GET			   54
#define	WT_STAT_ENV_ERRPFX_SET			   55
#define	WT_STAT_ENV_HAZARD_SIZE_GET		   56
#define	WT_STAT_ENV_HAZARD_SIZE_SET		   57
#define	WT_STAT_ENV_MSGCALL_GET			   58
#define	WT_STAT_ENV_MSGCALL_SET			   59
#define	WT_STAT_ENV_MSGFILE_GET			   60
#define	WT_STAT_ENV_MSGFILE_SET			   61
#define	WT_STAT_ENV_OPEN			   62
#define	WT_STAT_ENV_STAT_CLEAR			   63
#define	WT_STAT_ENV_STAT_PRINT			   64
#define	WT_STAT_ENV_SYNC			   65
#define	WT_STAT_ENV_TOC				   66
#define	WT_STAT_ENV_TOC_SIZE_GET		   67
#define	WT_STAT_ENV_TOC_SIZE_SET		   68
#define	WT_STAT_ENV_VERBOSE_GET			   69
#define	WT_STAT_ENV_VERBOSE_SET			   70
#define	WT_STAT_WT_TOC_CLOSE			   71

/* Statistics section: END */

#if defined(__cplusplus)
}
#endif
