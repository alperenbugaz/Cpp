#include <wx/wx.h>
 
class MyApp : public wxApp{
public:
    virtual bool OnInit() ;
};

class MyFrame : public wxFrame{   
public:
    MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

};

wxIMPLEMENT_APP(MyApp);

bool MyApp::OnInit(){
    MyFrame *frame = new MyFrame("Hello World", wxPoint(50, 50), wxSize(450, 340));
    frame->Show();
    return true;
}

MyFrame::MyFrame(const wxString& title, const wxPoint& pos, const wxSize& size): wxFrame(NULL, wxID_ANY, title, pos, size) {

}