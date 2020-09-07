#ifndef breezemetrics_h
#define breezemetrics_h

/*************************************************************************
 * Copyright (C) 2014 by Hugo Pereira Da Costa <hugo.pereira@free.fr>    *
 * Copyright (C) 2020 by Noah Davis <noahadvs@gmail.com>                 *
 *                                                                       *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 *************************************************************************/

#include <QtGlobal>

namespace Breeze
{
    //* standard pen widths
    struct PenWidth
    {
        /* Using 1 instead of slightly more than 1 causes symbols drawn with
         * pen strokes to look skewed. The exact amount added does not matter
         * as long as it isn't too visible.
         */
        // The standard pen stroke width for symbols.
        static constexpr qreal Symbol = 1.01;

        // The standard pen stroke width for frames.
        static constexpr int Frame = 1;

        // The standard pen stroke width for shadows.
        static constexpr int Shadow = 1;
        
        // A value for pen width arguments to make it clear that there is no pen stroke
        static constexpr int NoPen = 0;
    };

    //* metrics
    struct Metrics
    {
        // frames
        static constexpr int Frame_FrameWidth = 2;
        static constexpr int Frame_FrameRadius = 3;

        // layout
        static constexpr int Layout_TopLevelMarginWidth = 10;
        static constexpr int Layout_ChildMarginWidth = 6;
        static constexpr int Layout_DefaultSpacing = 6;

        // line editors
        static constexpr int LineEdit_FrameWidth = 6;

        // menu items
        static constexpr int Menu_FrameWidth = 0;
        static constexpr int MenuItem_MarginWidth = 5;
        static constexpr int MenuItem_MarginHeight = 3;
        static constexpr int MenuItem_ItemSpacing = 4;
        static constexpr int MenuItem_AcceleratorSpace = 16;
        static constexpr int MenuButton_IndicatorWidth = 20;

        // combobox
        static constexpr int ComboBox_FrameWidth = 6;

        // spinbox
        static constexpr int SpinBox_FrameWidth = LineEdit_FrameWidth;
        static constexpr int SpinBox_ArrowButtonWidth = 20;

        // groupbox title margin
        static constexpr int GroupBox_TitleMarginWidth = 4;

        // buttons
        static constexpr int Button_MinWidth = 80;
        static constexpr int Button_MarginWidth = 6;
        static constexpr int Button_ItemSpacing = 4;

        // tool buttons
        static constexpr int ToolButton_MarginWidth = 6;
        static constexpr int ToolButton_ItemSpacing = 4;
        static constexpr int ToolButton_InlineIndicatorWidth = 12;

        // checkboxes and radio buttons
        static constexpr int CheckBox_Size = 20;
        static constexpr int CheckBox_FocusMarginWidth = 2;
        static constexpr int CheckBox_ItemSpacing = 4;
        static constexpr int CheckBox_Radius = 4;

        // menubar items
        static constexpr int MenuBarItem_MarginWidth = 10;
        static constexpr int MenuBarItem_MarginHeight = 6;

        // scrollbars
        static constexpr int ScrollBar_Extend = 21;
        static constexpr int ScrollBar_SliderWidth = 6;
        static constexpr int ScrollBar_MinSliderHeight = 20;
        static constexpr int ScrollBar_NoButtonHeight = (ScrollBar_Extend-ScrollBar_SliderWidth)/2;
        static constexpr int ScrollBar_SingleButtonHeight = ScrollBar_Extend;
        static constexpr int ScrollBar_DoubleButtonHeight = 2*ScrollBar_Extend;

        // toolbars
        static constexpr int ToolBar_FrameWidth = 2;
        static constexpr int ToolBar_HandleExtent = 10;
        static constexpr int ToolBar_HandleWidth = 6;
        static constexpr int ToolBar_SeparatorWidth = 8;
        static constexpr int ToolBar_ExtensionWidth = 20;
        static constexpr int ToolBar_ItemSpacing = 0;

        // progressbars
        static constexpr int ProgressBar_BusyIndicatorSize = 14;
        static constexpr int ProgressBar_Thickness = 6;
        static constexpr int ProgressBar_ItemSpacing = 4;

        // mdi title bar
        static constexpr int TitleBar_MarginWidth = 4;

        // sliders
        static constexpr int Slider_TickLength = 8;
        static constexpr int Slider_TickMarginWidth = 2;
        static constexpr int Slider_GrooveThickness = 6;
        static constexpr int Slider_ControlThickness = 20;

        // tabbar
        static constexpr int TabBar_TabMarginHeight = 4;
        static constexpr int TabBar_TabMarginWidth = 8;
        static constexpr int TabBar_TabMinWidth = 80;
        static constexpr int TabBar_TabMinHeight = 30;
        static constexpr int TabBar_TabItemSpacing = 8;
        static constexpr int TabBar_TabOverlap = 1;
        static constexpr int TabBar_BaseOverlap = 2;

        // tab widget
        static constexpr int TabWidget_MarginWidth = 4;

        // toolbox
        static constexpr int ToolBox_TabMinWidth = 80;
        static constexpr int ToolBox_TabItemSpacing = 4;
        static constexpr int ToolBox_TabMarginWidth = 8;

        // tooltips
        static constexpr int ToolTip_FrameWidth = 3;

        // list headers
        static constexpr int Header_MarginWidth = 6;
        static constexpr int Header_ItemSpacing = 4;
        static constexpr int Header_ArrowSize = 10;

        // tree view
        static constexpr int ItemView_ArrowSize = 10;
        static constexpr int ItemView_ItemMarginWidth = 3;
        static constexpr int SidePanel_ItemMarginWidth = 4;

        // splitter
        static constexpr int Splitter_SplitterWidth = 1;

        // shadow dimensions
        static constexpr int Shadow_Overlap = 2;
    };
}
#endif
