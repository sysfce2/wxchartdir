/*
** Name:        realtimemeasureapp.h
** Purpose:     Real-Time Chart with Measurement Cursors
** Author:      Ulrich Telle
** Created:     2018-07-02
** Copyright:   (C) 2018-2021, Ulrich Telle
** License:     LGPL - 3.0 + WITH WxWindows - exception - 3.1
*/

#ifndef REALTIMEMEASUREAPP_H_
#define REALTIMEMEASUREAPP_H_

/*!
 * Includes
 */

#include "wx/image.h"
#include "realtimemeasure.h"

/*!
 * RealTimeMeasureApp class declaration
 */

class RealTimeMeasureApp: public wxApp
{    
  DECLARE_CLASS( RealTimeMeasureApp )
  DECLARE_EVENT_TABLE()

public:
  /// Constructor
  RealTimeMeasureApp();

  void Init();

  /// Initialises the application
  virtual bool OnInit();

  /// Called on exit
  virtual int OnExit();
};

/*!
 * Application instance declaration 
 */

DECLARE_APP(RealTimeMeasureApp)

#endif
    // REALTIMEMEASUREAPP_H_
