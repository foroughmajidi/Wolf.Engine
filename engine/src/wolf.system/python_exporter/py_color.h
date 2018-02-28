/*
    Project			 : Wolf Engine. Copyright(c) Pooya Eimandar (http://PooyaEimandar.com) . All rights reserved.
    Source			 : Please direct any bug to https://github.com/PooyaEimandar/Wolf.Engine/issues
    Website			 : http://WolfSource.io
    Name			 : py_color.h
    Description		 : The python exporter for w_color class
    Comment          :
*/

#ifdef __PYTHON__

#ifndef __PY_COLOR_H__
#define __PY_COLOR_H__

namespace pyWolf
{
    static void py_color_export()
    {
        using namespace boost::python;
        using namespace wolf::system;
        
        //export w_bounding_box class
        class_<w_color>("w_color", init<>())
            .def_readwrite("r", &w_color::r, "Red channel(0-255)")
            .def_readwrite("g", &w_color::g, "Green channel(0-255)")
            .def_readwrite("b", &w_color::b, "Blue channel(0-255)")
            .def_readwrite("a", &w_color::a, "Alpha channel(0-255)")
            .def("from_string", &w_color::from_string, "Create w_color from string in the format of \"r(0 - 255), g(0 - 255), b(0 - 255), a(0 - 255)\", for example \"255, 0, 0, 255\"")
			.staticmethod("from_string")
            .def("from_hex", &w_color::from_hex, "Convert HEX color to w_color")
			.staticmethod("from_hex")
            .def("to_hex", &w_color::to_hex, "Convert RGBA to HEX")
			.staticmethod("to_hex")
            .def("to_color", &w_color::to_color, "Convert array of float(elements have value between 0.0f and 1.0f) to w_color")
			.staticmethod("to_color")
            .def("ALICE_BLUE", &w_color::ALICE_BLUE, "ALICE_BLUE")
			.staticmethod("ALICE_BLUE")
            .def("ANTIQUE_WHITE", &w_color::ANTIQUE_WHITE, "ANTIQUE_WHITE")
			.staticmethod("ANTIQUE_WHITE")
            .def("AQUA", &w_color::AQUA, "AQUA")
			.staticmethod("AQUA")
            .def("AQUAMARINE", &w_color::AQUAMARINE, "AQUAMARINE")
			.staticmethod("AQUAMARINE")
            .def("AZURE", &w_color::AZURE, "AZURE")
			.staticmethod("AZURE")
            .def("BEIGE", &w_color::BEIGE, "BEIGE")
			.staticmethod("BEIGE")
            .def("BISQUE", &w_color::BISQUE, "BISQUE")
			.staticmethod("BISQUE")
            .def("BLACK", &w_color::BLACK, "BLACK")
			.staticmethod("BLACK")
            .def("BLANCHED_ALMOND", &w_color::BLANCHED_ALMOND, "BLANCHED_ALMOND")
			.staticmethod("BLANCHED_ALMOND")
            .def("BLUE", &w_color::BLUE, "BLUE")
			.staticmethod("BLUE")
            .def("BLUE_VIOLET", &w_color::BLUE_VIOLET, "BLUE_VIOLET")
			.staticmethod("BLUE_VIOLET")
            .def("BROWN", &w_color::BROWN, "BROWN")
			.staticmethod("BROWN")
            .def("BURLY_WOOD", &w_color::BURLY_WOOD, "BURLY_WOOD")
			.staticmethod("BURLY_WOOD")
            .def("CADET_BLUE", &w_color::CADET_BLUE, "CADET_BLUE")
			.staticmethod("CADET_BLUE")
            .def("CHARTREUSE", &w_color::CHARTREUSE, "CHARTREUSE")
			.staticmethod("CHARTREUSE")
            .def("CHOCOLATE", &w_color::CHOCOLATE, "CHOCOLATE")
			.staticmethod("CHOCOLATE")
            .def("CORAL", &w_color::CORAL, "CORAL")
			.staticmethod("CORAL")
            .def("CORNFLOWER_BLUE", &w_color::CORNFLOWER_BLUE, "CORNFLOWER_BLUE")
			.staticmethod("CORNFLOWER_BLUE")
            .def("CORNSILK", &w_color::CORNSILK, "CORNSILK")
			.staticmethod("CORNSILK")
            .def("CRIMSON", &w_color::CRIMSON, "CRIMSON")
			.staticmethod("CRIMSON")
            .def("CYAN", &w_color::CYAN, "CYAN")
			.staticmethod("CYAN")
            .def("DARK_BLUE", &w_color::DARK_BLUE, "DARK_BLUE")
			.staticmethod("DARK_BLUE")
            .def("DARK_CYAN", &w_color::DARK_CYAN, "DARK_CYAN")
			.staticmethod("DARK_CYAN")
            .def("DARK_GOLDENROD", &w_color::DARK_GOLDENROD, "DARK_GOLDENROD")
			.staticmethod("DARK_GOLDENROD")
            .def("DARK_GRAY", &w_color::DARK_GRAY, "DARK_GRAY")
			.staticmethod("DARK_GRAY")
            .def("DARK_GREEN", &w_color::DARK_GREEN, "DARK_GREEN")
			.staticmethod("DARK_GREEN")
            .def("DARK_KHAKI", &w_color::DARK_KHAKI, "DARK_KHAKI")
			.staticmethod("DARK_KHAKI")
            .def("DARK_MAGENTA", &w_color::DARK_MAGENTA, "DARK_MAGENTA")
			.staticmethod("DARK_MAGENTA")
            .def("DARK_OLIVE_GREEN", &w_color::DARK_OLIVE_GREEN, "DARK_OLIVE_GREEN")
			.staticmethod("DARK_OLIVE_GREEN")
            .def("DARK_ORANGE", &w_color::DARK_ORANGE, "DARK_ORANGE")
			.staticmethod("DARK_ORANGE")
            .def("DARK_ORCHID", &w_color::DARK_ORCHID, "DARK_ORCHID")
			.staticmethod("DARK_ORCHID")
            .def("DARK_RED", &w_color::DARK_RED, "DARK_RED")
			.staticmethod("DARK_RED")
            .def("DARK_SALMON", &w_color::DARK_SALMON, "DARK_SALMON")
			.staticmethod("DARK_SALMON")
            .def("DARK_SEA_GREEN", &w_color::DARK_SEA_GREEN, "DARK_SEA_GREEN")
			.staticmethod("DARK_SEA_GREEN")
            .def("DARK_SLATE_BLUE", &w_color::DARK_SLATE_BLUE, "DARK_SLATE_BLUE")
			.staticmethod("DARK_SLATE_BLUE")
            .def("DARK_SLATE_GRAY", &w_color::DARK_SLATE_GRAY, "DARK_SLATE_GRAY")
			.staticmethod("DARK_SLATE_GRAY")
            .def("DARK_TURQUOISE", &w_color::DARK_TURQUOISE, "DARK_TURQUOISE")
			.staticmethod("DARK_TURQUOISE")
            .def("DARK_VIOLET", &w_color::DARK_VIOLET, "DARK_VIOLET")
			.staticmethod("DARK_VIOLET")
            .def("DEEP_PINK", &w_color::DEEP_PINK, "DEEP_PINK")
			.staticmethod("DEEP_PINK")
            .def("DEEP_SKY_BLUE", &w_color::DEEP_SKY_BLUE, "DEEP_SKY_BLUE")
			.staticmethod("DEEP_SKY_BLUE")
            .def("DIM_GRAY", &w_color::DIM_GRAY, "DIM_GRAY")
			.staticmethod("DIM_GRAY")
            .def("DODGER_BLUE", &w_color::DODGER_BLUE, "DODGER_BLUE")
			.staticmethod("DODGER_BLUE")
            .def("FIREBRICK", &w_color::FIREBRICK, "FIREBRICK")
			.staticmethod("FIREBRICK")
            .def("FLORAL_WHITE", &w_color::FLORAL_WHITE, "FLORAL_WHITE")
			.staticmethod("FLORAL_WHITE")
            .def("FOREST_GREEN", &w_color::FOREST_GREEN, "FOREST_GREEN")
			.staticmethod("FOREST_GREEN")
            .def("FUCHSIA", &w_color::FUCHSIA, "FUCHSIA")
			.staticmethod("FUCHSIA")
            .def("GAINSBORO", &w_color::GAINSBORO, "GAINSBORO")
			.staticmethod("GAINSBORO")
            .def("GHOST_WHITE", &w_color::GHOST_WHITE, "GHOST_WHITE")
			.staticmethod("GHOST_WHITE")
            .def("GOLD", &w_color::GOLD, "GOLD")
			.staticmethod("GOLD")
            .def("GOLDENROD", &w_color::GOLDENROD, "GOLDENROD")
			.staticmethod("GOLDENROD")
            .def("GRAY", &w_color::GRAY, "GRAY")
			.staticmethod("GRAY")
            .def("GREEN", &w_color::GREEN, "GREEN")
			.staticmethod("GREEN")
            .def("GREEN_YELLOW", &w_color::GREEN_YELLOW, "GREEN_YELLOW")
			.staticmethod("GREEN_YELLOW")
            .def("HONEYDEW", &w_color::HONEYDEW, "HONEYDEW")
			.staticmethod("HONEYDEW")
            .def("HOT_PINK", &w_color::HOT_PINK, "HOT_PINK")
			.staticmethod("HOT_PINK")
            .def("INDIAN_RED", &w_color::INDIAN_RED, "INDIAN_RED")
			.staticmethod("INDIAN_RED")
            .def("INDIGO", &w_color::INDIGO, "INDIGO")
			.staticmethod("INDIGO")
            .def("IVORY", &w_color::IVORY, "IVORY")
			.staticmethod("IVORY")
            .def("KHAKI", &w_color::KHAKI, "KHAKI")
			.staticmethod("KHAKI")
            .def("LAVENDER", &w_color::LAVENDER, "LAVENDER")
			.staticmethod("LAVENDER")
            .def("LAVENDER_BLUSH", &w_color::LAVENDER_BLUSH, "LAVENDER_BLUSH")
			.staticmethod("LAVENDER_BLUSH")
            .def("LAWN_GREEN", &w_color::LAWN_GREEN, "LAWN_GREEN")
			.staticmethod("LAWN_GREEN")
            .def("LEMON_CHIFFON", &w_color::LEMON_CHIFFON, "LEMON_CHIFFON")
			.staticmethod("LEMON_CHIFFON")
            .def("LIGHT_BLUE", &w_color::LIGHT_BLUE, "LIGHT_BLUE")
			.staticmethod("LIGHT_BLUE")
            .def("LIGHT_CORAL", &w_color::LIGHT_CORAL, "LIGHT_CORAL")
			.staticmethod("LIGHT_CORAL")
            .def("LIGHT_CYAN", &w_color::LIGHT_CYAN, "LIGHT_CYAN")
			.staticmethod("LIGHT_CYAN")
            .def("LIGHT_GOLDENROD_YELLOW", &w_color::LIGHT_GOLDENROD_YELLOW, "LIGHT_GOLDENROD_YELLOW")
			.staticmethod("LIGHT_GOLDENROD_YELLOW")
            .def("LIGHT_GREEN", &w_color::LIGHT_GREEN, "LIGHT_GREEN")
			.staticmethod("LIGHT_GREEN")
            .def("LIGHT_GRAY", &w_color::LIGHT_GRAY, "LIGHT_GRAY")
			.staticmethod("LIGHT_GRAY")
            .def("LIGHT_PINK", &w_color::LIGHT_PINK, "LIGHT_PINK")
			.staticmethod("LIGHT_PINK")
            .def("LIGHT_SALMON", &w_color::LIGHT_SALMON, "LIGHT_SALMON")
			.staticmethod("LIGHT_SALMON")
            .def("LIGHT_SEA_GREEN", &w_color::LIGHT_SEA_GREEN, "LIGHT_SEA_GREEN")
			.staticmethod("LIGHT_SEA_GREEN")
            .def("LIGHT_SKY_BLUE", &w_color::LIGHT_SKY_BLUE, "LIGHT_SKY_BLUE")
			.staticmethod("LIGHT_SKY_BLUE")
            .def("LIGHT_SLATE_GRAY", &w_color::LIGHT_SLATE_GRAY, "LIGHT_SLATE_GRAY")
			.staticmethod("LIGHT_SLATE_GRAY")
            .def("LIGHT_STEEL_BLUE", &w_color::LIGHT_STEEL_BLUE, "LIGHT_STEEL_BLUE")
			.staticmethod("LIGHT_STEEL_BLUE")
            .def("LIGHT_YELLOW", &w_color::LIGHT_YELLOW, "LIGHT_YELLOW")
			.staticmethod("LIGHT_YELLOW")
            .def("LIME", &w_color::LIME, "LIME")
			.staticmethod("LIME")
            .def("LIME_GREEN", &w_color::LIME_GREEN, "LIME_GREEN")
			.staticmethod("LIME_GREEN")
            .def("LINEN", &w_color::LINEN, "LINEN")
			.staticmethod("LINEN")
            .def("MAGENTA", &w_color::MAGENTA, "MAGENTA")
			.staticmethod("MAGENTA")
			.def("MAROON", &w_color::MAROON, "MAROON")
			.staticmethod("MAROON")
			.def("MEDIUM_AQUAMARINE", &w_color::MEDIUM_AQUAMARINE, "MEDIUM_AQUAMARINE")
			.staticmethod("MEDIUM_AQUAMARINE")
			.def("MEDIUM_BLUE", &w_color::MEDIUM_BLUE, "MEDIUM_BLUE")
			.staticmethod("MEDIUM_BLUE")
            .def("MEDIUM_ORCHID", &w_color::MEDIUM_ORCHID, "MEDIUM_ORCHID")
			.staticmethod("MEDIUM_ORCHID")
            .def("MEDIUM_PURPLE", &w_color::MEDIUM_PURPLE, "MEDIUM_PURPLE")
			.staticmethod("MEDIUM_PURPLE")
            .def("MEDIUM_SEA_GREEN", &w_color::MEDIUM_SEA_GREEN, "MEDIUM_SEA_GREEN")
			.staticmethod("MEDIUM_SEA_GREEN")
            .def("MEDIUM_SLATE_BLUE", &w_color::MEDIUM_SLATE_BLUE, "MEDIUM_SLATE_BLUE")
			.staticmethod("MEDIUM_SLATE_BLUE")
            .def("MEDIUM_SPRING_GREEN", &w_color::MEDIUM_SPRING_GREEN, "MEDIUM_SPRING_GREEN")
			.staticmethod("MEDIUM_SPRING_GREEN")
            .def("MEDIUM_TURQUOISE", &w_color::MEDIUM_TURQUOISE, "MEDIUM_TURQUOISE")
			.staticmethod("MEDIUM_TURQUOISE")
            .def("MEDIUM_VIOLET_RED", &w_color::MEDIUM_VIOLET_RED, "MEDIUM_VIOLET_RED")
			.staticmethod("MEDIUM_VIOLET_RED")
            .def("MIDNIGHT_BLUE", &w_color::MIDNIGHT_BLUE, "MIDNIGHT_BLUE")
			.staticmethod("MIDNIGHT_BLUE")
            .def("MINT_CREAM", &w_color::MINT_CREAM, "MINT_CREAM")
			.staticmethod("MINT_CREAM")
            .def("MISTY_ROSE", &w_color::MISTY_ROSE, "MISTY_ROSE")
			.staticmethod("MISTY_ROSE")
            .def("MOCCASIN", &w_color::MOCCASIN, "MOCCASIN")
			.staticmethod("MOCCASIN")
            .def("NAVAJO_WHITE", &w_color::NAVAJO_WHITE, "NAVAJO_WHITE")
			.staticmethod("NAVAJO_WHITE")
            .def("NAVY", &w_color::NAVY, "NAVY")
			.staticmethod("NAVY")
            .def("OLD_LACE", &w_color::OLD_LACE, "OLD_LACE")
			.staticmethod("OLD_LACE")
            .def("OLIVE", &w_color::OLIVE, "OLIVE")
			.staticmethod("OLIVE")
            .def("OLIVE_DRAB", &w_color::OLIVE_DRAB, "OLIVE_DRAB")
			.staticmethod("OLIVE_DRAB")
            .def("ORANGE", &w_color::ORANGE, "ORANGE")
			.staticmethod("ORANGE")
            .def("ORANGE_RED", &w_color::ORANGE_RED, "ORANGE_RED")
			.staticmethod("ORANGE_RED")
            .def("ORCHID", &w_color::ORCHID, "ORCHID")
			.staticmethod("ORCHID")
            .def("PALE_GOLDENROD", &w_color::PALE_GOLDENROD, "PALE_GOLDENROD")
			.staticmethod("PALE_GOLDENROD")
            .def("PALE_GREEN", &w_color::PALE_GREEN, "PALE_GREEN")
			.staticmethod("PALE_GREEN")
            .def("PALE_TURQUOISE", &w_color::PALE_TURQUOISE, "PALE_TURQUOISE")
			.staticmethod("PALE_TURQUOISE")
            .def("PALE_VIOLET_RED", &w_color::PALE_VIOLET_RED, "PALE_VIOLET_RED")
			.staticmethod("PALE_VIOLET_RED")
            .def("PAPAYA_WHIP", &w_color::PAPAYA_WHIP, "PAPAYA_WHIP")
			.staticmethod("PAPAYA_WHIP")
            .def("PEACH_PUFF", &w_color::PEACH_PUFF, "PEACH_PUFF")
			.staticmethod("PEACH_PUFF")
            .def("PERU", &w_color::PERU, "PERU")
			.staticmethod("PERU")
            .def("PINK", &w_color::PINK, "PINK")
			.staticmethod("PINK")
            .def("PLUM", &w_color::PLUM, "PLUM")
			.staticmethod("PLUM")
            .def("POWDER_BLUE", &w_color::POWDER_BLUE, "POWDER_BLUE")
			.staticmethod("POWDER_BLUE")
            .def("PURPLE", &w_color::PURPLE, "PURPLE")
			.staticmethod("PURPLE")
            .def("RED", &w_color::RED, "RED")
			.staticmethod("RED")
            .def("ROSY_BROWN", &w_color::ROSY_BROWN, "ROSY_BROWN")
			.staticmethod("ROSY_BROWN")
            .def("ROYAL_BLUE", &w_color::ROYAL_BLUE, "ROYAL_BLUE")
			.staticmethod("ROYAL_BLUE")
            .def("SADDLE_BROWN", &w_color::SADDLE_BROWN, "SADDLE_BROWN")
			.staticmethod("SADDLE_BROWN")
            .def("SALMON", &w_color::SALMON, "SALMON")
			.staticmethod("SALMON")
            .def("SANDY_BROWN", &w_color::SANDY_BROWN, "SANDY_BROWN")
			.staticmethod("SANDY_BROWN")
            .def("SEA_GREEN", &w_color::SEA_GREEN, "SEA_GREEN")
			.staticmethod("SEA_GREEN")
            .def("SEA_SHELL", &w_color::SEA_SHELL, "SEA_SHELL")
			.staticmethod("SEA_SHELL")
            .def("SIENNA", &w_color::SIENNA, "SIENNA")
			.staticmethod("SIENNA")
            .def("SILVER", &w_color::SILVER, "SILVER")
			.staticmethod("SILVER")
            .def("SKY_BLUE", &w_color::SKY_BLUE, "SKY_BLUE")
			.staticmethod("SKY_BLUE")
            .def("SLATE_BLUE", &w_color::SLATE_BLUE, "SLATE_BLUE")
			.staticmethod("SLATE_BLUE")
            .def("SLATE_GRAY", &w_color::SLATE_GRAY, "SLATE_GRAY")
			.staticmethod("SLATE_GRAY")
            .def("SNOW", &w_color::SNOW, "SNOW")
			.staticmethod("SNOW")
            .def("SPRING_GREEN", &w_color::SPRING_GREEN, "SPRING_GREEN")
			.staticmethod("SPRING_GREEN")
            .def("STEEL_BLUE", &w_color::STEEL_BLUE, "STEEL_BLUE")
			.staticmethod("STEEL_BLUE")
            .def("TAN", &w_color::TAN, "TAN")
			.staticmethod("TAN")
            .def("TEAL", &w_color::TEAL, "TEAL")
			.staticmethod("TEAL")
            .def("THISTLE", &w_color::THISTLE, "THISTLE")
			.staticmethod("THISTLE")
            .def("TOMATO", &w_color::TOMATO, "TOMATO")
			.staticmethod("TOMATO")
            .def("TRANSPARENT_", &w_color::TRANSPARENT_, "TRANSPARENT_")
			.staticmethod("TRANSPARENT_")
            .def("TURQUOISE", &w_color::TURQUOISE, "TURQUOISE")
			.staticmethod("TURQUOISE")
            .def("VIOLET", &w_color::VIOLET, "VIOLET")
			.staticmethod("VIOLET")
            .def("WHEAT", &w_color::WHEAT, "WHEAT")
			.staticmethod("WHEAT")
            .def("WHITE", &w_color::WHITE, "WHITE")
			.staticmethod("WHITE")
            .def("WHITE_SMOKE", &w_color::WHITE_SMOKE, "WHITE_SMOKE")
			.staticmethod("WHITE_SMOKE")
            .def("YELLOW", &w_color::YELLOW, "YELLOW")
			.staticmethod("YELLOW")
            .def("YELLOW_GREEN", &w_color::YELLOW_GREEN, "YELLOW_GREEN")
			.staticmethod("YELLOW_GREEN")
        ;
    }
}

#endif//__W_COLOR_PY_H__

#endif //__PYTHON__