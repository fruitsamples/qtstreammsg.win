//////////////	File:		QTStreamMsg.h////	Contains:	Sample code for intercepting and issuing messages to the streaming controller bar.////	Written by:	Tim Monroe////	Copyright:	� 1999 by Apple Computer, Inc., all rights reserved.////	Change History (most recent first):////	   <1>	 	06/11/99	rtm		first file//	 //////////#ifndef __MOVIES__#include <Movies.h>#endif#include <stdlib.h>#include <string.h>////////////// constants////////////#define MESSAGE_ARRAY		{									\								"Establishing connection",		\								"Talking to server",			\								"Filling buffer"				\							}#define kConnectingMsgIndex		0#define kNegotiatingMsgIndex	1#define kBufferingMsgIndex		2#define kMaxMessageSize			256			// largest streaming message we expect to receive////////////// function prototypes////////////void							QTStreamMsg_IssueMessage (MovieController theMC, char *theMessage);PASCAL_RTN Boolean				QTStreamMsg_ActionFilterProc (MovieController theMC, short theAction, void *theParams, long theRefCon);