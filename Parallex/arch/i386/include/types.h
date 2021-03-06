/*
 * =====================================================================================
 *
 *       Filename:  types.h
 *
 *       some data types by ourself;
 *
 * =====================================================================================
 */

#ifndef TYPES_H
#define TYPES_H

#ifndef NULL
	#define NULL 0
#endif 

#ifndef TRUE
	#define TRUE 1
	#define FALSE 0
#endif 

typedef unsigned int    uint32;
typedef 	 int    int32;
typedef unsigned short  uint16;
typedef 	 short  int16;
typedef unsigned char 	uint8;
typedef 	 char  	int8;

typedef unsigned long long uint64;
typedef          long long  int64;


/*time */
typedef uint32 time_t;

/*pid*/
typedef int32  pid_t;

/*pgd*/
typedef uint32 pgd_t;

/*pte*/
typedef int32  pte_t;

/*原子类型*/

typedef struct {
    volatile int counter;
}atomic_t;

/*链表*/
struct list_head {
    struct list_head *next,*prev;
};



#endif //TYPES_H
