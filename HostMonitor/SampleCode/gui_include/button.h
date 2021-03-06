#ifndef _BUTTON_H_
#define _BUTTON_H_

#define GLT_BN_CLICKED							0x1111

#define ON_GLT_BN_CLICKED(ctrlId, func)                                       \
{MSG_TYPE_WND, GLT_BN_CLICKED, (c_cmd_target*)ctrlId, MSG_CALLBACK_VWV, (MsgFuncVV)(static_cast<void (c_cmd_target::*)(unsigned int)>(&func))},

class c_button : public c_wnd
{
public:
	virtual const char* get_class_name(void) const {return "c_button";}
	virtual c_wnd* clone(){return new c_button();}
protected:
	virtual void on_paint(void);
	virtual void on_focus(unsigned int w_param);
	virtual void on_kill_focus(void);
	virtual void handle_mouse_down_msg(int x, int y);
	virtual void handle_mouse_up_msg(int x, int y);
	virtual void pre_create_wnd();
private:
};

#endif
