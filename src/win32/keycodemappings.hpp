// Copyright (c) 2020 Elijah Seed Arita
//
// Permission is hereby granted, free of charge, to any person obtaining a copy 
// of this software and associated documentation files (the "Software"), to deal 
// in the Software without restriction, including without limitation the rights 
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
// copies of the Software, and to permit persons to whom the Software is 
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in 
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE 
// SOFTWARE.

#pragma once

#include <eseed/window/keycode.hpp>
#include <windows.h>
#include <map>

namespace esd::wnd {

const std::map<UINT, KeyCode> keyCodeMappings = {
    { 0x30, KeyCode::Num0 },
    { 0x31, KeyCode::Num1 },
    { 0x32, KeyCode::Num2 },
    { 0x33, KeyCode::Num3 },
    { 0x34, KeyCode::Num4 },
    { 0x35, KeyCode::Num5 },
    { 0x36, KeyCode::Num6 },
    { 0x37, KeyCode::Num7 },
    { 0x38, KeyCode::Num8 },
    { 0x39, KeyCode::Num9 },
    { 0x41, KeyCode::A },
    { 0x42, KeyCode::B },
    { 0x43, KeyCode::C },
    { 0x44, KeyCode::D },
    { 0x45, KeyCode::E },
    { 0x46, KeyCode::F },
    { 0x47, KeyCode::G },
    { 0x48, KeyCode::H },
    { 0x49, KeyCode::I },
    { 0x4a, KeyCode::J },
    { 0x4b, KeyCode::K },
    { 0x4c, KeyCode::L },
    { 0x4d, KeyCode::M },
    { 0x4e, KeyCode::N },
    { 0x4f, KeyCode::O },
    { 0x50, KeyCode::P },
    { 0x51, KeyCode::Q },
    { 0x52, KeyCode::R },
    { 0x53, KeyCode::S },
    { 0x54, KeyCode::T },
    { 0x55, KeyCode::U },
    { 0x56, KeyCode::V },
    { 0x57, KeyCode::W },
    { 0x58, KeyCode::X },
    { 0x59, KeyCode::Y },
    { 0x5a, KeyCode::Z },
    { VK_BACK, KeyCode::Backspace },
    { VK_TAB, KeyCode::Tab },
    { VK_CLEAR, KeyCode::Clear },
    { VK_RETURN, KeyCode::Return },
    { VK_LSHIFT, KeyCode::LShift },
    { VK_RSHIFT, KeyCode::RShift },
    { VK_LCONTROL, KeyCode::LControl },
    { VK_RCONTROL, KeyCode::RControl },
    { VK_LMENU, KeyCode::LAlt },
    { VK_RMENU, KeyCode::RAlt },
    { VK_PAUSE, KeyCode::Pause },
    { VK_CAPITAL, KeyCode::CapsLock },
    { VK_ESCAPE, KeyCode::Esc },
    { VK_SPACE, KeyCode::Space },
    { VK_PRIOR, KeyCode::PageUp },
    { VK_NEXT, KeyCode::PageDown },
    { VK_END, KeyCode::End },
    { VK_HOME, KeyCode::Home },
    { VK_LEFT, KeyCode::Left },
    { VK_UP, KeyCode::Up },
    { VK_RIGHT, KeyCode::Right },
    { VK_DOWN, KeyCode::Down },
    { VK_SELECT, KeyCode::Select },
    { VK_SNAPSHOT, KeyCode::PrintScreen },
    { VK_INSERT, KeyCode::Insert },
    { VK_DELETE, KeyCode::Delete },
    { VK_APPS, KeyCode::Menu },
    { VK_LWIN, KeyCode::LMeta },
    { VK_RWIN, KeyCode::RMeta },
    { VK_NUMPAD0, KeyCode::Numpad0 },
    { VK_NUMPAD1, KeyCode::Numpad1 },
    { VK_NUMPAD2, KeyCode::Numpad2 },
    { VK_NUMPAD3, KeyCode::Numpad3 },
    { VK_NUMPAD4, KeyCode::Numpad4 },
    { VK_NUMPAD5, KeyCode::Numpad5 },
    { VK_NUMPAD6, KeyCode::Numpad6 },
    { VK_NUMPAD7, KeyCode::Numpad7 },
    { VK_NUMPAD8, KeyCode::Numpad8 },
    { VK_NUMPAD9, KeyCode::Numpad9 },
    { VK_MULTIPLY, KeyCode::Multiply },
    { VK_ADD, KeyCode::Add },
    { VK_SUBTRACT, KeyCode::Subtract },
    { VK_DECIMAL, KeyCode::Decimal },
    { VK_DIVIDE, KeyCode::Divide },
    { VK_F1, KeyCode::F1 },
    { VK_F2, KeyCode::F2 },
    { VK_F3, KeyCode::F3 },
    { VK_F4, KeyCode::F4 },
    { VK_F5, KeyCode::F5 },
    { VK_F6, KeyCode::F6 },
    { VK_F7, KeyCode::F7 },
    { VK_F8, KeyCode::F8 },
    { VK_F9, KeyCode::F9 },
    { VK_F10, KeyCode::F10 },
    { VK_F11, KeyCode::F11 },
    { VK_F12, KeyCode::F12 },
    { VK_F13, KeyCode::F13 },
    { VK_F14, KeyCode::F14 },
    { VK_F15, KeyCode::F15 },
    { VK_F16, KeyCode::F16 },
    { VK_F17, KeyCode::F17 },
    { VK_F18, KeyCode::F18 },
    { VK_F19, KeyCode::F19 },
    { VK_F20, KeyCode::F20 },
    { VK_F21, KeyCode::F21 },
    { VK_F22, KeyCode::F22 },
    { VK_F23, KeyCode::F23 },
    { VK_F24, KeyCode::F24 },
    { VK_NUMLOCK, KeyCode::NumLock },
    { VK_SCROLL, KeyCode::ScrollLock },
    { VK_OEM_1, KeyCode::Semicolon },
    { VK_OEM_PLUS, KeyCode::Equal },
    { VK_OEM_COMMA, KeyCode::Comma },
    { VK_OEM_MINUS, KeyCode::Dash },
    { VK_OEM_PERIOD, KeyCode::Period },
    { VK_OEM_2, KeyCode::Slash },
    { VK_OEM_3, KeyCode::Backtick },
    { VK_OEM_4, KeyCode::LBracket },
    { VK_OEM_5, KeyCode::Backslash },
    { VK_OEM_6, KeyCode::RBracket },
    { VK_OEM_7, KeyCode::Apostrophe },
};

}