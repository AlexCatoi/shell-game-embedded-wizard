/*******************************************************************************
*
* E M B E D D E D   W I Z A R D   P R O J E C T
*
*                                                Copyright (c) TARA Systems GmbH
*                                    written by Paul Banach and Manfred Schweyer
*
********************************************************************************
*
* This file was generated automatically by Embedded Wizard Studio.
*
* Please do not make any modifications of this file! The modifications are lost
* when the file is generated again by Embedded Wizard Studio!
*
* The template of this heading text can be found in the file 'head.ewt' in the
* directory 'Platforms' of your Embedded Wizard installation directory. If you
* wish to adapt this text, please copy the template file 'head.ewt' into your
* project directory and edit the copy only. Please avoid any modifications of
* the original template file!
*
* Version  : 13.04
* Profile  : Simulation
* Platform : Windows.Software.RGBA8888
*
*******************************************************************************/

#include "ewlocale.h"
#include "_ApplicationAchPop.h"
#include "_ApplicationAchievement.h"
#include "_ApplicationAchievements.h"
#include "_ApplicationApplication.h"
#include "_ApplicationContainer.h"
#include "_ApplicationDeviceClass.h"
#include "_ApplicationDeviceClass1.h"
#include "_ApplicationGame.h"
#include "_ApplicationHelpMenu.h"
#include "_ApplicationLoadingGame.h"
#include "_ApplicationMainMenu.h"
#include "_ApplicationSettings.h"
#include "_ApplicationShop.h"
#include "_ApplicationShopListItem.h"
#include "_ApplicationStats.h"
#include "_ApplicationTheClass.h"
#include "_CoreGroup.h"
#include "_CoreHorizontalList.h"
#include "_CoreRoot.h"
#include "_CoreSimpleTouchHandler.h"
#include "_CoreSlideTouchHandler.h"
#include "_CoreTimer.h"
#include "_CoreVerticalList.h"
#include "_CoreView.h"
#include "_EffectsColorEffect.h"
#include "_EffectsInt32Effect.h"
#include "_EffectsPointEffect.h"
#include "_EffectsRectEffect.h"
#include "_EffectsSlideTransition.h"
#include "_EffectsTransition.h"
#include "_ResourcesBitmap.h"
#include "_ResourcesFont.h"
#include "_ViewsBevel.h"
#include "_ViewsFilterScreen.h"
#include "_ViewsImage.h"
#include "_ViewsRectangle.h"
#include "_ViewsText.h"
#include "_WidgetSetHorizontalSlider.h"
#include "_WidgetSetHorizontalSliderConfig.h"
#include "_WidgetSetHorizontalValueBar.h"
#include "_WidgetSetHorizontalValueBarConfig.h"
#include "_WidgetSetPushButton.h"
#include "_WidgetSetPushButtonConfig.h"
#include "_WidgetSetToggleButton.h"
#include "_WidgetSetToggleButtonConfig.h"
#include "Application.h"
#include "Core.h"
#include "Effects.h"
#include "Graphics.h"
#include "Resources.h"
#include "Views.h"
#include "WidgetSet.h"

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault0[] =
{
  0x00000408, /* ratio 54.65 % */
  0xB8001F00, 0x00086452, 0x24DE0034, 0x40073004, 0x00200019, 0xC0088184, 0x70001D60,
  0x305C6800, 0x001388B0, 0x71D80069, 0x000D8008, 0x6863141D, 0xE3A0A004, 0x1F2390C7,
  0x5119449A, 0x588E8123, 0x38E84E56, 0x36802405, 0x8C924B18, 0x1B800418, 0xD227409F,
  0xA8F0A9F1, 0xAD1D04C6, 0x1179342C, 0x068D43E8, 0x02300278, 0x8146A720, 0x04488504,
  0x1AC00630, 0x46154B8A, 0xE8F2426C, 0x3A128D45, 0xF1486126, 0x11A5C2A8, 0xE3244627,
  0x8549A273, 0xE81E5667, 0xC4E84508, 0x68112B3C, 0xAE94AA5D, 0x7B04C1C6, 0x51985422,
  0x458E83A3, 0xDB198A4D, 0x87C7C002, 0x19CB0313, 0x4125B1AB, 0x2E331383, 0x2574D90D,
  0xF30FAD06, 0xF13D1802, 0x13921AA8, 0x988D8CF5, 0x89C22271, 0xD49265A3, 0xD0F233B8,
  0x962F7CB1, 0xF7F63DE5, 0xAF26926C, 0x9B00B002, 0x00E0C662, 0xD87E3702, 0x006C6970,
  0xBD9615B7, 0x87E35268, 0xCC00488E, 0x24E548FD, 0x4321AE45, 0x514F1C46, 0xF29F41FC,
  0x1A077E83, 0x87E068F2, 0x1374AC21, 0x84E82E41, 0x21814F9E, 0x78001DC4, 0x4C50F509,
  0x8004D142, 0x47511A4A, 0x91B81490, 0x7C43DF75, 0x0C92A849, 0x03081400, 0x08843800,
  0x82238800, 0x154AC348, 0x45D0A81C, 0x9CC435A3, 0xD4918749, 0x8A234521, 0x1A7A4008,
  0x4191D05D, 0x5D868D0A, 0x76060D59, 0x2D0D82D1, 0x2F88E128, 0x63E23000, 0x5135891D,
  0x75C16759, 0x92094860, 0xD1451DD4, 0x7B9D0489, 0xC1400135, 0x49090B8F, 0x19149112,
  0x4A5D25A9, 0x47536452, 0x81146A4D, 0x48C0008B, 0x21638CD7, 0x2B9821C6, 0x8611D031,
  0x20A869A0, 0x09863700, 0x06754159, 0x8A4690D5, 0x49963585, 0x400A2D26, 0x75B045A3,
  0x95214351, 0xED412505, 0x8307843D, 0x51D0352B, 0xC451DB7B, 0x4E185956, 0x45699D24,
  0x5E923514, 0xD135B000, 0x66615FA7, 0x5D145198, 0x2459A8F1, 0xA526168D, 0x521AE045,
  0x446D1343, 0x950D44E6, 0xB05F1135, 0x59DC6B1A, 0x524A4121, 0x14AD2B83, 0x00000010,
  0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault1[] =
{
  0x000004AC, /* ratio 51.17 % */
  0xB8001D00, 0x8008A452, 0x00E4003A, 0x0EC00378, 0xE6003480, 0xC0085C3C, 0x0010000D,
  0x58183632, 0x0041CA64, 0x2802406D, 0x8022F093, 0x64F11326, 0xE380A004, 0x21139192,
  0x3188645A, 0x428E03E3, 0xC8898400, 0x864E6313, 0x81D2250C, 0x4DE56649, 0x5A772882,
  0x2606C924, 0xC7302B46, 0x31334000, 0x448240A3, 0x20045674, 0x94462495, 0x94422508,
  0x4702519A, 0xB6871324, 0x2210A8F8, 0x43142946, 0x33B89D2A, 0x468E0463, 0x5001E6B4,
  0x0057A494, 0x99064C26, 0x4C0F400A, 0x70171992, 0x8CD24ACC, 0x874D8456, 0x98A004D6,
  0x088A10E0, 0xB8550E2D, 0x824B7277, 0xA544E11E, 0x4669A00B, 0xEE3F3803, 0x06B1CD3D,
  0x57AF1800, 0x58322E56, 0x0E8850EA, 0x0C450E77, 0xDAC70120, 0x84376E00, 0xC7011199,
  0x6CEE0027, 0x23345925, 0x835CDF83, 0xD248744F, 0x19A1C509, 0xD9859C0F, 0x42C67454,
  0xE15E0801, 0xC8619D1E, 0x026943BF, 0x8C54DC18, 0x49D6B5D6, 0x72533CEE, 0x3BFA4627,
  0x617003CF, 0xAD4F4932, 0x92258918, 0x85FD4D68, 0xC97F489F, 0x54729264, 0x4618458D,
  0x97F55143, 0x8459135C, 0xA9EE4311, 0xD4709A31, 0x44910499, 0x91845210, 0xA6753B68,
  0x6DBB50D5, 0x16431C25, 0x49184726, 0xA2F7A10A, 0xD4EDEE49, 0x7D185354, 0x3B6E9268,
  0x7097B56E, 0xD187F1FA, 0xA8A58E60, 0x75244610, 0x054999C8, 0x0014C70E, 0xA114982C,
  0x14215B53, 0x9A307B92, 0x186390C4, 0x8750C485, 0x53B48A20, 0x545A3D5F, 0x9A128854,
  0x7E689124, 0x44E0B5F1, 0x95B87A37, 0x256A3154, 0x06514911, 0x2C9BA228, 0x74827002,
  0x14053518, 0xC5ED7F4F, 0x02474210, 0x524318E0, 0xA2D26585, 0x13346125, 0xD87530A0,
  0x96847DA2, 0x795155B7, 0x421EE002, 0xE8600192, 0x89C67F47, 0xB50A56A4, 0x134965E8,
  0xA894B452, 0xDCA9863D, 0x39094D93, 0x4A0F5A50, 0xAE976697, 0x7CA264C2, 0x267ABD25,
  0x249A87AC, 0x35185CD5, 0x227A53CA, 0xA1586441, 0x1D1A4598, 0xD449A242, 0x65A58D69,
  0xC35CE61B, 0x8B530926, 0xA8EAB653, 0x856E3983, 0xAD52B611, 0x0A7D0001, 0x94266B15,
  0x29D4526A, 0x6541835A, 0x55794610, 0x21758001, 0x406FE4AC, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault2[] =
{
  0x00000410, /* ratio 49.23 % */
  0xB8002D00, 0x0009E452, 0x00400037, 0x0D0003A0, 0x01093280, 0x069001C8, 0x0B8699C0,
  0x189C3223, 0x0018C006, 0x0084006B, 0xC0C37240, 0xBC004E22, 0xA546D889, 0x5F1A87C4,
  0x9088AC76, 0x7788C5A6, 0xC8844230, 0x911CC006, 0x38400124, 0x9E4004D9, 0xBE286688,
  0xE150C9FC, 0xE0003AC7, 0xE1C92500, 0x0E989264, 0x7854866D, 0x9DC22155, 0x74B0C800,
  0x53A21139, 0xFEA55000, 0xC232491C, 0x152B94C9, 0x36595CB6, 0x3EA8D3E2, 0x0A98FC01,
  0xA2C12DC0, 0xAD261547, 0x44699138, 0xF63A0031, 0x8016C9EC, 0x94468240, 0xB0A981DA,
  0x2EAF4FE2, 0xB844C29B, 0x8745EA12, 0xC558278D, 0x4660F899, 0x421D0C85, 0x3150A96C,
  0xFD41C600, 0x548C0116, 0x79D3E169, 0xD8BC2257, 0xB3E8C358, 0xC09E111D, 0x54A5786D,
  0x672D3D85, 0x34D35884, 0x4619A0EF, 0x366C9F0F, 0x138EC32F, 0xAB144219, 0x95C4E2F0,
  0x7CDB272B, 0x49C1D24E, 0xB4016828, 0x63B21A94, 0x5C42000B, 0x9D1C6CAE, 0x17887C60,
  0x1DDF366D, 0xD6D26571, 0xDF84F511, 0x25F16166, 0xBC41411A, 0x864B9EA6, 0x4C1C8801,
  0x60573117, 0x4411E663, 0x31114E85, 0x00114001, 0x0021B11C, 0x97C11129, 0x16957F6F,
  0x00357552, 0x645D8300, 0x47D104BD, 0x15045D9A, 0x44FD3F44, 0x95265063, 0x1189D1D8,
  0x8FE2A0C5, 0xA2E5D167, 0x08C9B847, 0x06478D53, 0xF149C155, 0x51981541, 0x9135412E,
  0xC759B660, 0x35415A62, 0x4F7A64C0, 0x961678A6, 0xC0F4913F, 0xE4464E96, 0xE25F4F5A,
  0x6463A615, 0x51D0A942, 0x2544BD9D, 0x842A5661, 0x554199D8, 0x6E934458, 0x0025E002,
  0xD3D82A77, 0xC7D9439A, 0x1E8299A5, 0x7962DA56, 0x9ED8F491, 0xA519BE87, 0xB60C009C,
  0xF12E7114, 0x5D9B5E57, 0x6E93F446, 0x0149AD37, 0x8A3288A7, 0x7D0A861A, 0x41A35CEA,
  0x00101491, 0x00000000
};

/* Compressed strings for the language 'Default'. */
EW_CONST_STRING_PRAGMA static const unsigned int _StringsDefault3[] =
{
  0x000000E0, /* ratio 69.64 % */
  0xB8002B00, 0x80084452, 0x00F2003A, 0x09000100, 0xD8003080, 0x06F00444, 0x65001DC0,
  0xB3700230, 0x87940010, 0x5800C600, 0x8464A003, 0x68A44581, 0x4D122884, 0xED198947,
  0x30C89468, 0x251A8006, 0xA8249C01, 0x004B2332, 0x04C2192E, 0x4D233320, 0xC0003200,
  0xE533B9C8, 0x5F4090CA, 0x913A2C6A, 0x259C5261, 0x5A5CA00D, 0x92D74002, 0xFD765005,
  0xCA03600A, 0x66492026, 0x29738864, 0xE5159143, 0x519B9000, 0x2D8E9D24, 0x03480229,
  0x001CE335, 0x0E0A7221, 0x00000008, 0x00000000
};

/* Constant values used in this 'C' module only. */
static const XRect _Const0000 = {{ 0, 0 }, { 800, 480 }};
static const XColor _Const0001 = { 0x0D, 0xFF, 0x5C, 0xFF };
static const XColor _Const0002 = { 0x03, 0xFE, 0xFF, 0xFF };
static const XRect _Const0003 = {{ 300, 70 }, { 500, 438 }};
static const XPoint _Const0004 = { 0, 0 };
static const XRect _Const0005 = {{ 0, 355 }, { 800, 480 }};
static const XColor _Const0006 = { 0x88, 0x34, 0x00, 0xFF };
static const XColor _Const0007 = { 0x6A, 0x30, 0x02, 0xFF };
static const XColor _Const0008 = { 0xB5, 0x3E, 0x00, 0xFF };
static const XColor _Const0009 = { 0xB8, 0x43, 0x00, 0xFF };
static const XRect _Const000A = {{ 328, 283 }, { 472, 354 }};
static const XPoint _Const000B = { 0, -70 };
static const XRect _Const000C = {{ 100, 70 }, { 300, 438 }};
static const XRect _Const000D = {{ 500, 70 }, { 700, 438 }};
static const XRect _Const000E = {{ 212, 39 }, { 588, 91 }};
static const XColor _Const000F = { 0xFF, 0xF0, 0x0C, 0xFF };
static const XColor _Const0010 = { 0xFF, 0x11, 0x08, 0xFF };
static const XStringRes _Const0011 = { _StringsDefault0, 0x0002 };
static const XPoint _Const0012 = { 144, 148 };
static const XPoint _Const0013 = { 261, 148 };
static const XPoint _Const0014 = { 283, 352 };
static const XPoint _Const0015 = { 127, 352 };
static const XPoint _Const0016 = { 344, 148 };
static const XPoint _Const0017 = { 461, 148 };
static const XPoint _Const0018 = { 483, 352 };
static const XPoint _Const0019 = { 327, 352 };
static const XPoint _Const001A = { 538, 148 };
static const XPoint _Const001B = { 655, 148 };
static const XPoint _Const001C = { 677, 352 };
static const XPoint _Const001D = { 521, 352 };
static const XRect _Const001E = {{ 344, 70 }, { 468, 192 }};
static const XRect _Const001F = {{ 262, 142 }, { 539, 562 }};
static const XRect _Const0020 = {{ 210, 38 }, { 359, 212 }};
static const XRect _Const0021 = {{ 155, 195 }, { 411, 480 }};
static const XRect _Const0022 = {{ 426, 38 }, { 575, 212 }};
static const XRect _Const0023 = {{ 371, 211 }, { 627, 496 }};
static const XColor _Const0024 = { 0xFF, 0xAD, 0x00, 0xFF };
static const XColor _Const0025 = { 0xFF, 0x8F, 0x00, 0xFF };
static const XRect _Const0026 = {{ -11, 0 }, { 144, 65 }};
static const XColor _Const0027 = { 0xFF, 0x00, 0x15, 0xFF };
static const XColor _Const0028 = { 0xFF, 0x00, 0x71, 0xFF };
static const XColor _Const0029 = { 0xFF, 0x00, 0xC7, 0xFF };
static const XColor _Const002A = { 0xFF, 0x3F, 0x00, 0xFF };
static const XStringRes _Const002B = { _StringsDefault0, 0x0011 };
static const XColor _Const002C = { 0xFF, 0xFF, 0xFF, 0xFF };
static const XRect _Const002D = {{ 725, 0 }, { 800, 39 }};
static const XColor _Const002E = { 0x00, 0x00, 0x00, 0x00 };
static const XColor _Const002F = { 0xB7, 0xB7, 0xB7, 0xFF };
static const XColor _Const0030 = { 0x00, 0x00, 0x00, 0xFF };
static const XRect _Const0031 = {{ 752, 438 }, { 800, 486 }};
static const XRect _Const0032 = {{ 652, 447 }, { 752, 477 }};
static const XColor _Const0033 = { 0xFF, 0x88, 0x0B, 0xFF };
static const XColor _Const0034 = { 0xE0, 0xFF, 0x12, 0xFF };
static const XColor _Const0035 = { 0xFF, 0xAB, 0x2C, 0xFF };
static const XColor _Const0036 = { 0xFF, 0xFA, 0x36, 0xFF };
static const XRect _Const0037 = {{ 0, 1 }, { 109, 130 }};
static const XRect _Const0038 = {{ 725, 19 }, { 807, 148 }};
static const XRect _Const0039 = {{ 0, 295 }, { 98, 367 }};
static const XRect _Const003A = {{ 702, 295 }, { 800, 367 }};
static const XRect _Const003B = {{ 128, 283 }, { 272, 354 }};
static const XRect _Const003C = {{ 528, 283 }, { 672, 354 }};
static const XStringRes _Const003D = { _StringsDefault0, 0x001C };
static const XColor _Const003E = { 0x00, 0x28, 0xFF, 0xFF };
static const XColor _Const003F = { 0xFF, 0x6F, 0x00, 0xFF };
static const XColor _Const0040 = { 0xFF, 0x75, 0x00, 0xFF };
static const XColor _Const0041 = { 0x63, 0x00, 0xFF, 0xFF };
static const XColor _Const0042 = { 0xB8, 0x00, 0x35, 0xFF };
static const XColor _Const0043 = { 0xB5, 0x00, 0x2D, 0xFF };
static const XColor _Const0044 = { 0xFE, 0xF4, 0xFF, 0xFF };
static const XColor _Const0045 = { 0xBF, 0xBF, 0xB9, 0xFF };
static const XColor _Const0046 = { 0xD0, 0xE5, 0xFF, 0xFF };
static const XColor _Const0047 = { 0xFF, 0xB3, 0xD5, 0xFF };
static const XColor _Const0048 = { 0x09, 0xBF, 0x45, 0xFF };
static const XColor _Const0049 = { 0x02, 0xC5, 0xC6, 0xFF };
static const XRect _Const004A = {{ 779, 0 }, { 799, 20 }};
static const XStringRes _Const004B = { _StringsDefault0, 0x0026 };
static const XColor _Const004C = { 0x57, 0x57, 0x57, 0xFF };
static const XColor _Const004D = { 0xFF, 0x0F, 0x00, 0xFF };
static const XColor _Const004E = { 0xB6, 0xB7, 0xB5, 0xFF };
static const XColor _Const004F = { 0xFF, 0x2A, 0x23, 0xFF };
static const XColor _Const0050 = { 0xD2, 0xFF, 0xA5, 0xFF };
static const XRect _Const0051 = {{ 492, 82 }, { 562, 132 }};
static const XRect _Const0052 = {{ 12, 86 }, { 301, 132 }};
static const XStringRes _Const0053 = { _StringsDefault0, 0x002A };
static const XRect _Const0054 = {{ 12, 176 }, { 301, 223 }};
static const XStringRes _Const0055 = { _StringsDefault0, 0x003D };
static const XRect _Const0056 = {{ 329, 176 }, { 726, 226 }};
static const XColor _Const0057 = { 0x20, 0xC4, 0x7D, 0xBB };
static const XColor _Const0058 = { 0xA2, 0xEE, 0x46, 0xC9 };
static const XColor _Const0059 = { 0x57, 0xB4, 0x3E, 0xBB };
static const XColor _Const005A = { 0x37, 0xC7, 0xA7, 0xE5 };
static const XRect _Const005B = {{ 726, 183 }, { 766, 221 }};
static const XRect _Const005C = {{ 12, 295 }, { 301, 342 }};
static const XStringRes _Const005D = { _StringsDefault0, 0x0046 };
static const XRect _Const005E = {{ 329, 292 }, { 726, 342 }};
static const XRect _Const005F = {{ 726, 295 }, { 766, 333 }};
static const XRect _Const0060 = {{ 266, 391 }, { 535, 441 }};
static const XStringRes _Const0061 = { _StringsDefault0, 0x004C };
static const XColor _Const0062 = { 0xA9, 0x47, 0x7B, 0xFF };
static const XColor _Const0063 = { 0x00, 0xCE, 0x9F, 0xAD };
static const XColor _Const0064 = { 0xE2, 0x50, 0xCF, 0xEB };
static const XColor _Const0065 = { 0xE2, 0x63, 0xD6, 0xAD };
static const XColor _Const0066 = { 0xF1, 0xF3, 0x0C, 0xFF };
static const XRect _Const0067 = {{ 265, 391 }, { 535, 441 }};
static const XStringRes _Const0068 = { _StringsDefault0, 0x005B };
static const XRect _Const0069 = {{ 325, 216 }, { 475, 266 }};
static const XStringRes _Const006A = { _StringsDefault0, 0x006D };
static const XRect _Const006B = {{ 325, 310 }, { 475, 360 }};
static const XStringRes _Const006C = { _StringsDefault0, 0x0074 };
static const XRect _Const006D = {{ 325, 397 }, { 475, 447 }};
static const XStringRes _Const006E = { _StringsDefault0, 0x007C };
static const XRect _Const006F = {{ 72, 29 }, { 728, 195 }};
static const XColor _Const0070 = { 0xFF, 0x95, 0xE1, 0xFF };
static const XColor _Const0071 = { 0xCF, 0x42, 0x54, 0xC2 };
static const XStringRes _Const0072 = { _StringsDefault0, 0x0083 };
static const XColor _Const0073 = { 0xFF, 0x00, 0xE8, 0xFF };
static const XRect _Const0074 = {{ 0, 215 }, { 192, 480 }};
static const XRect _Const0075 = {{ 608, 215 }, { 800, 480 }};
static const XColor _Const0076 = { 0x00, 0xFF, 0x56, 0xFF };
static const XColor _Const0077 = { 0x1E, 0x70, 0x70, 0xFF };
static const XRect _Const0078 = {{ 0, 0 }, { 57, 43 }};
static const XRect _Const0079 = {{ 754, 0 }, { 803, 43 }};
static const XStringRes _Const007A = { _StringsDefault0, 0x0091 };
static const XRect _Const007B = {{ 44, 3 }, { 101, 39 }};
static const XRect _Const007C = {{ 102, 315 }, { 698, 384 }};
static const XStringRes _Const007D = { _StringsDefault0, 0x009B };
static const XRect _Const007E = {{ 102, 214 }, { 646, 264 }};
static const XColor _Const007F = { 0xFC, 0xFF, 0x0B, 0xDE };
static const XColor _Const0080 = { 0xFF, 0x02, 0x00, 0xEC };
static const XColor _Const0081 = { 0xD8, 0x8C, 0x37, 0xDE };
static const XColor _Const0082 = { 0xEC, 0xF2, 0x26, 0xFF };
static const XStringRes _Const0083 = { _StringsDefault0, 0x00B3 };
static const XStringRes _Const0084 = { _StringsDefault0, 0x00C6 };
static const XStringRes _Const0085 = { _StringsDefault0, 0x00DC };
static const XRect _Const0086 = {{ 546, 315 }, { 646, 384 }};
static const XStringRes _Const0087 = { _StringsDefault0, 0x00FB };
static const XRect _Const0088 = {{ 523, 315 }, { 624, 384 }};
static const XRect _Const0089 = {{ 499, 315 }, { 609, 384 }};
static const XPoint _Const008A = { 0, -20 };
static const XRect _Const008B = {{ 50, 315 }, { 646, 384 }};
static const XRect _Const008C = {{ 75, 315 }, { 671, 384 }};
static const XRect _Const008D = {{ 5, 88 }, { 315, 165 }};
static const XStringRes _Const008E = { _StringsDefault0, 0x00FF };
static const XColor _Const008F = { 0xFF, 0x39, 0xFB, 0xFF };
static const XRect _Const0090 = {{ 361, 88 }, { 773, 165 }};
static const XStringRes _Const0091 = { _StringsDefault0, 0x0112 };
static const XRect _Const0092 = {{ 11, 217 }, { 310, 283 }};
static const XStringRes _Const0093 = { _StringsDefault0, 0x0128 };
static const XRect _Const0094 = {{ 332, 217 }, { 800, 283 }};
static const XStringRes _Const0095 = { _StringsDefault0, 0x013D };
static const XRect _Const0096 = {{ 296, 348 }, { 466, 398 }};
static const XStringRes _Const0097 = { _StringsDefault0, 0x0154 };
static const XStringRes _Const0098 = { _StringsDefault0, 0x015B };
static const XStringRes _Const0099 = { _StringsDefault0, 0x016D };
static const XStringRes _Const009A = { _StringsDefault0, 0x0181 };
static const XStringRes _Const009B = { _StringsDefault0, 0x0185 };
static const XStringRes _Const009C = { _StringsDefault0, 0x0196 };
static const XRect _Const009D = {{ -1, -3 }, { 799, 477 }};
static const XColor _Const009E = { 0x49, 0xFF, 0x6E, 0xFF };
static const XColor _Const009F = { 0x0A, 0xDD, 0x4F, 0xFF };
static const XColor _Const00A0 = { 0x51, 0xCE, 0xFF, 0xFF };
static const XColor _Const00A1 = { 0x02, 0xDC, 0xDD, 0xFF };
static const XRect _Const00A2 = {{ -1, 80 }, { 799, 480 }};
static const XColor _Const00A3 = { 0x1E, 0x9A, 0x40, 0x5D };
static const XColor _Const00A4 = { 0x1E, 0x69, 0x9E, 0x5D };
static const XRect _Const00A5 = {{ 0, 80 }, { 800, 480 }};
static const XPoint _Const00A6 = { 160, 0 };
static const XRect _Const00A7 = {{ 0, 0 }, { 150, 81 }};
static const XStringRes _Const00A8 = { _StringsDefault0, 0x01A2 };
static const XRect _Const00A9 = {{ 150, 0 }, { 300, 81 }};
static const XStringRes _Const00AA = { _StringsDefault0, 0x01A9 };
static const XRect _Const00AB = {{ 300, 0 }, { 450, 81 }};
static const XStringRes _Const00AC = { _StringsDefault0, 0x01B1 };
static const XColor _Const00AD = { 0x8E, 0x8E, 0x8E, 0xFF };
static const XColor _Const00AE = { 0x1B, 0xC6, 0xCF, 0xFF };
static const XColor _Const00AF = { 0x00, 0xE3, 0x53, 0xFF };
static const XColor _Const00B0 = { 0x17, 0xAC, 0xB4, 0xFF };
static const XRect _Const00B1 = {{ 706, 16 }, { 768, 66 }};
static const XRect _Const00B2 = {{ 613, 16 }, { 726, 66 }};
static const XStringRes _Const00B3 = { _StringsDefault0, 0x01B9 };
static const XRect _Const00B4 = {{ 780, 0 }, { 800, 20 }};
static const XStringRes _Const00B5 = { _StringsDefault0, 0x01C0 };
static const XStringRes _Const00B6 = { _StringsDefault0, 0x01CD };
static const XStringRes _Const00B7 = { _StringsDefault0, 0x01D7 };
static const XStringRes _Const00B8 = { _StringsDefault0, 0x01E6 };
static const XStringRes _Const00B9 = { _StringsDefault0, 0x01EE };
static const XStringRes _Const00BA = { _StringsDefault0, 0x01F9 };
static const XStringRes _Const00BB = { _StringsDefault1, 0x0002 };
static const XStringRes _Const00BC = { _StringsDefault1, 0x0010 };
static const XStringRes _Const00BD = { _StringsDefault1, 0x001D };
static const XStringRes _Const00BE = { _StringsDefault1, 0x0027 };
static const XStringRes _Const00BF = { _StringsDefault1, 0x0036 };
static const XStringRes _Const00C0 = { _StringsDefault1, 0x0045 };
static const XStringRes _Const00C1 = { _StringsDefault1, 0x0053 };
static const XStringRes _Const00C2 = { _StringsDefault1, 0x0065 };
static const XStringRes _Const00C3 = { _StringsDefault1, 0x0076 };
static const XStringRes _Const00C4 = { _StringsDefault1, 0x0081 };
static const XRect _Const00C5 = {{ 450, -1 }, { 600, 80 }};
static const XStringRes _Const00C6 = { _StringsDefault1, 0x008C };
static const XColor _Const00C7 = { 0xF9, 0xFF, 0x19, 0xFF };
static const XColor _Const00C8 = { 0xFF, 0x06, 0x00, 0xFF };
static const XRect _Const00C9 = {{ 0, 0 }, { 160, 400 }};
static const XRect _Const00CA = {{ 0, 0 }, { 160, 326 }};
static const XRect _Const00CB = {{ 0, 326 }, { 160, 400 }};
static const XStringRes _Const00CC = { _StringsDefault1, 0x0096 };
static const XColor _Const00CD = { 0x4B, 0xFF, 0xFC, 0xFF };
static const XColor _Const00CE = { 0x07, 0xF1, 0x12, 0xE1 };
static const XColor _Const00CF = { 0xFF, 0xF1, 0x0A, 0xFF };
static const XRect _Const00D0 = {{ 0, 263 }, { 160, 312 }};
static const XStringRes _Const00D1 = { _StringsDefault1, 0x009C };
static const XColor _Const00D2 = { 0x2C, 0x50, 0xFA, 0xFE };
static const XColor _Const00D3 = { 0x7E, 0x8A, 0x7E, 0xFF };
static const XRect _Const00D4 = {{ 55, 7 }, { 117, 57 }};
static const XRect _Const00D5 = {{ 0, 20 }, { 160, 50 }};
static const XStringRes _Const00D6 = { _StringsDefault1, 0x00A2 };
static const XStringRes _Const00D7 = { _StringsDefault1, 0x00AD };
static const XStringRes _Const00D8 = { _StringsDefault1, 0x00B6 };
static const XStringRes _Const00D9 = { _StringsDefault1, 0x00BE };
static const XRect _Const00DA = {{ 291, 0 }, { 509, 52 }};
static const XColor _Const00DB = { 0x37, 0x00, 0xFF, 0xFF };
static const XColor _Const00DC = { 0xFF, 0x00, 0x0B, 0xFF };
static const XColor _Const00DD = { 0xFF, 0x0D, 0xE0, 0xFF };
static const XColor _Const00DE = { 0x20, 0xFF, 0x77, 0xFF };
static const XStringRes _Const00DF = { _StringsDefault1, 0x00CA };
static const XRect _Const00E0 = {{ 0, 85 }, { 800, 266 }};
static const XStringRes _Const00E1 = { _StringsDefault1, 0x00D1 };
static const XRect _Const00E2 = {{ 0, 266 }, { 800, 480 }};
static const XRect _Const00E3 = {{ 34, 80 }, { 774, 384 }};
static const XRect _Const00E4 = {{ 34, 82 }, { 774, 384 }};
static const XPoint _Const00E5 = { 0, 100 };
static const XStringRes _Const00E6 = { _StringsDefault2, 0x0002 };
static const XStringRes _Const00E7 = { _StringsDefault2, 0x0018 };
static const XStringRes _Const00E8 = { _StringsDefault2, 0x0033 };
static const XStringRes _Const00E9 = { _StringsDefault2, 0x0043 };
static const XStringRes _Const00EA = { _StringsDefault2, 0x005F };
static const XStringRes _Const00EB = { _StringsDefault2, 0x0070 };
static const XStringRes _Const00EC = { _StringsDefault2, 0x0081 };
static const XStringRes _Const00ED = { _StringsDefault2, 0x0097 };
static const XStringRes _Const00EE = { _StringsDefault2, 0x00AA };
static const XStringRes _Const00EF = { _StringsDefault2, 0x00BB };
static const XStringRes _Const00F0 = { _StringsDefault2, 0x00D5 };
static const XStringRes _Const00F1 = { _StringsDefault2, 0x00EE };
static const XStringRes _Const00F2 = { _StringsDefault2, 0x00FC };
static const XStringRes _Const00F3 = { _StringsDefault2, 0x0115 };
static const XStringRes _Const00F4 = { _StringsDefault2, 0x0128 };
static const XStringRes _Const00F5 = { _StringsDefault2, 0x0136 };
static const XStringRes _Const00F6 = { _StringsDefault2, 0x0150 };
static const XStringRes _Const00F7 = { _StringsDefault2, 0x016B };
static const XStringRes _Const00F8 = { _StringsDefault2, 0x0180 };
static const XStringRes _Const00F9 = { _StringsDefault2, 0x018D };
static const XStringRes _Const00FA = { _StringsDefault2, 0x019C };
static const XStringRes _Const00FB = { _StringsDefault2, 0x01B2 };
static const XStringRes _Const00FC = { _StringsDefault2, 0x01C0 };
static const XStringRes _Const00FD = { _StringsDefault2, 0x01D0 };
static const XStringRes _Const00FE = { _StringsDefault2, 0x01E6 };
static const XStringRes _Const00FF = { _StringsDefault2, 0x01F4 };
static const XStringRes _Const0100 = { _StringsDefault3, 0x0002 };
static const XStringRes _Const0101 = { _StringsDefault3, 0x0017 };
static const XStringRes _Const0102 = { _StringsDefault3, 0x0028 };
static const XStringRes _Const0103 = { _StringsDefault3, 0x0039 };
static const XRect _Const0104 = {{ 34, 396 }, { 774, 446 }};
static const XRect _Const0105 = {{ 354, 431 }, { 454, 461 }};
static const XStringRes _Const0106 = { _StringsDefault3, 0x004A };
static const XColor _Const0107 = { 0x00, 0x0F, 0xFF, 0xFF };
static const XColor _Const0108 = { 0x89, 0x89, 0x89, 0xFF };
static const XColor _Const0109 = { 0xFF, 0x00, 0x5F, 0xFF };
static const XStringRes _Const010A = { _StringsDefault3, 0x0050 };
static const XColor _Const010B = { 0xFC, 0x00, 0x05, 0xFF };
static const XColor _Const010C = { 0x00, 0xFC, 0x07, 0xFF };
static const XRect _Const010D = {{ 0, 0 }, { 700, 100 }};
static const XRect _Const010E = {{ 0, 0 }, { 701, 100 }};
static const XColor _Const010F = { 0x75, 0x75, 0x75, 0xFF };
static const XRect _Const0110 = {{ 40, 2 }, { 140, 102 }};
static const XRect _Const0111 = {{ 190, 52 }, { 700, 100 }};
static const XStringRes _Const0112 = { _StringsDefault3, 0x0055 };
static const XRect _Const0113 = {{ 190, 0 }, { 701, 75 }};
static const XRect _Const0114 = {{ 40, 0 }, { 140, 100 }};
static const XRect _Const0115 = {{ 250, 0 }, { 550, 50 }};
static const XColor _Const0116 = { 0x3D, 0xE6, 0x00, 0x87 };
static const XRect _Const0117 = {{ 232, 0 }, { 328, 50 }};
static const XRect _Const0118 = {{ 304, 0 }, { 550, 50 }};

#ifndef EW_DONT_CHECK_INDEX
  /* This function is used to check the indices when accessing an array.
     If you don't want this verification add the define EW_DONT_CHECK_INDEX
     to your Makefile or project settings. */
  static int EwCheckIndex( int aIndex, int aRange, const char* aFile, int aLine )
  {
    if (( aIndex < 0 ) || ( aIndex >= aRange ))
    {
      EwPrint( "[FATAL ERROR in %s:%d] Array index %d out of bounds %d",
                aFile, aLine, aIndex, aRange );
      EwPanic();
      return 0;
    }
    return aIndex;
  }

  #define EwCheckIndex( aIndex, aRange ) \
    EwCheckIndex( aIndex, aRange, __FILE__, __LINE__ )
#else
  #define EwCheckIndex( aIndex, aRange ) aIndex
#endif

/* Initializer for the class 'Application::Application' */
void ApplicationApplication__Init( ApplicationApplication _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreRoot__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationApplication );

  /* ... then construct all embedded objects */
  ApplicationContainer__Init( &_this->Container, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationApplication );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Container ), 0 );
  _this->Variable = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  _this->CurrentScreen = EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 );
  ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
  ApplicationMainMenu, 0 )));

  /* Call the user defined constructor */
  ApplicationApplication_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Application' */
void ApplicationApplication__ReInit( ApplicationApplication _this )
{
  /* At first re-initialize the super class ... */
  CoreRoot__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ApplicationContainer__ReInit( &_this->Container );
}

/* Finalizer method for the class 'Application::Application' */
void ApplicationApplication__Done( ApplicationApplication _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreRoot );

  /* Finalize all embedded objects */
  ApplicationContainer__Done( &_this->Container );

  /* Don't forget to deinitialize the super class ... */
  CoreRoot__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationApplication_Init( ApplicationApplication _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  EwAttachRefObserver( EwNewSlot( _this, ApplicationApplication_OnScreenChange ), 
    EwNewRef( EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 ), ApplicationDeviceClass1_OnGetCurrentScreen, 
    ApplicationDeviceClass1_OnSetCurrentScreen ), 0 );
  EwPostSignal( EwNewSlot( _this, ApplicationApplication_OnScreenChange ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Application.OnScreenChange()' */
void ApplicationApplication_OnScreenChange( ApplicationApplication _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  switch ( EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->CurrentScreen )
  {
    case ApplicationScreenTypeMainMenu :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationMainMenu, 0 )));
    break;

    case ApplicationScreenTypeHelpMenu :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationHelpMenu, 0 )));
    break;

    case ApplicationScreenTypeSettingsMenu :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationSettings, 0 )));
    break;

    case ApplicationScreenTypeInitilizeGame :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationLoadingGame, 0 )));
    break;

    case ApplicationScreenTypeShop :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationShop, 0 )));
    break;

    case ApplicationScreenTypeStats :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationStats, 0 )));
    break;

    case ApplicationScreenTypeGame :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationGame, 0 )));
    break;

    case ApplicationScreenTypeAchivements :
      ApplicationContainer_OnSetContent( &_this->Container, ((CoreGroup)EwNewObject( 
      ApplicationAchievements, 0 )));
    break;

    default :; 
  }
}

/* Variants derived from the class : 'Application::Application' */
EW_DEFINE_CLASS_VARIANTS( ApplicationApplication )
EW_END_OF_CLASS_VARIANTS( ApplicationApplication )

/* Virtual Method Table (VMT) for the class : 'Application::Application' */
EW_DEFINE_CLASS( ApplicationApplication, CoreRoot, Container, Variable, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::Application" )
  CoreRectView_initLayoutContext,
  CoreRoot_GetRoot,
  CoreRoot_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreRoot_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreRoot_OnSetFocus,
  CoreRoot_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreRoot_DispatchEvent,
  CoreRoot_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreRoot_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationApplication )

/* Include a file containing the font resource : 'Application::Font' */
#include "_ApplicationFont.h"

/* Table with links to derived variants of the font resource : 'Application::Font' */
EW_RES_WITHOUT_VARIANTS( ApplicationFont )

/* Initializer for the class 'Application::Game' */
void ApplicationGame__Init( ApplicationGame _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationGame );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Center, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle2, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Ball, &_this->_.XObject, 0 );
  EffectsPointEffect__Init( &_this->ShowBall, &_this->_.XObject, 0 );
  EffectsPointEffect__Init( &_this->HideBall, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Left, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Right, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->MakeMoves, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->WaitFinish, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->ChooseLeft, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->ChooseCenter, &_this->_.XObject, 0 );
  CoreSimpleTouchHandler__Init( &_this->ChooseRight, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->LeftToRightF, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->LeftToRightS, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RightToLeftF, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RightToLeftS, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->LeftToCenterF, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->LeftToCenterS, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->CenterToLeftF, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->CenterToLeftS, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->CenterToRightF, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->CenterToRightS, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RightToCenterF, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RightToCenterS, &_this->_.XObject, 0 );
  EffectsColorEffect__Init( &_this->ChooseTextEffectTL, &_this->_.XObject, 0 );
  EffectsColorEffect__Init( &_this->ChooseTextEffectBR, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->NivelCurrent, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );
  ApplicationTheClass__Init( &_this->LeftCenterAnimation, &_this->_.XObject, 0 );
  ApplicationTheClass__Init( &_this->CenterRightAnimation, &_this->_.XObject, 0 );
  ApplicationTheClass__Init( &_this->LeftRightAnimation, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->SpiderLeft, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->SpiderRight, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->PumpLeft, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->PumpRight, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->AchPopDismiss, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationGame );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0002 );
  CoreView_OnSetStackingPriority((CoreView)&_this->Center, 3 );
  CoreRectView__OnSetBounds( &_this->Center, _Const0003 );
  ViewsImage_OnSetAnimated( &_this->Center, 1 );
  ViewsImage_OnSetScrollOffset( &_this->Center, _Const0004 );
  ViewsImage_OnSetAlignment( &_this->Center, ViewsImageAlignmentAlignHorzCenter 
  | ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetFrameNumber( &_this->Center, 10 );
  CoreRectView__OnSetBounds( &_this->Rectangle2, _Const0005 );
  ViewsRectangle_OnSetRadiusTR( &_this->Rectangle2, 30 );
  ViewsRectangle_OnSetRadiusTL( &_this->Rectangle2, 30 );
  ViewsRectangle_OnSetColorBL( &_this->Rectangle2, _Const0006 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle2, _Const0007 );
  ViewsRectangle_OnSetColorTR( &_this->Rectangle2, _Const0008 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle2, _Const0009 );
  ViewsRectangle_OnSetAlphaBlended( &_this->Rectangle2, 1 );
  CoreView_OnSetStackingPriority((CoreView)&_this->Ball, 1 );
  CoreRectView__OnSetBounds( &_this->Ball, _Const000A );
  ViewsImage_OnSetAlignment( &_this->Ball, ViewsImageAlignmentAlignHorzCenter | 
  ViewsImageAlignmentAlignVertCenter );
  ViewsImage_OnSetFrameNumber( &_this->Ball, 5 );
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->ShowBall, 0 );
  _this->ShowBall.Super1.Symmetric = 0;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->ShowBall, EffectsTimingFastIn_EaseOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->ShowBall, 1 );
  EffectsEffect_OnSetInterCycleDelay((EffectsEffect)&_this->ShowBall, 0 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->ShowBall, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->ShowBall, 1 );
  _this->ShowBall.Value2 = _Const000B;
  _this->ShowBall.Value1 = _Const0004;
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->HideBall, 0 );
  _this->HideBall.Super1.Symmetric = 0;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->HideBall, EffectsTimingEaseIn_FastOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->HideBall, 1 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->HideBall, 150 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->HideBall, 0 );
  _this->HideBall.Value2 = _Const0004;
  _this->HideBall.Value1 = _Const000B;
  CoreView_OnSetStackingPriority((CoreView)&_this->Left, 3 );
  CoreRectView__OnSetBounds( &_this->Left, _Const000C );
  ViewsImage_OnSetAnimated( &_this->Left, 1 );
  ViewsImage_OnSetScrollOffset( &_this->Left, _Const0004 );
  ViewsImage_OnSetAlignment( &_this->Left, ViewsImageAlignmentAlignHorzCenter | 
  ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetFrameNumber( &_this->Left, 10 );
  CoreView_OnSetStackingPriority((CoreView)&_this->Right, 3 );
  CoreRectView__OnSetBounds( &_this->Right, _Const000D );
  ViewsImage_OnSetScrollOffset( &_this->Right, _Const0004 );
  ViewsImage_OnSetAlignment( &_this->Right, ViewsImageAlignmentAlignHorzCenter | 
  ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetFrameNumber( &_this->Right, 10 );
  CoreTimer_OnSetPeriod( &_this->MakeMoves, 1000 );
  CoreRectView__OnSetBounds( &_this->Text, _Const000E );
  ViewsText_OnSetColorBR( &_this->Text, _Const000F );
  ViewsText_OnSetColorTL( &_this->Text, _Const0010 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0011 ));
  ViewsText_OnSetVisible( &_this->Text, 0 );
  CoreTimer_OnSetPeriod( &_this->WaitFinish, 1000 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->ChooseLeft, _Const0012 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->ChooseLeft, _Const0013 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->ChooseLeft, _Const0014 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->ChooseLeft, _Const0015 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseLeft, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->ChooseCenter, _Const0016 );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->ChooseCenter, _Const0017 );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->ChooseCenter, _Const0018 );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->ChooseCenter, _Const0019 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseCenter, 0 );
  CoreQuadView_OnSetPoint4((CoreQuadView)&_this->ChooseRight, _Const001A );
  CoreQuadView_OnSetPoint3((CoreQuadView)&_this->ChooseRight, _Const001B );
  CoreQuadView_OnSetPoint2((CoreQuadView)&_this->ChooseRight, _Const001C );
  CoreQuadView_OnSetPoint1((CoreQuadView)&_this->ChooseRight, _Const001D );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseRight, 0 );
  _this->Nivel = 1;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->LeftToRightF, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToRightF, 250 );
  _this->LeftToRightF.Value2 = _Const001E;
  _this->LeftToRightF.Value1 = _Const000C;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->LeftToRightS, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToRightS, 250 );
  _this->LeftToRightS.Value2 = _Const000D;
  _this->LeftToRightS.Value1 = _Const001E;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->RightToLeftF, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToLeftF, 250 );
  _this->RightToLeftF.Value2 = _Const001F;
  _this->RightToLeftF.Value1 = _Const000D;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->RightToLeftS, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToLeftS, 250 );
  _this->RightToLeftS.Value2 = _Const000C;
  _this->RightToLeftS.Value1 = _Const001F;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->LeftToCenterF, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToCenterF, 250 );
  _this->LeftToCenterF.Value2 = _Const0020;
  _this->LeftToCenterF.Value1 = _Const000C;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->LeftToCenterS, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToCenterS, 250 );
  _this->LeftToCenterS.Value2 = _Const0003;
  _this->LeftToCenterS.Value1 = _Const0020;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->CenterToLeftF, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToLeftF, 250 );
  _this->CenterToLeftF.Value2 = _Const0021;
  _this->CenterToLeftF.Value1 = _Const0003;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->CenterToLeftS, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToLeftS, 250 );
  _this->CenterToLeftS.Value2 = _Const000C;
  _this->CenterToLeftS.Value1 = _Const0021;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->CenterToRightF, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToRightF, 250 );
  _this->CenterToRightF.Value2 = _Const0022;
  _this->CenterToRightF.Value1 = _Const0003;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->CenterToRightS, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToRightS, 250 );
  _this->CenterToRightS.Value2 = _Const000D;
  _this->CenterToRightS.Value1 = _Const0022;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->RightToCenterF, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToCenterF, 250 );
  _this->RightToCenterF.Value2 = _Const0023;
  _this->RightToCenterF.Value1 = _Const000D;
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->RightToCenterS, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToCenterS, 250 );
  _this->RightToCenterS.Value2 = _Const0003;
  _this->RightToCenterS.Value1 = _Const0023;
  _this->ChooseTextEffectTL.Super1.Symmetric = 1;
  _this->ChooseTextEffectTL.Value2 = _Const0010;
  _this->ChooseTextEffectTL.Value1 = _Const0024;
  _this->ChooseTextEffectBR.Super1.Symmetric = 1;
  _this->ChooseTextEffectBR.Value2 = _Const000F;
  _this->ChooseTextEffectBR.Value1 = _Const0025;
  CoreRectView__OnSetBounds( &_this->NivelCurrent, _Const0026 );
  ViewsText_OnSetColorBL( &_this->NivelCurrent, _Const0027 );
  ViewsText_OnSetColorBR( &_this->NivelCurrent, _Const0028 );
  ViewsText_OnSetColorTR( &_this->NivelCurrent, _Const0029 );
  ViewsText_OnSetColorTL( &_this->NivelCurrent, _Const002A );
  ViewsText_OnSetString( &_this->NivelCurrent, EwLoadString( &_Const002B ));
  ViewsText_OnSetColor( &_this->NivelCurrent, _Const002C );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const002D );
  WidgetSetPushButton_OnSetIconFrame( &_this->PushButton, 11 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, 0 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig, _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig, _Const002E );
  WidgetSetPushButtonConfig_OnSetIconTintActive( &_this->PushButtonConfig, _Const002F );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( &_this->PushButtonConfig, _Const0030 );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->LeftCenterAnimation, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftCenterAnimation, 500 );
  ApplicationTheClass_OnSetValue1( &_this->LeftCenterAnimation, _Const0003 );
  ApplicationTheClass_OnSetValue2( &_this->LeftCenterAnimation, _Const000C );
  ApplicationTheClass_OnSetValue11( &_this->LeftCenterAnimation, _Const0003 );
  ApplicationTheClass_OnSetValue22( &_this->LeftCenterAnimation, _Const000C );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->CenterRightAnimation, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterRightAnimation, 
  500 );
  ApplicationTheClass_OnSetValue1( &_this->CenterRightAnimation, _Const000D );
  ApplicationTheClass_OnSetValue2( &_this->CenterRightAnimation, _Const0003 );
  ApplicationTheClass_OnSetValue11( &_this->CenterRightAnimation, _Const000D );
  ApplicationTheClass_OnSetValue22( &_this->CenterRightAnimation, _Const0003 );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->LeftRightAnimation, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftRightAnimation, 500 );
  ApplicationTheClass_OnSetValue1( &_this->LeftRightAnimation, _Const000D );
  ApplicationTheClass_OnSetValue2( &_this->LeftRightAnimation, _Const000C );
  ApplicationTheClass_OnSetValue11( &_this->LeftRightAnimation, _Const000D );
  ApplicationTheClass_OnSetValue22( &_this->LeftRightAnimation, _Const000C );
  CoreRectView__OnSetBounds( &_this->Image, _Const0031 );
  ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentAlignHorzCenter | 
  ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0032 );
  ViewsText_OnSetColorBL( &_this->Text1, _Const0033 );
  ViewsText_OnSetColorBR( &_this->Text1, _Const0034 );
  ViewsText_OnSetColorTR( &_this->Text1, _Const0035 );
  ViewsText_OnSetColorTL( &_this->Text1, _Const0036 );
  ViewsText_OnSetString( &_this->Text1, 0 );
  CoreRectView__OnSetBounds( &_this->SpiderLeft, _Const0037 );
  ViewsImage_OnSetAlignment( &_this->SpiderLeft, ViewsImageAlignmentAlignHorzCenter 
  | ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetVisible( &_this->SpiderLeft, 0 );
  CoreRectView__OnSetBounds( &_this->SpiderRight, _Const0038 );
  ViewsImage_OnSetAlignment( &_this->SpiderRight, ViewsImageAlignmentAlignHorzCenter 
  | ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetVisible( &_this->SpiderRight, 0 );
  CoreRectView__OnSetBounds( &_this->PumpLeft, _Const0039 );
  ViewsImage_OnSetAlignment( &_this->PumpLeft, ViewsImageAlignmentAlignHorzCenter 
  | ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetVisible( &_this->PumpLeft, 0 );
  CoreRectView__OnSetBounds( &_this->PumpRight, _Const003A );
  ViewsImage_OnSetAlignment( &_this->PumpRight, ViewsImageAlignmentAlignHorzCenter 
  | ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetVisible( &_this->PumpRight, 0 );
  CoreTimer_OnSetPeriod( &_this->AchPopDismiss, 2000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Center ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Ball ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Left ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Right ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ChooseLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ChooseCenter ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ChooseRight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->NivelCurrent ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpiderLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SpiderRight ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PumpLeft ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PumpRight ), 0 );
  ViewsImage_OnSetBitmap( &_this->Center, EwLoadResource( &ApplicationShopCups, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Ball, EwLoadResource( &ApplicationShopBalls, ResourcesBitmap ));
  _this->ShowBall.Super1.OnFinished = EwNewSlot( _this, ApplicationGame_CallHideBall );
  _this->ShowBall.Super1.OnAnimate = EwNullSlot;
  _this->ShowBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
  ViewsImage_OnSetScrollOffset );
  _this->HideBall.Super1.OnFinished = EwNewSlot( _this, ApplicationGame_HideIt );
  _this->HideBall.Super1.OnAnimate = EwNullSlot;
  _this->HideBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
  ViewsImage_OnSetScrollOffset );
  ViewsImage_OnSetBitmap( &_this->Left, EwLoadResource( &ApplicationShopCups, ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->Right, EwLoadResource( &ApplicationShopCups, ResourcesBitmap ));
  _this->MakeMoves.OnTrigger = EwNewSlot( _this, ApplicationGame_GameLogic );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  _this->WaitFinish.OnTrigger = EwNewSlot( _this, ApplicationGame_OnFinish );
  _this->ChooseLeft.OnPress = EwNewSlot( _this, ApplicationGame_Choice );
  _this->ChooseCenter.OnPress = EwNewSlot( _this, ApplicationGame_Choice );
  _this->ChooseRight.OnPress = EwNewSlot( _this, ApplicationGame_Choice );
  _this->LeftToRightF.Super1.OnFinished = EwNewSlot( &_this->LeftToRightS, EffectsEffect_StartEffect );
  _this->RightToLeftF.Super1.OnFinished = EwNewSlot( &_this->RightToLeftS, EffectsEffect_StartEffect );
  _this->LeftToCenterF.Super1.OnFinished = EwNewSlot( &_this->LeftToCenterS, EffectsEffect_StartEffect );
  _this->CenterToLeftF.Super1.OnFinished = EwNewSlot( &_this->CenterToLeftS, EffectsEffect_StartEffect );
  _this->CenterToRightF.Super1.OnFinished = EwNewSlot( &_this->CenterToRightS, EffectsEffect_StartEffect );
  _this->RightToCenterF.Super1.OnFinished = EwNewSlot( &_this->RightToCenterS, EffectsEffect_StartEffect );
  _this->ChooseTextEffectTL.Outlet = EwNewRef( &_this->Text, ViewsText_OnGetColorTL, 
  ViewsText_OnSetColorTL );
  _this->ChooseTextEffectBR.Outlet = EwNewRef( &_this->Text, ViewsText_OnGetColorBR, 
  ViewsText_OnSetColorBR );
  ViewsText_OnSetFont( &_this->NivelCurrent, EwLoadResource( &ApplicationFont2, 
  ResourcesFont ));
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationGame_GoToMenu );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( &_this->PushButtonConfig, 0 );
  _this->SettingsObject = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  ApplicationTheClass_OnSetOutlet( &_this->LeftCenterAnimation, EwNullRef );
  ApplicationTheClass_OnSetOutlet1( &_this->LeftCenterAnimation, EwNullRef );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationCoin, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->SpiderLeft, EwLoadResource( &ApplicationSpider, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->SpiderRight, EwLoadResource( &ApplicationSpider, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->PumpLeft, EwLoadResource( &ApplicationPumpkings, 
  ResourcesBitmap ));
  ViewsImage_OnSetBitmap( &_this->PumpRight, EwLoadResource( &ApplicationPumpkings, 
  ResourcesBitmap ));
  _this->AchPopDismiss.OnTrigger = EwNewSlot( _this, ApplicationGame_AchPopTrigger );

  /* Call the user defined constructor */
  ApplicationGame_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Game' */
void ApplicationGame__ReInit( ApplicationGame _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Center );
  ViewsRectangle__ReInit( &_this->Rectangle2 );
  ViewsImage__ReInit( &_this->Ball );
  EffectsPointEffect__ReInit( &_this->ShowBall );
  EffectsPointEffect__ReInit( &_this->HideBall );
  ViewsImage__ReInit( &_this->Left );
  ViewsImage__ReInit( &_this->Right );
  CoreTimer__ReInit( &_this->MakeMoves );
  ViewsText__ReInit( &_this->Text );
  CoreTimer__ReInit( &_this->WaitFinish );
  CoreSimpleTouchHandler__ReInit( &_this->ChooseLeft );
  CoreSimpleTouchHandler__ReInit( &_this->ChooseCenter );
  CoreSimpleTouchHandler__ReInit( &_this->ChooseRight );
  EffectsRectEffect__ReInit( &_this->LeftToRightF );
  EffectsRectEffect__ReInit( &_this->LeftToRightS );
  EffectsRectEffect__ReInit( &_this->RightToLeftF );
  EffectsRectEffect__ReInit( &_this->RightToLeftS );
  EffectsRectEffect__ReInit( &_this->LeftToCenterF );
  EffectsRectEffect__ReInit( &_this->LeftToCenterS );
  EffectsRectEffect__ReInit( &_this->CenterToLeftF );
  EffectsRectEffect__ReInit( &_this->CenterToLeftS );
  EffectsRectEffect__ReInit( &_this->CenterToRightF );
  EffectsRectEffect__ReInit( &_this->CenterToRightS );
  EffectsRectEffect__ReInit( &_this->RightToCenterF );
  EffectsRectEffect__ReInit( &_this->RightToCenterS );
  EffectsColorEffect__ReInit( &_this->ChooseTextEffectTL );
  EffectsColorEffect__ReInit( &_this->ChooseTextEffectBR );
  ViewsText__ReInit( &_this->NivelCurrent );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
  ApplicationTheClass__ReInit( &_this->LeftCenterAnimation );
  ApplicationTheClass__ReInit( &_this->CenterRightAnimation );
  ApplicationTheClass__ReInit( &_this->LeftRightAnimation );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Text1 );
  ViewsImage__ReInit( &_this->SpiderLeft );
  ViewsImage__ReInit( &_this->SpiderRight );
  ViewsImage__ReInit( &_this->PumpLeft );
  ViewsImage__ReInit( &_this->PumpRight );
  CoreTimer__ReInit( &_this->AchPopDismiss );
}

/* Finalizer method for the class 'Application::Game' */
void ApplicationGame__Done( ApplicationGame _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Center );
  ViewsRectangle__Done( &_this->Rectangle2 );
  ViewsImage__Done( &_this->Ball );
  EffectsPointEffect__Done( &_this->ShowBall );
  EffectsPointEffect__Done( &_this->HideBall );
  ViewsImage__Done( &_this->Left );
  ViewsImage__Done( &_this->Right );
  CoreTimer__Done( &_this->MakeMoves );
  ViewsText__Done( &_this->Text );
  CoreTimer__Done( &_this->WaitFinish );
  CoreSimpleTouchHandler__Done( &_this->ChooseLeft );
  CoreSimpleTouchHandler__Done( &_this->ChooseCenter );
  CoreSimpleTouchHandler__Done( &_this->ChooseRight );
  EffectsRectEffect__Done( &_this->LeftToRightF );
  EffectsRectEffect__Done( &_this->LeftToRightS );
  EffectsRectEffect__Done( &_this->RightToLeftF );
  EffectsRectEffect__Done( &_this->RightToLeftS );
  EffectsRectEffect__Done( &_this->LeftToCenterF );
  EffectsRectEffect__Done( &_this->LeftToCenterS );
  EffectsRectEffect__Done( &_this->CenterToLeftF );
  EffectsRectEffect__Done( &_this->CenterToLeftS );
  EffectsRectEffect__Done( &_this->CenterToRightF );
  EffectsRectEffect__Done( &_this->CenterToRightS );
  EffectsRectEffect__Done( &_this->RightToCenterF );
  EffectsRectEffect__Done( &_this->RightToCenterS );
  EffectsColorEffect__Done( &_this->ChooseTextEffectTL );
  EffectsColorEffect__Done( &_this->ChooseTextEffectBR );
  ViewsText__Done( &_this->NivelCurrent );
  WidgetSetPushButton__Done( &_this->PushButton );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );
  ApplicationTheClass__Done( &_this->LeftCenterAnimation );
  ApplicationTheClass__Done( &_this->CenterRightAnimation );
  ApplicationTheClass__Done( &_this->LeftRightAnimation );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Text1 );
  ViewsImage__Done( &_this->SpiderLeft );
  ViewsImage__Done( &_this->SpiderRight );
  ViewsImage__Done( &_this->PumpLeft );
  ViewsImage__Done( &_this->PumpRight );
  CoreTimer__Done( &_this->AchPopDismiss );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationGame_Init( ApplicationGame _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationGame_UpdateCoins( _this, 0 );
  ViewsImage_OnSetFrameNumber( &_this->Left, _this->SettingsObject->ActiveCup );
  ViewsImage_OnSetFrameNumber( &_this->Right, _this->SettingsObject->ActiveCup );
  ViewsImage_OnSetFrameNumber( &_this->Center, _this->SettingsObject->ActiveCup );
  ViewsImage_OnSetFrameNumber( &_this->Ball, _this->SettingsObject->ActiveBall );
  ApplicationGame_FromDB( _this );

  if ( _this->SettingsObject->HallAct )
    ApplicationGame_MakeItHalloween( _this );
  else
  {
    ViewsRectangle_OnSetColorBL( &_this->Rectangle, _Const002C );
    ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0001 );
    ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0002 );
    ViewsRectangle_OnSetColorTR( &_this->Rectangle, _Const002C );
    ViewsText_OnSetColorTL( &_this->NivelCurrent, _Const002A );
    ViewsText_OnSetColorTR( &_this->NivelCurrent, _Const0029 );
    ViewsText_OnSetColorBL( &_this->NivelCurrent, _Const0027 );
    ViewsText_OnSetColorBR( &_this->NivelCurrent, _Const0028 );
    ViewsImage_OnSetFrameNumber( &_this->Left, _this->SettingsObject->ActiveCup );
    ViewsImage_OnSetFrameNumber( &_this->Center, _this->SettingsObject->ActiveCup );
    ViewsImage_OnSetFrameNumber( &_this->Right, _this->SettingsObject->ActiveCup );
    ViewsImage_OnSetVisible( &_this->SpiderLeft, 0 );
    ViewsImage_OnSetVisible( &_this->SpiderRight, 0 );
    ViewsImage_OnSetVisible( &_this->PumpLeft, 0 );
    ViewsImage_OnSetVisible( &_this->PumpRight, 0 );
    ViewsImage_OnSetBitmap( &_this->Ball, EwLoadResource( &ApplicationShopBalls, 
    ResourcesBitmap ));
    ViewsImage_OnSetFrameNumber( &_this->Ball, _this->SettingsObject->ActiveBall );
  }
}

/* 'C' function for method : 'Application::Game.CallHideBall()' */
void ApplicationGame_CallHideBall( ApplicationGame _this, XObject sender )
{
  EffectsPointEffect hide;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  hide = &_this->HideBall;
  EffectsEffect_OnSetEnabled((EffectsEffect)hide, 1 );
}

/* 'C' function for method : 'Application::Game.LeftCenter()' */
void ApplicationGame_LeftCenter( ApplicationGame _this, XObject sender )
{
  XBool active;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  active = _this->SettingsObject->Animation;

  if ( !active )
  {
    if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000C ))
    {
      ApplicationTheClass_OnSetOutlet( &_this->LeftCenterAnimation, EwNewRef( &_this->Left, 
      CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
      CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );

      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const0003 ))
      {
        ApplicationTheClass_OnSetOutlet1( &_this->LeftCenterAnimation, EwNewRef( 
        &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );
      }
      else
      {
        ApplicationTheClass_OnSetOutlet1( &_this->LeftCenterAnimation, EwNewRef( 
        &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );
      }
    }
    else
      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000C ))
      {
        ApplicationTheClass_OnSetOutlet( &_this->LeftCenterAnimation, EwNewRef( 
        &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );

        if ( !EwCompRect( _this->Left.Super1.Bounds, _Const0003 ))
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftCenterAnimation, EwNewRef( 
          &_this->Left, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );
        }
        else
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftCenterAnimation, EwNewRef( 
          &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );
        }
      }
      else
      {
        ApplicationTheClass_OnSetOutlet( &_this->LeftCenterAnimation, EwNewRef( 
        &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );

        if ( !EwCompRect( _this->Center.Super1.Bounds, _Const0003 ))
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftCenterAnimation, EwNewRef( 
          &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );
        }
        else
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftCenterAnimation, EwNewRef( 
          &_this->Left, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );
        }
      }

    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->LeftCenterAnimation, 1 );
  }
  else
    ApplicationGame_LeftCenterSecondaryAnimation( _this );
}

/* 'C' function for method : 'Application::Game.RightLeft()' */
void ApplicationGame_RightLeft( ApplicationGame _this, XObject sender )
{
  XBool active;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  active = _this->SettingsObject->Animation;

  if ( !active )
  {
    if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000C ))
    {
      ApplicationTheClass_OnSetOutlet( &_this->LeftRightAnimation, EwNewRef( &_this->Left, 
      CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
      CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );

      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
      {
        ApplicationTheClass_OnSetOutlet1( &_this->LeftRightAnimation, EwNewRef( 
        &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );
      }
      else
      {
        ApplicationTheClass_OnSetOutlet1( &_this->LeftRightAnimation, EwNewRef( 
        &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );
      }
    }
    else
      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000C ))
      {
        ApplicationTheClass_OnSetOutlet( &_this->LeftRightAnimation, EwNewRef( &_this->Center, 
        CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );

        if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000D ))
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftRightAnimation, EwNewRef( 
          &_this->Left, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );
        }
        else
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftRightAnimation, EwNewRef( 
          &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );
        }
      }
      else
      {
        ApplicationTheClass_OnSetOutlet( &_this->LeftRightAnimation, EwNewRef( &_this->Right, 
        CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );

        if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftRightAnimation, EwNewRef( 
          &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );
        }
        else
        {
          ApplicationTheClass_OnSetOutlet1( &_this->LeftRightAnimation, EwNewRef( 
          &_this->Left, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );
        }
      }

    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->LeftRightAnimation, 1 );
  }
  else
    ApplicationGame_RightLeftSecondaryAnimation( _this );
}

/* 'C' function for method : 'Application::Game.ShowBallCall()' */
void ApplicationGame_ShowBallCall( ApplicationGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->Ball, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->ShowBall, 1 );
}

/* 'C' function for method : 'Application::Game.HideIt()' */
void ApplicationGame_HideIt( ApplicationGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsImage_OnSetVisible( &_this->Ball, 0 );
  _this->ShowBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
  ViewsImage_OnSetScrollOffset );
  _this->HideBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
  ViewsImage_OnSetScrollOffset );
  CoreView_OnSetStackingPriority((CoreView)&_this->Center, 3 );
  CoreView_OnSetStackingPriority((CoreView)&_this->Left, 3 );
  CoreView_OnSetStackingPriority((CoreView)&_this->Right, 3 );

  if ( _this->Moves == 0 )
  {
    CoreTimer_OnSetEnabled( &_this->MakeMoves, 1 );
    ShuffleStart();
  }
  else
  {
    _this->Moves = 0;
    ViewsText_OnSetVisible( &_this->Text, 0 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->ChooseTextEffectTL, 0 );
    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->ChooseTextEffectBR, 0 );

    if ( _this->Correct )
    {
      _this->Correct = 0;
      EwSignal( EwNewSlot( _this, ApplicationGame_NextLevel ), ((XObject)_this ));
    }
    else
      EwSignal( EwNewSlot( _this, ApplicationGame_Reset ), ((XObject)_this ));
  }
}

/* 'C' function for method : 'Application::Game.CenterRight()' */
void ApplicationGame_CenterRight( ApplicationGame _this, XObject sender )
{
  XBool active;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  active = _this->SettingsObject->Animation;

  if ( !active )
  {
    if ( !EwCompRect( _this->Left.Super1.Bounds, _Const0003 ))
    {
      ApplicationTheClass_OnSetOutlet( &_this->CenterRightAnimation, EwNewRef( &_this->Left, 
      CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
      CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );

      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
      {
        ApplicationTheClass_OnSetOutlet1( &_this->CenterRightAnimation, EwNewRef( 
        &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );
      }
      else
      {
        ApplicationTheClass_OnSetOutlet1( &_this->CenterRightAnimation, EwNewRef( 
        &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );
      }
    }
    else
      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const0003 ))
      {
        ApplicationTheClass_OnSetOutlet( &_this->CenterRightAnimation, EwNewRef( 
        &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );

        if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000D ))
        {
          ApplicationTheClass_OnSetOutlet1( &_this->CenterRightAnimation, EwNewRef( 
          &_this->Left, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );
        }
        else
        {
          ApplicationTheClass_OnSetOutlet1( &_this->CenterRightAnimation, EwNewRef( 
          &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );
        }
      }
      else
      {
        ApplicationTheClass_OnSetOutlet( &_this->CenterRightAnimation, EwNewRef( 
        &_this->Right, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );

        if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
        {
          ApplicationTheClass_OnSetOutlet1( &_this->CenterRightAnimation, EwNewRef( 
          &_this->Center, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );
        }
        else
        {
          ApplicationTheClass_OnSetOutlet1( &_this->CenterRightAnimation, EwNewRef( 
          &_this->Left, CoreRectView_OnGetBounds, CoreRectView__OnSetBounds ));
          CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );
        }
      }

    EffectsEffect_OnSetEnabled((EffectsEffect)&_this->CenterRightAnimation, 1 );
  }
  else
    ApplicationGame_CenterRightSecondaryAnimation( _this );
}

/* 'C' function for method : 'Application::Game.ShowBallFinal()' */
void ApplicationGame_ShowBallFinal( ApplicationGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000C ))
    CoreRectView__OnSetBounds( &_this->Ball, _Const003B );
  else
    if ( !EwCompRect( _this->Center.Super1.Bounds, _Const0003 ))
      CoreRectView__OnSetBounds( &_this->Ball, _Const000A );
    else
      CoreRectView__OnSetBounds( &_this->Ball, _Const003C );

  ViewsImage_OnSetVisible( &_this->Ball, 1 );
  EwSignal( EwNewSlot( _this, ApplicationGame_ShowBallCall ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Game.GameLogic()' */
void ApplicationGame_GameLogic( ApplicationGame _this, XObject sender )
{
  XInt32 First;
  XInt32 second;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  First = ( EwMathRandInt32( 0, 9 ) % 3 ) + 1;
  second = ( EwMathRandInt32( 0, 9 ) % 3 ) + 1;

  while ( First == second )
    second = ( EwMathRandInt32( 0, 9 ) % 3 ) + 1;

  if ((( First == 1 ) && ( second == 2 )) || (( First == 2 ) && ( second == 1 )))
    EwSignal( EwNewSlot( _this, ApplicationGame_LeftCenter ), ((XObject)_this ));
  else
    if ((( First == 1 ) && ( second == 3 )) || (( First == 3 ) && ( second == 1 )))
      EwSignal( EwNewSlot( _this, ApplicationGame_RightLeft ), ((XObject)_this ));
    else
      EwSignal( EwNewSlot( _this, ApplicationGame_CenterRight ), ((XObject)_this ));

  _this->Moves += 1;

  if ( _this->Moves >= ( _this->Nivel * 2 ))
  {
    CoreTimer_OnSetEnabled( &_this->MakeMoves, 0 );
    CoreTimer_OnSetEnabled( &_this->WaitFinish, 1 );
  }
}

/* 'C' function for method : 'Application::Game.OnFinish()' */
void ApplicationGame_OnFinish( ApplicationGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetVisible( &_this->Text, 1 );
  CoreTimer_OnSetEnabled( &_this->WaitFinish, 0 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->ChooseTextEffectTL, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->ChooseTextEffectBR, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseLeft, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseRight, 1 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseCenter, 1 );
  ShuffleEnd();
}

/* 'C' function for method : 'Application::Game.Choice()' */
void ApplicationGame_Choice( ApplicationGame _this, XObject sender )
{
  CoreSimpleTouchHandler choice = EwCastObject( sender, CoreSimpleTouchHandler );
  ApplicationDeviceClass settings = _this->SettingsObject;

  ApplicationDeviceClass_OnSetTotalRounds( settings, settings->TotalRounds + 1 );

  if ( choice == &_this->ChooseLeft )
  {
    if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000C ))
    {
      _this->ShowBall.Outlet = EwNewRef( &_this->Left, ViewsImage_OnGetScrollOffset, 
      ViewsImage_OnSetScrollOffset );
      _this->HideBall.Outlet = EwNewRef( &_this->Left, ViewsImage_OnGetScrollOffset, 
      ViewsImage_OnSetScrollOffset );
    }
    else
      if ( !EwCompRect( _this->Right.Super1.Bounds, _Const000C ))
      {
        _this->ShowBall.Outlet = EwNewRef( &_this->Right, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
        _this->HideBall.Outlet = EwNewRef( &_this->Right, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
      }
      else
      {
        _this->ShowBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
        _this->HideBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
        _this->Correct = 1;
      }
  }
  else
    if ( choice == &_this->ChooseCenter )
    {
      if ( !EwCompRect( _this->Left.Super1.Bounds, _Const0003 ))
      {
        _this->ShowBall.Outlet = EwNewRef( &_this->Left, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
        _this->HideBall.Outlet = EwNewRef( &_this->Left, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
      }
      else
        if ( !EwCompRect( _this->Right.Super1.Bounds, _Const0003 ))
        {
          _this->ShowBall.Outlet = EwNewRef( &_this->Right, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
          _this->HideBall.Outlet = EwNewRef( &_this->Right, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
        }
        else
        {
          _this->Correct = 1;
          _this->ShowBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
          _this->HideBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
        }
    }
    else
      if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000D ))
      {
        _this->ShowBall.Outlet = EwNewRef( &_this->Left, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
        _this->HideBall.Outlet = EwNewRef( &_this->Left, ViewsImage_OnGetScrollOffset, 
        ViewsImage_OnSetScrollOffset );
      }
      else
        if ( !EwCompRect( _this->Right.Super1.Bounds, _Const000D ))
        {
          _this->ShowBall.Outlet = EwNewRef( &_this->Right, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
          _this->HideBall.Outlet = EwNewRef( &_this->Right, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
        }
        else
        {
          _this->ShowBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
          _this->HideBall.Outlet = EwNewRef( &_this->Center, ViewsImage_OnGetScrollOffset, 
          ViewsImage_OnSetScrollOffset );
          _this->Correct = 1;
        }

  if ( _this->Correct )
  {
    ApplicationDeviceClass_OnSetCorrectGuesses( settings, settings->CorrectGuesses 
    + 1 );
    Correct();
  }
  else
    Wrong();

  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseCenter, 0 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseLeft, 0 );
  CoreSimpleTouchHandler_OnSetEnabled( &_this->ChooseRight, 0 );
  EwSignal( EwNewSlot( _this, ApplicationGame_ShowBallFinal ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Game.Reset()' */
void ApplicationGame_Reset( ApplicationGame _this, XObject sender )
{
  XInt32 lvl;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->Nivel = 1;
  ViewsText_OnSetString( &_this->NivelCurrent, EwLoadString( &_Const002B ));
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToCenterF, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToLeftF, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToRightF, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToLeftF, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToRightF, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToCenterF, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToCenterS, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToLeftS, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToRightS, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToLeftS, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToRightS, 250 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToCenterS, 250 );
  CoreTimer_OnSetPeriod( &_this->MakeMoves, 1000 );
  CoreTimer_OnSetPeriod( &_this->WaitFinish, 1000 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->ShowBall, 1000 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->HideBall, 1000 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftCenterAnimation, 500 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftRightAnimation, 500 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterRightAnimation, 
  500 );
  lvl = _this->Nivel;
  UpdateStorage(lvl,true,false);
  EwSignal( EwNewSlot( _this, ApplicationGame_ShowBallCall ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Game.NextLevel()' */
void ApplicationGame_NextLevel( ApplicationGame _this, XObject sender )
{
  XInt32 frame;
  ApplicationDeviceClass settings;
  XInt32 lvl;
  XInt32 coins;
  XInt32 speedMine;
  XInt32 speedW;
  XBool GoOnSwitched;
  XBool goOn;
  XBool active;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  _this->Nivel += 1;
  frame = -1;
  settings = _this->SettingsObject;
  lvl = _this->Nivel;

  if ( _this->Nivel > settings->MaxLevel )
    ApplicationDeviceClass_OnSetMaxLevel( settings, _this->Nivel );

  {
    UpdateStorage(lvl,true,true);
    frame=CheckLevels();
    if(frame==-1)
       frame=CheckRights();
  }
  ViewsText_OnSetString( &_this->NivelCurrent, EwConcatString( EwLoadString( &_Const003D ), 
  EwNewStringInt( _this->Nivel, 0, 10 )));
  speedMine = _this->LeftCenterAnimation.Super1.CycleDuration;
  speedW = _this->LeftToCenterF.Super1.CycleDuration - ( _this->Nivel * 5 );
  GoOnSwitched = 0;

  if ( speedW > 80 )
  {
    GoOnSwitched = 1;
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToCenterF, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToLeftF, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToRightF, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToLeftF, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToRightF, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToCenterF, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToCenterS, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToLeftS, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftToRightS, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToLeftS, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterToRightS, speedW );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RightToCenterS, speedW );
  }

  goOn = 0;
  coins = ( EwGetInt32Abs( speedMine - 500 ) / 50 ) + _this->Nivel;

  if ( speedMine > 230 )
  {
    goOn = 1;
    speedMine = speedMine - ( _this->Nivel * 10 );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftCenterAnimation, 
    speedMine );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftRightAnimation, 
    speedMine );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterRightAnimation, 
    speedMine );
  }
  else
    if ( speedMine > 150 )
    {
      goOn = 1;
      speedMine -= 10;
      EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftCenterAnimation, 
      _this->LeftCenterAnimation.Super1.CycleDuration - 10 );
      EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->LeftRightAnimation, 
      _this->LeftRightAnimation.Super1.CycleDuration - 10 );
      EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->CenterRightAnimation, 
      _this->CenterRightAnimation.Super1.CycleDuration - 10 );
    }

  active = _this->SettingsObject->Animation;

  if ( !active && goOn )
  {
    CoreTimer_OnSetPeriod( &_this->MakeMoves, speedMine * 2 );
    CoreTimer_OnSetPeriod( &_this->WaitFinish, speedMine * 2 );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->ShowBall, speedMine 
    * 2 );
    EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->HideBall, speedMine 
    * 2 );
  }
  else
    if ( GoOnSwitched )
    {
      CoreTimer_OnSetPeriod( &_this->MakeMoves, speedW * 4 );
      CoreTimer_OnSetPeriod( &_this->WaitFinish, speedW * 4 );
      EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->ShowBall, speedW * 
      4 );
      EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->HideBall, speedW * 
      4 );
    }

  if ( frame != -1 )
  {
    ApplicationDeviceClass_OnSetAchFrame( _this->SettingsObject, frame );
    CoreTimer_OnSetEnabled( &_this->AchPopDismiss, 1 );
    CoreGroup__PresentDialog( _this, ((CoreGroup)EwNewObject( ApplicationAchPop, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
  }

  ApplicationGame_UpdateCoins( _this, coins );
  EwSignal( EwNewSlot( _this, ApplicationGame_ShowBallCall ), ((XObject)_this ));
}

/* 'C' function for method : 'Application::Game.GoToMenu()' */
void ApplicationGame_GoToMenu( ApplicationGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->ShowOr = 1;

  if ( _this->Super3.Owner != 0 )
    CoreGroup__PresentDialog( _this->Super3.Owner, ((CoreGroup)EwNewObject( ApplicationSettings, 
    0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideLeftCentered, EffectsSlideTransition )), 
    0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
}

/* 'C' function for method : 'Application::Game.LeftCenterSecondaryAnimation()' */
void ApplicationGame_LeftCenterSecondaryAnimation( ApplicationGame _this )
{
  if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000C ))
  {
    _this->LeftToCenterF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
    CoreRectView__OnSetBounds );
    _this->LeftToCenterS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
    CoreRectView__OnSetBounds );
    CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );

    if ( !EwCompRect( _this->Center.Super1.Bounds, _Const0003 ))
    {
      _this->CenterToLeftF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->CenterToLeftS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );
    }
    else
    {
      _this->CenterToLeftF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->CenterToLeftS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );
    }
  }
  else
    if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000C ))
    {
      _this->LeftToCenterF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->LeftToCenterS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );

      if ( !EwCompRect( _this->Left.Super1.Bounds, _Const0003 ))
      {
        _this->CenterToLeftF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->CenterToLeftS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );
      }
      else
      {
        _this->CenterToLeftF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->CenterToLeftS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );
      }
    }
    else
    {
      _this->LeftToCenterF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->LeftToCenterS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );

      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const0003 ))
      {
        _this->CenterToLeftF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->CenterToLeftS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );
      }
      else
      {
        _this->CenterToLeftF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->CenterToLeftS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );
      }
    }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->LeftToCenterF, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->CenterToLeftF, 1 );
}

/* 'C' function for method : 'Application::Game.RightLeftSecondaryAnimation()' */
void ApplicationGame_RightLeftSecondaryAnimation( ApplicationGame _this )
{
  if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000C ))
  {
    _this->LeftToRightF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
    CoreRectView__OnSetBounds );
    _this->LeftToRightS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
    CoreRectView__OnSetBounds );
    CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );

    if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
    {
      _this->RightToLeftF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->RightToLeftS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );
    }
    else
    {
      _this->RightToLeftF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->RightToLeftS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );
    }
  }
  else
    if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000C ))
    {
      _this->LeftToRightF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->LeftToRightS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );

      if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000D ))
      {
        _this->RightToLeftF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToLeftS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );
      }
      else
      {
        _this->RightToLeftF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToLeftS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );
      }
    }
    else
    {
      _this->LeftToRightF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->LeftToRightS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );

      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
      {
        _this->RightToLeftF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToLeftS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );
      }
      else
      {
        _this->RightToLeftF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToLeftS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );
      }
    }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->LeftToRightF, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RightToLeftF, 1 );
}

/* 'C' function for method : 'Application::Game.CenterRightSecondaryAnimation()' */
void ApplicationGame_CenterRightSecondaryAnimation( ApplicationGame _this )
{
  if ( !EwCompRect( _this->Left.Super1.Bounds, _Const0003 ))
  {
    _this->CenterToRightF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
    CoreRectView__OnSetBounds );
    _this->CenterToRightS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
    CoreRectView__OnSetBounds );
    CoreView_OnSetStackingPriority((CoreView)&_this->Left, 2 );

    if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
    {
      _this->RightToCenterF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->RightToCenterS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );
    }
    else
    {
      _this->RightToCenterF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->RightToCenterS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );
    }
  }
  else
    if ( !EwCompRect( _this->Center.Super1.Bounds, _Const0003 ))
    {
      _this->CenterToRightF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->CenterToRightS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Center, 2 );

      if ( !EwCompRect( _this->Left.Super1.Bounds, _Const000D ))
      {
        _this->RightToCenterF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToCenterS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );
      }
      else
      {
        _this->RightToCenterF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToCenterS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Right, 5 );
      }
    }
    else
    {
      _this->CenterToRightF.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      _this->CenterToRightS.Outlet = EwNewRef( &_this->Right, CoreRectView_OnGetBounds, 
      CoreRectView__OnSetBounds );
      CoreView_OnSetStackingPriority((CoreView)&_this->Right, 2 );

      if ( !EwCompRect( _this->Center.Super1.Bounds, _Const000D ))
      {
        _this->RightToCenterF.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToCenterS.Outlet = EwNewRef( &_this->Center, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Center, 5 );
      }
      else
      {
        _this->RightToCenterF.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        _this->RightToCenterS.Outlet = EwNewRef( &_this->Left, CoreRectView_OnGetBounds, 
        CoreRectView__OnSetBounds );
        CoreView_OnSetStackingPriority((CoreView)&_this->Left, 5 );
      }
    }

  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->CenterToRightF, 1 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RightToCenterF, 1 );
}

/* 'C' function for method : 'Application::Game.UpdateCoins()' */
void ApplicationGame_UpdateCoins( ApplicationGame _this, XInt32 coins )
{
  {
    UpdateMoney(coins);
    coins=GetCoins();
  }
  ApplicationDeviceClass_OnSetCoins( _this->SettingsObject, coins );
  ViewsText_OnSetString( &_this->Text1, EwNewStringInt( _this->SettingsObject->Coins, 
  0, 10 ));
}

/* 'C' function for method : 'Application::Game.MakeItHalloween()' */
void ApplicationGame_MakeItHalloween( ApplicationGame _this )
{
  ViewsRectangle_OnSetColorBL( &_this->Rectangle, _Const003E );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const003F );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0040 );
  ViewsRectangle_OnSetColorTR( &_this->Rectangle, _Const0041 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle2, _Const0042 );
  ViewsRectangle_OnSetColorTR( &_this->Rectangle2, _Const0043 );
  ViewsText_OnSetColorTL( &_this->NivelCurrent, _Const0044 );
  ViewsText_OnSetColorTR( &_this->NivelCurrent, _Const0045 );
  ViewsText_OnSetColorBL( &_this->NivelCurrent, _Const0046 );
  ViewsText_OnSetColorBR( &_this->NivelCurrent, _Const0047 );
  ViewsImage_OnSetFrameNumber( &_this->Left, 13 );
  ViewsImage_OnSetFrameNumber( &_this->Center, 13 );
  ViewsImage_OnSetFrameNumber( &_this->Right, 13 );
  ViewsImage_OnSetVisible( &_this->SpiderLeft, 1 );
  ViewsImage_OnSetVisible( &_this->SpiderRight, 1 );
  ViewsImage_OnSetVisible( &_this->PumpLeft, 1 );
  ViewsImage_OnSetVisible( &_this->PumpRight, 1 );
  ViewsImage_OnSetBitmap( &_this->Ball, EwLoadResource( &ApplicationCrystalBall, 
  ResourcesBitmap ));
  ViewsImage_OnSetFrameNumber( &_this->Ball, 0 );
}

/* 'C' function for method : 'Application::Game.FromDB()' */
void ApplicationGame_FromDB( ApplicationGame _this )
{
  XBool hallAct = 0;

  hallAct=GetHalloweenActive();
  ApplicationDeviceClass_OnSetHallAct( _this->SettingsObject, hallAct );
}

/* 'C' function for method : 'Application::Game.AchPopTrigger()' */
void ApplicationGame_AchPopTrigger( ApplicationGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( _this, CoreGroup__FindCurrentDialog( _this ), ((EffectsTransition)EwGetAutoObject( 
  &EffectsSlideUpCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
  0 );
  CoreTimer_OnSetEnabled( &_this->AchPopDismiss, 0 );
}

/* Variants derived from the class : 'Application::Game' */
EW_DEFINE_CLASS_VARIANTS( ApplicationGame )
EW_END_OF_CLASS_VARIANTS( ApplicationGame )

/* Virtual Method Table (VMT) for the class : 'Application::Game' */
EW_DEFINE_CLASS( ApplicationGame, CoreGroup, Rectangle, SettingsObject, Moves, Moves, 
                 Moves, Moves, "Application::Game" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationGame )

/* Include a file containing the bitmap resource : 'Application::Cup' */
#include "_ApplicationCup.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Cup' */
EW_RES_WITHOUT_VARIANTS( ApplicationCup )

/* Include a file containing the font resource : 'Application::Font1' */
#include "_ApplicationFont1.h"

/* Table with links to derived variants of the font resource : 'Application::Font1' */
EW_RES_WITHOUT_VARIANTS( ApplicationFont1 )

/* Include a file containing the font resource : 'Application::Font2' */
#include "_ApplicationFont2.h"

/* Table with links to derived variants of the font resource : 'Application::Font2' */
EW_RES_WITHOUT_VARIANTS( ApplicationFont2 )

/* Initializer for the class 'Application::Settings' */
void ApplicationSettings__Init( ApplicationSettings _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationSettings );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );
  WidgetSetToggleButton__Init( &_this->ToggleButton, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSlider, &_this->_.XObject, 0 );
  WidgetSetHorizontalSliderConfig__Init( &_this->HorizontalSliderConfig, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Sound, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  WidgetSetHorizontalSlider__Init( &_this->HorizontalSlider1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Sound1, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->BackMenu, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig1, &_this->_.XObject, 0 );
  ViewsBevel__Init( &_this->Bevel, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationSettings );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0048 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0049 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const002C );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const004A );
  WidgetSetPushButton_OnSetIconFrame( &_this->PushButton, 9 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const004B ));
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfig, 
  _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfig, 
  _Const004C );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( &_this->PushButtonConfig, 
  2 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfig, _Const004D );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetFaceTintActive( &_this->PushButtonConfig, _Const004F );
  WidgetSetPushButtonConfig_OnSetFaceTintFocused( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDisabled( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDefault( &_this->PushButtonConfig, _Const0050 );
  CoreRectView__OnSetBounds( &_this->ToggleButton, _Const0051 );
  WidgetSetToggleButton_OnSetLabel( &_this->ToggleButton, 0 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0052 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0053 ));
  CoreRectView__OnSetBounds( &_this->Text1, _Const0054 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0055 ));
  CoreRectView__OnSetBounds( &_this->HorizontalSlider, _Const0056 );
  WidgetSetHorizontalSliderConfig_OnSetThumbShadowColorDefault( &_this->HorizontalSliderConfig, 
  _Const002E );
  WidgetSetHorizontalSliderConfig_OnSetThumbCornerRadiusDefault( &_this->HorizontalSliderConfig, 
  0 );
  WidgetSetHorizontalSliderConfig_OnSetThumbSizeDefault( &_this->HorizontalSliderConfig, 
  _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbTintDefault( &_this->HorizontalSliderConfig, 
  _Const002C );
  WidgetSetHorizontalSliderConfig_OnSetThumbOffsetActive( &_this->HorizontalSliderConfig, 
  _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbOffsetFocused( &_this->HorizontalSliderConfig, 
  _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbOffsetDisabled( &_this->HorizontalSliderConfig, 
  _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetThumbOffsetDefault( &_this->HorizontalSliderConfig, 
  _Const0004 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorActive( &_this->HorizontalSliderConfig, 
  _Const0057 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorFocused( &_this->HorizontalSliderConfig, 
  _Const0057 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDisabled( &_this->HorizontalSliderConfig, 
  _Const0057 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderColorDefault( &_this->HorizontalSliderConfig, 
  _Const0057 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthActive( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthFocused( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDisabled( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightBorderWidthDefault( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightColorActive( &_this->HorizontalSliderConfig, 
  _Const0058 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightColorFocused( &_this->HorizontalSliderConfig, 
  _Const0058 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightColorDisabled( &_this->HorizontalSliderConfig, 
  _Const0058 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightColorDefault( &_this->HorizontalSliderConfig, 
  _Const0058 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusActive( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusFocused( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDisabled( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightCornerRadiusDefault( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessActive( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessFocused( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDisabled( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightThicknessDefault( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightFlattened( &_this->HorizontalSliderConfig, 
  1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackRightMarginRight( &_this->HorizontalSliderConfig, 
  20 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorActive( &_this->HorizontalSliderConfig, 
  _Const0059 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorFocused( &_this->HorizontalSliderConfig, 
  _Const0059 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorDisabled( &_this->HorizontalSliderConfig, 
  _Const0059 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderColorDefault( &_this->HorizontalSliderConfig, 
  _Const0059 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthActive( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthFocused( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthDisabled( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBorderWidthDefault( &_this->HorizontalSliderConfig, 
  3 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorActive( &_this->HorizontalSliderConfig, 
  _Const005A );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorFocused( &_this->HorizontalSliderConfig, 
  _Const005A );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDisabled( &_this->HorizontalSliderConfig, 
  _Const005A );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftColorDefault( &_this->HorizontalSliderConfig, 
  _Const005A );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusActive( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusFocused( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDisabled( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftCornerRadiusDefault( &_this->HorizontalSliderConfig, 
  50 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessActive( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessFocused( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDisabled( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftThicknessDefault( &_this->HorizontalSliderConfig, 
  12 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftFlattened( &_this->HorizontalSliderConfig, 
  1 );
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftMarginLeft( &_this->HorizontalSliderConfig, 
  20 );
  CoreRectView__OnSetBounds( &_this->Sound, _Const005B );
  ViewsImage_OnSetColor( &_this->Sound, _Const0030 );
  ViewsImage_OnSetFrameNumber( &_this->Sound, 11 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const005C );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const005D ));
  CoreRectView__OnSetBounds( &_this->HorizontalSlider1, _Const005E );
  CoreRectView__OnSetBounds( &_this->Sound1, _Const005F );
  ViewsImage_OnSetColor( &_this->Sound1, _Const0030 );
  ViewsImage_OnSetFrameNumber( &_this->Sound1, 11 );
  CoreRectView__OnSetBounds( &_this->BackMenu, _Const0060 );
  WidgetSetPushButton_OnSetLabel( &_this->BackMenu, EwLoadString( &_Const0061 ));
  WidgetSetPushButtonConfig_OnSetThumbShadowColorActive( &_this->PushButtonConfig1, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfig1, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDisabled( &_this->PushButtonConfig1, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( &_this->PushButtonConfig1, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusActive( &_this->PushButtonConfig1, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( &_this->PushButtonConfig1, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDisabled( &_this->PushButtonConfig1, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( &_this->PushButtonConfig1, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( &_this->PushButtonConfig1, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfig1, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( &_this->PushButtonConfig1, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( &_this->PushButtonConfig1, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( &_this->PushButtonConfig1, 
  0 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfig1, _Const0064 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig1, _Const0064 );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig1, 
  _Const0065 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfig1, _Const0065 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( &_this->PushButtonConfig1, 
  0 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfig1, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfig1, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfig1, 
  _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfig1, _Const0066 );
  WidgetSetPushButtonConfig_OnSetFaceTintDefault( &_this->PushButtonConfig1, _Const002C );
  CoreRectView__OnSetBounds( &_this->Bevel, _Const0067 );
  ViewsBevel_OnSetWidth( &_this->Bevel, 4 );
  ViewsBevel_OnSetColorL( &_this->Bevel, _Const002C );
  ViewsBevel_OnSetColorR( &_this->Bevel, _Const0030 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->ToggleButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSlider ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sound ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalSlider1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sound1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BackMenu ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Bevel ), 0 );
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationSettings_SwitchDialog );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton, EwLoadResource( &ResourcesNavigationIconsSmall, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetFaceBitmapActive( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig, 0 );
  _this->ToggleButton.OnPress = EwNewSlot( _this, ApplicationSettings_UpdateProperty );
  WidgetSetToggleButton_OnSetAppearance( &_this->ToggleButton, EwGetAutoObject( 
  &WidgetSetSwitch_Lime_Medium, WidgetSetToggleButtonConfig ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  _this->HorizontalSlider.OnChange = EwNewSlot( _this, ApplicationSettings_Volume );
  WidgetSetHorizontalSlider_OnSetOutlet( &_this->HorizontalSlider, EwNewRef( EwGetAutoObject( 
  &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetVolume, 
  ApplicationDeviceClass_OnSetVolume ));
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSlider, &_this->HorizontalSliderConfig );
  WidgetSetHorizontalSliderConfig_OnSetCoverBitmapDefault( &_this->HorizontalSliderConfig, 
  0 );
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapActive( &_this->HorizontalSliderConfig, 
  EwLoadResource( &ApplicationMusicNote, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapFocused( &_this->HorizontalSliderConfig, 
  EwLoadResource( &ApplicationMusicNote, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDisabled( &_this->HorizontalSliderConfig, 
  EwLoadResource( &ApplicationMusicNote, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetThumbBitmapDefault( &_this->HorizontalSliderConfig, 
  EwLoadResource( &ApplicationMusicNote, ResourcesBitmap ));
  WidgetSetHorizontalSliderConfig_OnSetTrackLeftBitmapFocused( &_this->HorizontalSliderConfig, 
  0 );
  WidgetSetHorizontalSliderConfig_OnSetFaceBitmapFocused( &_this->HorizontalSliderConfig, 
  0 );
  WidgetSetHorizontalSliderConfig_OnSetFaceBitmapDisabled( &_this->HorizontalSliderConfig, 
  0 );
  WidgetSetHorizontalSliderConfig_OnSetFaceBitmapDefault( &_this->HorizontalSliderConfig, 
  0 );
  ViewsImage_OnSetBitmap( &_this->Sound, EwLoadResource( &ResourcesPlayerIconsSmall, 
  ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  _this->HorizontalSlider1.OnChange = EwNewSlot( _this, ApplicationSettings_Volume );
  WidgetSetHorizontalSlider_OnSetAppearance( &_this->HorizontalSlider1, &_this->HorizontalSliderConfig );
  ViewsImage_OnSetBitmap( &_this->Sound1, EwLoadResource( &ResourcesPlayerIconsSmall, 
  ResourcesBitmap ));
  _this->Object = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  _this->BackMenu.OnPress = EwNewSlot( _this, ApplicationSettings_BackToMenu );
  WidgetSetPushButton_OnSetAppearance( &_this->BackMenu, &_this->PushButtonConfig1 );
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfig1, EwLoadResource( 
  &ApplicationFont2, ResourcesFont ));

  /* Call the user defined constructor */
  ApplicationSettings_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Settings' */
void ApplicationSettings__ReInit( ApplicationSettings _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
  WidgetSetToggleButton__ReInit( &_this->ToggleButton );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSlider );
  WidgetSetHorizontalSliderConfig__ReInit( &_this->HorizontalSliderConfig );
  ViewsImage__ReInit( &_this->Sound );
  ViewsText__ReInit( &_this->Text2 );
  WidgetSetHorizontalSlider__ReInit( &_this->HorizontalSlider1 );
  ViewsImage__ReInit( &_this->Sound1 );
  WidgetSetPushButton__ReInit( &_this->BackMenu );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig1 );
  ViewsBevel__ReInit( &_this->Bevel );
}

/* Finalizer method for the class 'Application::Settings' */
void ApplicationSettings__Done( ApplicationSettings _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  WidgetSetPushButton__Done( &_this->PushButton );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );
  WidgetSetToggleButton__Done( &_this->ToggleButton );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSlider );
  WidgetSetHorizontalSliderConfig__Done( &_this->HorizontalSliderConfig );
  ViewsImage__Done( &_this->Sound );
  ViewsText__Done( &_this->Text2 );
  WidgetSetHorizontalSlider__Done( &_this->HorizontalSlider1 );
  ViewsImage__Done( &_this->Sound1 );
  WidgetSetPushButton__Done( &_this->BackMenu );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig1 );
  ViewsBevel__Done( &_this->Bevel );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationSettings_Init( ApplicationSettings _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  WidgetSetToggleButton_OnSetChecked( &_this->ToggleButton, _this->Object->Animation );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSlider, _this->Object->Volume );
  WidgetSetHorizontalSlider_OnSetCurrentValue( &_this->HorizontalSlider1, _this->Object->SFXVolume );
  EwAttachRefObserver( EwNewSlot( _this, ApplicationSettings_onVolumeChange ), EwNewRef( 
    EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass ), ApplicationDeviceClass_OnGetVolume, 
    ApplicationDeviceClass_OnSetVolume ), 0 );

  if ( EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->ShowOr )
  {
    CoreGroup_OnSetVisible((CoreGroup)&_this->PushButton, 1 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButton, 1 );
  }
  else
  {
    CoreGroup_OnSetVisible((CoreGroup)&_this->PushButton, 0 );
    CoreGroup_OnSetEnabled((CoreGroup)&_this->PushButton, 0 );
  }
}

/* 'C' function for method : 'Application::Settings.SwitchDialog()' */
void ApplicationSettings_SwitchDialog( ApplicationSettings _this, XObject sender )
{
  CoreGroup dialog;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  dialog = CoreGroup__FindCurrentDialog( _this );

  if ( dialog != 0 )
    CoreGroup__DismissDialog( dialog->Super2.Owner, dialog, ((EffectsTransition)EwGetAutoObject( 
    &EffectsSlideRightCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
    0 );
  else
  {
    EwThrow( EwLoadString( &_Const0068 ));
    return;
  }
}

/* 'C' function for method : 'Application::Settings.UpdateProperty()' */
void ApplicationSettings_UpdateProperty( ApplicationSettings _this, XObject sender )
{
  WidgetSetToggleButton activateAnimation;
  ApplicationDeviceClass settings;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  activateAnimation = EwCastObject( sender, WidgetSetToggleButton );
  settings = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );

  if ( !activateAnimation->Checked )
    ApplicationDeviceClass_OnSetAnimation( settings, 1 );
  else
    ApplicationDeviceClass_OnSetAnimation( settings, 0 );
}

/* 'C' function for method : 'Application::Settings.Volume()' */
void ApplicationSettings_Volume( ApplicationSettings _this, XObject sender )
{
  WidgetSetHorizontalSlider volume = EwCastObject( sender, WidgetSetHorizontalSlider );
  ApplicationDeviceClass settings = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );

  if ( volume == &_this->HorizontalSlider )
    {
      let vol= Math.abs(volume.CurrentValue / 100);
      if(vol>1.0)
        vol=1.0;
      SetVolume(vol);
    }
  else
    if ( volume == &_this->HorizontalSlider1 )
    {
      if ( WidgetSetHorizontalSlider_OnGetCurrentValue( volume ) == 0 )
        ViewsImage_OnSetFrameNumber( &_this->Sound1, 12 );
      else
        if (( WidgetSetHorizontalSlider_OnGetCurrentValue( volume ) > 0 ) && ( WidgetSetHorizontalSlider_OnGetCurrentValue( 
            volume ) <= 50 ))
          ViewsImage_OnSetFrameNumber( &_this->Sound1, 10 );
        else
          ViewsImage_OnSetFrameNumber( &_this->Sound1, 11 );

      ApplicationDeviceClass_OnSetSFXVolume( settings, WidgetSetHorizontalSlider_OnGetCurrentValue( 
      volume ));
      {
        let vol= Math.abs(volume.CurrentValue / 100);
        if(vol>1.0)
          vol=1.0;
        ShuffleVolume(vol);
      }
    }
}

/* 'C' function for method : 'Application::Settings.BackToMenu()' */
void ApplicationSettings_BackToMenu( ApplicationSettings _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ShuffleEnd();
  CoreGroup__DismissDialog( _this->Super3.Owner, CoreGroup__FindCurrentDialog( _this ), 
  ((EffectsTransition)EwGetAutoObject( &EffectsSlideRightCentered, EffectsSlideTransition )), 
  0, 0, EwNullSlot, EwNullSlot, 0 );
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  1;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeMainMenu );
}

/* 'C' function for method : 'Application::Settings.onVolumeChange()' */
void ApplicationSettings_onVolumeChange( ApplicationSettings _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  if ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->Volume == 
      0 )
    ViewsImage_OnSetFrameNumber( &_this->Sound, 12 );
  else
    if (( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->Volume 
        > 0 ) && ( EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass )->Volume 
        <= 50 ))
      ViewsImage_OnSetFrameNumber( &_this->Sound, 10 );
    else
      ViewsImage_OnSetFrameNumber( &_this->Sound, 11 );
}

/* Variants derived from the class : 'Application::Settings' */
EW_DEFINE_CLASS_VARIANTS( ApplicationSettings )
EW_END_OF_CLASS_VARIANTS( ApplicationSettings )

/* Virtual Method Table (VMT) for the class : 'Application::Settings' */
EW_DEFINE_CLASS( ApplicationSettings, CoreGroup, Rectangle, Object, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::Settings" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationSettings )

/* Include a file containing the bitmap resource : 'Application::MusicNote' */
#include "_ApplicationMusicNote.h"

/* Table with links to derived variants of the bitmap resource : 'Application::MusicNote' */
EW_RES_WITHOUT_VARIANTS( ApplicationMusicNote )

/* User defined inline code: 'Application::Inline' */
/*

  TO DO:

  Include external header files or add type and function declarations needed
  in the implementation of Application::DeviceClass. For example:

    #include "DeviceDriver.h"

    #include "your_middleware_api.h"

    void Your_Middleware_Some_Function( int aSomeArg );

*/

/* Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Init( ApplicationDeviceClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass );

  /* ... and initialize objects, variables, properties, etc. */
  _this->Volume = 50;
  _this->SFXVolume = 50;
  _this->MaxLevel = 1;
  _this->Coins = 6000;
  _this->ShopTab = 1;
  _this->CupsArray[ 10 ] = 1;
  _this->BallsArray[ 5 ] = 1;
  _this->ActiveCup = 10;
  _this->ActiveBall = 5;
  _this->MusicsArray[ 14 ] = 1;
  _this->ActiveMusic = 14;

  /* Call the user defined constructor */
  ApplicationDeviceClass_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__ReInit( ApplicationDeviceClass _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DeviceClass' */
void ApplicationDeviceClass__Done( ApplicationDeviceClass _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass.Done()' */
void ApplicationDeviceClass_Done( ApplicationDeviceClass _this )
{
  XObject thisObject = ((XObject)_this );

  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       de-initialization steps. For example, you invoke some 'C' function:

         YourDevice_DeInitialize();

       IMPORTANT:
       ----------

       The variable 'thisObject' represents the actually de-initialized instance of the
       Application::DeviceClass. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.Init()' */
void ApplicationDeviceClass_Init( ApplicationDeviceClass _this, XHandle aArg )
{
  XObject thisObject;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  thisObject = ((XObject)_this );
  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       initialization steps. For example, you invoke some 'C' function:

         YourDevice_Initialize();

       The variable 'thisObject' represents the actually initialized instance of the
       Application::DeviceClass. You can store this variable e.g. in the middleware
       and use it whenever the middleware needs to notify the GUI application about
       some state alternation or events. In this manner, the middleware will be able
       to invoke methods of the interface device object.

       For example, you can store 'thisObject' in some global C variable:

         // Declaration of the global C variable
         XObject theDeviceObject;

         // Store the instance in the global variable
         theDeviceObject = thisObject;

       Later use the global variable e.g. to provide the GUI application with events:

         ApplicationDeviceClass__TriggerSomeEvent( theDeviceObject );

       IMPORTANT:
       ----------

       If you store 'thisObject' for later use, don't forget to implement the opposite
       operation in the method 'Done'. Concrete, 'Done' should set the global variable
       again to the value NULL.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass.OnGetVolume()' */
XInt32 ApplicationDeviceClass_OnGetVolume( ApplicationDeviceClass _this )
{
  return _this->Volume;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetVolume()' */
void ApplicationDeviceClass_OnSetVolume( ApplicationDeviceClass _this, XInt32 value )
{
  if ( _this->Volume == value )
    return;

  _this->Volume = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetVolume, ApplicationDeviceClass_OnSetVolume ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->Volume )
  {
    _this->Volume = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetVolume, ApplicationDeviceClass_OnSetVolume ), 
      0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty()' */
void ApplicationDeviceClass__UpdateProperty( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetSFXVolume()' */
XInt32 ApplicationDeviceClass_OnGetSFXVolume( ApplicationDeviceClass _this )
{
  return _this->SFXVolume;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetSFXVolume()' */
void ApplicationDeviceClass_OnSetSFXVolume( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->SFXVolume == value )
    return;

  _this->SFXVolume = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetSFXVolume, 
    ApplicationDeviceClass_OnSetSFXVolume ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty1( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->SFXVolume )
  {
    _this->SFXVolume = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetSFXVolume, 
      ApplicationDeviceClass_OnSetSFXVolume ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty1()' */
void ApplicationDeviceClass__UpdateProperty1( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty1((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetAnimation()' */
XBool ApplicationDeviceClass_OnGetAnimation( ApplicationDeviceClass _this )
{
  return _this->Animation;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetAnimation()' */
void ApplicationDeviceClass_OnSetAnimation( ApplicationDeviceClass _this, XBool 
  value )
{
  if ( _this->Animation == value )
    return;

  _this->Animation = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetAnimation, 
    ApplicationDeviceClass_OnSetAnimation ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty2( ApplicationDeviceClass _this, XBool 
  aNewValue )
{
  if ( aNewValue != _this->Animation )
  {
    _this->Animation = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetAnimation, 
      ApplicationDeviceClass_OnSetAnimation ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty2()' */
void ApplicationDeviceClass__UpdateProperty2( void* _this, XBool aNewValue )
{
  ApplicationDeviceClass_UpdateProperty2((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetMaxLevel()' */
XInt32 ApplicationDeviceClass_OnGetMaxLevel( ApplicationDeviceClass _this )
{
  return _this->MaxLevel;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetMaxLevel()' */
void ApplicationDeviceClass_OnSetMaxLevel( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->MaxLevel == value )
    return;

  _this->MaxLevel = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetMaxLevel, ApplicationDeviceClass_OnSetMaxLevel ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty3( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->MaxLevel )
  {
    _this->MaxLevel = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetMaxLevel, 
      ApplicationDeviceClass_OnSetMaxLevel ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty3()' */
void ApplicationDeviceClass__UpdateProperty3( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty3((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetTotalRounds()' */
XInt32 ApplicationDeviceClass_OnGetTotalRounds( ApplicationDeviceClass _this )
{
  return _this->TotalRounds;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetTotalRounds()' */
void ApplicationDeviceClass_OnSetTotalRounds( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->TotalRounds == value )
    return;

  _this->TotalRounds = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetTotalRounds, 
    ApplicationDeviceClass_OnSetTotalRounds ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty4( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->TotalRounds )
  {
    _this->TotalRounds = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetTotalRounds, 
      ApplicationDeviceClass_OnSetTotalRounds ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty4()' */
void ApplicationDeviceClass__UpdateProperty4( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty4((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetCorrectGuesses()' */
XInt32 ApplicationDeviceClass_OnGetCorrectGuesses( ApplicationDeviceClass _this )
{
  return _this->CorrectGuesses;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetCorrectGuesses()' */
void ApplicationDeviceClass_OnSetCorrectGuesses( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->CorrectGuesses == value )
    return;

  _this->CorrectGuesses = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCorrectGuesses, 
    ApplicationDeviceClass_OnSetCorrectGuesses ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty5( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->CorrectGuesses )
  {
    _this->CorrectGuesses = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCorrectGuesses, 
      ApplicationDeviceClass_OnSetCorrectGuesses ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty5()' */
void ApplicationDeviceClass__UpdateProperty5( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty5((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetCoins()' */
XInt32 ApplicationDeviceClass_OnGetCoins( ApplicationDeviceClass _this )
{
  return _this->Coins;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetCoins()' */
void ApplicationDeviceClass_OnSetCoins( ApplicationDeviceClass _this, XInt32 value )
{
  if ( _this->Coins == value )
    return;

  _this->Coins = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCoins, ApplicationDeviceClass_OnSetCoins ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty6( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->Coins )
  {
    _this->Coins = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetCoins, ApplicationDeviceClass_OnSetCoins ), 
      0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty6()' */
void ApplicationDeviceClass__UpdateProperty6( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty6((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetShopTab()' */
XInt32 ApplicationDeviceClass_OnGetShopTab( ApplicationDeviceClass _this )
{
  return _this->ShopTab;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetShopTab()' */
void ApplicationDeviceClass_OnSetShopTab( ApplicationDeviceClass _this, XInt32 value )
{
  if ( _this->ShopTab == value )
    return;

  _this->ShopTab = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetShopTab, ApplicationDeviceClass_OnSetShopTab ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty7( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->ShopTab )
  {
    _this->ShopTab = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetShopTab, 
      ApplicationDeviceClass_OnSetShopTab ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty7()' */
void ApplicationDeviceClass__UpdateProperty7( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty7((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveCup()' */
XInt32 ApplicationDeviceClass_OnGetActiveCup( ApplicationDeviceClass _this )
{
  return _this->ActiveCup;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveCup()' */
void ApplicationDeviceClass_OnSetActiveCup( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->ActiveCup == value )
    return;

  _this->ActiveCup = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetActiveCup, 
    ApplicationDeviceClass_OnSetActiveCup ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty8( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->ActiveCup )
  {
    _this->ActiveCup = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetActiveCup, 
      ApplicationDeviceClass_OnSetActiveCup ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty8()' */
void ApplicationDeviceClass__UpdateProperty8( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty8((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveBall()' */
XInt32 ApplicationDeviceClass_OnGetActiveBall( ApplicationDeviceClass _this )
{
  return _this->ActiveBall;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveBall()' */
void ApplicationDeviceClass_OnSetActiveBall( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->ActiveBall == value )
    return;

  _this->ActiveBall = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetActiveBall, 
    ApplicationDeviceClass_OnSetActiveBall ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty9( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->ActiveBall )
  {
    _this->ActiveBall = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetActiveBall, 
      ApplicationDeviceClass_OnSetActiveBall ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty9()' */
void ApplicationDeviceClass__UpdateProperty9( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty9((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetActiveMusic()' */
XInt32 ApplicationDeviceClass_OnGetActiveMusic( ApplicationDeviceClass _this )
{
  return _this->ActiveMusic;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetActiveMusic()' */
void ApplicationDeviceClass_OnSetActiveMusic( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->ActiveMusic == value )
    return;

  _this->ActiveMusic = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetActiveMusic, 
    ApplicationDeviceClass_OnSetActiveMusic ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty10( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->ActiveMusic )
  {
    _this->ActiveMusic = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetActiveMusic, 
      ApplicationDeviceClass_OnSetActiveMusic ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty10()' */
void ApplicationDeviceClass__UpdateProperty10( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty10((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetHallAct()' */
XBool ApplicationDeviceClass_OnGetHallAct( ApplicationDeviceClass _this )
{
  return _this->HallAct;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetHallAct()' */
void ApplicationDeviceClass_OnSetHallAct( ApplicationDeviceClass _this, XBool value )
{
  if ( _this->HallAct == value )
    return;

  _this->HallAct = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetHallAct, ApplicationDeviceClass_OnSetHallAct ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty11( ApplicationDeviceClass _this, XBool 
  aNewValue )
{
  if ( aNewValue != _this->HallAct )
  {
    _this->HallAct = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetHallAct, 
      ApplicationDeviceClass_OnSetHallAct ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty11()' */
void ApplicationDeviceClass__UpdateProperty11( void* _this, XBool aNewValue )
{
  ApplicationDeviceClass_UpdateProperty11((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetHallPack()' */
XBool ApplicationDeviceClass_OnGetHallPack( ApplicationDeviceClass _this )
{
  return _this->HallPack;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetHallPack()' */
void ApplicationDeviceClass_OnSetHallPack( ApplicationDeviceClass _this, XBool value )
{
  if ( _this->HallPack == value )
    return;

  _this->HallPack = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetHallPack, ApplicationDeviceClass_OnSetHallPack ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty12( ApplicationDeviceClass _this, XBool 
  aNewValue )
{
  if ( aNewValue != _this->HallPack )
  {
    _this->HallPack = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetHallPack, 
      ApplicationDeviceClass_OnSetHallPack ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty12()' */
void ApplicationDeviceClass__UpdateProperty12( void* _this, XBool aNewValue )
{
  ApplicationDeviceClass_UpdateProperty12((ApplicationDeviceClass)_this, aNewValue );
}

/* 'C' function for method : 'Application::DeviceClass.OnGetAchFrame()' */
XInt32 ApplicationDeviceClass_OnGetAchFrame( ApplicationDeviceClass _this )
{
  return _this->AchFrame;
}

/* 'C' function for method : 'Application::DeviceClass.OnSetAchFrame()' */
void ApplicationDeviceClass_OnSetAchFrame( ApplicationDeviceClass _this, XInt32 
  value )
{
  if ( _this->AchFrame == value )
    return;

  _this->AchFrame = value;
  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetAchFrame, ApplicationDeviceClass_OnSetAchFrame ), 
    0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass_UpdateProperty13( ApplicationDeviceClass _this, XInt32 
  aNewValue )
{
  if ( aNewValue != _this->AchFrame )
  {
    _this->AchFrame = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass_OnGetAchFrame, 
      ApplicationDeviceClass_OnSetAchFrame ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass.UpdateProperty13()' */
void ApplicationDeviceClass__UpdateProperty13( void* _this, XInt32 aNewValue )
{
  ApplicationDeviceClass_UpdateProperty13((ApplicationDeviceClass)_this, aNewValue );
}

/* Variants derived from the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass' */
EW_DEFINE_CLASS( ApplicationDeviceClass, TemplatesDeviceClass, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::DeviceClass" )
EW_END_OF_CLASS( ApplicationDeviceClass )

/* User defined auto object: 'Application::Device' */
EW_DEFINE_AUTOOBJECT( ApplicationDevice, ApplicationDeviceClass )

/* Initializer for the auto object 'Application::Device' */
void ApplicationDevice__Init( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::Device' */
void ApplicationDevice__ReInit( ApplicationDeviceClass _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice )

/* Initializer for the class 'Application::MainMenu' */
void ApplicationMainMenu__Init( ApplicationMainMenu _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationMainMenu );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->Start, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->StatsButton, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->Shop, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image2, &_this->_.XObject, 0 );
  EffectsRectEffect__Init( &_this->RectEffect1, &_this->_.XObject, 0 );
  ViewsBevel__Init( &_this->Bevel, &_this->_.XObject, 0 );
  ViewsBevel__Init( &_this->Bevel1, &_this->_.XObject, 0 );
  ViewsBevel__Init( &_this->Bevel2, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->Settings, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->HelpBtn, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->Sett, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->HelpBtn1, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationMainMenu );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0002 );
  CoreRectView__OnSetBounds( &_this->Start, _Const0069 );
  WidgetSetPushButton_OnSetLabel( &_this->Start, EwLoadString( &_Const006A ));
  WidgetSetPushButtonConfig_OnSetThumbShadowColorActive( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDisabled( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusActive( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDisabled( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfig, _Const0064 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig, _Const0064 );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig, _Const0065 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfig, _Const0065 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetFaceTintDefault( &_this->PushButtonConfig, _Const002C );
  CoreRectView__OnSetBounds( &_this->StatsButton, _Const006B );
  WidgetSetPushButton_OnSetLabel( &_this->StatsButton, EwLoadString( &_Const006C ));
  CoreRectView__OnSetBounds( &_this->Shop, _Const006D );
  WidgetSetPushButton_OnSetLabel( &_this->Shop, EwLoadString( &_Const006E ));
  CoreRectView__OnSetBounds( &_this->Text, _Const006F );
  ViewsText_OnSetColorBL( &_this->Text, _Const0070 );
  ViewsText_OnSetColorBR( &_this->Text, _Const0071 );
  ViewsText_OnSetColorTR( &_this->Text, _Const0071 );
  ViewsText_OnSetColorTL( &_this->Text, _Const0070 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0072 ));
  ViewsText_OnSetColor( &_this->Text, _Const0073 );
  CoreRectView__OnSetBounds( &_this->Image2, _Const0074 );
  ViewsImage_OnSetAlignment( &_this->Image2, ViewsImageAlignmentAlignHorzCenter 
  | ViewsImageAlignmentAlignVertBottom | ViewsImageAlignmentScaleToFill | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetFrameNumber( &_this->Image2, 0 );
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->RectEffect1, 1 );
  _this->RectEffect1.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->RectEffect1, EffectsTimingCircle_InOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->RectEffect1, 3000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->RectEffect1, 1 );
  _this->RectEffect1.Value2 = _Const0075;
  _this->RectEffect1.Value1 = _Const0074;
  CoreRectView__OnSetBounds( &_this->Bevel, _Const0069 );
  ViewsBevel_OnSetWidth( &_this->Bevel, 4 );
  ViewsBevel_OnSetColorL( &_this->Bevel, _Const002C );
  ViewsBevel_OnSetColorR( &_this->Bevel, _Const0030 );
  CoreRectView__OnSetBounds( &_this->Bevel1, _Const006B );
  ViewsBevel_OnSetWidth( &_this->Bevel1, 4 );
  ViewsBevel_OnSetColorL( &_this->Bevel1, _Const002C );
  ViewsBevel_OnSetColorR( &_this->Bevel1, _Const0030 );
  CoreRectView__OnSetBounds( &_this->Bevel2, _Const006D );
  ViewsBevel_OnSetWidth( &_this->Bevel2, 4 );
  ViewsBevel_OnSetColorL( &_this->Bevel2, _Const002C );
  ViewsBevel_OnSetColorR( &_this->Bevel2, _Const0030 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( &_this->Settings, _Const0076 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->Settings, _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->Settings, _Const002E );
  WidgetSetPushButtonConfig_OnSetIconTintActive( &_this->Settings, _Const002F );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( &_this->Settings, _Const0077 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( &_this->Settings, _Const0077 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( &_this->Settings, _Const0077 );
  CoreView_OnSetLayout((CoreView)&_this->HelpBtn, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->HelpBtn, _Const0078 );
  WidgetSetPushButton_OnSetIconFrame( &_this->HelpBtn, -1 );
  WidgetSetPushButton_OnSetLabel( &_this->HelpBtn, 0 );
  CoreRectView__OnSetBounds( &_this->Sett, _Const0079 );
  WidgetSetPushButton_OnSetLabel( &_this->Sett, EwLoadString( &_Const007A ));
  CoreView_OnSetLayout((CoreView)&_this->HelpBtn1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->HelpBtn1, _Const007B );
  WidgetSetPushButton_OnSetIconFrame( &_this->HelpBtn1, -1 );
  WidgetSetPushButton_OnSetLabel( &_this->HelpBtn1, 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Start ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->StatsButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Shop ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Bevel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Bevel1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Bevel2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HelpBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Sett ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HelpBtn1 ), 0 );
  _this->Start.OnPress = EwNewSlot( _this, ApplicationMainMenu_InitializeGame );
  WidgetSetPushButton_OnSetIcon( &_this->Start, 0 );
  WidgetSetPushButton_OnSetAppearance( &_this->Start, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfig, EwLoadResource( 
  &ApplicationFont2, ResourcesFont ));
  _this->StatsButton.OnPress = EwNewSlot( _this, ApplicationMainMenu_Stats );
  WidgetSetPushButton_OnSetIcon( &_this->StatsButton, 0 );
  WidgetSetPushButton_OnSetAppearance( &_this->StatsButton, &_this->PushButtonConfig );
  _this->Shop.OnPress = EwNewSlot( _this, ApplicationMainMenu_ShopMeth );
  WidgetSetPushButton_OnSetIcon( &_this->Shop, 0 );
  WidgetSetPushButton_OnSetAppearance( &_this->Shop, &_this->PushButtonConfig );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image2, EwLoadResource( &ApplicationCup, ResourcesBitmap ));
  _this->RectEffect1.Outlet = EwNewRef( &_this->Image2, CoreRectView_OnGetBounds, 
  CoreRectView__OnSetBounds );
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( &_this->Settings, 0 );
  _this->HelpBtn.OnPress = EwNewSlot( _this, ApplicationMainMenu_HelpTab );
  WidgetSetPushButton_OnSetIcon( &_this->HelpBtn, EwLoadResource( &ApplicationHelpIcon, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->HelpBtn, &_this->Settings );
  _this->Sett.OnPress = EwNewSlot( _this, ApplicationMainMenu_GoToSettings );
  WidgetSetPushButton_OnSetIcon( &_this->Sett, EwLoadResource( &ApplicationSettingsIcon, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->Sett, &_this->Settings );
  _this->HelpBtn1.OnPress = EwNewSlot( _this, ApplicationMainMenu_AchieveTab );
  WidgetSetPushButton_OnSetIcon( &_this->HelpBtn1, EwLoadResource( &ApplicationAchiveIcon, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->HelpBtn1, &_this->Settings );

  /* Call the user defined constructor */
  ApplicationMainMenu_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::MainMenu' */
void ApplicationMainMenu__ReInit( ApplicationMainMenu _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  WidgetSetPushButton__ReInit( &_this->Start );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
  WidgetSetPushButton__ReInit( &_this->StatsButton );
  WidgetSetPushButton__ReInit( &_this->Shop );
  ViewsText__ReInit( &_this->Text );
  ViewsImage__ReInit( &_this->Image2 );
  EffectsRectEffect__ReInit( &_this->RectEffect1 );
  ViewsBevel__ReInit( &_this->Bevel );
  ViewsBevel__ReInit( &_this->Bevel1 );
  ViewsBevel__ReInit( &_this->Bevel2 );
  WidgetSetPushButtonConfig__ReInit( &_this->Settings );
  WidgetSetPushButton__ReInit( &_this->HelpBtn );
  WidgetSetPushButton__ReInit( &_this->Sett );
  WidgetSetPushButton__ReInit( &_this->HelpBtn1 );
}

/* Finalizer method for the class 'Application::MainMenu' */
void ApplicationMainMenu__Done( ApplicationMainMenu _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  WidgetSetPushButton__Done( &_this->Start );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );
  WidgetSetPushButton__Done( &_this->StatsButton );
  WidgetSetPushButton__Done( &_this->Shop );
  ViewsText__Done( &_this->Text );
  ViewsImage__Done( &_this->Image2 );
  EffectsRectEffect__Done( &_this->RectEffect1 );
  ViewsBevel__Done( &_this->Bevel );
  ViewsBevel__Done( &_this->Bevel1 );
  ViewsBevel__Done( &_this->Bevel2 );
  WidgetSetPushButtonConfig__Done( &_this->Settings );
  WidgetSetPushButton__Done( &_this->HelpBtn );
  WidgetSetPushButton__Done( &_this->Sett );
  WidgetSetPushButton__Done( &_this->HelpBtn1 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationMainMenu_Init( ApplicationMainMenu _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  CoreGroup_OnSetEnabled((CoreGroup)&_this->Start, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->StatsButton, 1 );
  CoreGroup_OnSetEnabled((CoreGroup)&_this->Shop, 1 );
}

/* 'C' function for method : 'Application::MainMenu.InitializeGame()' */
void ApplicationMainMenu_InitializeGame( ApplicationMainMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationMainMenu_StartSound( _this );
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  4;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeInitilizeGame );
}

/* 'C' function for method : 'Application::MainMenu.Stats()' */
void ApplicationMainMenu_Stats( ApplicationMainMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationMainMenu_StartSound( _this );
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  1;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeStats );
}

/* 'C' function for method : 'Application::MainMenu.ShopMeth()' */
void ApplicationMainMenu_ShopMeth( ApplicationMainMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationMainMenu_StartSound( _this );
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  1;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeShop );
}

/* 'C' function for method : 'Application::MainMenu.StartSound()' */
void ApplicationMainMenu_StartSound( ApplicationMainMenu _this )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  {
    // Javascript code executed inside the browser
    if(GetHalloweenActive()==false)
    {
      var music=GetActiveMusicName();
      SelectMusic(music);
    }
    else{
      SelectMusic("Halloween ");
    }
  }
}

/* 'C' function for method : 'Application::MainMenu.GoToSettings()' */
void ApplicationMainMenu_GoToSettings( ApplicationMainMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationMainMenu_StartSound( _this );
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->ShowOr = 0;
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  0;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeSettingsMenu );
}

/* 'C' function for method : 'Application::MainMenu.HelpTab()' */
void ApplicationMainMenu_HelpTab( ApplicationMainMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationMainMenu_StartSound( _this );
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  1;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeHelpMenu );
}

/* 'C' function for method : 'Application::MainMenu.AchieveTab()' */
void ApplicationMainMenu_AchieveTab( ApplicationMainMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ApplicationMainMenu_StartSound( _this );
  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  1;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeAchivements );
}

/* Variants derived from the class : 'Application::MainMenu' */
EW_DEFINE_CLASS_VARIANTS( ApplicationMainMenu )
EW_END_OF_CLASS_VARIANTS( ApplicationMainMenu )

/* Virtual Method Table (VMT) for the class : 'Application::MainMenu' */
EW_DEFINE_CLASS( ApplicationMainMenu, CoreGroup, Rectangle, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::MainMenu" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationMainMenu )

/* Initializer for the class 'Application::LoadingGame' */
void ApplicationLoadingGame__Init( ApplicationLoadingGame _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationLoadingGame );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  WidgetSetHorizontalValueBar__Init( &_this->HorizontalValueBar, &_this->_.XObject, 0 );
  WidgetSetHorizontalValueBarConfig__Init( &_this->HorizontalValueBarConfig, &_this->_.XObject, 0 );
  EffectsInt32Effect__Init( &_this->Int32Effect, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text3, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text2, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  EffectsPointEffect__Init( &_this->PointEffect, &_this->_.XObject, 0 );
  EffectsPointEffect__Init( &_this->PointEffect1, &_this->_.XObject, 0 );
  EffectsPointEffect__Init( &_this->PointEffect2, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationLoadingGame );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0002 );
  CoreRectView__OnSetBounds( &_this->Text, _Const007C );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const007D ));
  ViewsText_OnSetColor( &_this->Text, _Const0030 );
  CoreRectView__OnSetBounds( &_this->HorizontalValueBar, _Const007E );
  WidgetSetHorizontalValueBar_OnSetCurrentValue( &_this->HorizontalValueBar, 0 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightBorderColor( &_this->HorizontalValueBarConfig, 
  _Const007F );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightBorderWidth( &_this->HorizontalValueBarConfig, 
  2 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightColor( &_this->HorizontalValueBarConfig, 
  _Const0080 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightFlattened( &_this->HorizontalValueBarConfig, 
  1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightCornerRadius( &_this->HorizontalValueBarConfig, 
  10 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightThickness( &_this->HorizontalValueBarConfig, 
  15 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightWithEdge( &_this->HorizontalValueBarConfig, 
  0 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightMarginRight( &_this->HorizontalValueBarConfig, 
  15 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftBorderColor( &_this->HorizontalValueBarConfig, 
  _Const0081 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftBorderWidth( &_this->HorizontalValueBarConfig, 
  1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftColor( &_this->HorizontalValueBarConfig, 
  _Const0082 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFlattened( &_this->HorizontalValueBarConfig, 
  1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftCornerRadius( &_this->HorizontalValueBarConfig, 
  10 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftThickness( &_this->HorizontalValueBarConfig, 
  15 );
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->Int32Effect, EffectsTimingPower_Out );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->Int32Effect, 1 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->Int32Effect, 4000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->Int32Effect, 1 );
  _this->Int32Effect.Value2 = 100;
  _this->Array[ 0 ] = EwShareString( EwLoadString( &_Const007D ));
  _this->Array[ 1 ] = EwShareString( EwLoadString( &_Const0083 ));
  _this->Array[ 2 ] = EwShareString( EwLoadString( &_Const0084 ));
  _this->Array[ 3 ] = EwShareString( EwLoadString( &_Const0085 ));
  CoreRectView__OnSetBounds( &_this->Text3, _Const0086 );
  ViewsText_OnSetString( &_this->Text3, EwLoadString( &_Const0087 ));
  ViewsText_OnSetColor( &_this->Text3, _Const0030 );
  CoreRectView__OnSetBounds( &_this->Text2, _Const0088 );
  ViewsText_OnSetString( &_this->Text2, EwLoadString( &_Const0087 ));
  ViewsText_OnSetColor( &_this->Text2, _Const0030 );
  CoreRectView__OnSetBounds( &_this->Text1, _Const0089 );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const0087 ));
  ViewsText_OnSetColor( &_this->Text1, _Const0030 );
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->PointEffect, 1 );
  _this->PointEffect.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->PointEffect, EffectsTimingSine_InOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->PointEffect, 2000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->PointEffect, 500 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->PointEffect, 1 );
  _this->PointEffect.Value2 = _Const008A;
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->PointEffect1, 1 );
  _this->PointEffect1.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->PointEffect1, EffectsTimingSine_InOut );
  EffectsEffect_OnSetNoOfCycles((EffectsEffect)&_this->PointEffect1, 0 );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->PointEffect1, 2000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->PointEffect1, 1 );
  _this->PointEffect1.Value2 = _Const008A;
  EffectsEffect_OnSetReversed((EffectsEffect)&_this->PointEffect2, 1 );
  _this->PointEffect2.Super1.Symmetric = 1;
  EffectsEffect_OnSetTiming((EffectsEffect)&_this->PointEffect2, EffectsTimingSine_InOut );
  EffectsEffect_OnSetCycleDuration((EffectsEffect)&_this->PointEffect2, 2000 );
  EffectsEffect_OnSetInitialDelay((EffectsEffect)&_this->PointEffect2, 1000 );
  EffectsEffect_OnSetEnabled((EffectsEffect)&_this->PointEffect2, 1 );
  _this->PointEffect2.Value2 = _Const008A;
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalValueBar ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text3 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text2 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  WidgetSetHorizontalValueBar_OnSetAppearance( &_this->HorizontalValueBar, &_this->HorizontalValueBarConfig );
  WidgetSetHorizontalValueBarConfig_OnSetNeedleBitmap( &_this->HorizontalValueBarConfig, 
  EwLoadResource( &ApplicationBallSlider, ResourcesBitmap ));
  _this->Int32Effect.Super1.OnFinished = EwNewSlot( _this, ApplicationLoadingGame_Slot );
  _this->Int32Effect.Outlet = EwNewRef( &_this->HorizontalValueBar, WidgetSetHorizontalValueBar_OnGetCurrentValue, 
  WidgetSetHorizontalValueBar_OnSetCurrentValue );
  ViewsText_OnSetFont( &_this->Text3, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text2, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  _this->PointEffect.Outlet = EwNewRef( &_this->Text2, ViewsText_OnGetScrollOffset, 
  ViewsText_OnSetScrollOffset );
  _this->PointEffect1.Outlet = EwNewRef( &_this->Text1, ViewsText_OnGetScrollOffset, 
  ViewsText_OnSetScrollOffset );
  _this->PointEffect2.Outlet = EwNewRef( &_this->Text3, ViewsText_OnGetScrollOffset, 
  ViewsText_OnSetScrollOffset );

  /* Call the user defined constructor */
  ApplicationLoadingGame_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::LoadingGame' */
void ApplicationLoadingGame__ReInit( ApplicationLoadingGame _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
  WidgetSetHorizontalValueBar__ReInit( &_this->HorizontalValueBar );
  WidgetSetHorizontalValueBarConfig__ReInit( &_this->HorizontalValueBarConfig );
  EffectsInt32Effect__ReInit( &_this->Int32Effect );
  ViewsText__ReInit( &_this->Text3 );
  ViewsText__ReInit( &_this->Text2 );
  ViewsText__ReInit( &_this->Text1 );
  EffectsPointEffect__ReInit( &_this->PointEffect );
  EffectsPointEffect__ReInit( &_this->PointEffect1 );
  EffectsPointEffect__ReInit( &_this->PointEffect2 );
}

/* Finalizer method for the class 'Application::LoadingGame' */
void ApplicationLoadingGame__Done( ApplicationLoadingGame _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );
  WidgetSetHorizontalValueBar__Done( &_this->HorizontalValueBar );
  WidgetSetHorizontalValueBarConfig__Done( &_this->HorizontalValueBarConfig );
  EffectsInt32Effect__Done( &_this->Int32Effect );
  ViewsText__Done( &_this->Text3 );
  ViewsText__Done( &_this->Text2 );
  ViewsText__Done( &_this->Text1 );
  EffectsPointEffect__Done( &_this->PointEffect );
  EffectsPointEffect__Done( &_this->PointEffect1 );
  EffectsPointEffect__Done( &_this->PointEffect2 );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationLoadingGame_Init( ApplicationLoadingGame _this, XHandle aArg )
{
  XInt32 nr;
  XString message;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  nr = EwMathRandInt32( 0, 4 );
  message = _this->Array[ EwCheckIndex( nr, 4 )];

  if ( nr == 3 )
    CoreRectView__OnSetBounds( &_this->Text, _Const008B );
  else
    if ( nr == 0 )
      CoreRectView__OnSetBounds( &_this->Text, _Const008C );

  ViewsText_OnSetString( &_this->Text, message );
}

/* 'C' function for method : 'Application::LoadingGame.Slot()' */
void ApplicationLoadingGame_Slot( ApplicationLoadingGame _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  1;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeGame );
}

/* Variants derived from the class : 'Application::LoadingGame' */
EW_DEFINE_CLASS_VARIANTS( ApplicationLoadingGame )
EW_END_OF_CLASS_VARIANTS( ApplicationLoadingGame )

/* Virtual Method Table (VMT) for the class : 'Application::LoadingGame' */
EW_DEFINE_CLASS( ApplicationLoadingGame, CoreGroup, Rectangle, Array, Array, Array, 
                 Array, _.VMT, "Application::LoadingGame" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationLoadingGame )

/* Include a file containing the bitmap resource : 'Application::BallSlider' */
#include "_ApplicationBallSlider.h"

/* Table with links to derived variants of the bitmap resource : 'Application::BallSlider' */
EW_RES_WITHOUT_VARIANTS( ApplicationBallSlider )

/* Initializer for the class 'Application::Stats' */
void ApplicationStats__Init( ApplicationStats _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationStats );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->MaxLevel, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Date, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->HoursPlayed, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Corrects, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );
  ViewsBevel__Init( &_this->Bevel, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationStats );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0002 );
  CoreRectView__OnSetBounds( &_this->MaxLevel, _Const008D );
  ViewsText_OnSetString( &_this->MaxLevel, EwLoadString( &_Const008E ));
  ViewsText_OnSetColor( &_this->MaxLevel, _Const008F );
  CoreRectView__OnSetBounds( &_this->Date, _Const0090 );
  ViewsText_OnSetString( &_this->Date, EwLoadString( &_Const0091 ));
  ViewsText_OnSetColor( &_this->Date, _Const008F );
  CoreRectView__OnSetBounds( &_this->HoursPlayed, _Const0092 );
  ViewsText_OnSetString( &_this->HoursPlayed, EwLoadString( &_Const0093 ));
  ViewsText_OnSetColor( &_this->HoursPlayed, _Const008F );
  CoreRectView__OnSetBounds( &_this->Corrects, _Const0094 );
  ViewsText_OnSetString( &_this->Corrects, EwLoadString( &_Const0095 ));
  ViewsText_OnSetColor( &_this->Corrects, _Const008F );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const0096 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const0097 ));
  WidgetSetPushButtonConfig_OnSetThumbShadowColorActive( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDisabled( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorDefault( &_this->PushButtonConfig, 
  _Const0062 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusActive( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDisabled( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusDefault( &_this->PushButtonConfig, 
  8 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDisabled( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( &_this->PushButtonConfig, 
  _Const0063 );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfig, _Const0064 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig, _Const0064 );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig, _Const0065 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfig, _Const0065 );
  WidgetSetPushButtonConfig_OnSetThumbCornerRadiusDefault( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfig, _Const0066 );
  WidgetSetPushButtonConfig_OnSetFaceTintDefault( &_this->PushButtonConfig, _Const002C );
  CoreRectView__OnSetBounds( &_this->Bevel, _Const0096 );
  ViewsBevel_OnSetWidth( &_this->Bevel, 4 );
  ViewsBevel_OnSetColorL( &_this->Bevel, _Const002C );
  ViewsBevel_OnSetColorR( &_this->Bevel, _Const0030 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MaxLevel ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Date ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HoursPlayed ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Corrects ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Bevel ), 0 );
  ViewsText_OnSetFont( &_this->MaxLevel, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Date, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  ViewsText_OnSetFont( &_this->HoursPlayed, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Corrects, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationStats_Back );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfig, EwLoadResource( 
  &ApplicationFont2, ResourcesFont ));
  _this->Object = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );

  /* Call the user defined constructor */
  ApplicationStats_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Stats' */
void ApplicationStats__ReInit( ApplicationStats _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->MaxLevel );
  ViewsText__ReInit( &_this->Date );
  ViewsText__ReInit( &_this->HoursPlayed );
  ViewsText__ReInit( &_this->Corrects );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
  ViewsBevel__ReInit( &_this->Bevel );
}

/* Finalizer method for the class 'Application::Stats' */
void ApplicationStats__Done( ApplicationStats _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->MaxLevel );
  ViewsText__Done( &_this->Date );
  ViewsText__Done( &_this->HoursPlayed );
  ViewsText__Done( &_this->Corrects );
  WidgetSetPushButton__Done( &_this->PushButton );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );
  ViewsBevel__Done( &_this->Bevel );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationStats_Init( ApplicationStats _this, XHandle aArg )
{
  XString lvl;
  XString correct;
  XString total;
  XString hours;
  XString date;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  lvl = 0;
  correct = 0;
  total = 0;
  hours = 0;
  date = 0;
  {
    lvl=GetBestLevel();
    correct=GetCorrects();
    total=GetTotal();
    date=GetDate();
    hours=GetHours();
  }
  ViewsText_OnSetString( &_this->MaxLevel, EwConcatString( EwLoadString( &_Const0098 ), 
  lvl ));
  ViewsText_OnSetString( &_this->Corrects, EwConcatString( EwConcatString( EwConcatString( 
  EwLoadString( &_Const0099 ), correct ), EwLoadString( &_Const009A )), total ));
  ViewsText_OnSetString( &_this->HoursPlayed, EwConcatString( EwLoadString( &_Const009B ), 
  hours ));
  ViewsText_OnSetString( &_this->Date, EwConcatString( EwLoadString( &_Const009C ), 
  date ));
}

/* 'C' function for method : 'Application::Stats.Back()' */
void ApplicationStats_Back( ApplicationStats _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  0;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeMainMenu );
}

/* Variants derived from the class : 'Application::Stats' */
EW_DEFINE_CLASS_VARIANTS( ApplicationStats )
EW_END_OF_CLASS_VARIANTS( ApplicationStats )

/* Virtual Method Table (VMT) for the class : 'Application::Stats' */
EW_DEFINE_CLASS( ApplicationStats, CoreGroup, Rectangle, Object, _.VMT, _.VMT, _.VMT, 
                 _.VMT, "Application::Stats" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationStats )

/* Initializer for the class 'Application::TheClass' */
void ApplicationTheClass__Init( ApplicationTheClass _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  EffectsEffect__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationTheClass );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationTheClass );
}

/* Re-Initializer for the class 'Application::TheClass' */
void ApplicationTheClass__ReInit( ApplicationTheClass _this )
{
  /* At first re-initialize the super class ... */
  EffectsEffect__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::TheClass' */
void ApplicationTheClass__Done( ApplicationTheClass _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( EffectsEffect );

  /* Don't forget to deinitialize the super class ... */
  EffectsEffect__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::TheClass.Animate()' */
void ApplicationTheClass_Animate( ApplicationTheClass _this, XFloat aProgress )
{
  XFloat scale;
  XInt32 x1_start;
  XInt32 y1_start;
  XInt32 x2_start;
  XInt32 y2_start;
  XInt32 x1_end;
  XInt32 y1_end;
  XInt32 y2_end;
  XFloat angle;
  XFloat angle_degrees;
  XInt32 x_center;
  XInt32 y_center;
  XFloat radius1;
  XFloat radius2;
  XInt32 x1;
  XInt32 y1;
  XInt32 width;
  XInt32 height;
  XFloat scale1;
  XInt32 x11_start;
  XInt32 y11_start;
  XInt32 x22_start;
  XInt32 y22_start;
  XInt32 x11_end;
  XInt32 y11_end;
  XInt32 y22_end;
  XFloat angle1;
  XFloat angle_degrees1;
  XInt32 x1_center;
  XInt32 y1_center;
  XFloat radius3;
  XFloat radius4;
  XInt32 x11;
  XInt32 y11;
  XInt32 width1;
  XInt32 height1;

  EffectsEffect_Animate((EffectsEffect)_this, aProgress );

  if ( aProgress <= 0.5f )
    scale = 1.0f - ( -1.0f * ( aProgress / 0.5f ));
  else
    scale = 2.0f + ( -1.0f * (( aProgress - 0.5f ) / 0.5f ));

  x1_start = _this->Value1.Point1.X;
  y1_start = _this->Value1.Point1.Y;
  x2_start = _this->Value1.Point2.X;
  y2_start = _this->Value1.Point2.Y;
  x1_end = _this->Value2.Point1.X;
  y1_end = _this->Value2.Point1.Y;
  y2_end = _this->Value2.Point2.Y;
  angle = aProgress * 3.14159f;
  angle_degrees = angle * 57.2958f;
  x_center = ( x1_start + x1_end ) / 2;
  y_center = ( y1_start + y1_end ) / 2;
  radius1 = ( x1_end - x1_start ) / 2.0f;
  radius2 = ( y2_end - y1_start ) / 2.0f;
  x1 = x_center + (XInt32)EwMathRound( radius1 * EwMathCos( angle_degrees ));
  y1 = y_center + (XInt32)EwMathRound( radius2 * EwMathSin( angle_degrees ));
  width = (XInt32)(( x2_start - x1_start ) * scale );
  height = y2_start - y1_start;
  ApplicationTheClass_OnSetValue( _this, EwNewRect( x1, y1, x1 + width, y1 + height ));

  if ( _this->Outlet.Object != 0 )
    EwOnSetRect( _this->Outlet, _this->Value );

  if ( aProgress <= 0.5f )
    scale1 = 1.0f - ( 0.3f * ( aProgress / 0.5f ));
  else
    scale1 = 0.7f + ( 0.3f * (( aProgress - 0.5f ) / 0.5f ));

  x11_start = _this->Value11.Point1.X;
  y11_start = _this->Value11.Point1.Y;
  x22_start = _this->Value11.Point2.X;
  y22_start = _this->Value11.Point2.Y;
  x11_end = _this->Value22.Point1.X;
  y11_end = _this->Value22.Point1.Y;
  y22_end = _this->Value22.Point2.Y;
  angle1 = 3.14159f + ( aProgress * 3.14159f );
  angle_degrees1 = angle1 * 57.2958f;
  x1_center = ( x11_start + x11_end ) / 2;
  y1_center = ( y11_start + y11_end ) / 2;
  radius3 = ( x11_end - x11_start ) / 2.0f;
  radius4 = ( y22_end - y11_start ) / 2.0f;
  x11 = x1_center + (XInt32)EwMathRound( radius3 * EwMathCos( angle_degrees1 ));
  y11 = y1_center + (XInt32)EwMathRound( radius4 * EwMathSin( angle_degrees1 ));
  width1 = (XInt32)(( x22_start - x11_start ) * scale1 );
  height1 = y22_start - y11_start;
  ApplicationTheClass_OnSetValue( _this, EwNewRect( x11, y11, x11 + width1, y11 
  + height1 ));

  if ( _this->Outlet1.Object != 0 )
    EwOnSetRect( _this->Outlet1, _this->Value );
}

/* 'C' function for method : 'Application::TheClass.OnSetOutlet()' */
void ApplicationTheClass_OnSetOutlet( ApplicationTheClass _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet, value ))
    return;

  _this->Outlet = value;
}

/* 'C' function for method : 'Application::TheClass.OnSetValue1()' */
void ApplicationTheClass_OnSetValue1( ApplicationTheClass _this, XRect value )
{
  if ( !EwCompRect( _this->Value1, value ))
    return;

  _this->Value1 = value;
}

/* 'C' function for method : 'Application::TheClass.OnSetValue2()' */
void ApplicationTheClass_OnSetValue2( ApplicationTheClass _this, XRect value )
{
  if ( !EwCompRect( _this->Value2, value ))
    return;

  _this->Value2 = value;
}

/* 'C' function for method : 'Application::TheClass.OnSetValue()' */
void ApplicationTheClass_OnSetValue( ApplicationTheClass _this, XRect value )
{
  if ( !EwCompRect( _this->Value, value ))
    return;

  _this->Value = value;
}

/* 'C' function for method : 'Application::TheClass.OnSetOutlet1()' */
void ApplicationTheClass_OnSetOutlet1( ApplicationTheClass _this, XRef value )
{
  if ( !EwCompRef( _this->Outlet1, value ))
    return;

  _this->Outlet1 = value;
}

/* 'C' function for method : 'Application::TheClass.OnSetValue11()' */
void ApplicationTheClass_OnSetValue11( ApplicationTheClass _this, XRect value )
{
  if ( !EwCompRect( _this->Value11, value ))
    return;

  _this->Value11 = value;
}

/* 'C' function for method : 'Application::TheClass.OnSetValue22()' */
void ApplicationTheClass_OnSetValue22( ApplicationTheClass _this, XRect value )
{
  if ( !EwCompRect( _this->Value22, value ))
    return;

  _this->Value22 = value;
}

/* Variants derived from the class : 'Application::TheClass' */
EW_DEFINE_CLASS_VARIANTS( ApplicationTheClass )
EW_END_OF_CLASS_VARIANTS( ApplicationTheClass )

/* Virtual Method Table (VMT) for the class : 'Application::TheClass' */
EW_DEFINE_CLASS( ApplicationTheClass, EffectsEffect, Outlet, Outlet, Outlet, Outlet, 
                 Value1, Value1, "Application::TheClass" )
  ApplicationTheClass_Animate,
EW_END_OF_CLASS( ApplicationTheClass )

/* Include a file containing the bitmap resource : 'Application::ShopCups' */
#include "_ApplicationShopCups.h"

/* Table with links to derived variants of the bitmap resource : 'Application::ShopCups' */
EW_RES_WITHOUT_VARIANTS( ApplicationShopCups )

/* Include a file containing the bitmap resource : 'Application::ShopBalls' */
#include "_ApplicationShopBalls.h"

/* Table with links to derived variants of the bitmap resource : 'Application::ShopBalls' */
EW_RES_WITHOUT_VARIANTS( ApplicationShopBalls )

/* Initializer for the class 'Application::Shop' */
void ApplicationShop__Init( ApplicationShop _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationShop );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsRectangle__Init( &_this->Rectangle1, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  CoreHorizontalList__Init( &_this->HorizontalList, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->CupsBtn, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->BallsBtn, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->MusicBtn, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfigNormal, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfigSelected, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PacksBtn, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationShop );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const009D );
  ViewsRectangle_OnSetColorBL( &_this->Rectangle, _Const009E );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const009F );
  ViewsRectangle_OnSetColorTR( &_this->Rectangle, _Const00A0 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const00A1 );
  CoreRectView__OnSetBounds( &_this->Rectangle1, _Const00A2 );
  ViewsRectangle_OnSetColorBL( &_this->Rectangle1, _Const00A3 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle1, _Const00A3 );
  ViewsRectangle_OnSetColorTR( &_this->Rectangle1, _Const00A4 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle1, _Const00A4 );
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00A5 );
  CoreSlideTouchHandler_OnSetSnapLast( &_this->SlideTouchHandler, _Const0004 );
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const00A6 );
  CoreSlideTouchHandler_OnSetSnapFirst( &_this->SlideTouchHandler, _Const0004 );
  _this->SlideTouchHandler.SlideVert = 0;
  CoreView_OnSetStackingPriority((CoreView)&_this->HorizontalList, 10 );
  CoreRectView__OnSetBounds( &_this->HorizontalList, _Const00A2 );
  CoreHorizontalList_OnSetItemWidth( &_this->HorizontalList, 160 );
  CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 13 );
  CoreHorizontalList_OnSetItemClass( &_this->HorizontalList, EW_CLASS( ApplicationShopListItem ));
  CoreRectView__OnSetBounds( &_this->CupsBtn, _Const00A7 );
  WidgetSetPushButton_OnSetLabel( &_this->CupsBtn, EwLoadString( &_Const00A8 ));
  CoreRectView__OnSetBounds( &_this->BallsBtn, _Const00A9 );
  WidgetSetPushButton_OnSetLabel( &_this->BallsBtn, EwLoadString( &_Const00AA ));
  CoreRectView__OnSetBounds( &_this->MusicBtn, _Const00AB );
  WidgetSetPushButton_OnSetLabel( &_this->MusicBtn, EwLoadString( &_Const00AC ));
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( &_this->PushButtonConfigNormal, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( &_this->PushButtonConfigNormal, 
  1 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfigNormal, 
  _Const00AE );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfigNormal, 
  _Const00AF );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfigNormal, 
  _Const00AF );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfigNormal, 
  _Const00AF );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfigNormal, 
  _Const00AF );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( &_this->PushButtonConfigSelected, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( &_this->PushButtonConfigSelected, 
  1 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfigSelected, 
  _Const00B0 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfigSelected, 
  _Const00AF );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfigSelected, 
  _Const00AF );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfigSelected, 
  _Const00AF );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfigSelected, 
  _Const00AF );
  CoreRectView__OnSetBounds( &_this->Image, _Const00B1 );
  ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentAlignHorzCenter | 
  ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  CoreRectView__OnSetBounds( &_this->Text, _Const00B2 );
  ViewsText_OnSetColorBL( &_this->Text, _Const0033 );
  ViewsText_OnSetColorBR( &_this->Text, _Const0034 );
  ViewsText_OnSetColorTR( &_this->Text, _Const0035 );
  ViewsText_OnSetColorTL( &_this->Text, _Const0036 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00B3 ));
  CoreRectView__OnSetBounds( &_this->PushButton, _Const00B4 );
  WidgetSetPushButton_OnSetIconFrame( &_this->PushButton, 9 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, 0 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfig, 
  _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfig, 
  _Const004C );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( &_this->PushButtonConfig, 
  2 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfig, _Const004D );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintActive( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetFaceTintActive( &_this->PushButtonConfig, _Const004F );
  WidgetSetPushButtonConfig_OnSetFaceTintFocused( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDisabled( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDefault( &_this->PushButtonConfig, _Const0050 );
  _this->Songs[ 0 ] = EwShareString( EwLoadString( &_Const00B5 ));
  _this->Songs[ 1 ] = EwShareString( EwLoadString( &_Const00B6 ));
  _this->Songs[ 2 ] = EwShareString( EwLoadString( &_Const00B7 ));
  _this->Songs[ 3 ] = EwShareString( EwLoadString( &_Const00B8 ));
  _this->Songs[ 4 ] = EwShareString( EwLoadString( &_Const00B9 ));
  _this->Songs[ 5 ] = EwShareString( EwLoadString( &_Const00BA ));
  _this->Songs[ 6 ] = EwShareString( EwLoadString( &_Const00BB ));
  _this->Songs[ 7 ] = EwShareString( EwLoadString( &_Const00BC ));
  _this->Songs[ 8 ] = EwShareString( EwLoadString( &_Const00BD ));
  _this->Songs[ 9 ] = EwShareString( EwLoadString( &_Const00BE ));
  _this->Songs[ 10 ] = EwShareString( EwLoadString( &_Const00BF ));
  _this->Songs[ 11 ] = EwShareString( EwLoadString( &_Const00C0 ));
  _this->Songs[ 12 ] = EwShareString( EwLoadString( &_Const00C1 ));
  _this->Songs[ 13 ] = EwShareString( EwLoadString( &_Const00C2 ));
  _this->Songs[ 14 ] = EwShareString( EwLoadString( &_Const00C3 ));
  _this->Songs[ 15 ] = EwShareString( EwLoadString( &_Const00C4 ));
  CoreRectView__OnSetBounds( &_this->PacksBtn, _Const00C5 );
  WidgetSetPushButton_OnSetLabel( &_this->PacksBtn, EwLoadString( &_Const00C6 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->HorizontalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->CupsBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->BallsBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->MusicBtn ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PacksBtn ), 0 );
  _this->HorizontalList.OnLoadItem = EwNewSlot( _this, ApplicationShop_OnLoadItem );
  CoreHorizontalList_OnSetSlideHandler( &_this->HorizontalList, &_this->SlideTouchHandler );
  _this->CupsBtn.OnPress = EwNewSlot( _this, ApplicationShop_SelectShopTab );
  WidgetSetPushButton_OnSetAppearance( &_this->CupsBtn, &_this->PushButtonConfigSelected );
  _this->BallsBtn.OnPress = EwNewSlot( _this, ApplicationShop_SelectShopTab );
  WidgetSetPushButton_OnSetAppearance( &_this->BallsBtn, &_this->PushButtonConfigNormal );
  _this->MusicBtn.OnPress = EwNewSlot( _this, ApplicationShop_SelectShopTab );
  WidgetSetPushButton_OnSetAppearance( &_this->MusicBtn, &_this->PushButtonConfigNormal );
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfigNormal, EwLoadResource( 
  &ApplicationFont1, ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfigSelected, EwLoadResource( 
  &ApplicationFont1, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationCoin, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationShop_Back );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton, EwLoadResource( &ResourcesNavigationIconsMedium, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetFaceBitmapActive( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig, 0 );
  _this->Obj = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  _this->PacksBtn.OnPress = EwNewSlot( _this, ApplicationShop_SelectShopTab );
  WidgetSetPushButton_OnSetAppearance( &_this->PacksBtn, &_this->PushButtonConfigNormal );

  /* Call the user defined constructor */
  ApplicationShop_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Shop' */
void ApplicationShop__ReInit( ApplicationShop _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsRectangle__ReInit( &_this->Rectangle1 );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  CoreHorizontalList__ReInit( &_this->HorizontalList );
  WidgetSetPushButton__ReInit( &_this->CupsBtn );
  WidgetSetPushButton__ReInit( &_this->BallsBtn );
  WidgetSetPushButton__ReInit( &_this->MusicBtn );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfigNormal );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfigSelected );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Text );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
  WidgetSetPushButton__ReInit( &_this->PacksBtn );
}

/* Finalizer method for the class 'Application::Shop' */
void ApplicationShop__Done( ApplicationShop _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsRectangle__Done( &_this->Rectangle1 );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  CoreHorizontalList__Done( &_this->HorizontalList );
  WidgetSetPushButton__Done( &_this->CupsBtn );
  WidgetSetPushButton__Done( &_this->BallsBtn );
  WidgetSetPushButton__Done( &_this->MusicBtn );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfigNormal );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfigSelected );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Text );
  WidgetSetPushButton__Done( &_this->PushButton );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );
  WidgetSetPushButton__Done( &_this->PacksBtn );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationShop_Init( ApplicationShop _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ApplicationDeviceClass_OnSetShopTab( _this->Obj, 1 );
  ViewsText_OnSetString( &_this->Text, EwNewStringInt( _this->Obj->Coins, 0, 10 ));
  EwAttachRefObserver( EwNewSlot( _this, ApplicationShop_UpdateOnBuy ), EwNewRef( 
    _this->Obj, ApplicationDeviceClass_OnGetCoins, ApplicationDeviceClass_OnSetCoins ), 
    0 );
  EwAttachRefObserver( EwNewSlot( _this, ApplicationShop_UpdateOnBuy ), EwNewRef( 
    _this->Obj, ApplicationDeviceClass_OnGetActiveCup, ApplicationDeviceClass_OnSetActiveCup ), 
    0 );
  EwAttachRefObserver( EwNewSlot( _this, ApplicationShop_UpdateOnBuy ), EwNewRef( 
    _this->Obj, ApplicationDeviceClass_OnGetActiveBall, ApplicationDeviceClass_OnSetActiveBall ), 
    0 );
  EwAttachRefObserver( EwNewSlot( _this, ApplicationShop_UpdateOnBuy ), EwNewRef( 
    _this->Obj, ApplicationDeviceClass_OnGetActiveMusic, ApplicationDeviceClass_OnSetActiveMusic ), 
    0 );
  EwAttachRefObserver( EwNewSlot( _this, ApplicationShop_UpdateOnBuy ), EwNewRef( 
    _this->Obj, ApplicationDeviceClass_OnGetHallAct, ApplicationDeviceClass_OnSetHallAct ), 
    0 );
  ApplicationShop_BringFromDB( _this );
}

/* This method is called by 'HorizontalList' every time the list loads or updates 
   an item. */
void ApplicationShop_OnLoadItem( ApplicationShop _this, XObject sender )
{
  XInt32 itemNo;
  ApplicationShopListItem itemView;
  XInt32 coins;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->HorizontalList.Item;
  itemView = EwCastObject( _this->HorizontalList.View, ApplicationShopListItem );

  if ( itemView == 0 )
    return;

  ApplicationShop_BringFromDB( _this );
  ApplicationShopListItem_OnSetProperty( itemView, _this->Obj->ShopTab );
  coins = _this->Obj->Coins;

  if ( itemView->Property == 1 )
  {
    CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 13 );
    ApplicationShopListItem_OnSetImageNr( itemView, itemNo );
    ApplicationShopListItem_OnSetBought( itemView, 0 );

    if (( itemNo / 11 ) == 0 )
      ApplicationShopListItem_OnSetPrice( itemView, 500 );
    else
      ApplicationShopListItem_OnSetPrice( itemView, 1000 );

    if ( _this->Obj->CupsArray[ EwCheckIndex( itemNo, 13 )])
      ApplicationShopListItem_OnSetBought( itemView, 1 );
  }
  else
    if ( itemView->Property == 2 )
    {
      CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 10 );
      ApplicationShopListItem_OnSetImageNr( itemView, itemNo );
      ApplicationShopListItem_OnSetBought( itemView, 0 );

      if (( itemNo / 8 ) == 0 )
        ApplicationShopListItem_OnSetPrice( itemView, 500 );
      else
        ApplicationShopListItem_OnSetPrice( itemView, 1000 );

      if ( _this->Obj->BallsArray[ EwCheckIndex( itemNo, 10 )])
        ApplicationShopListItem_OnSetBought( itemView, 1 );
    }
    else
      if ( itemView->Property == 3 )
      {
        CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 16 );
        ApplicationShopListItem_OnSetImageNr( itemView, itemNo );
        ApplicationShopListItem_OnSetBought( itemView, 0 );
        ApplicationShopListItem_OnSetPrice( itemView, 1500 );
        ViewsText_OnSetString( &itemView->SongName, _this->Songs[ EwCheckIndex( 
        itemNo, 16 )]);

        if ( _this->Obj->MusicsArray[ EwCheckIndex( itemNo, 16 )])
          ApplicationShopListItem_OnSetBought( itemView, 1 );
      }
      else
      {
        CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 1 );
        ApplicationShopListItem_OnSetImageNr( itemView, itemNo );
        ApplicationShopListItem_OnSetBought( itemView, 0 );
        ApplicationShopListItem_OnSetPrice( itemView, 6000 );

        if ( _this->Obj->HallPack == 1 )
          ApplicationShopListItem_OnSetBought( itemView, 1 );
      }

  if ( coins >= itemView->Price )
    ApplicationShopListItem_OnSetColor( itemView, _Const00C7 );
  else
    ApplicationShopListItem_OnSetColor( itemView, _Const00C8 );

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, _this->HorizontalList.ViewSize ));
}

/* 'C' function for method : 'Application::Shop.SelectShopTab()' */
void ApplicationShop_SelectShopTab( ApplicationShop _this, XObject sender )
{
  WidgetSetPushButton btn = EwCastObject( sender, WidgetSetPushButton );

  if ( btn == &_this->CupsBtn )
  {
    WidgetSetPushButton_OnSetAppearance( btn, &_this->PushButtonConfigSelected );
    WidgetSetPushButton_OnSetAppearance( &_this->BallsBtn, &_this->PushButtonConfigNormal );
    WidgetSetPushButton_OnSetAppearance( &_this->MusicBtn, &_this->PushButtonConfigNormal );
    WidgetSetPushButton_OnSetAppearance( &_this->PacksBtn, &_this->PushButtonConfigNormal );
    ApplicationDeviceClass_OnSetShopTab( _this->Obj, 1 );
    CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 13 );
    CoreHorizontalList_InvalidateItems( &_this->HorizontalList, 0, _this->HorizontalList.NoOfItems 
    - 1 );
  }
  else
    if ( btn == &_this->BallsBtn )
    {
      WidgetSetPushButton_OnSetAppearance( btn, &_this->PushButtonConfigSelected );
      WidgetSetPushButton_OnSetAppearance( &_this->CupsBtn, &_this->PushButtonConfigNormal );
      WidgetSetPushButton_OnSetAppearance( &_this->MusicBtn, &_this->PushButtonConfigNormal );
      WidgetSetPushButton_OnSetAppearance( &_this->PacksBtn, &_this->PushButtonConfigNormal );
      ApplicationDeviceClass_OnSetShopTab( _this->Obj, 2 );
      CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 10 );
      CoreHorizontalList_InvalidateItems( &_this->HorizontalList, 0, _this->HorizontalList.NoOfItems 
      - 1 );
    }
    else
      if ( btn == &_this->MusicBtn )
      {
        WidgetSetPushButton_OnSetAppearance( btn, &_this->PushButtonConfigSelected );
        WidgetSetPushButton_OnSetAppearance( &_this->BallsBtn, &_this->PushButtonConfigNormal );
        WidgetSetPushButton_OnSetAppearance( &_this->CupsBtn, &_this->PushButtonConfigNormal );
        WidgetSetPushButton_OnSetAppearance( &_this->PacksBtn, &_this->PushButtonConfigNormal );
        ApplicationDeviceClass_OnSetShopTab( _this->Obj, 3 );
        CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 16 );
        CoreHorizontalList_InvalidateItems( &_this->HorizontalList, 0, _this->HorizontalList.NoOfItems 
        - 1 );
      }
      else
      {
        WidgetSetPushButton_OnSetAppearance( btn, &_this->PushButtonConfigSelected );
        WidgetSetPushButton_OnSetAppearance( &_this->CupsBtn, &_this->PushButtonConfigNormal );
        WidgetSetPushButton_OnSetAppearance( &_this->BallsBtn, &_this->PushButtonConfigNormal );
        WidgetSetPushButton_OnSetAppearance( &_this->MusicBtn, &_this->PushButtonConfigNormal );
        ApplicationDeviceClass_OnSetShopTab( _this->Obj, 4 );
        CoreHorizontalList_OnSetNoOfItems( &_this->HorizontalList, 1 );
        CoreHorizontalList_InvalidateItems( &_this->HorizontalList, 0, _this->HorizontalList.NoOfItems 
        - 1 );
      }
}

/* 'C' function for method : 'Application::Shop.UpdateOnBuy()' */
void ApplicationShop_UpdateOnBuy( ApplicationShop _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  ViewsText_OnSetString( &_this->Text, EwNewStringInt( _this->Obj->Coins, 0, 10 ));
  CoreHorizontalList_InvalidateItems( &_this->HorizontalList, 0, _this->HorizontalList.NoOfItems 
  - 1 );
  ApplicationShop_UpdateArr( _this );
}

/* 'C' function for method : 'Application::Shop.Back()' */
void ApplicationShop_Back( ApplicationShop _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  0;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeMainMenu );
}

/* 'C' function for method : 'Application::Shop.BringFromDB()' */
void ApplicationShop_BringFromDB( ApplicationShop _this )
{
  XInt32 ACup = 10;
  XInt32 ABall = 5;
  XInt32 AMusic = 14;
  XInt32 Coins = 6000;
  XBool AHall = 0;

  {
    ACup=GetActiveCup();
    ABall=GetActiveBall();
    AMusic=GetActiveMusic();
    Coins=GetCoins();
    AHall=GetHalloweenActive();
  }
  ApplicationDeviceClass_OnSetActiveCup( _this->Obj, ACup );
  ApplicationDeviceClass_OnSetActiveBall( _this->Obj, ABall );
  ApplicationDeviceClass_OnSetActiveMusic( _this->Obj, AMusic );
  ApplicationDeviceClass_OnSetCoins( _this->Obj, Coins );
  ApplicationDeviceClass_OnSetHallAct( _this->Obj, AHall );
  ApplicationShop_GetArrays( _this );
}

/* 'C' function for method : 'Application::Shop.UpdateArr()' */
void ApplicationShop_UpdateArr( ApplicationShop _this )
{
  XBool CupsArray[ 13 ] = {0};
  XBool BallsArray[ 10 ] = {0};
  XBool MusicArray[ 16 ] = {0};
  XBool hallPack = _this->Obj->HallPack;
  XBool hallAct = _this->Obj->HallAct;
  XInt32 i;

  for ( i = 0; i < 13; i++ )
    CupsArray[ EwCheckIndex( i, 13 )] = _this->Obj->CupsArray[ EwCheckIndex( i, 
    13 )];

  for ( i = 0; i < 10; i++ )
    BallsArray[ EwCheckIndex( i, 10 )] = _this->Obj->BallsArray[ EwCheckIndex( i, 
    10 )];

  for ( i = 0; i < 16; i++ )
    MusicArray[ EwCheckIndex( i, 16 )] = _this->Obj->MusicsArray[ EwCheckIndex( 
    i, 16 )];

  {
    UpdateArrays(CupsArray,BallsArray,MusicArray);
    SetHalloweenBought(hallPack);
    SetHalloweenActive(hallAct);
    var cups=GetCupsArray();
    var balls=GetBallsArray();
    var musics=GetMusicArray();
    for(let i=0;i<cups.length;i++)
        CupsArray[i]=cups[i];
    for(i=0;i<balls.length;i++)
        BallsArray[i]=balls[i];
    for(i=0;i<musics.length;i++)
        MusicArray[i]=musics[i];
  }

  for ( i = 0; i < 13; i++ )
    _this->Obj->CupsArray[ EwCheckIndex( i, 13 )] = CupsArray[ EwCheckIndex( i, 
    13 )];

  for ( i = 0; i < 10; i++ )
    _this->Obj->BallsArray[ EwCheckIndex( i, 10 )] = BallsArray[ EwCheckIndex( i, 
    10 )];

  for ( i = 0; i < 16; i++ )
    _this->Obj->MusicsArray[ EwCheckIndex( i, 16 )] = MusicArray[ EwCheckIndex( 
    i, 16 )];

  ApplicationDeviceClass_OnSetHallPack( _this->Obj, hallPack );
  ApplicationDeviceClass_OnSetHallAct( _this->Obj, hallAct );
}

/* 'C' function for method : 'Application::Shop.GetArrays()' */
void ApplicationShop_GetArrays( ApplicationShop _this )
{
  XBool CupsArray[ 13 ] = {0};
  XBool BallsArray[ 10 ] = {0};
  XBool MusicArray[ 16 ] = {0};
  XBool hallPack = _this->Obj->HallPack;
  XInt32 i;

  {
    var cups=GetCupsArray();
    var balls=GetBallsArray();
    var musics=GetMusicArray();
    hallPack=GetHalloweenBought();
    for(let i=0;i<cups.length;i++)
        CupsArray[i]=cups[i];
    for(i=0;i<balls.length;i++)
        BallsArray[i]=balls[i];
    for(i=0;i<musics.length;i++)
        MusicArray[i]=musics[i];
  }

  for ( i = 0; i < 13; i++ )
    _this->Obj->CupsArray[ EwCheckIndex( i, 13 )] = CupsArray[ EwCheckIndex( i, 
    13 )];

  for ( i = 0; i < 10; i++ )
    _this->Obj->BallsArray[ EwCheckIndex( i, 10 )] = BallsArray[ EwCheckIndex( i, 
    10 )];

  for ( i = 0; i < 16; i++ )
    _this->Obj->MusicsArray[ EwCheckIndex( i, 16 )] = MusicArray[ EwCheckIndex( 
    i, 16 )];

  ApplicationDeviceClass_OnSetHallPack( _this->Obj, hallPack );
}

/* Variants derived from the class : 'Application::Shop' */
EW_DEFINE_CLASS_VARIANTS( ApplicationShop )
EW_END_OF_CLASS_VARIANTS( ApplicationShop )

/* Virtual Method Table (VMT) for the class : 'Application::Shop' */
EW_DEFINE_CLASS( ApplicationShop, CoreGroup, Rectangle, Obj, Songs, Songs, Songs, 
                 _.VMT, "Application::Shop" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationShop )

/* Initializer for the class 'Application::ShopListItem' */
void ApplicationShopListItem__Init( ApplicationShopListItem _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationShopListItem );

  /* ... then construct all embedded objects */
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfigBuy, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfigSold, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Active, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->SongName, &_this->_.XObject, 0 );
  CoreTimer__Init( &_this->AchPopDismiss, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationShopListItem );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const00C9 );
  CoreRectView__OnSetBounds( &_this->Image, _Const00CA );
  ViewsImage_OnSetFrameNumber( &_this->Image, -1 );
  ViewsImage_OnSetVisible( &_this->Image, 1 );
  CoreView_OnSetStackingPriority((CoreView)&_this->PushButton, 0 );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const00CB );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const00CC ));
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfigBuy, 
  _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbShadowOffsetFocused( &_this->PushButtonConfigBuy, 
  _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( &_this->PushButtonConfigBuy, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfigBuy, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( &_this->PushButtonConfigBuy, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( &_this->PushButtonConfigBuy, 
  1 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfigBuy, 
  _Const00CD );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfigBuy, 
  _Const00CE );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfigBuy, 
  _Const00CE );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfigBuy, 
  _Const00CF );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfigBuy, 
  _Const00CF );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfigBuy, 
  _Const00CF );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfigBuy, 
  _Const00CF );
  CoreRectView__OnSetBounds( &_this->Text, _Const00D0 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00D1 ));
  ViewsText_OnSetColor( &_this->Text, _Const00C8 );
  _this->ImageNr = -1;
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfigSold, 
  _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbShadowOffsetFocused( &_this->PushButtonConfigSold, 
  _Const0004 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorActive( &_this->PushButtonConfigSold, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfigSold, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorDefault( &_this->PushButtonConfigSold, 
  _Const00AD );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthDefault( &_this->PushButtonConfigSold, 
  1 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfigSold, 
  _Const00D2 );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfigSold, 
  _Const00D3 );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfigSold, 
  _Const00D3 );
  WidgetSetPushButtonConfig_OnSetLabelColorActive( &_this->PushButtonConfigSold, 
  _Const002C );
  WidgetSetPushButtonConfig_OnSetLabelColorFocused( &_this->PushButtonConfigSold, 
  _Const002C );
  WidgetSetPushButtonConfig_OnSetLabelColorDisabled( &_this->PushButtonConfigSold, 
  _Const002C );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfigSold, 
  _Const002C );
  _this->Color = _Const00C8;
  _this->Property = 1;
  CoreView_OnSetStackingPriority((CoreView)&_this->Active, 10 );
  CoreRectView__OnSetBounds( &_this->Active, _Const00D4 );
  ViewsImage_OnSetAlignment( &_this->Active, ViewsImageAlignmentAlignHorzCenter 
  | ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetVisible( &_this->Active, 0 );
  CoreRectView__OnSetBounds( &_this->SongName, _Const00D5 );
  ViewsText_OnSetString( &_this->SongName, 0 );
  ViewsText_OnSetColor( &_this->SongName, _Const0030 );
  ViewsText_OnSetVisible( &_this->SongName, 0 );
  CoreTimer_OnSetPeriod( &_this->AchPopDismiss, 2000 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Active ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SongName ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationShopCups, ResourcesBitmap ));
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationShopListItem_Buy );
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfigBuy );
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfigBuy, EwLoadResource( 
  &ApplicationFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  WidgetSetPushButtonConfig_OnSetLabelFont( &_this->PushButtonConfigSold, EwLoadResource( 
  &ApplicationFont1, ResourcesFont ));
  _this->Obj = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );
  ViewsImage_OnSetBitmap( &_this->Active, EwLoadResource( &ApplicationCheck, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->SongName, EwLoadResource( &ApplicationMusicFont, 
  ResourcesFont ));
  _this->AchPopDismiss.OnTrigger = EwNewSlot( _this, ApplicationShopListItem_AchPopTrigger );

  /* Call the user defined constructor */
  ApplicationShopListItem_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::ShopListItem' */
void ApplicationShopListItem__ReInit( ApplicationShopListItem _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsImage__ReInit( &_this->Image );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfigBuy );
  ViewsText__ReInit( &_this->Text );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfigSold );
  ViewsImage__ReInit( &_this->Active );
  ViewsText__ReInit( &_this->SongName );
  CoreTimer__ReInit( &_this->AchPopDismiss );
}

/* Finalizer method for the class 'Application::ShopListItem' */
void ApplicationShopListItem__Done( ApplicationShopListItem _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsImage__Done( &_this->Image );
  WidgetSetPushButton__Done( &_this->PushButton );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfigBuy );
  ViewsText__Done( &_this->Text );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfigSold );
  ViewsImage__Done( &_this->Active );
  ViewsText__Done( &_this->SongName );
  CoreTimer__Done( &_this->AchPopDismiss );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationShopListItem_Init( ApplicationShopListItem _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::ShopListItem.OnSetPrice()' */
void ApplicationShopListItem_OnSetPrice( ApplicationShopListItem _this, XInt32 value )
{
  if ( _this->Price == value )
    return;

  _this->Price = value;
  ViewsText_OnSetString( &_this->Text, EwNewStringInt( value, 0, 10 ));
  ApplicationShopListItem_SongNameVisible( _this );
}

/* 'C' function for method : 'Application::ShopListItem.OnSetImageNr()' */
void ApplicationShopListItem_OnSetImageNr( ApplicationShopListItem _this, XInt32 
  value )
{
  if ( _this->ImageNr == value )
    return;

  _this->ImageNr = value;
  ViewsImage_OnSetFrameNumber( &_this->Image, value );
}

/* 'C' function for method : 'Application::ShopListItem.OnSetBought()' */
void ApplicationShopListItem_OnSetBought( ApplicationShopListItem _this, XBool value )
{
  if ( _this->Bought == value )
    return;

  _this->Bought = value;
  ApplicationShopListItem_ActiveItem( _this );
  ApplicationShopListItem_BoughtOrNot( _this, value );
  ApplicationShopListItem_SongNameVisible( _this );
}

/* 'C' function for method : 'Application::ShopListItem.OnSetColor()' */
void ApplicationShopListItem_OnSetColor( ApplicationShopListItem _this, XColor value )
{
  if ( !EwCompColor( _this->Color, value ))
    return;

  _this->Color = value;
  ViewsText_OnSetColor( &_this->Text, value );
}

/* 'C' function for method : 'Application::ShopListItem.OnSetProperty()' */
void ApplicationShopListItem_OnSetProperty( ApplicationShopListItem _this, XInt32 
  value )
{
  if ( _this->Property == value )
    return;

  _this->Property = value;

  switch ( value )
  {
    case 1 :
    {
      ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationShopCups, 
      ResourcesBitmap ));
      ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
    }
    break;

    case 2 :
    {
      ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationShopBalls, 
      ResourcesBitmap ));
      ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
    }
    break;

    case 3 :
    {
      ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationShopMusic, 
      ResourcesBitmap ));
      ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter );
    }
    break;

    case 4 :
    {
      ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationPumpkings, 
      ResourcesBitmap ));
      ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentAlignHorzCenter 
      | ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
    }
    break;

    default :; 
  }
}

/* 'C' function for method : 'Application::ShopListItem.Buy()' */
void ApplicationShopListItem_Buy( ApplicationShopListItem _this, XObject sender )
{
  WidgetSetPushButton btn = EwCastObject( sender, WidgetSetPushButton );
  XInt32 frame = 2;

  if ( !EwCompString( btn->Label, EwLoadString( &_Const00CC )))
  {
    if ( _this->Obj->Coins >= _this->Price )
    {
      ApplicationShopListItem_OnSetBought( _this, 1 );

      if ( _this->Obj->ShopTab == 1 )
      {
        _this->Obj->CupsArray[ EwCheckIndex( _this->ImageNr, 13 )] = 1;
        ApplicationDeviceClass_OnSetCoins( _this->Obj, _this->Obj->Coins - _this->Price );
      }
      else
        if ( _this->Obj->ShopTab == 2 )
        {
          _this->Obj->BallsArray[ EwCheckIndex( _this->ImageNr, 10 )] = 1;
          ApplicationDeviceClass_OnSetCoins( _this->Obj, _this->Obj->Coins - _this->Price );
        }
        else
          if ( _this->Obj->ShopTab == 3 )
          {
            _this->Obj->MusicsArray[ EwCheckIndex( _this->ImageNr, 16 )] = 1;
            ApplicationDeviceClass_OnSetCoins( _this->Obj, _this->Obj->Coins - _this->Price );
          }
          else
          {
            ApplicationDeviceClass_OnSetHallPack( _this->Obj, 1 );
            ApplicationDeviceClass_OnSetCoins( _this->Obj, _this->Obj->Coins - _this->Price );
          }

      ApplicationShopListItem_UpdateCoinsSpent( _this );
      frame = ApplicationShopListItem_Check( _this, _this->Obj->ShopTab );

      if ( frame != -1 )
      {
        ApplicationDeviceClass_OnSetAchFrame( _this->Obj, frame );
        CoreTimer_OnSetEnabled( &_this->AchPopDismiss, 1 );
        CoreGroup__PresentDialog( EwGetAppRootObject(), ((CoreGroup)EwNewObject( 
        ApplicationAchPop, 0 )), ((EffectsTransition)EwGetAutoObject( &EffectsSlideDownCentered, 
        EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, EwNullSlot, 0 );
      }
    }
  }
  else
    if ( !EwCompString( btn->Label, EwLoadString( &_Const00D6 )))
    {
      if ( _this->Obj->ShopTab == 1 )
        ApplicationDeviceClass_OnSetActiveCup( _this->Obj, _this->ImageNr );
      else
        if ( _this->Obj->ShopTab == 2 )
          ApplicationDeviceClass_OnSetActiveBall( _this->Obj, _this->ImageNr );
        else
          if ( _this->Obj->ShopTab == 3 )
          {
            ApplicationDeviceClass_OnSetActiveMusic( _this->Obj, _this->ImageNr );
            ApplicationShopListItem_PlayNewActiveMusic( _this );
          }
          else
            ApplicationDeviceClass_OnSetHallAct( _this->Obj, 1 );

      ApplicationShopListItem_UpdateActives( _this );
    }
    else
      if ( !EwCompString( btn->Label, EwLoadString( &_Const00D7 )) && ( _this->Obj->ShopTab 
          == 4 ))
      {
        WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfigSold );
        ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00D8 ));
        WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const00D6 ));
        ApplicationDeviceClass_OnSetHallAct( _this->Obj, 0 );
        EwTrace( "%s%b", EwLoadString( &_Const00D9 ), _this->Obj->HallAct );
      }
}

/* 'C' function for method : 'Application::ShopListItem.SongNameVisible()' */
void ApplicationShopListItem_SongNameVisible( ApplicationShopListItem _this )
{
  if ( _this->Obj->ShopTab == 3 )
  {
    if ( ViewsImage_OnGetVisible( &_this->Active ))
      ViewsText_OnSetVisible( &_this->SongName, 0 );
    else
      ViewsText_OnSetVisible( &_this->SongName, 1 );
  }
  else
    ViewsText_OnSetVisible( &_this->SongName, 0 );
}

/* 'C' function for method : 'Application::ShopListItem.PlayNewActiveMusic()' */
void ApplicationShopListItem_PlayNewActiveMusic( ApplicationShopListItem _this )
{
  XString name = _this->SongName.String;

  {
    SelectMusic(name);
    SetActiveMusicName(name);
  }
}

/* 'C' function for method : 'Application::ShopListItem.BoughtOrNot()' */
void ApplicationShopListItem_BoughtOrNot( ApplicationShopListItem _this, XBool aArg1 )
{
  if ( aArg1 )
  {
    WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfigSold );
    ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00D8 ));

    if ( ViewsImage_OnGetVisible( &_this->Active ))
      WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const00D7 ));
    else
      WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const00D6 ));
  }
  else
  {
    WidgetSetPushButton_OnSetLabel( &_this->PushButton, EwLoadString( &_Const00CC ));
    WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfigBuy );
    ViewsText_OnSetString( &_this->Text, EwNewStringInt( _this->Price, 0, 10 ));
  }
}

/* 'C' function for method : 'Application::ShopListItem.ActiveItem()' */
void ApplicationShopListItem_ActiveItem( ApplicationShopListItem _this )
{
  if ( _this->Obj->ShopTab == 1 )
  {
    if ( _this->Obj->ActiveCup == _this->ImageNr )
      ViewsImage_OnSetVisible( &_this->Active, 1 );
    else
      ViewsImage_OnSetVisible( &_this->Active, 0 );
  }
  else
    if ( _this->Obj->ShopTab == 2 )
    {
      if ( _this->Obj->ActiveBall == _this->ImageNr )
        ViewsImage_OnSetVisible( &_this->Active, 1 );
      else
        ViewsImage_OnSetVisible( &_this->Active, 0 );
    }
    else
      if ( _this->Obj->ShopTab == 3 )
      {
        if ( _this->Obj->ActiveMusic == _this->ImageNr )
          ViewsImage_OnSetVisible( &_this->Active, 1 );
        else
          ViewsImage_OnSetVisible( &_this->Active, 0 );
      }
      else
        if ( _this->Obj->HallAct == 1 )
          ViewsImage_OnSetVisible( &_this->Active, 1 );
        else
          ViewsImage_OnSetVisible( &_this->Active, 0 );
}

/* 'C' function for method : 'Application::ShopListItem.UpdateCoinsSpent()' */
void ApplicationShopListItem_UpdateCoinsSpent( ApplicationShopListItem _this )
{
  XInt32 moneySpent = _this->Price;
  XBool pack = _this->Obj->HallPack;

  {
    UpdateMoney(-moneySpent);
    SetHalloweenBought(pack);
  }
}

/* 'C' function for method : 'Application::ShopListItem.UpdateActives()' */
void ApplicationShopListItem_UpdateActives( ApplicationShopListItem _this )
{
  XInt32 ACup = _this->Obj->ActiveCup;
  XInt32 ABall = _this->Obj->ActiveBall;
  XInt32 AMusic = _this->Obj->ActiveMusic;
  XBool APack = _this->Obj->HallAct;

  UpdatePrefs(ACup,ABall,AMusic,APack);
}

/* 'C' function for method : 'Application::ShopListItem.Check()' */
XInt32 ApplicationShopListItem_Check( ApplicationShopListItem _this, XInt32 aArg1 )
{
  XInt32 frame;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );

  frame = 2;
  {
    switch(aArg1){
       case 1: {frame=CheckCupsAchievements();break;}
       case 2: {frame=CheckBallsAchievements();break;}
       case 3: {frame=CheckMusicAchievements();break;}
       case 4: {frame=CheckHalloween();break;}
    }
  }
  return frame;
}

/* 'C' function for method : 'Application::ShopListItem.AchPopTrigger()' */
void ApplicationShopListItem_AchPopTrigger( ApplicationShopListItem _this, XObject 
  sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  CoreGroup__DismissDialog( EwGetAppRootObject(), CoreGroup__FindCurrentDialog( 
  EwGetAppRootObject()), ((EffectsTransition)EwGetAutoObject( &EffectsSlideUpCentered, 
  EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 0 );
  CoreTimer_OnSetEnabled( &_this->AchPopDismiss, 0 );
}

/* Variants derived from the class : 'Application::ShopListItem' */
EW_DEFINE_CLASS_VARIANTS( ApplicationShopListItem )
EW_END_OF_CLASS_VARIANTS( ApplicationShopListItem )

/* Virtual Method Table (VMT) for the class : 'Application::ShopListItem' */
EW_DEFINE_CLASS( ApplicationShopListItem, CoreGroup, Image, Obj, Price, Price, Price, 
                 Price, "Application::ShopListItem" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationShopListItem )

/* Include a file containing the bitmap resource : 'Application::Coin' */
#include "_ApplicationCoin.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Coin' */
EW_RES_WITHOUT_VARIANTS( ApplicationCoin )

/* Include a file containing the bitmap resource : 'Application::Check' */
#include "_ApplicationCheck.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Check' */
EW_RES_WITHOUT_VARIANTS( ApplicationCheck )

/* Include a file containing the bitmap resource : 'Application::ShopMusic' */
#include "_ApplicationShopMusic.h"

/* Table with links to derived variants of the bitmap resource : 'Application::ShopMusic' */
EW_RES_WITHOUT_VARIANTS( ApplicationShopMusic )

/* Include a file containing the font resource : 'Application::MusicFont' */
#include "_ApplicationMusicFont.h"

/* Table with links to derived variants of the font resource : 'Application::MusicFont' */
EW_RES_WITHOUT_VARIANTS( ApplicationMusicFont )

/* Include a file containing the bitmap resource : 'Application::HelpIcon' */
#include "_ApplicationHelpIcon.h"

/* Table with links to derived variants of the bitmap resource : 'Application::HelpIcon' */
EW_RES_WITHOUT_VARIANTS( ApplicationHelpIcon )

/* Include a file containing the bitmap resource : 'Application::SettingsIcon' */
#include "_ApplicationSettingsIcon.h"

/* Table with links to derived variants of the bitmap resource : 'Application::SettingsIcon' */
EW_RES_WITHOUT_VARIANTS( ApplicationSettingsIcon )

/* Initializer for the class 'Application::HelpMenu' */
void ApplicationHelpMenu__Init( ApplicationHelpMenu _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationHelpMenu );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text1, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationHelpMenu );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0048 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0049 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const002C );
  CoreRectView__OnSetBounds( &_this->Text, _Const00DA );
  ViewsText_OnSetColorBL( &_this->Text, _Const00DB );
  ViewsText_OnSetColorBR( &_this->Text, _Const00DC );
  ViewsText_OnSetColorTR( &_this->Text, _Const00DD );
  ViewsText_OnSetColorTL( &_this->Text, _Const00DE );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const00DF ));
  CoreView_OnSetLayout((CoreView)&_this->Text1, CoreLayoutAlignToLeft | CoreLayoutAlignToTop );
  CoreRectView__OnSetBounds( &_this->Text1, _Const00E0 );
  ViewsText_OnSetPadding( &_this->Text1, 10 );
  ViewsText_OnSetRowDistance( &_this->Text1, 35 );
  ViewsText_OnSetWrapText( &_this->Text1, 1 );
  ViewsText_OnSetAlignment( &_this->Text1, ViewsTextAlignmentAlignHorzLeft | ViewsTextAlignmentAlignVertTop );
  ViewsText_OnSetString( &_this->Text1, EwLoadString( &_Const00E1 ));
  ViewsText_OnSetColor( &_this->Text1, _Const008F );
  CoreRectView__OnSetBounds( &_this->Image, _Const00E2 );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const00B4 );
  WidgetSetPushButton_OnSetIconFrame( &_this->PushButton, 9 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, 0 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfig, 
  _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfig, 
  _Const004C );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( &_this->PushButtonConfig, 
  2 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfig, _Const004D );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintActive( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetFaceTintActive( &_this->PushButtonConfig, _Const004F );
  WidgetSetPushButtonConfig_OnSetFaceTintFocused( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDisabled( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDefault( &_this->PushButtonConfig, _Const0050 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text1 ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont1, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Text1, EwLoadResource( &ResourcesFontMedium, ResourcesFont ));
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationHelpImages, 
  ResourcesBitmap ));
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationHelpMenu_Back );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton, EwLoadResource( &ResourcesNavigationIconsSmall, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetFaceBitmapActive( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig, 0 );

  /* Call the user defined constructor */
  ApplicationHelpMenu_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::HelpMenu' */
void ApplicationHelpMenu__ReInit( ApplicationHelpMenu _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Text1 );
  ViewsImage__ReInit( &_this->Image );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
}

/* Finalizer method for the class 'Application::HelpMenu' */
void ApplicationHelpMenu__Done( ApplicationHelpMenu _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Text1 );
  ViewsImage__Done( &_this->Image );
  WidgetSetPushButton__Done( &_this->PushButton );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationHelpMenu_Init( ApplicationHelpMenu _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( aArg );
}

/* 'C' function for method : 'Application::HelpMenu.Back()' */
void ApplicationHelpMenu_Back( ApplicationHelpMenu _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  0;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeMainMenu );
}

/* Variants derived from the class : 'Application::HelpMenu' */
EW_DEFINE_CLASS_VARIANTS( ApplicationHelpMenu )
EW_END_OF_CLASS_VARIANTS( ApplicationHelpMenu )

/* Virtual Method Table (VMT) for the class : 'Application::HelpMenu' */
EW_DEFINE_CLASS( ApplicationHelpMenu, CoreGroup, Rectangle, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::HelpMenu" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationHelpMenu )

/* Include a file containing the bitmap resource : 'Application::HelpImages' */
#include "_ApplicationHelpImages.h"

/* Table with links to derived variants of the bitmap resource : 'Application::HelpImages' */
EW_RES_WITHOUT_VARIANTS( ApplicationHelpImages )

/* User defined inline code: 'Application::Inline1' */
/*

  TO DO:

  Include external header files or add type and function declarations needed
  in the implementation of Application::DeviceClass1. For example:

    #include "DeviceDriver.h"

    #include "your_middleware_api.h"

    void Your_Middleware_Some_Function( int aSomeArg );

*/

/* Initializer for the class 'Application::DeviceClass1' */
void ApplicationDeviceClass1__Init( ApplicationDeviceClass1 _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  TemplatesDeviceClass__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationDeviceClass1 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationDeviceClass1 );

  /* ... and initialize objects, variables, properties, etc. */
  _this->CurrentScreen = ApplicationScreenTypeMainMenu;
  _this->ShowOr = 1;

  /* Call the user defined constructor */
  ApplicationDeviceClass1_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::DeviceClass1' */
void ApplicationDeviceClass1__ReInit( ApplicationDeviceClass1 _this )
{
  /* At first re-initialize the super class ... */
  TemplatesDeviceClass__ReInit( &_this->_.Super );
}

/* Finalizer method for the class 'Application::DeviceClass1' */
void ApplicationDeviceClass1__Done( ApplicationDeviceClass1 _this )
{
  /* Call the user defined destructor of the class */
  ApplicationDeviceClass1_Done( _this );

  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( TemplatesDeviceClass );

  /* Don't forget to deinitialize the super class ... */
  TemplatesDeviceClass__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::DeviceClass1.Done()' */
void ApplicationDeviceClass1_Done( ApplicationDeviceClass1 _this )
{
  XObject thisObject = ((XObject)_this );

  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       de-initialization steps. For example, you invoke some 'C' function:

         YourDevice_DeInitialize();

       IMPORTANT:
       ----------

       The variable 'thisObject' represents the actually de-initialized instance of the
       Application::DeviceClass1. If you have stored this object at the initialization
       time (in the 'Init' method) in some global C variable or registered it by the
       middleware, it is important to perform now the opposite operation. Set the
       global variable to NULL or de-register 'thisObject' object from the middleware.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass1.Init()' */
void ApplicationDeviceClass1_Init( ApplicationDeviceClass1 _this, XHandle aArg )
{
  XObject thisObject;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  thisObject = ((XObject)_this );
  {
    /*
       TO DO:

       Depending on your application case you call functions of the underlying
       middleware (or access the device directly) in order to perform the necessary
       initialization steps. For example, you invoke some 'C' function:

         YourDevice_Initialize();

       The variable 'thisObject' represents the actually initialized instance of the
       Application::DeviceClass1. You can store this variable e.g. in the middleware
       and use it whenever the middleware needs to notify the GUI application about
       some state alternation or events. In this manner, the middleware will be able
       to invoke methods of the interface device object.

       For example, you can store 'thisObject' in some global C variable:

         // Declaration of the global C variable
         XObject theDeviceObject;

         // Store the instance in the global variable
         theDeviceObject = thisObject;

       Later use the global variable e.g. to provide the GUI application with events:

         ApplicationDeviceClass__TriggerSomeEvent( theDeviceObject );

       IMPORTANT:
       ----------

       If you store 'thisObject' for later use, don't forget to implement the opposite
       operation in the method 'Done'. Concrete, 'Done' should set the global variable
       again to the value NULL.

    */
  }
}

/* 'C' function for method : 'Application::DeviceClass1.OnGetCurrentScreen()' */
XEnum ApplicationDeviceClass1_OnGetCurrentScreen( ApplicationDeviceClass1 _this )
{
  return _this->CurrentScreen;
}

/* 'C' function for method : 'Application::DeviceClass1.OnSetCurrentScreen()' */
void ApplicationDeviceClass1_OnSetCurrentScreen( ApplicationDeviceClass1 _this, 
  XEnum value )
{
  if ( _this->CurrentScreen == value )
    return;

  _this->CurrentScreen = value;

  if ( value == ApplicationScreenTypeMainMenu )
    ShuffleEnd();

  {
    /*
       TO DO:

       You can call a function of your own device API or you simply
       modify a variable existing in your middleware to reflect the
       new value:

       YourDevice_SetSomeValue( value );

       or

       YourDevice_SomeVariable = value;
    */
  }
  EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass1_OnGetCurrentScreen, 
    ApplicationDeviceClass1_OnSetCurrentScreen ), 0 );
}

/* This method is intended to be called by the device to notify the GUI application 
   about an alternation of its setting or state value. */
void ApplicationDeviceClass1_UpdateProperty( ApplicationDeviceClass1 _this, XEnum 
  aNewValue )
{
  if ( aNewValue != _this->CurrentScreen )
  {
    _this->CurrentScreen = aNewValue;
    EwNotifyRefObservers( EwNewRef( _this, ApplicationDeviceClass1_OnGetCurrentScreen, 
      ApplicationDeviceClass1_OnSetCurrentScreen ), 0 );
  }
}

/* Wrapper function for the non virtual method : 'Application::DeviceClass1.UpdateProperty()' */
void ApplicationDeviceClass1__UpdateProperty( void* _this, XEnum aNewValue )
{
  ApplicationDeviceClass1_UpdateProperty((ApplicationDeviceClass1)_this, aNewValue );
}

/* Variants derived from the class : 'Application::DeviceClass1' */
EW_DEFINE_CLASS_VARIANTS( ApplicationDeviceClass1 )
EW_END_OF_CLASS_VARIANTS( ApplicationDeviceClass1 )

/* Virtual Method Table (VMT) for the class : 'Application::DeviceClass1' */
EW_DEFINE_CLASS( ApplicationDeviceClass1, TemplatesDeviceClass, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, _.VMT, "Application::DeviceClass1" )
EW_END_OF_CLASS( ApplicationDeviceClass1 )

/* User defined auto object: 'Application::Device1' */
EW_DEFINE_AUTOOBJECT( ApplicationDevice1, ApplicationDeviceClass1 )

/* Initializer for the auto object 'Application::Device1' */
void ApplicationDevice1__Init( ApplicationDeviceClass1 _this )
{
  EW_UNUSED_ARG( _this );
}

/* Re-Initializer for the auto object 'Application::Device1' */
void ApplicationDevice1__ReInit( ApplicationDeviceClass1 _this )
{
  EW_UNUSED_ARG( _this );
}

/* Table with links to derived variants of the auto object : 'Application::Device1' */
EW_DEFINE_AUTOOBJECT_VARIANTS( ApplicationDevice1 )
EW_END_OF_AUTOOBJECT_VARIANTS( ApplicationDevice1 )

/* Initializer for the class 'Application::Container' */
void ApplicationContainer__Init( ApplicationContainer _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationContainer );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationContainer );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0002 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
}

/* Re-Initializer for the class 'Application::Container' */
void ApplicationContainer__ReInit( ApplicationContainer _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
}

/* Finalizer method for the class 'Application::Container' */
void ApplicationContainer__Done( ApplicationContainer _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* 'C' function for method : 'Application::Container.OnSetContent()' */
void ApplicationContainer_OnSetContent( ApplicationContainer _this, CoreGroup value )
{
  if ( _this->Content == value )
    return;

  if ( value == 0 )
    CoreGroup__DismissDialog( _this, _this->Content, ((EffectsTransition)EwGetAutoObject( 
    &EffectsSlideLeftCentered, EffectsSlideTransition )), 0, 0, EwNullSlot, EwNullSlot, 
    0 );

  _this->Content = value;

  if ( value != 0 )
    switch ( EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight )
    {
      case 0 :
        CoreGroup__SwitchToDialog( _this, value, ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideLeftCentered, EffectsSlideTransition )), ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideRightCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
      break;

      case 1 :
        CoreGroup__SwitchToDialog( _this, value, ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideRightCentered, EffectsSlideTransition )), ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideLeftCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
      break;

      case 2 :
        CoreGroup__SwitchToDialog( _this, value, ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideDownCentered, EffectsSlideTransition )), ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideUpCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
      break;

      case 3 :
        CoreGroup__SwitchToDialog( _this, value, ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideUpCentered, EffectsSlideTransition )), ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideDownCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
      break;

      case 4 :
        CoreGroup__SwitchToDialog( _this, value, ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideRightCentered, EffectsSlideTransition )), ((EffectsTransition)EwGetAutoObject( 
        &EffectsSlideRightCentered, EffectsSlideTransition )), 0, 0, 0, 0, 0, EwNullSlot, 
        EwNullSlot, 0 );
      break;

      default :; 
    }
}

/* Variants derived from the class : 'Application::Container' */
EW_DEFINE_CLASS_VARIANTS( ApplicationContainer )
EW_END_OF_CLASS_VARIANTS( ApplicationContainer )

/* Virtual Method Table (VMT) for the class : 'Application::Container' */
EW_DEFINE_CLASS( ApplicationContainer, CoreGroup, Rectangle, Content, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::Container" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationContainer )

/* Include a file containing the bitmap resource : 'Application::Spider' */
#include "_ApplicationSpider.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Spider' */
EW_RES_WITHOUT_VARIANTS( ApplicationSpider )

/* Include a file containing the bitmap resource : 'Application::Pumpkings' */
#include "_ApplicationPumpkings.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Pumpkings' */
EW_RES_WITHOUT_VARIANTS( ApplicationPumpkings )

/* Include a file containing the bitmap resource : 'Application::CrystalBall' */
#include "_ApplicationCrystalBall.h"

/* Table with links to derived variants of the bitmap resource : 'Application::CrystalBall' */
EW_RES_WITHOUT_VARIANTS( ApplicationCrystalBall )

/* Initializer for the class 'Application::Achievements' */
void ApplicationAchievements__Init( ApplicationAchievements _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationAchievements );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  CoreVerticalList__Init( &_this->VerticalList, &_this->_.XObject, 0 );
  CoreSlideTouchHandler__Init( &_this->SlideTouchHandler, &_this->_.XObject, 0 );
  WidgetSetHorizontalValueBar__Init( &_this->Progress, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  WidgetSetHorizontalValueBarConfig__Init( &_this->HorizontalValueBarConfig, &_this->_.XObject, 0 );
  WidgetSetPushButton__Init( &_this->PushButton, &_this->_.XObject, 0 );
  WidgetSetPushButtonConfig__Init( &_this->PushButtonConfig, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationAchievements );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0000 );
  ViewsRectangle_OnSetColorBR( &_this->Rectangle, _Const0001 );
  ViewsRectangle_OnSetColorTL( &_this->Rectangle, _Const0002 );
  CoreRectView__OnSetBounds( &_this->VerticalList, _Const00E3 );
  CoreVerticalList_OnSetItemHeight( &_this->VerticalList, 100 );
  CoreVerticalList_OnSetNoOfItems( &_this->VerticalList, 15 );
  CoreVerticalList_OnSetItemClass( &_this->VerticalList, EW_CLASS( ApplicationAchievement ));
  CoreRectView__OnSetBounds( &_this->SlideTouchHandler, _Const00E4 );
  _this->SlideTouchHandler.Offset = _Const0004;
  CoreSlideTouchHandler_OnSetSnapNext( &_this->SlideTouchHandler, _Const00E5 );
  _this->SlideTouchHandler.SlideHorz = 0;
  _this->AchievementsNames[ 0 ] = EwShareString( EwLoadString( &_Const00E6 ));
  _this->AchievementsNames[ 1 ] = EwShareString( EwLoadString( &_Const00E7 ));
  _this->AchievementsNames[ 2 ] = EwShareString( EwLoadString( &_Const00E8 ));
  _this->AchievementsNames[ 3 ] = EwShareString( EwLoadString( &_Const00E9 ));
  _this->AchievementsNames[ 4 ] = EwShareString( EwLoadString( &_Const00EA ));
  _this->AchievementsNames[ 5 ] = EwShareString( EwLoadString( &_Const00EB ));
  _this->AchievementsNames[ 6 ] = EwShareString( EwLoadString( &_Const00EC ));
  _this->AchievementsNames[ 7 ] = EwShareString( EwLoadString( &_Const00ED ));
  _this->AchievementsNames[ 8 ] = EwShareString( EwLoadString( &_Const00EE ));
  _this->AchievementsNames[ 9 ] = EwShareString( EwLoadString( &_Const00EF ));
  _this->AchievementsNames[ 10 ] = EwShareString( EwLoadString( &_Const00F0 ));
  _this->AchievementsNames[ 11 ] = EwShareString( EwLoadString( &_Const00F1 ));
  _this->AchievementsNames[ 12 ] = EwShareString( EwLoadString( &_Const00F2 ));
  _this->AchievementsNames[ 13 ] = EwShareString( EwLoadString( &_Const00F3 ));
  _this->AchievementsNames[ 14 ] = EwShareString( EwLoadString( &_Const00F4 ));
  _this->Describing[ 0 ] = EwShareString( EwLoadString( &_Const00F5 ));
  _this->Describing[ 1 ] = EwShareString( EwLoadString( &_Const00F6 ));
  _this->Describing[ 2 ] = EwShareString( EwLoadString( &_Const00F7 ));
  _this->Describing[ 3 ] = EwShareString( EwLoadString( &_Const00F8 ));
  _this->Describing[ 4 ] = EwShareString( EwLoadString( &_Const00F9 ));
  _this->Describing[ 5 ] = EwShareString( EwLoadString( &_Const00FA ));
  _this->Describing[ 6 ] = EwShareString( EwLoadString( &_Const00FB ));
  _this->Describing[ 7 ] = EwShareString( EwLoadString( &_Const00FC ));
  _this->Describing[ 8 ] = EwShareString( EwLoadString( &_Const00FD ));
  _this->Describing[ 9 ] = EwShareString( EwLoadString( &_Const00FE ));
  _this->Describing[ 10 ] = EwShareString( EwLoadString( &_Const00FF ));
  _this->Describing[ 11 ] = EwShareString( EwLoadString( &_Const0100 ));
  _this->Describing[ 12 ] = EwShareString( EwLoadString( &_Const0101 ));
  _this->Describing[ 13 ] = EwShareString( EwLoadString( &_Const0102 ));
  _this->Describing[ 14 ] = EwShareString( EwLoadString( &_Const0103 ));
  CoreRectView__OnSetBounds( &_this->Progress, _Const0104 );
  WidgetSetHorizontalValueBar_OnSetCurrentValue( &_this->Progress, 0 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0105 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0106 ));
  ViewsText_OnSetColor( &_this->Text, _Const0107 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightColor( &_this->HorizontalValueBarConfig, 
  _Const0108 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightFlattened( &_this->HorizontalValueBarConfig, 
  1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightCornerRadius( &_this->HorizontalValueBarConfig, 
  20 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightThickness( &_this->HorizontalValueBarConfig, 
  15 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackRightWithEdge( &_this->HorizontalValueBarConfig, 
  1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftColor( &_this->HorizontalValueBarConfig, 
  _Const0109 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftFlattened( &_this->HorizontalValueBarConfig, 
  1 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftCornerRadius( &_this->HorizontalValueBarConfig, 
  20 );
  WidgetSetHorizontalValueBarConfig_OnSetTrackLeftThickness( &_this->HorizontalValueBarConfig, 
  15 );
  CoreRectView__OnSetBounds( &_this->PushButton, _Const00B4 );
  WidgetSetPushButton_OnSetIconFrame( &_this->PushButton, 9 );
  WidgetSetPushButton_OnSetLabel( &_this->PushButton, 0 );
  WidgetSetPushButtonConfig_OnSetThumbShadowColorFocused( &_this->PushButtonConfig, 
  _Const002E );
  WidgetSetPushButtonConfig_OnSetThumbShadowBlurRadiusFocused( &_this->PushButtonConfig, 
  0 );
  WidgetSetPushButtonConfig_OnSetThumbBorderColorFocused( &_this->PushButtonConfig, 
  _Const004C );
  WidgetSetPushButtonConfig_OnSetThumbBorderWidthFocused( &_this->PushButtonConfig, 
  2 );
  WidgetSetPushButtonConfig_OnSetThumbColorActive( &_this->PushButtonConfig, _Const004D );
  WidgetSetPushButtonConfig_OnSetThumbColorFocused( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDisabled( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetThumbColorDefault( &_this->PushButtonConfig, _Const004E );
  WidgetSetPushButtonConfig_OnSetLabelColorDefault( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintActive( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintFocused( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDisabled( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetIconTintDefault( &_this->PushButtonConfig, _Const0030 );
  WidgetSetPushButtonConfig_OnSetFaceTintActive( &_this->PushButtonConfig, _Const004F );
  WidgetSetPushButtonConfig_OnSetFaceTintFocused( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDisabled( &_this->PushButtonConfig, _Const0050 );
  WidgetSetPushButtonConfig_OnSetFaceTintDefault( &_this->PushButtonConfig, _Const0050 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->VerticalList ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->SlideTouchHandler ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Progress ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->PushButton ), 0 );
  _this->VerticalList.OnLoadItem = EwNewSlot( _this, ApplicationAchievements_OnLoadItem );
  CoreVerticalList_OnSetSlideHandler( &_this->VerticalList, &_this->SlideTouchHandler );
  WidgetSetHorizontalValueBar_OnSetAppearance( &_this->Progress, &_this->HorizontalValueBarConfig );
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationFont2, ResourcesFont ));
  _this->PushButton.OnPress = EwNewSlot( _this, ApplicationAchievements_Back );
  WidgetSetPushButton_OnSetIcon( &_this->PushButton, EwLoadResource( &ResourcesNavigationIconsSmall, 
  ResourcesBitmap ));
  WidgetSetPushButton_OnSetAppearance( &_this->PushButton, &_this->PushButtonConfig );
  WidgetSetPushButtonConfig_OnSetFaceBitmapActive( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapFocused( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDisabled( &_this->PushButtonConfig, 0 );
  WidgetSetPushButtonConfig_OnSetFaceBitmapDefault( &_this->PushButtonConfig, 0 );

  /* Call the user defined constructor */
  ApplicationAchievements_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::Achievements' */
void ApplicationAchievements__ReInit( ApplicationAchievements _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  CoreVerticalList__ReInit( &_this->VerticalList );
  CoreSlideTouchHandler__ReInit( &_this->SlideTouchHandler );
  WidgetSetHorizontalValueBar__ReInit( &_this->Progress );
  ViewsText__ReInit( &_this->Text );
  WidgetSetHorizontalValueBarConfig__ReInit( &_this->HorizontalValueBarConfig );
  WidgetSetPushButton__ReInit( &_this->PushButton );
  WidgetSetPushButtonConfig__ReInit( &_this->PushButtonConfig );
}

/* Finalizer method for the class 'Application::Achievements' */
void ApplicationAchievements__Done( ApplicationAchievements _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  CoreVerticalList__Done( &_this->VerticalList );
  CoreSlideTouchHandler__Done( &_this->SlideTouchHandler );
  WidgetSetHorizontalValueBar__Done( &_this->Progress );
  ViewsText__Done( &_this->Text );
  WidgetSetHorizontalValueBarConfig__Done( &_this->HorizontalValueBarConfig );
  WidgetSetPushButton__Done( &_this->PushButton );
  WidgetSetPushButtonConfig__Done( &_this->PushButtonConfig );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationAchievements_Init( ApplicationAchievements _this, XHandle aArg )
{
  XInt32 count;
  XInt32 i;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  count = 0;
  ApplicationAchievements_Check( _this );

  for ( i = 0; i < 15; i++ )
    if ( _this->Unlocked[ EwCheckIndex( i, 15 )])
      count++;

  WidgetSetHorizontalValueBar_OnSetCurrentValue( &_this->Progress, count * 6 );
  ViewsText_OnSetString( &_this->Text, EwConcatString( EwNewStringInt( WidgetSetHorizontalValueBar_OnGetCurrentValue( 
  &_this->Progress ), 0, 10 ), EwLoadString( &_Const010A )));
}

/* This method is called by 'VerticalList' every time the list loads or updates 
   an item. */
void ApplicationAchievements_OnLoadItem( ApplicationAchievements _this, XObject 
  sender )
{
  XInt32 itemNo;
  ApplicationAchievement itemView;

  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( sender );

  itemNo = _this->VerticalList.Item;
  itemView = EwCastObject( _this->VerticalList.View, ApplicationAchievement );

  if ( itemView == 0 )
    return;

  ViewsImage_OnSetFrameNumber( &itemView->Image, itemNo );
  ViewsText_OnSetString( &itemView->Title, _this->AchievementsNames[ EwCheckIndex( 
  itemNo, 15 )]);
  ViewsText_OnSetString( &itemView->Text, _this->Describing[ EwCheckIndex( itemNo, 
  15 )]);

  if ( !_this->Unlocked[ EwCheckIndex( itemNo, 15 )])
  {
    ViewsFilterScreen_OnSetVisible( &itemView->FilterScreen, 1 );
    ViewsText_OnSetColor( &itemView->Title, _Const010B );
  }
  else
  {
    ViewsFilterScreen_OnSetVisible( &itemView->FilterScreen, 0 );
    ViewsText_OnSetColor( &itemView->Title, _Const010C );
  }

  CoreRectView__OnSetBounds( itemView, EwSetRectSize( itemView->Super2.Bounds, _this->VerticalList.ViewSize ));
}

/* 'C' function for method : 'Application::Achievements.Back()' */
void ApplicationAchievements_Back( ApplicationAchievements _this, XObject sender )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( _this );
  EW_UNUSED_ARG( sender );

  EwGetAutoObject( &ApplicationDevice1, ApplicationDeviceClass1 )->LeftToRight = 
  0;
  ApplicationDeviceClass1_OnSetCurrentScreen( EwGetAutoObject( &ApplicationDevice1, 
  ApplicationDeviceClass1 ), ApplicationScreenTypeMainMenu );
}

/* 'C' function for method : 'Application::Achievements.Check()' */
void ApplicationAchievements_Check( ApplicationAchievements _this )
{
  XBool Achives[ 15 ] = {0};
  XInt32 i;

  {
    var ach=GetAchivements(); 
    for(let i=0;i<ach.length;i++)
        Achives[i]=ach[i];
  }

  for ( i = 0; i < 15; i++ )
    _this->Unlocked[ EwCheckIndex( i, 15 )] = Achives[ EwCheckIndex( i, 15 )];
}

/* Variants derived from the class : 'Application::Achievements' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAchievements )
EW_END_OF_CLASS_VARIANTS( ApplicationAchievements )

/* Virtual Method Table (VMT) for the class : 'Application::Achievements' */
EW_DEFINE_CLASS( ApplicationAchievements, CoreGroup, Rectangle, AchievementsNames, 
                 AchievementsNames, AchievementsNames, AchievementsNames, Unlocked, 
                 "Application::Achievements" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationAchievements )

/* Initializer for the class 'Application::Achievement' */
void ApplicationAchievement__Init( ApplicationAchievement _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationAchievement );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Text, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Title, &_this->_.XObject, 0 );
  ViewsFilterScreen__Init( &_this->FilterScreen, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationAchievement );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const010D );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const010E );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const010F );
  CoreRectView__OnSetBounds( &_this->Image, _Const0110 );
  CoreRectView__OnSetBounds( &_this->Text, _Const0111 );
  ViewsText_OnSetString( &_this->Text, EwLoadString( &_Const0112 ));
  ViewsText_OnSetColor( &_this->Text, _Const0030 );
  CoreRectView__OnSetBounds( &_this->Title, _Const0113 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const00E6 ));
  ViewsText_OnSetColor( &_this->Title, _Const010B );
  CoreRectView__OnSetBounds( &_this->FilterScreen, _Const0114 );
  ViewsFilterScreen_OnSetTintColor( &_this->FilterScreen, _Const002C );
  ViewsFilterScreen_OnSetTintMode( &_this->FilterScreen, GraphicsTintModeGrayscale );
  ViewsFilterScreen_OnSetBlurClampToEdges( &_this->FilterScreen, 1 );
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Text ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Title ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->FilterScreen ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationAchives, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Text, EwLoadResource( &ApplicationMusicFont, ResourcesFont ));
  ViewsText_OnSetFont( &_this->Title, EwLoadResource( &ApplicationFont, ResourcesFont ));
}

/* Re-Initializer for the class 'Application::Achievement' */
void ApplicationAchievement__ReInit( ApplicationAchievement _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Text );
  ViewsText__ReInit( &_this->Title );
  ViewsFilterScreen__ReInit( &_this->FilterScreen );
}

/* Finalizer method for the class 'Application::Achievement' */
void ApplicationAchievement__Done( ApplicationAchievement _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Text );
  ViewsText__Done( &_this->Title );
  ViewsFilterScreen__Done( &_this->FilterScreen );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* Variants derived from the class : 'Application::Achievement' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAchievement )
EW_END_OF_CLASS_VARIANTS( ApplicationAchievement )

/* Virtual Method Table (VMT) for the class : 'Application::Achievement' */
EW_DEFINE_CLASS( ApplicationAchievement, CoreGroup, Rectangle, _.VMT, _.VMT, _.VMT, 
                 _.VMT, _.VMT, "Application::Achievement" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationAchievement )

/* Include a file containing the bitmap resource : 'Application::Achives' */
#include "_ApplicationAchives.h"

/* Table with links to derived variants of the bitmap resource : 'Application::Achives' */
EW_RES_WITHOUT_VARIANTS( ApplicationAchives )

/* Include a file containing the bitmap resource : 'Application::AchiveIcon' */
#include "_ApplicationAchiveIcon.h"

/* Table with links to derived variants of the bitmap resource : 'Application::AchiveIcon' */
EW_RES_WITHOUT_VARIANTS( ApplicationAchiveIcon )

/* Initializer for the class 'Application::AchPop' */
void ApplicationAchPop__Init( ApplicationAchPop _this, XObject aLink, XHandle aArg )
{
  /* At first initialize the super class ... */
  CoreGroup__Init( &_this->_.Super, aLink, aArg );

  /* Allow the Immediate Garbage Collection to evalute the members of this class. */
  _this->_.XObject._.GCT = EW_CLASS_GCT( ApplicationAchPop );

  /* ... then construct all embedded objects */
  ViewsRectangle__Init( &_this->Rectangle, &_this->_.XObject, 0 );
  ViewsImage__Init( &_this->Image, &_this->_.XObject, 0 );
  ViewsText__Init( &_this->Title, &_this->_.XObject, 0 );

  /* Setup the VMT pointer */
  _this->_.VMT = EW_CLASS( ApplicationAchPop );

  /* ... and initialize objects, variables, properties, etc. */
  CoreRectView__OnSetBounds( _this, _Const0000 );
  CoreRectView__OnSetBounds( &_this->Rectangle, _Const0115 );
  ViewsRectangle_OnSetColor( &_this->Rectangle, _Const0116 );
  CoreRectView__OnSetBounds( &_this->Image, _Const0117 );
  ViewsImage_OnSetAlignment( &_this->Image, ViewsImageAlignmentAlignHorzCenter | 
  ViewsImageAlignmentAlignVertCenter | ViewsImageAlignmentScaleToFit );
  ViewsImage_OnSetFrameNumber( &_this->Image, 0 );
  CoreRectView__OnSetBounds( &_this->Title, _Const0118 );
  ViewsText_OnSetString( &_this->Title, EwLoadString( &_Const00E6 ));
  ViewsText_OnSetColor( &_this->Title, _Const010B );
  _this->AchievementsNames[ 0 ] = EwShareString( EwLoadString( &_Const00E6 ));
  _this->AchievementsNames[ 1 ] = EwShareString( EwLoadString( &_Const00E7 ));
  _this->AchievementsNames[ 2 ] = EwShareString( EwLoadString( &_Const00E8 ));
  _this->AchievementsNames[ 3 ] = EwShareString( EwLoadString( &_Const00E9 ));
  _this->AchievementsNames[ 4 ] = EwShareString( EwLoadString( &_Const00EA ));
  _this->AchievementsNames[ 5 ] = EwShareString( EwLoadString( &_Const00EB ));
  _this->AchievementsNames[ 6 ] = EwShareString( EwLoadString( &_Const00EC ));
  _this->AchievementsNames[ 7 ] = EwShareString( EwLoadString( &_Const00ED ));
  _this->AchievementsNames[ 8 ] = EwShareString( EwLoadString( &_Const00EE ));
  _this->AchievementsNames[ 9 ] = EwShareString( EwLoadString( &_Const00EF ));
  _this->AchievementsNames[ 10 ] = EwShareString( EwLoadString( &_Const00F0 ));
  _this->AchievementsNames[ 11 ] = EwShareString( EwLoadString( &_Const00F1 ));
  _this->AchievementsNames[ 12 ] = EwShareString( EwLoadString( &_Const00F2 ));
  _this->AchievementsNames[ 13 ] = EwShareString( EwLoadString( &_Const00F3 ));
  _this->AchievementsNames[ 14 ] = EwShareString( EwLoadString( &_Const00F4 ));
  CoreGroup__Add( _this, ((CoreView)&_this->Rectangle ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Image ), 0 );
  CoreGroup__Add( _this, ((CoreView)&_this->Title ), 0 );
  ViewsImage_OnSetBitmap( &_this->Image, EwLoadResource( &ApplicationAchives, ResourcesBitmap ));
  ViewsText_OnSetFont( &_this->Title, EwLoadResource( &ApplicationMusicFont, ResourcesFont ));
  _this->Obj = EwGetAutoObject( &ApplicationDevice, ApplicationDeviceClass );

  /* Call the user defined constructor */
  ApplicationAchPop_Init( _this, aArg );
}

/* Re-Initializer for the class 'Application::AchPop' */
void ApplicationAchPop__ReInit( ApplicationAchPop _this )
{
  /* At first re-initialize the super class ... */
  CoreGroup__ReInit( &_this->_.Super );

  /* ... then re-construct all embedded objects */
  ViewsRectangle__ReInit( &_this->Rectangle );
  ViewsImage__ReInit( &_this->Image );
  ViewsText__ReInit( &_this->Title );
}

/* Finalizer method for the class 'Application::AchPop' */
void ApplicationAchPop__Done( ApplicationAchPop _this )
{
  /* Finalize this class */
  _this->_.Super._.VMT = EW_CLASS( CoreGroup );

  /* Finalize all embedded objects */
  ViewsRectangle__Done( &_this->Rectangle );
  ViewsImage__Done( &_this->Image );
  ViewsText__Done( &_this->Title );

  /* Don't forget to deinitialize the super class ... */
  CoreGroup__Done( &_this->_.Super );
}

/* The method Init() is invoked automatically after the component has been created. 
   This method can be overridden and filled with logic containing additional initialization 
   statements. */
void ApplicationAchPop_Init( ApplicationAchPop _this, XHandle aArg )
{
  /* Dummy expressions to avoid the 'C' warning 'unused argument'. */
  EW_UNUSED_ARG( aArg );

  ViewsText_OnSetString( &_this->Title, _this->AchievementsNames[ EwCheckIndex( 
  _this->Obj->AchFrame, 15 )]);
  ViewsImage_OnSetFrameNumber( &_this->Image, _this->Obj->AchFrame );
  achievementUnlock();
}

/* Variants derived from the class : 'Application::AchPop' */
EW_DEFINE_CLASS_VARIANTS( ApplicationAchPop )
EW_END_OF_CLASS_VARIANTS( ApplicationAchPop )

/* Virtual Method Table (VMT) for the class : 'Application::AchPop' */
EW_DEFINE_CLASS( ApplicationAchPop, CoreGroup, Rectangle, Obj, AchievementsNames, 
                 AchievementsNames, AchievementsNames, _.VMT, "Application::AchPop" )
  CoreRectView_initLayoutContext,
  CoreView_GetRoot,
  CoreGroup_Draw,
  CoreGroup_GetClipping,
  CoreView_HandleEvent,
  CoreGroup_CursorHitTest,
  CoreGroup_AdjustDrawingArea,
  CoreRectView_ArrangeView,
  CoreRectView_MoveView,
  CoreRectView_GetExtent,
  CoreGroup_ChangeViewState,
  CoreGroup_OnSetBounds,
  CoreGroup_OnSetFocus,
  CoreGroup_OnSetOpacity,
  CoreGroup_FindCurrentDialog,
  CoreGroup_SwitchToDialog,
  CoreGroup_DismissDialog,
  CoreGroup_PresentDialog,
  CoreGroup_DispatchEvent,
  CoreGroup_BroadcastEvent,
  CoreGroup_UpdateViewState,
  CoreGroup_InvalidateArea,
  CoreGroup_FindSiblingView,
  CoreGroup_FadeGroup,
  CoreGroup_RestackTop,
  CoreGroup_Restack,
  CoreGroup_Remove,
  CoreGroup_Add,
EW_END_OF_CLASS( ApplicationAchPop )

/* Embedded Wizard */
