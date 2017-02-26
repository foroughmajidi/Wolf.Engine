#include "scene.h"

scene::scene()
{
    w_game::set_app_name("Wolf.TestDX.Win32");
    w_game::set_fixed_time_step(false);
}

scene::~scene()
{
    release();
}

void scene::initialize(std::map<int, std::vector<w_window_info>> pOutputWindowsInfo)
{
    // TODO: Add your pre-initialization logic here
    w_game::initialize(pOutputWindowsInfo);
}

void scene::load()
{
    w_game::load();
}

void scene::update(const wolf::system::w_game_time& pGameTime)
{
    if (w_game::exiting) return;
    logger.write(std::to_string(pGameTime.get_frames_per_second()));
    w_game::update(pGameTime);
}

void scene::begin_render(const wolf::system::w_game_time& pGameTime)
{
    w_game::begin_render(pGameTime);
}

void scene::render(const wolf::system::w_game_time& pGameTime)
{
    w_game::render(pGameTime);
}

void scene::end_render(const wolf::system::w_game_time& pGameTime)
{
    w_game::end_render(pGameTime);
}

void scene::on_window_resized(UINT pIndex)
{
    w_game::on_window_resized(pIndex);
}

void scene::on_device_lost()
{
    w_game::on_device_lost();
}

HRESULT scene::on_msg_proc(/*HWND pHWND, UINT pMessage, WPARAM pWParam, LPARAM pLParam*/)
{
    return S_FALSE;
}

ULONG scene::release()
{
    if (this->get_is_released()) return 0;
    
    return w_game::release();
}

