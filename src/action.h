#ifndef _ACTION_H
#define _ACTION_H

// There is probably somewhere better to put these.
enum action
{
        ACTION_BACKUP=0,
        ACTION_RESTORE,
        ACTION_VERIFY,
        ACTION_LIST,
        ACTION_LONG_LIST,
        ACTION_BACKUP_TIMED,
        ACTION_STATUS,
        ACTION_STATUS_SNAPSHOT,
        ACTION_ESTIMATE,
        ACTION_DELETE,
};

#endif
