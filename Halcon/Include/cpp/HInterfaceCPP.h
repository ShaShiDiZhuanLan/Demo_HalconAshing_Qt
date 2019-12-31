/*****************************************************************************
 * HInterfaceCPP.h
 ***************************************************************************** 
 *
 * Project:      HALCON/C++
 * Description:  Prototypes for HALCON/C++ interface
 *
 * (c) 1996-2016 by MVTec Software GmbH
 *                  www.mvtec.com
 * 
 *****************************************************************************
 *
 * 
 */

#ifndef HINTERFACE_CPP_H
#define HINTERFACE_CPP_H

#include "HSync.h"
#include "hlib/HInstance.h"


namespace Halcon {



/*===========================================================================*/
/*                              Defines                                      */
/*===========================================================================*/

#define EXCEPT_GLOBAL      0
#define EXCEPT_MEMBER      1
#define EXCEPT_MEMBER_BOOL 2


/*===========================================================================*/
/*                             Prototypes                                    */
/*===========================================================================*/

extern LIntExport Herror 
HcppPreCall(HINT proc_index, Hproc_handle *proc_handle, HBOOL compact);

extern LIntExport Herror 
HcppCall(Hproc_handle proc_handle);

extern LIntExport Herror 
HcppPostCall(Hproc_handle proc_handle, Herror err, HINT except);

/* storing input objects for processing */
extern LIntExport Herror 
HcppStoreIO(Hproc_handle proc_handle, HINT par, const Hobject &inObjVar);

extern LIntExport Herror
HcppStoreIO(Hproc_handle proc_handle, HINT par, const HObject *inObjVar);

extern LIntExport Herror 
HcppStoreIO(Hproc_handle proc_handle, HINT par, const HObjectArray *inObjVar);


/* storing input control values for processing */
extern LIntExport Herror 
HcppStoreIC(Hproc_handle proc_handle, HINT par, Hlong value);

extern LIntExport Herror 
HcppStoreIC(Hproc_handle proc_handle, HINT par, double value);

extern LIntExport Herror 
HcppStoreIC(Hproc_handle proc_handle, HINT par, const char *value);

extern LIntExport Herror 
HcppStoreIC(Hproc_handle proc_handle, HINT par, const HTuple &value);

extern LIntExport Herror 
HcppStoreIC(Hproc_handle proc_handle, HINT par, const HToolBase &tool);


/* storing output objects for returning */
extern LIntExport Herror 
HcppStoreOO(Hproc_handle proc_handle, HINT par, Hobject *outObjVar, Herror err);

extern LIntExport Herror 
HcppStoreOO(Hproc_handle proc_handle, HINT par, HObject *outObjVar, Herror err);

extern LIntExport Herror 
HcppStoreOO(Hproc_handle proc_handle, HINT par, HObjectArray *outObjVar,
            Herror err);


/* storing output values for returning */
extern LIntExport void
HcppInitOC(Hproc_handle proc_handle, HINT par);

extern LIntExport Herror 
HcppStoreOC(Hproc_handle proc_handle, HINT par, Hlong *outCtrlVar, Herror err);

extern LIntExport Herror 
HcppStoreOC(Hproc_handle proc_handle, HINT par, double *outCtrlVar, Herror err);

extern LIntExport Herror 
HcppStoreOC(Hproc_handle proc_handle, HINT par, char *outCtrlVar, Herror err);

extern LIntExport Herror 
HcppStoreOC(Hproc_handle proc_handle, HINT par, HTuple *outCtrlVar, Herror err);

extern LIntExport Herror 
HcppStoreOC(Hproc_handle proc_handle, HINT par, HToolBase *outTool, Herror err);


}


#endif
