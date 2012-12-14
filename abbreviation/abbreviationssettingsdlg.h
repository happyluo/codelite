//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : abbreviationssettingsdlg.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __abbreviationssettingsdlg__
#define __abbreviationssettingsdlg__

/**
@file
Subclass of AbbreviationsSettingsBase, which is generated by wxFormBuilder.
*/

#include "abbreviationssettingsbase.h"
#include "abbreviationentry.h"
class IManager;

/** Implementing AbbreviationsSettingsBase */
class AbbreviationsSettingsDlg : public AbbreviationsSettingsBase
{
    IManager *            m_mgr;
    AbbreviationJSONEntry m_data;
    bool                  m_dirty;
    wxString              m_activeItemName;
    int                   m_currSelection;
    clConfig              m_config;

protected:
    virtual void OnMarkDirty(wxStyledTextEvent& event);
    virtual void OnSaveUI(wxUpdateUIEvent& event);
    // Handlers for AbbreviationsSettingsBase events.
    void OnItemSelected( wxCommandEvent& event );
    void OnNew(wxCommandEvent &e);
    void OnDelete( wxCommandEvent& event );
    void OnDeleteUI( wxUpdateUIEvent& event );
    void OnSave( wxCommandEvent& event );

private:
    void DoPopulateItems();
    void DoSelectItem(int item);
    void DoSaveCurrent();
    void DoDeleteEntry(const wxString &name);

public:
    /** Constructor */
    AbbreviationsSettingsDlg( wxWindow* parent, IManager *mgr );
    virtual ~AbbreviationsSettingsDlg();
};

#endif // __abbreviationssettingsdlg__
