//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: CodeLiteUpgradeFrame.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITEUPGRADEFRAME_BASE_CLASSES_H
#define CODELITEUPGRADEFRAME_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bannerwindow.h>
#include <wx/gauge.h>

class clInitializeDialogBase : public wxDialog
{
protected:
    wxPanel* m_panel4;
    wxBannerWindow* m_banner;
    wxGauge* m_gauge;

protected:

public:
    wxBannerWindow* GetBanner() { return m_banner; }
    wxGauge* GetGauge() { return m_gauge; }
    wxPanel* GetPanel4() { return m_panel4; }
    clInitializeDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Initializing CodeLite"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~clInitializeDialogBase();
};

#endif
