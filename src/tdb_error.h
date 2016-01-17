
#ifndef __TDB_ERROR_H__
#define __TDB_ERROR_H__

typedef enum{

    TDB_ERR_OK = 0,

    /* generic */

    TDB_ERR_NOMEM = -2,
    TDB_ERR_PATH_TOO_LONG = -3,
    TDB_ERR_UNKNOWN_FIELD = -4,
    TDB_ERR_UNKNOWN_UUID = -5,
    TDB_ERR_INVALID_TRAIL_ID = -6,
    TDB_ERR_HANDLE_IS_NULL = -7,
    TDB_ERR_HANDLE_ALREADY_OPENED = -8,
    TDB_ERR_UNKNOWN_OPTION = -9,
    TDB_ERR_INVALID_OPTION_VALUE = -10,

    /* io */

    TDB_ERR_IO_OPEN = -65,
    TDB_ERR_IO_CLOSE = -66,
    TDB_ERR_IO_WRITE = -67,
    TDB_ERR_IO_READ = -68,
    TDB_ERR_IO_TRUNCATE = -69,

    /* tdb_open */

    TDB_ERR_INVALID_INFO_FILE = -129,
    TDB_ERR_INVALID_VERSION_FILE = -130,
    TDB_ERR_INCOMPATIBLE_VERSION = -131,
    TDB_ERR_INVALID_FIELDS_FILE = -132,
    TDB_ERR_INVALID_UUIDS_FILE = -133,
    TDB_ERR_INVALID_CODEBOOK_FILE = -134,
    TDB_ERR_INVALID_TRAILS_FILE = -135,
    TDB_ERR_INVALID_LEXICON_FILE = -136,

    /* tdb_cons */

    TDB_ERR_TOO_MANY_FIELDS = -257,
    TDB_ERR_DUPLICATE_FIELDS = -258,
    TDB_ERR_INVALID_FIELDNAME = -259,
    TDB_ERR_TOO_MANY_TRAILS = -260,
    TDB_ERR_VALUE_TOO_LONG = -261,
    TDB_ERR_APPEND_FIELDS_MISMATCH = -262,
    TDB_ERR_LEXICON_TOO_LARGE = -263,
    TDB_ERR_TIMESTAMP_TOO_LARGE = -264,
    TDB_ERR_TRAIL_TOO_LONG = -265

} tdb_error;

#endif /* __TDB_ERROR_H__ */

