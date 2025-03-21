#ifndef MPCASFTOOL_H
#define MPCASFTOOL_H

//(*Headers(MpcAsfTool)
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/clrpicker.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/radiobut.h>
#include <wx/scrolwin.h>
#include <wx/sizer.h>
#include <wx/slider.h>
#include <wx/spinctrl.h>
#include <wx/statbmp.h>
#include <wx/statline.h>
#include <wx/stattext.h>
//*)
#include "wx/dnd.h"
#include "wx/timer.h"

#include "WorkManager.hpp"
#include "FocusSequence.h"
#include "AdjustPositionDialog.h"

class FileExplorerPanel;
class MpcAsfTool: public wxFrame
{
	public:

		MpcAsfTool(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~MpcAsfTool();

	private:

		//(*Declarations(MpcAsfTool)
		wxButton* Button_AddFrames;
		wxButton* Button_AdjustPosition;
		wxButton* Button_Animate;
		wxButton* Button_DeleteCurrentFrame;
		wxButton* Button_UnDelete;
		wxCheckBox* CheckBox_AssiLine;
		wxCheckBox* CheckBox_KeepSet;
		wxCheckBox* CheckBox_LockFrame;
		wxCheckBox* CheckBox_LockPicOffset;
		wxCheckBox* CheckBox_NextLock;
		wxCheckBox* CheckBox_ShowShd;
		wxColourPickerCtrl* ColourPickerCtrl_BaseColor;
		wxMenuBar* MenuBar_MpcAsfTool;
		wxPanel* Panel1;
		wxRadioButton* RadioButton_AsfShadow;
		wxRadioButton* RadioButton_MpcShadow;
		wxRadioButton* RadioButton_NoShadow;
		wxScrolledWindow* ScrolledWindow_BmpShow;
		wxScrolledWindow* ScrolledWindow_Setting;
		wxSlider* Slider_Frame;
		wxSlider* Slider_Interval;
		wxSpinCtrl* SpinCtrl_AlphaMask;
		wxSpinCtrl* SpinCtrl_Bottom;
		wxSpinCtrl* SpinCtrl_Direction;
		wxSpinCtrl* SpinCtrl_Frame_Goto;
		wxSpinCtrl* SpinCtrl_GlobalHeight;
		wxSpinCtrl* SpinCtrl_GlobalWidth;
		wxSpinCtrl* SpinCtrl_Left;
		wxSpinCtrl* SpinCtrl_PicOffX;
		wxSpinCtrl* SpinCtrl_PicOffY;
		wxSpinCtrl* SpinCtrl_ShadowAlpha;
		wxSpinCtrl* SpinCtrl_ShadowX;
		wxSpinCtrl* SpinCtrl_ShadowY;
		wxSpinCtrl* SpinCtrl_SunX;
		wxSpinCtrl* SpinCtrl_SunY;
		wxStaticBitmap* StaticBitmap_Show;
		wxStaticLine* StaticLine10;
		wxStaticLine* StaticLine11;
		wxStaticLine* StaticLine12;
		wxStaticLine* StaticLine1;
		wxStaticLine* StaticLine2;
		wxStaticLine* StaticLine3;
		wxStaticLine* StaticLine4;
		wxStaticLine* StaticLine5;
		wxStaticLine* StaticLine6;
		wxStaticLine* StaticLine7;
		wxStaticLine* StaticLine8;
		wxStaticLine* StaticLine9;
		wxStaticText* StaticText10;
		wxStaticText* StaticText11;
		wxStaticText* StaticText12;
		wxStaticText* StaticText13;
		wxStaticText* StaticText14;
		wxStaticText* StaticText15;
		wxStaticText* StaticText16;
		wxStaticText* StaticText17;
		wxStaticText* StaticText18;
		wxStaticText* StaticText19;
		wxStaticText* StaticText1;
		wxStaticText* StaticText20;
		wxStaticText* StaticText21;
		wxStaticText* StaticText22;
		wxStaticText* StaticText23;
		wxStaticText* StaticText24;
		wxStaticText* StaticText25;
		wxStaticText* StaticText26;
		wxStaticText* StaticText27;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxStaticText* StaticText7;
		wxStaticText* StaticText8;
		wxStaticText* StaticText9;
		wxStaticText* StaticText_CurrentFile;
		wxStaticText* StaticText_Frame_Cur;
		wxStaticText* StaticText_Frame_Sum;
		wxStaticText* StaticText_Interval;
		//*)

	protected:

		//(*Identifiers(MpcAsfTool)
		static const long ID_STATICTEXT27;
		static const long ID_CHECKBOX5;
		static const long ID_STATICBITMAP1;
		static const long ID_SCROLLEDWINDOW2;
		static const long ID_BUTTON4;
		static const long ID_STATICTEXT19;
		static const long ID_STATICTEXT20;
		static const long ID_SLIDER_FRAME;
		static const long ID_STATICTEXT21;
		static const long ID_STATICTEXT24;
		static const long ID_SPINCTRL11;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_STATICLINE1;
		static const long ID_STATICTEXT7;
		static const long ID_STATICLINE2;
		static const long ID_STATICTEXT1;
		static const long ID_SPINCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_SPINCTRL12;
		static const long ID_STATICTEXT5;
		static const long ID_SPINCTRL4;
		static const long ID_STATICTEXT4;
		static const long ID_SLIDER1;
		static const long ID_STATICTEXT6;
		static const long ID_BUTTON5;
		static const long ID_STATICLINE11;
		static const long ID_STATICTEXT28;
		static const long ID_STATICLINE12;
		static const long ID_STATICTEXT29;
		static const long ID_SPINCTRL13;
		static const long ID_STATICTEXT30;
		static const long ID_SPINCTRL14;
		static const long ID_CHECKBOX6;
		static const long ID_CHECKBOX4;
		static const long ID_STATICLINE3;
		static const long ID_STATICTEXT8;
		static const long ID_STATICLINE4;
		static const long ID_CHECKBOX1;
		static const long ID_STATICLINE5;
		static const long ID_STATICTEXT9;
		static const long ID_STATICLINE6;
		static const long ID_STATICTEXT10;
		static const long ID_SPINCTRL3;
		static const long ID_STATICTEXT13;
		static const long ID_STATICTEXT25;
		static const long ID_STATICLINE9;
		static const long ID_STATICTEXT18;
		static const long ID_STATICLINE10;
		static const long ID_RADIOBUTTON3;
		static const long ID_RADIOBUTTON1;
		static const long ID_RADIOBUTTON2;
		static const long ID_CHECKBOX2;
		static const long ID_CHECKBOX3;
		static const long ID_STATICTEXT11;
		static const long ID_SPINCTRL5;
		static const long ID_STATICTEXT12;
		static const long ID_SPINCTRL6;
		static const long ID_STATICTEXT14;
		static const long ID_SPINCTRL7;
		static const long ID_STATICTEXT15;
		static const long ID_SPINCTRL8;
		static const long ID_STATICTEXT23;
		static const long ID_SPINCTRL10;
		static const long ID_STATICTEXT26;
		static const long ID_STATICLINE7;
		static const long ID_STATICTEXT16;
		static const long ID_STATICLINE8;
		static const long ID_STATICTEXT17;
		static const long ID_COLOURPICKERCTRL1;
		static const long ID_STATICTEXT22;
		static const long ID_SPINCTRL9;
		static const long ID_STATICTEXT31;
		static const long ID_SCROLLEDWINDOW1;
		static const long ID_PANEL1;
		//*)

	public:

		//(*Handlers(MpcAsfTool)
		void OnButton1Click(wxCommandEvent& event);
		void OnColourPickerCtrl1ColourChanged(wxColourPickerEvent& event);
		void OnSlider_FrameCmdScroll(wxScrollEvent& event);
		void OnSpinCtrl_Frame_GotoChange(wxSpinEvent& event);
		void OnButton_DeleteCurrentFrameClick(wxCommandEvent& event);
		void OnButton_UnDeleteClick(wxCommandEvent& event);
		void OnSpinCtrl_GlobalWidthChange(wxSpinEvent& event);
		void OnSpinCtrl_GlobalHeightChange(wxSpinEvent& event);
		void OnSpinCtrl_DirectionChange(wxSpinEvent& event);
		void OnSpinCtrl_BottomChange(wxSpinEvent& event);
		void OnSlider_IntervalCmdScroll(wxScrollEvent& event);
		void OnCheckBox_ShowShdClick(wxCommandEvent& event);
		void OnSpinCtrl_LeftChange(wxSpinEvent& event);
		void OnRadioButton_NoShadowSelect(wxCommandEvent& event);
		void OnRadioButton_MpcShadowSelect(wxCommandEvent& event);
		void OnRadioButton_AsfShadowSelect(wxCommandEvent& event);
		void OnCheckBox_LockFrameClick(wxCommandEvent& event);
		void OnSpinCtrl_SunXChange(wxSpinEvent& event);
		void OnSpinCtrl_SunYChange(wxSpinEvent& event);
		void OnSpinCtrl_ShadowXChange(wxSpinEvent& event);
		void OnSpinCtrl_ShadowYChange(wxSpinEvent& event);
		void OnSpinCtrl_ShadowAlphaChange(wxSpinEvent& event);
		void OnSpinCtrl_AlphaMaskChange(wxSpinEvent& event);
		void OnSpinCtrl_PicOffXChange(wxSpinEvent& event);
		void OnSpinCtrl_PicOffYChange(wxSpinEvent& event);
		void OnCheckBox_AssiLineClick(wxCommandEvent& event);
		void OnCheckBox_KeepSetClick(wxCommandEvent& event);
		void OnButton_AnimateClick(wxCommandEvent& event);
		void OnButton_AdjustPositionClick(wxCommandEvent& event);
		void OnCheckBox_LockPicOffsetClick(wxCommandEvent& event);
		void OnExportToTga(wxCommandEvent &event);
		//*)

		DECLARE_EVENT_TABLE()

    public:
		void OnSize(wxSizeEvent& event);
		void OnClose(wxCloseEvent &event);
		void OnNew(wxCommandEvent &event);
		void OnFileOpen(wxCommandEvent &event);
		void OnFileSave(wxCommandEvent &event);
		void OnFileSaveAs(wxCommandEvent &event);
		void OnExportToGif(wxCommandEvent &event);
		void OnExportToPng(wxCommandEvent &event);
		void OnBat(wxCommandEvent &event);
		void OnShowFile(wxCommandEvent &event);
		void OnExit(wxCommandEvent &event);
		void PreviousFrame(wxCommandEvent &event);
		void NextFrame(wxCommandEvent &event);
		void Resize(wxCommandEvent &event);
		void ResizeCurrent(wxCommandEvent &event);
		void OnFileExplorerWindow(wxCommandEvent &event);
		void OnHelp(wxCommandEvent &event);
		void OnAbout(wxCommandEvent &event);
		void OnTravesal(wxCommandEvent &event);
		void OnReturn(wxCommandEvent &event);
		void OnBatPicCancle(wxCommandEvent &event);
		void OnAnimateTimer(wxTimerEvent &event);

		bool DragOpenFile(const wxArrayString &files);

		bool OpenFile(const wxString path);


		//let SpinCtril update value when renewfocus
        void ReNewFocus();
        bool ChangeSaved();



    private:
        void ReNew();
        void EnableCtrl();
		void InitFromManager();
		void InitGlobalShadowFromManager();
		void InitPrevShadowFromManagerGlobalShadow();
		//First call InitGlobalShadowFromManager,
		//than if keep setting InitPrevShadowFromManagerGlobalShadow,
		//than Renew,than if keep setting InitToManager
		void InitToManager();
		void SetStateChange(bool StateChange = true);
        bool SaveFile(bool CurentFile = true);
        void RefreshBmpShow();
        void SetBmpShow(unsigned long Index, bool AssiLine);
        void RefreshFrameSlide();
        void SetLockState();
        void InitTabSequence();
        void BeginAnimate(bool ReNewIndex = false);
        void StopAnimate(bool ReNewIndex = false);
        void ResizeFrame(WorkManager *manager, int i, int toWidth, int toHeight);
        void ResizeAll(WorkManager *manager, int toWidth, int toHeight);

        enum EvtID
        {
            ID_EXPORT_TO_GIF = 10000,
            ID_EXPORT_TO_PNG,
			ID_EXPORT_TO_TGA,//  [新增] 加入一个导出TGA的ID
			ID_TGA_TO_SPR,//  [新增] 加入一个导出SPR的ID
            ID_FRAME_PREVIOUS,
            ID_FRAME_NEXT,
            ID_RESIZE,
            ID_RESIZECURRENT,
            ID_TRAVESAL,
            ID_RETURN,
            ID_BAT,
            ID_BAT_PIC_CANCLE,
            ID_ANIMATE_TIMER,
            ID_SHOWHIDE_FILEEXPLORER,
            ID_SHOW_IN_FILEEXPLORERWINDOW,
            ID_SHOW_IN_EXPLOER
        };

        WorkManager manager;
		//unsigned long deletedframesum;
		bool ischanged, batpiccancle, assiline;
		wxString currentfile;
		int currentframeindex;
		int prevsunx, prevsuny, prevshdx, prevshdy;
		FocusSequence tabseq;
		wxMenuBar *MenuBar_BatPicConv;
		wxTimer animatetimer;
		unsigned long animateindex;
		bool isplay;

		AdjustPositionDialog *m_adjustPosDlg;
		FileExplorerPanel *m_fileExplorer;
};

class MpcAsfDrop:public wxFileDropTarget
{
public:
    MpcAsfDrop(){mainfram = NULL;}
    MpcAsfDrop(MpcAsfTool *frame){mainfram = frame;}
    void SetWorkManager(MpcAsfTool *frame){mainfram = frame;}
    virtual bool OnDropFiles(wxCoord x, wxCoord y, const wxArrayString& filenames);
private:
    MpcAsfTool *mainfram;

};

#include "wxFormBuilder/FileExplorerPanelBase.h"

class FileExplorerPanel: public FileExplorerPanelBase
{
public:
	FileExplorerPanel(wxWindow *parent)
		:FileExplorerPanelBase(parent)
	{
		SetTitle(wxT("文件浏览"));
		m_genericDirCtrl1->SetFilter(wxT("ALL|*.*|MPC ASF SPR RPC(*.mpc,*.asf,*.spr,*.rpc)|*.mpc;*.asf;*.spr;*.rpc|MPC(*.mpc)|*.mpc|ASF(*.asf)|*.asf|SPR(*.spr)|*.spr|RPC(*.rpc)|*.rpc"));
		m_genericDirCtrl1->SetFilterIndex(1);
		m_parent = (MpcAsfTool*)parent;
	}
	void ExpandPath(wxString path){m_genericDirCtrl1->ExpandPath(path);}
protected:
	virtual void OnFilterChange( wxCommandEvent& event );
	virtual void OnTreeItemActivated( wxTreeEvent& event );
	virtual void OnClose( wxCloseEvent& event ) { Show(false); }

	MpcAsfTool *m_parent;
};

#endif
