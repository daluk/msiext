// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__2CCC624C_C151_496F_A333_28951EA9A8D3__INCLUDED_)
#define AFX_STDAFX_H__2CCC624C_C151_496F_A333_28951EA9A8D3__INCLUDED_

#pragma once

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#define OEMRESOURCE         // Enable OIC_* definitions
#define _WIN32_WINNT  _WIN32_WINNT_WINXP  // Support Windows XP and later
#define _WIN32_IE     _WIN32_IE_IE70      // Support IE 7.0 and later
#include <SDKDDKVer.h>

#pragma warning( disable : 4786 )  // warning of hell: debug symbol too long...

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdisp.h>        // MFC Automation classes
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__2CCC624C_C151_496F_A333_28951EA9A8D3__INCLUDED_)
