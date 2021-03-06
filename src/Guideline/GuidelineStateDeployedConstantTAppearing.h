/******************************************************************************************************
 * (C) 2019 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#ifndef GUIDELINE_STATE_DEPLOYED_CONSTANT_T_APPEARING_H
#define GUIDELINE_STATE_DEPLOYED_CONSTANT_T_APPEARING_H

#include "GuidelineStateDeployedConstantTAbstract.h"

class QTimer;

/// Implements guideline behavior for GUIDELINE_STATE_DEPLOYED_CONSTANT_T_APPEARING. This acts
/// just like GUIDELINE_STATE_DEPLOYED_CONSTANT_T_ACTIVE but is drawn much bigger, then transitions
/// to the other state after a timeout
class GuidelineStateDeployedConstantTAppearing : public GuidelineStateDeployedConstantTAbstract
{
public:
  /// Single constructor.
  GuidelineStateDeployedConstantTAppearing(GuidelineStateContext &context);
  virtual ~GuidelineStateDeployedConstantTAppearing();

  virtual void begin ();
  virtual bool doPaint () const;
  virtual void end ();
  virtual void handleActiveChange (bool active);
  virtual void handleGuidelineMode (bool visible,
                                    bool locked);
  virtual void handleHoverEnterEvent ();
  virtual void handleHoverLeaveEvent ();
  virtual void handleMousePress (const QPointF &posScene);
  virtual void handleTimeout ();
  virtual QString stateName () const;
  
private:
  GuidelineStateDeployedConstantTAppearing();

  QTimer *m_timer;
};

#endif // GUIDELINE_STATE_DEPLOYED_CONSTANT_T_APPEARING_H
