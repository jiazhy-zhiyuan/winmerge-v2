/** 
 * @file  DirViewColItems.h
 *
 * @brief Declaration file for DirColInfo
 *
 * @date  Created: 2003-08-19
 */
#pragma once

class CDiffContext;

// DirViewColItems typedefs
typedef String (*ColGetFncPtrType)(const CDiffContext *, const void *);
typedef int (*ColSortFncPtrType)(const CDiffContext *, const void *, const void *);


/**
 * @brief Information about one column of dirview list info
 */
struct DirColInfo
{
	LPCTSTR regName; /**< Internal name used for registry entries etc */
	// localized string resources
	int idName; /**< Displayed name, ID of string resource */
	int idDesc; /**< Description, ID of string resource */
	ColGetFncPtrType getfnc; /**< Handler giving display string */
	ColSortFncPtrType sortfnc; /**< Handler for sorting this column */
	SIZE_T offset;
	int physicalIndex; /**< Current physical index, -1 if not displayed */
	bool defSortUp; /**< Does column start with ascending sort (most do) */
	int alignment; /**< Column alignment */
};

extern const int g_ncols;
extern const int g_ncols3;