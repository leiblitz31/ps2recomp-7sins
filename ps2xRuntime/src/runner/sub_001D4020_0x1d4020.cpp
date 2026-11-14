#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4020
// Address: 0x1d4020 - 0x1d5d50
void sub_001D4020_0x1d4020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4020_0x1d4020");
#endif

    switch (ctx->pc) {
        case 0x1d4020u: goto label_1d4020;
        case 0x1d4024u: goto label_1d4024;
        case 0x1d4028u: goto label_1d4028;
        case 0x1d402cu: goto label_1d402c;
        case 0x1d4030u: goto label_1d4030;
        case 0x1d4034u: goto label_1d4034;
        case 0x1d4038u: goto label_1d4038;
        case 0x1d403cu: goto label_1d403c;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4044u: goto label_1d4044;
        case 0x1d4048u: goto label_1d4048;
        case 0x1d404cu: goto label_1d404c;
        case 0x1d4050u: goto label_1d4050;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4058u: goto label_1d4058;
        case 0x1d405cu: goto label_1d405c;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d4064u: goto label_1d4064;
        case 0x1d4068u: goto label_1d4068;
        case 0x1d406cu: goto label_1d406c;
        case 0x1d4070u: goto label_1d4070;
        case 0x1d4074u: goto label_1d4074;
        case 0x1d4078u: goto label_1d4078;
        case 0x1d407cu: goto label_1d407c;
        case 0x1d4080u: goto label_1d4080;
        case 0x1d4084u: goto label_1d4084;
        case 0x1d4088u: goto label_1d4088;
        case 0x1d408cu: goto label_1d408c;
        case 0x1d4090u: goto label_1d4090;
        case 0x1d4094u: goto label_1d4094;
        case 0x1d4098u: goto label_1d4098;
        case 0x1d409cu: goto label_1d409c;
        case 0x1d40a0u: goto label_1d40a0;
        case 0x1d40a4u: goto label_1d40a4;
        case 0x1d40a8u: goto label_1d40a8;
        case 0x1d40acu: goto label_1d40ac;
        case 0x1d40b0u: goto label_1d40b0;
        case 0x1d40b4u: goto label_1d40b4;
        case 0x1d40b8u: goto label_1d40b8;
        case 0x1d40bcu: goto label_1d40bc;
        case 0x1d40c0u: goto label_1d40c0;
        case 0x1d40c4u: goto label_1d40c4;
        case 0x1d40c8u: goto label_1d40c8;
        case 0x1d40ccu: goto label_1d40cc;
        case 0x1d40d0u: goto label_1d40d0;
        case 0x1d40d4u: goto label_1d40d4;
        case 0x1d40d8u: goto label_1d40d8;
        case 0x1d40dcu: goto label_1d40dc;
        case 0x1d40e0u: goto label_1d40e0;
        case 0x1d40e4u: goto label_1d40e4;
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40ecu: goto label_1d40ec;
        case 0x1d40f0u: goto label_1d40f0;
        case 0x1d40f4u: goto label_1d40f4;
        case 0x1d40f8u: goto label_1d40f8;
        case 0x1d40fcu: goto label_1d40fc;
        case 0x1d4100u: goto label_1d4100;
        case 0x1d4104u: goto label_1d4104;
        case 0x1d4108u: goto label_1d4108;
        case 0x1d410cu: goto label_1d410c;
        case 0x1d4110u: goto label_1d4110;
        case 0x1d4114u: goto label_1d4114;
        case 0x1d4118u: goto label_1d4118;
        case 0x1d411cu: goto label_1d411c;
        case 0x1d4120u: goto label_1d4120;
        case 0x1d4124u: goto label_1d4124;
        case 0x1d4128u: goto label_1d4128;
        case 0x1d412cu: goto label_1d412c;
        case 0x1d4130u: goto label_1d4130;
        case 0x1d4134u: goto label_1d4134;
        case 0x1d4138u: goto label_1d4138;
        case 0x1d413cu: goto label_1d413c;
        case 0x1d4140u: goto label_1d4140;
        case 0x1d4144u: goto label_1d4144;
        case 0x1d4148u: goto label_1d4148;
        case 0x1d414cu: goto label_1d414c;
        case 0x1d4150u: goto label_1d4150;
        case 0x1d4154u: goto label_1d4154;
        case 0x1d4158u: goto label_1d4158;
        case 0x1d415cu: goto label_1d415c;
        case 0x1d4160u: goto label_1d4160;
        case 0x1d4164u: goto label_1d4164;
        case 0x1d4168u: goto label_1d4168;
        case 0x1d416cu: goto label_1d416c;
        case 0x1d4170u: goto label_1d4170;
        case 0x1d4174u: goto label_1d4174;
        case 0x1d4178u: goto label_1d4178;
        case 0x1d417cu: goto label_1d417c;
        case 0x1d4180u: goto label_1d4180;
        case 0x1d4184u: goto label_1d4184;
        case 0x1d4188u: goto label_1d4188;
        case 0x1d418cu: goto label_1d418c;
        case 0x1d4190u: goto label_1d4190;
        case 0x1d4194u: goto label_1d4194;
        case 0x1d4198u: goto label_1d4198;
        case 0x1d419cu: goto label_1d419c;
        case 0x1d41a0u: goto label_1d41a0;
        case 0x1d41a4u: goto label_1d41a4;
        case 0x1d41a8u: goto label_1d41a8;
        case 0x1d41acu: goto label_1d41ac;
        case 0x1d41b0u: goto label_1d41b0;
        case 0x1d41b4u: goto label_1d41b4;
        case 0x1d41b8u: goto label_1d41b8;
        case 0x1d41bcu: goto label_1d41bc;
        case 0x1d41c0u: goto label_1d41c0;
        case 0x1d41c4u: goto label_1d41c4;
        case 0x1d41c8u: goto label_1d41c8;
        case 0x1d41ccu: goto label_1d41cc;
        case 0x1d41d0u: goto label_1d41d0;
        case 0x1d41d4u: goto label_1d41d4;
        case 0x1d41d8u: goto label_1d41d8;
        case 0x1d41dcu: goto label_1d41dc;
        case 0x1d41e0u: goto label_1d41e0;
        case 0x1d41e4u: goto label_1d41e4;
        case 0x1d41e8u: goto label_1d41e8;
        case 0x1d41ecu: goto label_1d41ec;
        case 0x1d41f0u: goto label_1d41f0;
        case 0x1d41f4u: goto label_1d41f4;
        case 0x1d41f8u: goto label_1d41f8;
        case 0x1d41fcu: goto label_1d41fc;
        case 0x1d4200u: goto label_1d4200;
        case 0x1d4204u: goto label_1d4204;
        case 0x1d4208u: goto label_1d4208;
        case 0x1d420cu: goto label_1d420c;
        case 0x1d4210u: goto label_1d4210;
        case 0x1d4214u: goto label_1d4214;
        case 0x1d4218u: goto label_1d4218;
        case 0x1d421cu: goto label_1d421c;
        case 0x1d4220u: goto label_1d4220;
        case 0x1d4224u: goto label_1d4224;
        case 0x1d4228u: goto label_1d4228;
        case 0x1d422cu: goto label_1d422c;
        case 0x1d4230u: goto label_1d4230;
        case 0x1d4234u: goto label_1d4234;
        case 0x1d4238u: goto label_1d4238;
        case 0x1d423cu: goto label_1d423c;
        case 0x1d4240u: goto label_1d4240;
        case 0x1d4244u: goto label_1d4244;
        case 0x1d4248u: goto label_1d4248;
        case 0x1d424cu: goto label_1d424c;
        case 0x1d4250u: goto label_1d4250;
        case 0x1d4254u: goto label_1d4254;
        case 0x1d4258u: goto label_1d4258;
        case 0x1d425cu: goto label_1d425c;
        case 0x1d4260u: goto label_1d4260;
        case 0x1d4264u: goto label_1d4264;
        case 0x1d4268u: goto label_1d4268;
        case 0x1d426cu: goto label_1d426c;
        case 0x1d4270u: goto label_1d4270;
        case 0x1d4274u: goto label_1d4274;
        case 0x1d4278u: goto label_1d4278;
        case 0x1d427cu: goto label_1d427c;
        case 0x1d4280u: goto label_1d4280;
        case 0x1d4284u: goto label_1d4284;
        case 0x1d4288u: goto label_1d4288;
        case 0x1d428cu: goto label_1d428c;
        case 0x1d4290u: goto label_1d4290;
        case 0x1d4294u: goto label_1d4294;
        case 0x1d4298u: goto label_1d4298;
        case 0x1d429cu: goto label_1d429c;
        case 0x1d42a0u: goto label_1d42a0;
        case 0x1d42a4u: goto label_1d42a4;
        case 0x1d42a8u: goto label_1d42a8;
        case 0x1d42acu: goto label_1d42ac;
        case 0x1d42b0u: goto label_1d42b0;
        case 0x1d42b4u: goto label_1d42b4;
        case 0x1d42b8u: goto label_1d42b8;
        case 0x1d42bcu: goto label_1d42bc;
        case 0x1d42c0u: goto label_1d42c0;
        case 0x1d42c4u: goto label_1d42c4;
        case 0x1d42c8u: goto label_1d42c8;
        case 0x1d42ccu: goto label_1d42cc;
        case 0x1d42d0u: goto label_1d42d0;
        case 0x1d42d4u: goto label_1d42d4;
        case 0x1d42d8u: goto label_1d42d8;
        case 0x1d42dcu: goto label_1d42dc;
        case 0x1d42e0u: goto label_1d42e0;
        case 0x1d42e4u: goto label_1d42e4;
        case 0x1d42e8u: goto label_1d42e8;
        case 0x1d42ecu: goto label_1d42ec;
        case 0x1d42f0u: goto label_1d42f0;
        case 0x1d42f4u: goto label_1d42f4;
        case 0x1d42f8u: goto label_1d42f8;
        case 0x1d42fcu: goto label_1d42fc;
        case 0x1d4300u: goto label_1d4300;
        case 0x1d4304u: goto label_1d4304;
        case 0x1d4308u: goto label_1d4308;
        case 0x1d430cu: goto label_1d430c;
        case 0x1d4310u: goto label_1d4310;
        case 0x1d4314u: goto label_1d4314;
        case 0x1d4318u: goto label_1d4318;
        case 0x1d431cu: goto label_1d431c;
        case 0x1d4320u: goto label_1d4320;
        case 0x1d4324u: goto label_1d4324;
        case 0x1d4328u: goto label_1d4328;
        case 0x1d432cu: goto label_1d432c;
        case 0x1d4330u: goto label_1d4330;
        case 0x1d4334u: goto label_1d4334;
        case 0x1d4338u: goto label_1d4338;
        case 0x1d433cu: goto label_1d433c;
        case 0x1d4340u: goto label_1d4340;
        case 0x1d4344u: goto label_1d4344;
        case 0x1d4348u: goto label_1d4348;
        case 0x1d434cu: goto label_1d434c;
        case 0x1d4350u: goto label_1d4350;
        case 0x1d4354u: goto label_1d4354;
        case 0x1d4358u: goto label_1d4358;
        case 0x1d435cu: goto label_1d435c;
        case 0x1d4360u: goto label_1d4360;
        case 0x1d4364u: goto label_1d4364;
        case 0x1d4368u: goto label_1d4368;
        case 0x1d436cu: goto label_1d436c;
        case 0x1d4370u: goto label_1d4370;
        case 0x1d4374u: goto label_1d4374;
        case 0x1d4378u: goto label_1d4378;
        case 0x1d437cu: goto label_1d437c;
        case 0x1d4380u: goto label_1d4380;
        case 0x1d4384u: goto label_1d4384;
        case 0x1d4388u: goto label_1d4388;
        case 0x1d438cu: goto label_1d438c;
        case 0x1d4390u: goto label_1d4390;
        case 0x1d4394u: goto label_1d4394;
        case 0x1d4398u: goto label_1d4398;
        case 0x1d439cu: goto label_1d439c;
        case 0x1d43a0u: goto label_1d43a0;
        case 0x1d43a4u: goto label_1d43a4;
        case 0x1d43a8u: goto label_1d43a8;
        case 0x1d43acu: goto label_1d43ac;
        case 0x1d43b0u: goto label_1d43b0;
        case 0x1d43b4u: goto label_1d43b4;
        case 0x1d43b8u: goto label_1d43b8;
        case 0x1d43bcu: goto label_1d43bc;
        case 0x1d43c0u: goto label_1d43c0;
        case 0x1d43c4u: goto label_1d43c4;
        case 0x1d43c8u: goto label_1d43c8;
        case 0x1d43ccu: goto label_1d43cc;
        case 0x1d43d0u: goto label_1d43d0;
        case 0x1d43d4u: goto label_1d43d4;
        case 0x1d43d8u: goto label_1d43d8;
        case 0x1d43dcu: goto label_1d43dc;
        case 0x1d43e0u: goto label_1d43e0;
        case 0x1d43e4u: goto label_1d43e4;
        case 0x1d43e8u: goto label_1d43e8;
        case 0x1d43ecu: goto label_1d43ec;
        case 0x1d43f0u: goto label_1d43f0;
        case 0x1d43f4u: goto label_1d43f4;
        case 0x1d43f8u: goto label_1d43f8;
        case 0x1d43fcu: goto label_1d43fc;
        case 0x1d4400u: goto label_1d4400;
        case 0x1d4404u: goto label_1d4404;
        case 0x1d4408u: goto label_1d4408;
        case 0x1d440cu: goto label_1d440c;
        case 0x1d4410u: goto label_1d4410;
        case 0x1d4414u: goto label_1d4414;
        case 0x1d4418u: goto label_1d4418;
        case 0x1d441cu: goto label_1d441c;
        case 0x1d4420u: goto label_1d4420;
        case 0x1d4424u: goto label_1d4424;
        case 0x1d4428u: goto label_1d4428;
        case 0x1d442cu: goto label_1d442c;
        case 0x1d4430u: goto label_1d4430;
        case 0x1d4434u: goto label_1d4434;
        case 0x1d4438u: goto label_1d4438;
        case 0x1d443cu: goto label_1d443c;
        case 0x1d4440u: goto label_1d4440;
        case 0x1d4444u: goto label_1d4444;
        case 0x1d4448u: goto label_1d4448;
        case 0x1d444cu: goto label_1d444c;
        case 0x1d4450u: goto label_1d4450;
        case 0x1d4454u: goto label_1d4454;
        case 0x1d4458u: goto label_1d4458;
        case 0x1d445cu: goto label_1d445c;
        case 0x1d4460u: goto label_1d4460;
        case 0x1d4464u: goto label_1d4464;
        case 0x1d4468u: goto label_1d4468;
        case 0x1d446cu: goto label_1d446c;
        case 0x1d4470u: goto label_1d4470;
        case 0x1d4474u: goto label_1d4474;
        case 0x1d4478u: goto label_1d4478;
        case 0x1d447cu: goto label_1d447c;
        case 0x1d4480u: goto label_1d4480;
        case 0x1d4484u: goto label_1d4484;
        case 0x1d4488u: goto label_1d4488;
        case 0x1d448cu: goto label_1d448c;
        case 0x1d4490u: goto label_1d4490;
        case 0x1d4494u: goto label_1d4494;
        case 0x1d4498u: goto label_1d4498;
        case 0x1d449cu: goto label_1d449c;
        case 0x1d44a0u: goto label_1d44a0;
        case 0x1d44a4u: goto label_1d44a4;
        case 0x1d44a8u: goto label_1d44a8;
        case 0x1d44acu: goto label_1d44ac;
        case 0x1d44b0u: goto label_1d44b0;
        case 0x1d44b4u: goto label_1d44b4;
        case 0x1d44b8u: goto label_1d44b8;
        case 0x1d44bcu: goto label_1d44bc;
        case 0x1d44c0u: goto label_1d44c0;
        case 0x1d44c4u: goto label_1d44c4;
        case 0x1d44c8u: goto label_1d44c8;
        case 0x1d44ccu: goto label_1d44cc;
        case 0x1d44d0u: goto label_1d44d0;
        case 0x1d44d4u: goto label_1d44d4;
        case 0x1d44d8u: goto label_1d44d8;
        case 0x1d44dcu: goto label_1d44dc;
        case 0x1d44e0u: goto label_1d44e0;
        case 0x1d44e4u: goto label_1d44e4;
        case 0x1d44e8u: goto label_1d44e8;
        case 0x1d44ecu: goto label_1d44ec;
        case 0x1d44f0u: goto label_1d44f0;
        case 0x1d44f4u: goto label_1d44f4;
        case 0x1d44f8u: goto label_1d44f8;
        case 0x1d44fcu: goto label_1d44fc;
        case 0x1d4500u: goto label_1d4500;
        case 0x1d4504u: goto label_1d4504;
        case 0x1d4508u: goto label_1d4508;
        case 0x1d450cu: goto label_1d450c;
        case 0x1d4510u: goto label_1d4510;
        case 0x1d4514u: goto label_1d4514;
        case 0x1d4518u: goto label_1d4518;
        case 0x1d451cu: goto label_1d451c;
        case 0x1d4520u: goto label_1d4520;
        case 0x1d4524u: goto label_1d4524;
        case 0x1d4528u: goto label_1d4528;
        case 0x1d452cu: goto label_1d452c;
        case 0x1d4530u: goto label_1d4530;
        case 0x1d4534u: goto label_1d4534;
        case 0x1d4538u: goto label_1d4538;
        case 0x1d453cu: goto label_1d453c;
        case 0x1d4540u: goto label_1d4540;
        case 0x1d4544u: goto label_1d4544;
        case 0x1d4548u: goto label_1d4548;
        case 0x1d454cu: goto label_1d454c;
        case 0x1d4550u: goto label_1d4550;
        case 0x1d4554u: goto label_1d4554;
        case 0x1d4558u: goto label_1d4558;
        case 0x1d455cu: goto label_1d455c;
        case 0x1d4560u: goto label_1d4560;
        case 0x1d4564u: goto label_1d4564;
        case 0x1d4568u: goto label_1d4568;
        case 0x1d456cu: goto label_1d456c;
        case 0x1d4570u: goto label_1d4570;
        case 0x1d4574u: goto label_1d4574;
        case 0x1d4578u: goto label_1d4578;
        case 0x1d457cu: goto label_1d457c;
        case 0x1d4580u: goto label_1d4580;
        case 0x1d4584u: goto label_1d4584;
        case 0x1d4588u: goto label_1d4588;
        case 0x1d458cu: goto label_1d458c;
        case 0x1d4590u: goto label_1d4590;
        case 0x1d4594u: goto label_1d4594;
        case 0x1d4598u: goto label_1d4598;
        case 0x1d459cu: goto label_1d459c;
        case 0x1d45a0u: goto label_1d45a0;
        case 0x1d45a4u: goto label_1d45a4;
        case 0x1d45a8u: goto label_1d45a8;
        case 0x1d45acu: goto label_1d45ac;
        case 0x1d45b0u: goto label_1d45b0;
        case 0x1d45b4u: goto label_1d45b4;
        case 0x1d45b8u: goto label_1d45b8;
        case 0x1d45bcu: goto label_1d45bc;
        case 0x1d45c0u: goto label_1d45c0;
        case 0x1d45c4u: goto label_1d45c4;
        case 0x1d45c8u: goto label_1d45c8;
        case 0x1d45ccu: goto label_1d45cc;
        case 0x1d45d0u: goto label_1d45d0;
        case 0x1d45d4u: goto label_1d45d4;
        case 0x1d45d8u: goto label_1d45d8;
        case 0x1d45dcu: goto label_1d45dc;
        case 0x1d45e0u: goto label_1d45e0;
        case 0x1d45e4u: goto label_1d45e4;
        case 0x1d45e8u: goto label_1d45e8;
        case 0x1d45ecu: goto label_1d45ec;
        case 0x1d45f0u: goto label_1d45f0;
        case 0x1d45f4u: goto label_1d45f4;
        case 0x1d45f8u: goto label_1d45f8;
        case 0x1d45fcu: goto label_1d45fc;
        case 0x1d4600u: goto label_1d4600;
        case 0x1d4604u: goto label_1d4604;
        case 0x1d4608u: goto label_1d4608;
        case 0x1d460cu: goto label_1d460c;
        case 0x1d4610u: goto label_1d4610;
        case 0x1d4614u: goto label_1d4614;
        case 0x1d4618u: goto label_1d4618;
        case 0x1d461cu: goto label_1d461c;
        case 0x1d4620u: goto label_1d4620;
        case 0x1d4624u: goto label_1d4624;
        case 0x1d4628u: goto label_1d4628;
        case 0x1d462cu: goto label_1d462c;
        case 0x1d4630u: goto label_1d4630;
        case 0x1d4634u: goto label_1d4634;
        case 0x1d4638u: goto label_1d4638;
        case 0x1d463cu: goto label_1d463c;
        case 0x1d4640u: goto label_1d4640;
        case 0x1d4644u: goto label_1d4644;
        case 0x1d4648u: goto label_1d4648;
        case 0x1d464cu: goto label_1d464c;
        case 0x1d4650u: goto label_1d4650;
        case 0x1d4654u: goto label_1d4654;
        case 0x1d4658u: goto label_1d4658;
        case 0x1d465cu: goto label_1d465c;
        case 0x1d4660u: goto label_1d4660;
        case 0x1d4664u: goto label_1d4664;
        case 0x1d4668u: goto label_1d4668;
        case 0x1d466cu: goto label_1d466c;
        case 0x1d4670u: goto label_1d4670;
        case 0x1d4674u: goto label_1d4674;
        case 0x1d4678u: goto label_1d4678;
        case 0x1d467cu: goto label_1d467c;
        case 0x1d4680u: goto label_1d4680;
        case 0x1d4684u: goto label_1d4684;
        case 0x1d4688u: goto label_1d4688;
        case 0x1d468cu: goto label_1d468c;
        case 0x1d4690u: goto label_1d4690;
        case 0x1d4694u: goto label_1d4694;
        case 0x1d4698u: goto label_1d4698;
        case 0x1d469cu: goto label_1d469c;
        case 0x1d46a0u: goto label_1d46a0;
        case 0x1d46a4u: goto label_1d46a4;
        case 0x1d46a8u: goto label_1d46a8;
        case 0x1d46acu: goto label_1d46ac;
        case 0x1d46b0u: goto label_1d46b0;
        case 0x1d46b4u: goto label_1d46b4;
        case 0x1d46b8u: goto label_1d46b8;
        case 0x1d46bcu: goto label_1d46bc;
        case 0x1d46c0u: goto label_1d46c0;
        case 0x1d46c4u: goto label_1d46c4;
        case 0x1d46c8u: goto label_1d46c8;
        case 0x1d46ccu: goto label_1d46cc;
        case 0x1d46d0u: goto label_1d46d0;
        case 0x1d46d4u: goto label_1d46d4;
        case 0x1d46d8u: goto label_1d46d8;
        case 0x1d46dcu: goto label_1d46dc;
        case 0x1d46e0u: goto label_1d46e0;
        case 0x1d46e4u: goto label_1d46e4;
        case 0x1d46e8u: goto label_1d46e8;
        case 0x1d46ecu: goto label_1d46ec;
        case 0x1d46f0u: goto label_1d46f0;
        case 0x1d46f4u: goto label_1d46f4;
        case 0x1d46f8u: goto label_1d46f8;
        case 0x1d46fcu: goto label_1d46fc;
        case 0x1d4700u: goto label_1d4700;
        case 0x1d4704u: goto label_1d4704;
        case 0x1d4708u: goto label_1d4708;
        case 0x1d470cu: goto label_1d470c;
        case 0x1d4710u: goto label_1d4710;
        case 0x1d4714u: goto label_1d4714;
        case 0x1d4718u: goto label_1d4718;
        case 0x1d471cu: goto label_1d471c;
        case 0x1d4720u: goto label_1d4720;
        case 0x1d4724u: goto label_1d4724;
        case 0x1d4728u: goto label_1d4728;
        case 0x1d472cu: goto label_1d472c;
        case 0x1d4730u: goto label_1d4730;
        case 0x1d4734u: goto label_1d4734;
        case 0x1d4738u: goto label_1d4738;
        case 0x1d473cu: goto label_1d473c;
        case 0x1d4740u: goto label_1d4740;
        case 0x1d4744u: goto label_1d4744;
        case 0x1d4748u: goto label_1d4748;
        case 0x1d474cu: goto label_1d474c;
        case 0x1d4750u: goto label_1d4750;
        case 0x1d4754u: goto label_1d4754;
        case 0x1d4758u: goto label_1d4758;
        case 0x1d475cu: goto label_1d475c;
        case 0x1d4760u: goto label_1d4760;
        case 0x1d4764u: goto label_1d4764;
        case 0x1d4768u: goto label_1d4768;
        case 0x1d476cu: goto label_1d476c;
        case 0x1d4770u: goto label_1d4770;
        case 0x1d4774u: goto label_1d4774;
        case 0x1d4778u: goto label_1d4778;
        case 0x1d477cu: goto label_1d477c;
        case 0x1d4780u: goto label_1d4780;
        case 0x1d4784u: goto label_1d4784;
        case 0x1d4788u: goto label_1d4788;
        case 0x1d478cu: goto label_1d478c;
        case 0x1d4790u: goto label_1d4790;
        case 0x1d4794u: goto label_1d4794;
        case 0x1d4798u: goto label_1d4798;
        case 0x1d479cu: goto label_1d479c;
        case 0x1d47a0u: goto label_1d47a0;
        case 0x1d47a4u: goto label_1d47a4;
        case 0x1d47a8u: goto label_1d47a8;
        case 0x1d47acu: goto label_1d47ac;
        case 0x1d47b0u: goto label_1d47b0;
        case 0x1d47b4u: goto label_1d47b4;
        case 0x1d47b8u: goto label_1d47b8;
        case 0x1d47bcu: goto label_1d47bc;
        case 0x1d47c0u: goto label_1d47c0;
        case 0x1d47c4u: goto label_1d47c4;
        case 0x1d47c8u: goto label_1d47c8;
        case 0x1d47ccu: goto label_1d47cc;
        case 0x1d47d0u: goto label_1d47d0;
        case 0x1d47d4u: goto label_1d47d4;
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d47dcu: goto label_1d47dc;
        case 0x1d47e0u: goto label_1d47e0;
        case 0x1d47e4u: goto label_1d47e4;
        case 0x1d47e8u: goto label_1d47e8;
        case 0x1d47ecu: goto label_1d47ec;
        case 0x1d47f0u: goto label_1d47f0;
        case 0x1d47f4u: goto label_1d47f4;
        case 0x1d47f8u: goto label_1d47f8;
        case 0x1d47fcu: goto label_1d47fc;
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4804u: goto label_1d4804;
        case 0x1d4808u: goto label_1d4808;
        case 0x1d480cu: goto label_1d480c;
        case 0x1d4810u: goto label_1d4810;
        case 0x1d4814u: goto label_1d4814;
        case 0x1d4818u: goto label_1d4818;
        case 0x1d481cu: goto label_1d481c;
        case 0x1d4820u: goto label_1d4820;
        case 0x1d4824u: goto label_1d4824;
        case 0x1d4828u: goto label_1d4828;
        case 0x1d482cu: goto label_1d482c;
        case 0x1d4830u: goto label_1d4830;
        case 0x1d4834u: goto label_1d4834;
        case 0x1d4838u: goto label_1d4838;
        case 0x1d483cu: goto label_1d483c;
        case 0x1d4840u: goto label_1d4840;
        case 0x1d4844u: goto label_1d4844;
        case 0x1d4848u: goto label_1d4848;
        case 0x1d484cu: goto label_1d484c;
        case 0x1d4850u: goto label_1d4850;
        case 0x1d4854u: goto label_1d4854;
        case 0x1d4858u: goto label_1d4858;
        case 0x1d485cu: goto label_1d485c;
        case 0x1d4860u: goto label_1d4860;
        case 0x1d4864u: goto label_1d4864;
        case 0x1d4868u: goto label_1d4868;
        case 0x1d486cu: goto label_1d486c;
        case 0x1d4870u: goto label_1d4870;
        case 0x1d4874u: goto label_1d4874;
        case 0x1d4878u: goto label_1d4878;
        case 0x1d487cu: goto label_1d487c;
        case 0x1d4880u: goto label_1d4880;
        case 0x1d4884u: goto label_1d4884;
        case 0x1d4888u: goto label_1d4888;
        case 0x1d488cu: goto label_1d488c;
        case 0x1d4890u: goto label_1d4890;
        case 0x1d4894u: goto label_1d4894;
        case 0x1d4898u: goto label_1d4898;
        case 0x1d489cu: goto label_1d489c;
        case 0x1d48a0u: goto label_1d48a0;
        case 0x1d48a4u: goto label_1d48a4;
        case 0x1d48a8u: goto label_1d48a8;
        case 0x1d48acu: goto label_1d48ac;
        case 0x1d48b0u: goto label_1d48b0;
        case 0x1d48b4u: goto label_1d48b4;
        case 0x1d48b8u: goto label_1d48b8;
        case 0x1d48bcu: goto label_1d48bc;
        case 0x1d48c0u: goto label_1d48c0;
        case 0x1d48c4u: goto label_1d48c4;
        case 0x1d48c8u: goto label_1d48c8;
        case 0x1d48ccu: goto label_1d48cc;
        case 0x1d48d0u: goto label_1d48d0;
        case 0x1d48d4u: goto label_1d48d4;
        case 0x1d48d8u: goto label_1d48d8;
        case 0x1d48dcu: goto label_1d48dc;
        case 0x1d48e0u: goto label_1d48e0;
        case 0x1d48e4u: goto label_1d48e4;
        case 0x1d48e8u: goto label_1d48e8;
        case 0x1d48ecu: goto label_1d48ec;
        case 0x1d48f0u: goto label_1d48f0;
        case 0x1d48f4u: goto label_1d48f4;
        case 0x1d48f8u: goto label_1d48f8;
        case 0x1d48fcu: goto label_1d48fc;
        case 0x1d4900u: goto label_1d4900;
        case 0x1d4904u: goto label_1d4904;
        case 0x1d4908u: goto label_1d4908;
        case 0x1d490cu: goto label_1d490c;
        case 0x1d4910u: goto label_1d4910;
        case 0x1d4914u: goto label_1d4914;
        case 0x1d4918u: goto label_1d4918;
        case 0x1d491cu: goto label_1d491c;
        case 0x1d4920u: goto label_1d4920;
        case 0x1d4924u: goto label_1d4924;
        case 0x1d4928u: goto label_1d4928;
        case 0x1d492cu: goto label_1d492c;
        case 0x1d4930u: goto label_1d4930;
        case 0x1d4934u: goto label_1d4934;
        case 0x1d4938u: goto label_1d4938;
        case 0x1d493cu: goto label_1d493c;
        case 0x1d4940u: goto label_1d4940;
        case 0x1d4944u: goto label_1d4944;
        case 0x1d4948u: goto label_1d4948;
        case 0x1d494cu: goto label_1d494c;
        case 0x1d4950u: goto label_1d4950;
        case 0x1d4954u: goto label_1d4954;
        case 0x1d4958u: goto label_1d4958;
        case 0x1d495cu: goto label_1d495c;
        case 0x1d4960u: goto label_1d4960;
        case 0x1d4964u: goto label_1d4964;
        case 0x1d4968u: goto label_1d4968;
        case 0x1d496cu: goto label_1d496c;
        case 0x1d4970u: goto label_1d4970;
        case 0x1d4974u: goto label_1d4974;
        case 0x1d4978u: goto label_1d4978;
        case 0x1d497cu: goto label_1d497c;
        case 0x1d4980u: goto label_1d4980;
        case 0x1d4984u: goto label_1d4984;
        case 0x1d4988u: goto label_1d4988;
        case 0x1d498cu: goto label_1d498c;
        case 0x1d4990u: goto label_1d4990;
        case 0x1d4994u: goto label_1d4994;
        case 0x1d4998u: goto label_1d4998;
        case 0x1d499cu: goto label_1d499c;
        case 0x1d49a0u: goto label_1d49a0;
        case 0x1d49a4u: goto label_1d49a4;
        case 0x1d49a8u: goto label_1d49a8;
        case 0x1d49acu: goto label_1d49ac;
        case 0x1d49b0u: goto label_1d49b0;
        case 0x1d49b4u: goto label_1d49b4;
        case 0x1d49b8u: goto label_1d49b8;
        case 0x1d49bcu: goto label_1d49bc;
        case 0x1d49c0u: goto label_1d49c0;
        case 0x1d49c4u: goto label_1d49c4;
        case 0x1d49c8u: goto label_1d49c8;
        case 0x1d49ccu: goto label_1d49cc;
        case 0x1d49d0u: goto label_1d49d0;
        case 0x1d49d4u: goto label_1d49d4;
        case 0x1d49d8u: goto label_1d49d8;
        case 0x1d49dcu: goto label_1d49dc;
        case 0x1d49e0u: goto label_1d49e0;
        case 0x1d49e4u: goto label_1d49e4;
        case 0x1d49e8u: goto label_1d49e8;
        case 0x1d49ecu: goto label_1d49ec;
        case 0x1d49f0u: goto label_1d49f0;
        case 0x1d49f4u: goto label_1d49f4;
        case 0x1d49f8u: goto label_1d49f8;
        case 0x1d49fcu: goto label_1d49fc;
        case 0x1d4a00u: goto label_1d4a00;
        case 0x1d4a04u: goto label_1d4a04;
        case 0x1d4a08u: goto label_1d4a08;
        case 0x1d4a0cu: goto label_1d4a0c;
        case 0x1d4a10u: goto label_1d4a10;
        case 0x1d4a14u: goto label_1d4a14;
        case 0x1d4a18u: goto label_1d4a18;
        case 0x1d4a1cu: goto label_1d4a1c;
        case 0x1d4a20u: goto label_1d4a20;
        case 0x1d4a24u: goto label_1d4a24;
        case 0x1d4a28u: goto label_1d4a28;
        case 0x1d4a2cu: goto label_1d4a2c;
        case 0x1d4a30u: goto label_1d4a30;
        case 0x1d4a34u: goto label_1d4a34;
        case 0x1d4a38u: goto label_1d4a38;
        case 0x1d4a3cu: goto label_1d4a3c;
        case 0x1d4a40u: goto label_1d4a40;
        case 0x1d4a44u: goto label_1d4a44;
        case 0x1d4a48u: goto label_1d4a48;
        case 0x1d4a4cu: goto label_1d4a4c;
        case 0x1d4a50u: goto label_1d4a50;
        case 0x1d4a54u: goto label_1d4a54;
        case 0x1d4a58u: goto label_1d4a58;
        case 0x1d4a5cu: goto label_1d4a5c;
        case 0x1d4a60u: goto label_1d4a60;
        case 0x1d4a64u: goto label_1d4a64;
        case 0x1d4a68u: goto label_1d4a68;
        case 0x1d4a6cu: goto label_1d4a6c;
        case 0x1d4a70u: goto label_1d4a70;
        case 0x1d4a74u: goto label_1d4a74;
        case 0x1d4a78u: goto label_1d4a78;
        case 0x1d4a7cu: goto label_1d4a7c;
        case 0x1d4a80u: goto label_1d4a80;
        case 0x1d4a84u: goto label_1d4a84;
        case 0x1d4a88u: goto label_1d4a88;
        case 0x1d4a8cu: goto label_1d4a8c;
        case 0x1d4a90u: goto label_1d4a90;
        case 0x1d4a94u: goto label_1d4a94;
        case 0x1d4a98u: goto label_1d4a98;
        case 0x1d4a9cu: goto label_1d4a9c;
        case 0x1d4aa0u: goto label_1d4aa0;
        case 0x1d4aa4u: goto label_1d4aa4;
        case 0x1d4aa8u: goto label_1d4aa8;
        case 0x1d4aacu: goto label_1d4aac;
        case 0x1d4ab0u: goto label_1d4ab0;
        case 0x1d4ab4u: goto label_1d4ab4;
        case 0x1d4ab8u: goto label_1d4ab8;
        case 0x1d4abcu: goto label_1d4abc;
        case 0x1d4ac0u: goto label_1d4ac0;
        case 0x1d4ac4u: goto label_1d4ac4;
        case 0x1d4ac8u: goto label_1d4ac8;
        case 0x1d4accu: goto label_1d4acc;
        case 0x1d4ad0u: goto label_1d4ad0;
        case 0x1d4ad4u: goto label_1d4ad4;
        case 0x1d4ad8u: goto label_1d4ad8;
        case 0x1d4adcu: goto label_1d4adc;
        case 0x1d4ae0u: goto label_1d4ae0;
        case 0x1d4ae4u: goto label_1d4ae4;
        case 0x1d4ae8u: goto label_1d4ae8;
        case 0x1d4aecu: goto label_1d4aec;
        case 0x1d4af0u: goto label_1d4af0;
        case 0x1d4af4u: goto label_1d4af4;
        case 0x1d4af8u: goto label_1d4af8;
        case 0x1d4afcu: goto label_1d4afc;
        case 0x1d4b00u: goto label_1d4b00;
        case 0x1d4b04u: goto label_1d4b04;
        case 0x1d4b08u: goto label_1d4b08;
        case 0x1d4b0cu: goto label_1d4b0c;
        case 0x1d4b10u: goto label_1d4b10;
        case 0x1d4b14u: goto label_1d4b14;
        case 0x1d4b18u: goto label_1d4b18;
        case 0x1d4b1cu: goto label_1d4b1c;
        case 0x1d4b20u: goto label_1d4b20;
        case 0x1d4b24u: goto label_1d4b24;
        case 0x1d4b28u: goto label_1d4b28;
        case 0x1d4b2cu: goto label_1d4b2c;
        case 0x1d4b30u: goto label_1d4b30;
        case 0x1d4b34u: goto label_1d4b34;
        case 0x1d4b38u: goto label_1d4b38;
        case 0x1d4b3cu: goto label_1d4b3c;
        case 0x1d4b40u: goto label_1d4b40;
        case 0x1d4b44u: goto label_1d4b44;
        case 0x1d4b48u: goto label_1d4b48;
        case 0x1d4b4cu: goto label_1d4b4c;
        case 0x1d4b50u: goto label_1d4b50;
        case 0x1d4b54u: goto label_1d4b54;
        case 0x1d4b58u: goto label_1d4b58;
        case 0x1d4b5cu: goto label_1d4b5c;
        case 0x1d4b60u: goto label_1d4b60;
        case 0x1d4b64u: goto label_1d4b64;
        case 0x1d4b68u: goto label_1d4b68;
        case 0x1d4b6cu: goto label_1d4b6c;
        case 0x1d4b70u: goto label_1d4b70;
        case 0x1d4b74u: goto label_1d4b74;
        case 0x1d4b78u: goto label_1d4b78;
        case 0x1d4b7cu: goto label_1d4b7c;
        case 0x1d4b80u: goto label_1d4b80;
        case 0x1d4b84u: goto label_1d4b84;
        case 0x1d4b88u: goto label_1d4b88;
        case 0x1d4b8cu: goto label_1d4b8c;
        case 0x1d4b90u: goto label_1d4b90;
        case 0x1d4b94u: goto label_1d4b94;
        case 0x1d4b98u: goto label_1d4b98;
        case 0x1d4b9cu: goto label_1d4b9c;
        case 0x1d4ba0u: goto label_1d4ba0;
        case 0x1d4ba4u: goto label_1d4ba4;
        case 0x1d4ba8u: goto label_1d4ba8;
        case 0x1d4bacu: goto label_1d4bac;
        case 0x1d4bb0u: goto label_1d4bb0;
        case 0x1d4bb4u: goto label_1d4bb4;
        case 0x1d4bb8u: goto label_1d4bb8;
        case 0x1d4bbcu: goto label_1d4bbc;
        case 0x1d4bc0u: goto label_1d4bc0;
        case 0x1d4bc4u: goto label_1d4bc4;
        case 0x1d4bc8u: goto label_1d4bc8;
        case 0x1d4bccu: goto label_1d4bcc;
        case 0x1d4bd0u: goto label_1d4bd0;
        case 0x1d4bd4u: goto label_1d4bd4;
        case 0x1d4bd8u: goto label_1d4bd8;
        case 0x1d4bdcu: goto label_1d4bdc;
        case 0x1d4be0u: goto label_1d4be0;
        case 0x1d4be4u: goto label_1d4be4;
        case 0x1d4be8u: goto label_1d4be8;
        case 0x1d4becu: goto label_1d4bec;
        case 0x1d4bf0u: goto label_1d4bf0;
        case 0x1d4bf4u: goto label_1d4bf4;
        case 0x1d4bf8u: goto label_1d4bf8;
        case 0x1d4bfcu: goto label_1d4bfc;
        case 0x1d4c00u: goto label_1d4c00;
        case 0x1d4c04u: goto label_1d4c04;
        case 0x1d4c08u: goto label_1d4c08;
        case 0x1d4c0cu: goto label_1d4c0c;
        case 0x1d4c10u: goto label_1d4c10;
        case 0x1d4c14u: goto label_1d4c14;
        case 0x1d4c18u: goto label_1d4c18;
        case 0x1d4c1cu: goto label_1d4c1c;
        case 0x1d4c20u: goto label_1d4c20;
        case 0x1d4c24u: goto label_1d4c24;
        case 0x1d4c28u: goto label_1d4c28;
        case 0x1d4c2cu: goto label_1d4c2c;
        case 0x1d4c30u: goto label_1d4c30;
        case 0x1d4c34u: goto label_1d4c34;
        case 0x1d4c38u: goto label_1d4c38;
        case 0x1d4c3cu: goto label_1d4c3c;
        case 0x1d4c40u: goto label_1d4c40;
        case 0x1d4c44u: goto label_1d4c44;
        case 0x1d4c48u: goto label_1d4c48;
        case 0x1d4c4cu: goto label_1d4c4c;
        case 0x1d4c50u: goto label_1d4c50;
        case 0x1d4c54u: goto label_1d4c54;
        case 0x1d4c58u: goto label_1d4c58;
        case 0x1d4c5cu: goto label_1d4c5c;
        case 0x1d4c60u: goto label_1d4c60;
        case 0x1d4c64u: goto label_1d4c64;
        case 0x1d4c68u: goto label_1d4c68;
        case 0x1d4c6cu: goto label_1d4c6c;
        case 0x1d4c70u: goto label_1d4c70;
        case 0x1d4c74u: goto label_1d4c74;
        case 0x1d4c78u: goto label_1d4c78;
        case 0x1d4c7cu: goto label_1d4c7c;
        case 0x1d4c80u: goto label_1d4c80;
        case 0x1d4c84u: goto label_1d4c84;
        case 0x1d4c88u: goto label_1d4c88;
        case 0x1d4c8cu: goto label_1d4c8c;
        case 0x1d4c90u: goto label_1d4c90;
        case 0x1d4c94u: goto label_1d4c94;
        case 0x1d4c98u: goto label_1d4c98;
        case 0x1d4c9cu: goto label_1d4c9c;
        case 0x1d4ca0u: goto label_1d4ca0;
        case 0x1d4ca4u: goto label_1d4ca4;
        case 0x1d4ca8u: goto label_1d4ca8;
        case 0x1d4cacu: goto label_1d4cac;
        case 0x1d4cb0u: goto label_1d4cb0;
        case 0x1d4cb4u: goto label_1d4cb4;
        case 0x1d4cb8u: goto label_1d4cb8;
        case 0x1d4cbcu: goto label_1d4cbc;
        case 0x1d4cc0u: goto label_1d4cc0;
        case 0x1d4cc4u: goto label_1d4cc4;
        case 0x1d4cc8u: goto label_1d4cc8;
        case 0x1d4cccu: goto label_1d4ccc;
        case 0x1d4cd0u: goto label_1d4cd0;
        case 0x1d4cd4u: goto label_1d4cd4;
        case 0x1d4cd8u: goto label_1d4cd8;
        case 0x1d4cdcu: goto label_1d4cdc;
        case 0x1d4ce0u: goto label_1d4ce0;
        case 0x1d4ce4u: goto label_1d4ce4;
        case 0x1d4ce8u: goto label_1d4ce8;
        case 0x1d4cecu: goto label_1d4cec;
        case 0x1d4cf0u: goto label_1d4cf0;
        case 0x1d4cf4u: goto label_1d4cf4;
        case 0x1d4cf8u: goto label_1d4cf8;
        case 0x1d4cfcu: goto label_1d4cfc;
        case 0x1d4d00u: goto label_1d4d00;
        case 0x1d4d04u: goto label_1d4d04;
        case 0x1d4d08u: goto label_1d4d08;
        case 0x1d4d0cu: goto label_1d4d0c;
        case 0x1d4d10u: goto label_1d4d10;
        case 0x1d4d14u: goto label_1d4d14;
        case 0x1d4d18u: goto label_1d4d18;
        case 0x1d4d1cu: goto label_1d4d1c;
        case 0x1d4d20u: goto label_1d4d20;
        case 0x1d4d24u: goto label_1d4d24;
        case 0x1d4d28u: goto label_1d4d28;
        case 0x1d4d2cu: goto label_1d4d2c;
        case 0x1d4d30u: goto label_1d4d30;
        case 0x1d4d34u: goto label_1d4d34;
        case 0x1d4d38u: goto label_1d4d38;
        case 0x1d4d3cu: goto label_1d4d3c;
        case 0x1d4d40u: goto label_1d4d40;
        case 0x1d4d44u: goto label_1d4d44;
        case 0x1d4d48u: goto label_1d4d48;
        case 0x1d4d4cu: goto label_1d4d4c;
        case 0x1d4d50u: goto label_1d4d50;
        case 0x1d4d54u: goto label_1d4d54;
        case 0x1d4d58u: goto label_1d4d58;
        case 0x1d4d5cu: goto label_1d4d5c;
        case 0x1d4d60u: goto label_1d4d60;
        case 0x1d4d64u: goto label_1d4d64;
        case 0x1d4d68u: goto label_1d4d68;
        case 0x1d4d6cu: goto label_1d4d6c;
        case 0x1d4d70u: goto label_1d4d70;
        case 0x1d4d74u: goto label_1d4d74;
        case 0x1d4d78u: goto label_1d4d78;
        case 0x1d4d7cu: goto label_1d4d7c;
        case 0x1d4d80u: goto label_1d4d80;
        case 0x1d4d84u: goto label_1d4d84;
        case 0x1d4d88u: goto label_1d4d88;
        case 0x1d4d8cu: goto label_1d4d8c;
        case 0x1d4d90u: goto label_1d4d90;
        case 0x1d4d94u: goto label_1d4d94;
        case 0x1d4d98u: goto label_1d4d98;
        case 0x1d4d9cu: goto label_1d4d9c;
        case 0x1d4da0u: goto label_1d4da0;
        case 0x1d4da4u: goto label_1d4da4;
        case 0x1d4da8u: goto label_1d4da8;
        case 0x1d4dacu: goto label_1d4dac;
        case 0x1d4db0u: goto label_1d4db0;
        case 0x1d4db4u: goto label_1d4db4;
        case 0x1d4db8u: goto label_1d4db8;
        case 0x1d4dbcu: goto label_1d4dbc;
        case 0x1d4dc0u: goto label_1d4dc0;
        case 0x1d4dc4u: goto label_1d4dc4;
        case 0x1d4dc8u: goto label_1d4dc8;
        case 0x1d4dccu: goto label_1d4dcc;
        case 0x1d4dd0u: goto label_1d4dd0;
        case 0x1d4dd4u: goto label_1d4dd4;
        case 0x1d4dd8u: goto label_1d4dd8;
        case 0x1d4ddcu: goto label_1d4ddc;
        case 0x1d4de0u: goto label_1d4de0;
        case 0x1d4de4u: goto label_1d4de4;
        case 0x1d4de8u: goto label_1d4de8;
        case 0x1d4decu: goto label_1d4dec;
        case 0x1d4df0u: goto label_1d4df0;
        case 0x1d4df4u: goto label_1d4df4;
        case 0x1d4df8u: goto label_1d4df8;
        case 0x1d4dfcu: goto label_1d4dfc;
        case 0x1d4e00u: goto label_1d4e00;
        case 0x1d4e04u: goto label_1d4e04;
        case 0x1d4e08u: goto label_1d4e08;
        case 0x1d4e0cu: goto label_1d4e0c;
        case 0x1d4e10u: goto label_1d4e10;
        case 0x1d4e14u: goto label_1d4e14;
        case 0x1d4e18u: goto label_1d4e18;
        case 0x1d4e1cu: goto label_1d4e1c;
        case 0x1d4e20u: goto label_1d4e20;
        case 0x1d4e24u: goto label_1d4e24;
        case 0x1d4e28u: goto label_1d4e28;
        case 0x1d4e2cu: goto label_1d4e2c;
        case 0x1d4e30u: goto label_1d4e30;
        case 0x1d4e34u: goto label_1d4e34;
        case 0x1d4e38u: goto label_1d4e38;
        case 0x1d4e3cu: goto label_1d4e3c;
        case 0x1d4e40u: goto label_1d4e40;
        case 0x1d4e44u: goto label_1d4e44;
        case 0x1d4e48u: goto label_1d4e48;
        case 0x1d4e4cu: goto label_1d4e4c;
        case 0x1d4e50u: goto label_1d4e50;
        case 0x1d4e54u: goto label_1d4e54;
        case 0x1d4e58u: goto label_1d4e58;
        case 0x1d4e5cu: goto label_1d4e5c;
        case 0x1d4e60u: goto label_1d4e60;
        case 0x1d4e64u: goto label_1d4e64;
        case 0x1d4e68u: goto label_1d4e68;
        case 0x1d4e6cu: goto label_1d4e6c;
        case 0x1d4e70u: goto label_1d4e70;
        case 0x1d4e74u: goto label_1d4e74;
        case 0x1d4e78u: goto label_1d4e78;
        case 0x1d4e7cu: goto label_1d4e7c;
        case 0x1d4e80u: goto label_1d4e80;
        case 0x1d4e84u: goto label_1d4e84;
        case 0x1d4e88u: goto label_1d4e88;
        case 0x1d4e8cu: goto label_1d4e8c;
        case 0x1d4e90u: goto label_1d4e90;
        case 0x1d4e94u: goto label_1d4e94;
        case 0x1d4e98u: goto label_1d4e98;
        case 0x1d4e9cu: goto label_1d4e9c;
        case 0x1d4ea0u: goto label_1d4ea0;
        case 0x1d4ea4u: goto label_1d4ea4;
        case 0x1d4ea8u: goto label_1d4ea8;
        case 0x1d4eacu: goto label_1d4eac;
        case 0x1d4eb0u: goto label_1d4eb0;
        case 0x1d4eb4u: goto label_1d4eb4;
        case 0x1d4eb8u: goto label_1d4eb8;
        case 0x1d4ebcu: goto label_1d4ebc;
        case 0x1d4ec0u: goto label_1d4ec0;
        case 0x1d4ec4u: goto label_1d4ec4;
        case 0x1d4ec8u: goto label_1d4ec8;
        case 0x1d4eccu: goto label_1d4ecc;
        case 0x1d4ed0u: goto label_1d4ed0;
        case 0x1d4ed4u: goto label_1d4ed4;
        case 0x1d4ed8u: goto label_1d4ed8;
        case 0x1d4edcu: goto label_1d4edc;
        case 0x1d4ee0u: goto label_1d4ee0;
        case 0x1d4ee4u: goto label_1d4ee4;
        case 0x1d4ee8u: goto label_1d4ee8;
        case 0x1d4eecu: goto label_1d4eec;
        case 0x1d4ef0u: goto label_1d4ef0;
        case 0x1d4ef4u: goto label_1d4ef4;
        case 0x1d4ef8u: goto label_1d4ef8;
        case 0x1d4efcu: goto label_1d4efc;
        case 0x1d4f00u: goto label_1d4f00;
        case 0x1d4f04u: goto label_1d4f04;
        case 0x1d4f08u: goto label_1d4f08;
        case 0x1d4f0cu: goto label_1d4f0c;
        case 0x1d4f10u: goto label_1d4f10;
        case 0x1d4f14u: goto label_1d4f14;
        case 0x1d4f18u: goto label_1d4f18;
        case 0x1d4f1cu: goto label_1d4f1c;
        case 0x1d4f20u: goto label_1d4f20;
        case 0x1d4f24u: goto label_1d4f24;
        case 0x1d4f28u: goto label_1d4f28;
        case 0x1d4f2cu: goto label_1d4f2c;
        case 0x1d4f30u: goto label_1d4f30;
        case 0x1d4f34u: goto label_1d4f34;
        case 0x1d4f38u: goto label_1d4f38;
        case 0x1d4f3cu: goto label_1d4f3c;
        case 0x1d4f40u: goto label_1d4f40;
        case 0x1d4f44u: goto label_1d4f44;
        case 0x1d4f48u: goto label_1d4f48;
        case 0x1d4f4cu: goto label_1d4f4c;
        case 0x1d4f50u: goto label_1d4f50;
        case 0x1d4f54u: goto label_1d4f54;
        case 0x1d4f58u: goto label_1d4f58;
        case 0x1d4f5cu: goto label_1d4f5c;
        case 0x1d4f60u: goto label_1d4f60;
        case 0x1d4f64u: goto label_1d4f64;
        case 0x1d4f68u: goto label_1d4f68;
        case 0x1d4f6cu: goto label_1d4f6c;
        case 0x1d4f70u: goto label_1d4f70;
        case 0x1d4f74u: goto label_1d4f74;
        case 0x1d4f78u: goto label_1d4f78;
        case 0x1d4f7cu: goto label_1d4f7c;
        case 0x1d4f80u: goto label_1d4f80;
        case 0x1d4f84u: goto label_1d4f84;
        case 0x1d4f88u: goto label_1d4f88;
        case 0x1d4f8cu: goto label_1d4f8c;
        case 0x1d4f90u: goto label_1d4f90;
        case 0x1d4f94u: goto label_1d4f94;
        case 0x1d4f98u: goto label_1d4f98;
        case 0x1d4f9cu: goto label_1d4f9c;
        case 0x1d4fa0u: goto label_1d4fa0;
        case 0x1d4fa4u: goto label_1d4fa4;
        case 0x1d4fa8u: goto label_1d4fa8;
        case 0x1d4facu: goto label_1d4fac;
        case 0x1d4fb0u: goto label_1d4fb0;
        case 0x1d4fb4u: goto label_1d4fb4;
        case 0x1d4fb8u: goto label_1d4fb8;
        case 0x1d4fbcu: goto label_1d4fbc;
        case 0x1d4fc0u: goto label_1d4fc0;
        case 0x1d4fc4u: goto label_1d4fc4;
        case 0x1d4fc8u: goto label_1d4fc8;
        case 0x1d4fccu: goto label_1d4fcc;
        case 0x1d4fd0u: goto label_1d4fd0;
        case 0x1d4fd4u: goto label_1d4fd4;
        case 0x1d4fd8u: goto label_1d4fd8;
        case 0x1d4fdcu: goto label_1d4fdc;
        case 0x1d4fe0u: goto label_1d4fe0;
        case 0x1d4fe4u: goto label_1d4fe4;
        case 0x1d4fe8u: goto label_1d4fe8;
        case 0x1d4fecu: goto label_1d4fec;
        case 0x1d4ff0u: goto label_1d4ff0;
        case 0x1d4ff4u: goto label_1d4ff4;
        case 0x1d4ff8u: goto label_1d4ff8;
        case 0x1d4ffcu: goto label_1d4ffc;
        case 0x1d5000u: goto label_1d5000;
        case 0x1d5004u: goto label_1d5004;
        case 0x1d5008u: goto label_1d5008;
        case 0x1d500cu: goto label_1d500c;
        case 0x1d5010u: goto label_1d5010;
        case 0x1d5014u: goto label_1d5014;
        case 0x1d5018u: goto label_1d5018;
        case 0x1d501cu: goto label_1d501c;
        case 0x1d5020u: goto label_1d5020;
        case 0x1d5024u: goto label_1d5024;
        case 0x1d5028u: goto label_1d5028;
        case 0x1d502cu: goto label_1d502c;
        case 0x1d5030u: goto label_1d5030;
        case 0x1d5034u: goto label_1d5034;
        case 0x1d5038u: goto label_1d5038;
        case 0x1d503cu: goto label_1d503c;
        case 0x1d5040u: goto label_1d5040;
        case 0x1d5044u: goto label_1d5044;
        case 0x1d5048u: goto label_1d5048;
        case 0x1d504cu: goto label_1d504c;
        case 0x1d5050u: goto label_1d5050;
        case 0x1d5054u: goto label_1d5054;
        case 0x1d5058u: goto label_1d5058;
        case 0x1d505cu: goto label_1d505c;
        case 0x1d5060u: goto label_1d5060;
        case 0x1d5064u: goto label_1d5064;
        case 0x1d5068u: goto label_1d5068;
        case 0x1d506cu: goto label_1d506c;
        case 0x1d5070u: goto label_1d5070;
        case 0x1d5074u: goto label_1d5074;
        case 0x1d5078u: goto label_1d5078;
        case 0x1d507cu: goto label_1d507c;
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5084u: goto label_1d5084;
        case 0x1d5088u: goto label_1d5088;
        case 0x1d508cu: goto label_1d508c;
        case 0x1d5090u: goto label_1d5090;
        case 0x1d5094u: goto label_1d5094;
        case 0x1d5098u: goto label_1d5098;
        case 0x1d509cu: goto label_1d509c;
        case 0x1d50a0u: goto label_1d50a0;
        case 0x1d50a4u: goto label_1d50a4;
        case 0x1d50a8u: goto label_1d50a8;
        case 0x1d50acu: goto label_1d50ac;
        case 0x1d50b0u: goto label_1d50b0;
        case 0x1d50b4u: goto label_1d50b4;
        case 0x1d50b8u: goto label_1d50b8;
        case 0x1d50bcu: goto label_1d50bc;
        case 0x1d50c0u: goto label_1d50c0;
        case 0x1d50c4u: goto label_1d50c4;
        case 0x1d50c8u: goto label_1d50c8;
        case 0x1d50ccu: goto label_1d50cc;
        case 0x1d50d0u: goto label_1d50d0;
        case 0x1d50d4u: goto label_1d50d4;
        case 0x1d50d8u: goto label_1d50d8;
        case 0x1d50dcu: goto label_1d50dc;
        case 0x1d50e0u: goto label_1d50e0;
        case 0x1d50e4u: goto label_1d50e4;
        case 0x1d50e8u: goto label_1d50e8;
        case 0x1d50ecu: goto label_1d50ec;
        case 0x1d50f0u: goto label_1d50f0;
        case 0x1d50f4u: goto label_1d50f4;
        case 0x1d50f8u: goto label_1d50f8;
        case 0x1d50fcu: goto label_1d50fc;
        case 0x1d5100u: goto label_1d5100;
        case 0x1d5104u: goto label_1d5104;
        case 0x1d5108u: goto label_1d5108;
        case 0x1d510cu: goto label_1d510c;
        case 0x1d5110u: goto label_1d5110;
        case 0x1d5114u: goto label_1d5114;
        case 0x1d5118u: goto label_1d5118;
        case 0x1d511cu: goto label_1d511c;
        case 0x1d5120u: goto label_1d5120;
        case 0x1d5124u: goto label_1d5124;
        case 0x1d5128u: goto label_1d5128;
        case 0x1d512cu: goto label_1d512c;
        case 0x1d5130u: goto label_1d5130;
        case 0x1d5134u: goto label_1d5134;
        case 0x1d5138u: goto label_1d5138;
        case 0x1d513cu: goto label_1d513c;
        case 0x1d5140u: goto label_1d5140;
        case 0x1d5144u: goto label_1d5144;
        case 0x1d5148u: goto label_1d5148;
        case 0x1d514cu: goto label_1d514c;
        case 0x1d5150u: goto label_1d5150;
        case 0x1d5154u: goto label_1d5154;
        case 0x1d5158u: goto label_1d5158;
        case 0x1d515cu: goto label_1d515c;
        case 0x1d5160u: goto label_1d5160;
        case 0x1d5164u: goto label_1d5164;
        case 0x1d5168u: goto label_1d5168;
        case 0x1d516cu: goto label_1d516c;
        case 0x1d5170u: goto label_1d5170;
        case 0x1d5174u: goto label_1d5174;
        case 0x1d5178u: goto label_1d5178;
        case 0x1d517cu: goto label_1d517c;
        case 0x1d5180u: goto label_1d5180;
        case 0x1d5184u: goto label_1d5184;
        case 0x1d5188u: goto label_1d5188;
        case 0x1d518cu: goto label_1d518c;
        case 0x1d5190u: goto label_1d5190;
        case 0x1d5194u: goto label_1d5194;
        case 0x1d5198u: goto label_1d5198;
        case 0x1d519cu: goto label_1d519c;
        case 0x1d51a0u: goto label_1d51a0;
        case 0x1d51a4u: goto label_1d51a4;
        case 0x1d51a8u: goto label_1d51a8;
        case 0x1d51acu: goto label_1d51ac;
        case 0x1d51b0u: goto label_1d51b0;
        case 0x1d51b4u: goto label_1d51b4;
        case 0x1d51b8u: goto label_1d51b8;
        case 0x1d51bcu: goto label_1d51bc;
        case 0x1d51c0u: goto label_1d51c0;
        case 0x1d51c4u: goto label_1d51c4;
        case 0x1d51c8u: goto label_1d51c8;
        case 0x1d51ccu: goto label_1d51cc;
        case 0x1d51d0u: goto label_1d51d0;
        case 0x1d51d4u: goto label_1d51d4;
        case 0x1d51d8u: goto label_1d51d8;
        case 0x1d51dcu: goto label_1d51dc;
        case 0x1d51e0u: goto label_1d51e0;
        case 0x1d51e4u: goto label_1d51e4;
        case 0x1d51e8u: goto label_1d51e8;
        case 0x1d51ecu: goto label_1d51ec;
        case 0x1d51f0u: goto label_1d51f0;
        case 0x1d51f4u: goto label_1d51f4;
        case 0x1d51f8u: goto label_1d51f8;
        case 0x1d51fcu: goto label_1d51fc;
        case 0x1d5200u: goto label_1d5200;
        case 0x1d5204u: goto label_1d5204;
        case 0x1d5208u: goto label_1d5208;
        case 0x1d520cu: goto label_1d520c;
        case 0x1d5210u: goto label_1d5210;
        case 0x1d5214u: goto label_1d5214;
        case 0x1d5218u: goto label_1d5218;
        case 0x1d521cu: goto label_1d521c;
        case 0x1d5220u: goto label_1d5220;
        case 0x1d5224u: goto label_1d5224;
        case 0x1d5228u: goto label_1d5228;
        case 0x1d522cu: goto label_1d522c;
        case 0x1d5230u: goto label_1d5230;
        case 0x1d5234u: goto label_1d5234;
        case 0x1d5238u: goto label_1d5238;
        case 0x1d523cu: goto label_1d523c;
        case 0x1d5240u: goto label_1d5240;
        case 0x1d5244u: goto label_1d5244;
        case 0x1d5248u: goto label_1d5248;
        case 0x1d524cu: goto label_1d524c;
        case 0x1d5250u: goto label_1d5250;
        case 0x1d5254u: goto label_1d5254;
        case 0x1d5258u: goto label_1d5258;
        case 0x1d525cu: goto label_1d525c;
        case 0x1d5260u: goto label_1d5260;
        case 0x1d5264u: goto label_1d5264;
        case 0x1d5268u: goto label_1d5268;
        case 0x1d526cu: goto label_1d526c;
        case 0x1d5270u: goto label_1d5270;
        case 0x1d5274u: goto label_1d5274;
        case 0x1d5278u: goto label_1d5278;
        case 0x1d527cu: goto label_1d527c;
        case 0x1d5280u: goto label_1d5280;
        case 0x1d5284u: goto label_1d5284;
        case 0x1d5288u: goto label_1d5288;
        case 0x1d528cu: goto label_1d528c;
        case 0x1d5290u: goto label_1d5290;
        case 0x1d5294u: goto label_1d5294;
        case 0x1d5298u: goto label_1d5298;
        case 0x1d529cu: goto label_1d529c;
        case 0x1d52a0u: goto label_1d52a0;
        case 0x1d52a4u: goto label_1d52a4;
        case 0x1d52a8u: goto label_1d52a8;
        case 0x1d52acu: goto label_1d52ac;
        case 0x1d52b0u: goto label_1d52b0;
        case 0x1d52b4u: goto label_1d52b4;
        case 0x1d52b8u: goto label_1d52b8;
        case 0x1d52bcu: goto label_1d52bc;
        case 0x1d52c0u: goto label_1d52c0;
        case 0x1d52c4u: goto label_1d52c4;
        case 0x1d52c8u: goto label_1d52c8;
        case 0x1d52ccu: goto label_1d52cc;
        case 0x1d52d0u: goto label_1d52d0;
        case 0x1d52d4u: goto label_1d52d4;
        case 0x1d52d8u: goto label_1d52d8;
        case 0x1d52dcu: goto label_1d52dc;
        case 0x1d52e0u: goto label_1d52e0;
        case 0x1d52e4u: goto label_1d52e4;
        case 0x1d52e8u: goto label_1d52e8;
        case 0x1d52ecu: goto label_1d52ec;
        case 0x1d52f0u: goto label_1d52f0;
        case 0x1d52f4u: goto label_1d52f4;
        case 0x1d52f8u: goto label_1d52f8;
        case 0x1d52fcu: goto label_1d52fc;
        case 0x1d5300u: goto label_1d5300;
        case 0x1d5304u: goto label_1d5304;
        case 0x1d5308u: goto label_1d5308;
        case 0x1d530cu: goto label_1d530c;
        case 0x1d5310u: goto label_1d5310;
        case 0x1d5314u: goto label_1d5314;
        case 0x1d5318u: goto label_1d5318;
        case 0x1d531cu: goto label_1d531c;
        case 0x1d5320u: goto label_1d5320;
        case 0x1d5324u: goto label_1d5324;
        case 0x1d5328u: goto label_1d5328;
        case 0x1d532cu: goto label_1d532c;
        case 0x1d5330u: goto label_1d5330;
        case 0x1d5334u: goto label_1d5334;
        case 0x1d5338u: goto label_1d5338;
        case 0x1d533cu: goto label_1d533c;
        case 0x1d5340u: goto label_1d5340;
        case 0x1d5344u: goto label_1d5344;
        case 0x1d5348u: goto label_1d5348;
        case 0x1d534cu: goto label_1d534c;
        case 0x1d5350u: goto label_1d5350;
        case 0x1d5354u: goto label_1d5354;
        case 0x1d5358u: goto label_1d5358;
        case 0x1d535cu: goto label_1d535c;
        case 0x1d5360u: goto label_1d5360;
        case 0x1d5364u: goto label_1d5364;
        case 0x1d5368u: goto label_1d5368;
        case 0x1d536cu: goto label_1d536c;
        case 0x1d5370u: goto label_1d5370;
        case 0x1d5374u: goto label_1d5374;
        case 0x1d5378u: goto label_1d5378;
        case 0x1d537cu: goto label_1d537c;
        case 0x1d5380u: goto label_1d5380;
        case 0x1d5384u: goto label_1d5384;
        case 0x1d5388u: goto label_1d5388;
        case 0x1d538cu: goto label_1d538c;
        case 0x1d5390u: goto label_1d5390;
        case 0x1d5394u: goto label_1d5394;
        case 0x1d5398u: goto label_1d5398;
        case 0x1d539cu: goto label_1d539c;
        case 0x1d53a0u: goto label_1d53a0;
        case 0x1d53a4u: goto label_1d53a4;
        case 0x1d53a8u: goto label_1d53a8;
        case 0x1d53acu: goto label_1d53ac;
        case 0x1d53b0u: goto label_1d53b0;
        case 0x1d53b4u: goto label_1d53b4;
        case 0x1d53b8u: goto label_1d53b8;
        case 0x1d53bcu: goto label_1d53bc;
        case 0x1d53c0u: goto label_1d53c0;
        case 0x1d53c4u: goto label_1d53c4;
        case 0x1d53c8u: goto label_1d53c8;
        case 0x1d53ccu: goto label_1d53cc;
        case 0x1d53d0u: goto label_1d53d0;
        case 0x1d53d4u: goto label_1d53d4;
        case 0x1d53d8u: goto label_1d53d8;
        case 0x1d53dcu: goto label_1d53dc;
        case 0x1d53e0u: goto label_1d53e0;
        case 0x1d53e4u: goto label_1d53e4;
        case 0x1d53e8u: goto label_1d53e8;
        case 0x1d53ecu: goto label_1d53ec;
        case 0x1d53f0u: goto label_1d53f0;
        case 0x1d53f4u: goto label_1d53f4;
        case 0x1d53f8u: goto label_1d53f8;
        case 0x1d53fcu: goto label_1d53fc;
        case 0x1d5400u: goto label_1d5400;
        case 0x1d5404u: goto label_1d5404;
        case 0x1d5408u: goto label_1d5408;
        case 0x1d540cu: goto label_1d540c;
        case 0x1d5410u: goto label_1d5410;
        case 0x1d5414u: goto label_1d5414;
        case 0x1d5418u: goto label_1d5418;
        case 0x1d541cu: goto label_1d541c;
        case 0x1d5420u: goto label_1d5420;
        case 0x1d5424u: goto label_1d5424;
        case 0x1d5428u: goto label_1d5428;
        case 0x1d542cu: goto label_1d542c;
        case 0x1d5430u: goto label_1d5430;
        case 0x1d5434u: goto label_1d5434;
        case 0x1d5438u: goto label_1d5438;
        case 0x1d543cu: goto label_1d543c;
        case 0x1d5440u: goto label_1d5440;
        case 0x1d5444u: goto label_1d5444;
        case 0x1d5448u: goto label_1d5448;
        case 0x1d544cu: goto label_1d544c;
        case 0x1d5450u: goto label_1d5450;
        case 0x1d5454u: goto label_1d5454;
        case 0x1d5458u: goto label_1d5458;
        case 0x1d545cu: goto label_1d545c;
        case 0x1d5460u: goto label_1d5460;
        case 0x1d5464u: goto label_1d5464;
        case 0x1d5468u: goto label_1d5468;
        case 0x1d546cu: goto label_1d546c;
        case 0x1d5470u: goto label_1d5470;
        case 0x1d5474u: goto label_1d5474;
        case 0x1d5478u: goto label_1d5478;
        case 0x1d547cu: goto label_1d547c;
        case 0x1d5480u: goto label_1d5480;
        case 0x1d5484u: goto label_1d5484;
        case 0x1d5488u: goto label_1d5488;
        case 0x1d548cu: goto label_1d548c;
        case 0x1d5490u: goto label_1d5490;
        case 0x1d5494u: goto label_1d5494;
        case 0x1d5498u: goto label_1d5498;
        case 0x1d549cu: goto label_1d549c;
        case 0x1d54a0u: goto label_1d54a0;
        case 0x1d54a4u: goto label_1d54a4;
        case 0x1d54a8u: goto label_1d54a8;
        case 0x1d54acu: goto label_1d54ac;
        case 0x1d54b0u: goto label_1d54b0;
        case 0x1d54b4u: goto label_1d54b4;
        case 0x1d54b8u: goto label_1d54b8;
        case 0x1d54bcu: goto label_1d54bc;
        case 0x1d54c0u: goto label_1d54c0;
        case 0x1d54c4u: goto label_1d54c4;
        case 0x1d54c8u: goto label_1d54c8;
        case 0x1d54ccu: goto label_1d54cc;
        case 0x1d54d0u: goto label_1d54d0;
        case 0x1d54d4u: goto label_1d54d4;
        case 0x1d54d8u: goto label_1d54d8;
        case 0x1d54dcu: goto label_1d54dc;
        case 0x1d54e0u: goto label_1d54e0;
        case 0x1d54e4u: goto label_1d54e4;
        case 0x1d54e8u: goto label_1d54e8;
        case 0x1d54ecu: goto label_1d54ec;
        case 0x1d54f0u: goto label_1d54f0;
        case 0x1d54f4u: goto label_1d54f4;
        case 0x1d54f8u: goto label_1d54f8;
        case 0x1d54fcu: goto label_1d54fc;
        case 0x1d5500u: goto label_1d5500;
        case 0x1d5504u: goto label_1d5504;
        case 0x1d5508u: goto label_1d5508;
        case 0x1d550cu: goto label_1d550c;
        case 0x1d5510u: goto label_1d5510;
        case 0x1d5514u: goto label_1d5514;
        case 0x1d5518u: goto label_1d5518;
        case 0x1d551cu: goto label_1d551c;
        case 0x1d5520u: goto label_1d5520;
        case 0x1d5524u: goto label_1d5524;
        case 0x1d5528u: goto label_1d5528;
        case 0x1d552cu: goto label_1d552c;
        case 0x1d5530u: goto label_1d5530;
        case 0x1d5534u: goto label_1d5534;
        case 0x1d5538u: goto label_1d5538;
        case 0x1d553cu: goto label_1d553c;
        case 0x1d5540u: goto label_1d5540;
        case 0x1d5544u: goto label_1d5544;
        case 0x1d5548u: goto label_1d5548;
        case 0x1d554cu: goto label_1d554c;
        case 0x1d5550u: goto label_1d5550;
        case 0x1d5554u: goto label_1d5554;
        case 0x1d5558u: goto label_1d5558;
        case 0x1d555cu: goto label_1d555c;
        case 0x1d5560u: goto label_1d5560;
        case 0x1d5564u: goto label_1d5564;
        case 0x1d5568u: goto label_1d5568;
        case 0x1d556cu: goto label_1d556c;
        case 0x1d5570u: goto label_1d5570;
        case 0x1d5574u: goto label_1d5574;
        case 0x1d5578u: goto label_1d5578;
        case 0x1d557cu: goto label_1d557c;
        case 0x1d5580u: goto label_1d5580;
        case 0x1d5584u: goto label_1d5584;
        case 0x1d5588u: goto label_1d5588;
        case 0x1d558cu: goto label_1d558c;
        case 0x1d5590u: goto label_1d5590;
        case 0x1d5594u: goto label_1d5594;
        case 0x1d5598u: goto label_1d5598;
        case 0x1d559cu: goto label_1d559c;
        case 0x1d55a0u: goto label_1d55a0;
        case 0x1d55a4u: goto label_1d55a4;
        case 0x1d55a8u: goto label_1d55a8;
        case 0x1d55acu: goto label_1d55ac;
        case 0x1d55b0u: goto label_1d55b0;
        case 0x1d55b4u: goto label_1d55b4;
        case 0x1d55b8u: goto label_1d55b8;
        case 0x1d55bcu: goto label_1d55bc;
        case 0x1d55c0u: goto label_1d55c0;
        case 0x1d55c4u: goto label_1d55c4;
        case 0x1d55c8u: goto label_1d55c8;
        case 0x1d55ccu: goto label_1d55cc;
        case 0x1d55d0u: goto label_1d55d0;
        case 0x1d55d4u: goto label_1d55d4;
        case 0x1d55d8u: goto label_1d55d8;
        case 0x1d55dcu: goto label_1d55dc;
        case 0x1d55e0u: goto label_1d55e0;
        case 0x1d55e4u: goto label_1d55e4;
        case 0x1d55e8u: goto label_1d55e8;
        case 0x1d55ecu: goto label_1d55ec;
        case 0x1d55f0u: goto label_1d55f0;
        case 0x1d55f4u: goto label_1d55f4;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d55fcu: goto label_1d55fc;
        case 0x1d5600u: goto label_1d5600;
        case 0x1d5604u: goto label_1d5604;
        case 0x1d5608u: goto label_1d5608;
        case 0x1d560cu: goto label_1d560c;
        case 0x1d5610u: goto label_1d5610;
        case 0x1d5614u: goto label_1d5614;
        case 0x1d5618u: goto label_1d5618;
        case 0x1d561cu: goto label_1d561c;
        case 0x1d5620u: goto label_1d5620;
        case 0x1d5624u: goto label_1d5624;
        case 0x1d5628u: goto label_1d5628;
        case 0x1d562cu: goto label_1d562c;
        case 0x1d5630u: goto label_1d5630;
        case 0x1d5634u: goto label_1d5634;
        case 0x1d5638u: goto label_1d5638;
        case 0x1d563cu: goto label_1d563c;
        case 0x1d5640u: goto label_1d5640;
        case 0x1d5644u: goto label_1d5644;
        case 0x1d5648u: goto label_1d5648;
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5650u: goto label_1d5650;
        case 0x1d5654u: goto label_1d5654;
        case 0x1d5658u: goto label_1d5658;
        case 0x1d565cu: goto label_1d565c;
        case 0x1d5660u: goto label_1d5660;
        case 0x1d5664u: goto label_1d5664;
        case 0x1d5668u: goto label_1d5668;
        case 0x1d566cu: goto label_1d566c;
        case 0x1d5670u: goto label_1d5670;
        case 0x1d5674u: goto label_1d5674;
        case 0x1d5678u: goto label_1d5678;
        case 0x1d567cu: goto label_1d567c;
        case 0x1d5680u: goto label_1d5680;
        case 0x1d5684u: goto label_1d5684;
        case 0x1d5688u: goto label_1d5688;
        case 0x1d568cu: goto label_1d568c;
        case 0x1d5690u: goto label_1d5690;
        case 0x1d5694u: goto label_1d5694;
        case 0x1d5698u: goto label_1d5698;
        case 0x1d569cu: goto label_1d569c;
        case 0x1d56a0u: goto label_1d56a0;
        case 0x1d56a4u: goto label_1d56a4;
        case 0x1d56a8u: goto label_1d56a8;
        case 0x1d56acu: goto label_1d56ac;
        case 0x1d56b0u: goto label_1d56b0;
        case 0x1d56b4u: goto label_1d56b4;
        case 0x1d56b8u: goto label_1d56b8;
        case 0x1d56bcu: goto label_1d56bc;
        case 0x1d56c0u: goto label_1d56c0;
        case 0x1d56c4u: goto label_1d56c4;
        case 0x1d56c8u: goto label_1d56c8;
        case 0x1d56ccu: goto label_1d56cc;
        case 0x1d56d0u: goto label_1d56d0;
        case 0x1d56d4u: goto label_1d56d4;
        case 0x1d56d8u: goto label_1d56d8;
        case 0x1d56dcu: goto label_1d56dc;
        case 0x1d56e0u: goto label_1d56e0;
        case 0x1d56e4u: goto label_1d56e4;
        case 0x1d56e8u: goto label_1d56e8;
        case 0x1d56ecu: goto label_1d56ec;
        case 0x1d56f0u: goto label_1d56f0;
        case 0x1d56f4u: goto label_1d56f4;
        case 0x1d56f8u: goto label_1d56f8;
        case 0x1d56fcu: goto label_1d56fc;
        case 0x1d5700u: goto label_1d5700;
        case 0x1d5704u: goto label_1d5704;
        case 0x1d5708u: goto label_1d5708;
        case 0x1d570cu: goto label_1d570c;
        case 0x1d5710u: goto label_1d5710;
        case 0x1d5714u: goto label_1d5714;
        case 0x1d5718u: goto label_1d5718;
        case 0x1d571cu: goto label_1d571c;
        case 0x1d5720u: goto label_1d5720;
        case 0x1d5724u: goto label_1d5724;
        case 0x1d5728u: goto label_1d5728;
        case 0x1d572cu: goto label_1d572c;
        case 0x1d5730u: goto label_1d5730;
        case 0x1d5734u: goto label_1d5734;
        case 0x1d5738u: goto label_1d5738;
        case 0x1d573cu: goto label_1d573c;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5744u: goto label_1d5744;
        case 0x1d5748u: goto label_1d5748;
        case 0x1d574cu: goto label_1d574c;
        case 0x1d5750u: goto label_1d5750;
        case 0x1d5754u: goto label_1d5754;
        case 0x1d5758u: goto label_1d5758;
        case 0x1d575cu: goto label_1d575c;
        case 0x1d5760u: goto label_1d5760;
        case 0x1d5764u: goto label_1d5764;
        case 0x1d5768u: goto label_1d5768;
        case 0x1d576cu: goto label_1d576c;
        case 0x1d5770u: goto label_1d5770;
        case 0x1d5774u: goto label_1d5774;
        case 0x1d5778u: goto label_1d5778;
        case 0x1d577cu: goto label_1d577c;
        case 0x1d5780u: goto label_1d5780;
        case 0x1d5784u: goto label_1d5784;
        case 0x1d5788u: goto label_1d5788;
        case 0x1d578cu: goto label_1d578c;
        case 0x1d5790u: goto label_1d5790;
        case 0x1d5794u: goto label_1d5794;
        case 0x1d5798u: goto label_1d5798;
        case 0x1d579cu: goto label_1d579c;
        case 0x1d57a0u: goto label_1d57a0;
        case 0x1d57a4u: goto label_1d57a4;
        case 0x1d57a8u: goto label_1d57a8;
        case 0x1d57acu: goto label_1d57ac;
        case 0x1d57b0u: goto label_1d57b0;
        case 0x1d57b4u: goto label_1d57b4;
        case 0x1d57b8u: goto label_1d57b8;
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57c0u: goto label_1d57c0;
        case 0x1d57c4u: goto label_1d57c4;
        case 0x1d57c8u: goto label_1d57c8;
        case 0x1d57ccu: goto label_1d57cc;
        case 0x1d57d0u: goto label_1d57d0;
        case 0x1d57d4u: goto label_1d57d4;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57dcu: goto label_1d57dc;
        case 0x1d57e0u: goto label_1d57e0;
        case 0x1d57e4u: goto label_1d57e4;
        case 0x1d57e8u: goto label_1d57e8;
        case 0x1d57ecu: goto label_1d57ec;
        case 0x1d57f0u: goto label_1d57f0;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d57f8u: goto label_1d57f8;
        case 0x1d57fcu: goto label_1d57fc;
        case 0x1d5800u: goto label_1d5800;
        case 0x1d5804u: goto label_1d5804;
        case 0x1d5808u: goto label_1d5808;
        case 0x1d580cu: goto label_1d580c;
        case 0x1d5810u: goto label_1d5810;
        case 0x1d5814u: goto label_1d5814;
        case 0x1d5818u: goto label_1d5818;
        case 0x1d581cu: goto label_1d581c;
        case 0x1d5820u: goto label_1d5820;
        case 0x1d5824u: goto label_1d5824;
        case 0x1d5828u: goto label_1d5828;
        case 0x1d582cu: goto label_1d582c;
        case 0x1d5830u: goto label_1d5830;
        case 0x1d5834u: goto label_1d5834;
        case 0x1d5838u: goto label_1d5838;
        case 0x1d583cu: goto label_1d583c;
        case 0x1d5840u: goto label_1d5840;
        case 0x1d5844u: goto label_1d5844;
        case 0x1d5848u: goto label_1d5848;
        case 0x1d584cu: goto label_1d584c;
        case 0x1d5850u: goto label_1d5850;
        case 0x1d5854u: goto label_1d5854;
        case 0x1d5858u: goto label_1d5858;
        case 0x1d585cu: goto label_1d585c;
        case 0x1d5860u: goto label_1d5860;
        case 0x1d5864u: goto label_1d5864;
        case 0x1d5868u: goto label_1d5868;
        case 0x1d586cu: goto label_1d586c;
        case 0x1d5870u: goto label_1d5870;
        case 0x1d5874u: goto label_1d5874;
        case 0x1d5878u: goto label_1d5878;
        case 0x1d587cu: goto label_1d587c;
        case 0x1d5880u: goto label_1d5880;
        case 0x1d5884u: goto label_1d5884;
        case 0x1d5888u: goto label_1d5888;
        case 0x1d588cu: goto label_1d588c;
        case 0x1d5890u: goto label_1d5890;
        case 0x1d5894u: goto label_1d5894;
        case 0x1d5898u: goto label_1d5898;
        case 0x1d589cu: goto label_1d589c;
        case 0x1d58a0u: goto label_1d58a0;
        case 0x1d58a4u: goto label_1d58a4;
        case 0x1d58a8u: goto label_1d58a8;
        case 0x1d58acu: goto label_1d58ac;
        case 0x1d58b0u: goto label_1d58b0;
        case 0x1d58b4u: goto label_1d58b4;
        case 0x1d58b8u: goto label_1d58b8;
        case 0x1d58bcu: goto label_1d58bc;
        case 0x1d58c0u: goto label_1d58c0;
        case 0x1d58c4u: goto label_1d58c4;
        case 0x1d58c8u: goto label_1d58c8;
        case 0x1d58ccu: goto label_1d58cc;
        case 0x1d58d0u: goto label_1d58d0;
        case 0x1d58d4u: goto label_1d58d4;
        case 0x1d58d8u: goto label_1d58d8;
        case 0x1d58dcu: goto label_1d58dc;
        case 0x1d58e0u: goto label_1d58e0;
        case 0x1d58e4u: goto label_1d58e4;
        case 0x1d58e8u: goto label_1d58e8;
        case 0x1d58ecu: goto label_1d58ec;
        case 0x1d58f0u: goto label_1d58f0;
        case 0x1d58f4u: goto label_1d58f4;
        case 0x1d58f8u: goto label_1d58f8;
        case 0x1d58fcu: goto label_1d58fc;
        case 0x1d5900u: goto label_1d5900;
        case 0x1d5904u: goto label_1d5904;
        case 0x1d5908u: goto label_1d5908;
        case 0x1d590cu: goto label_1d590c;
        case 0x1d5910u: goto label_1d5910;
        case 0x1d5914u: goto label_1d5914;
        case 0x1d5918u: goto label_1d5918;
        case 0x1d591cu: goto label_1d591c;
        case 0x1d5920u: goto label_1d5920;
        case 0x1d5924u: goto label_1d5924;
        case 0x1d5928u: goto label_1d5928;
        case 0x1d592cu: goto label_1d592c;
        case 0x1d5930u: goto label_1d5930;
        case 0x1d5934u: goto label_1d5934;
        case 0x1d5938u: goto label_1d5938;
        case 0x1d593cu: goto label_1d593c;
        case 0x1d5940u: goto label_1d5940;
        case 0x1d5944u: goto label_1d5944;
        case 0x1d5948u: goto label_1d5948;
        case 0x1d594cu: goto label_1d594c;
        case 0x1d5950u: goto label_1d5950;
        case 0x1d5954u: goto label_1d5954;
        case 0x1d5958u: goto label_1d5958;
        case 0x1d595cu: goto label_1d595c;
        case 0x1d5960u: goto label_1d5960;
        case 0x1d5964u: goto label_1d5964;
        case 0x1d5968u: goto label_1d5968;
        case 0x1d596cu: goto label_1d596c;
        case 0x1d5970u: goto label_1d5970;
        case 0x1d5974u: goto label_1d5974;
        case 0x1d5978u: goto label_1d5978;
        case 0x1d597cu: goto label_1d597c;
        case 0x1d5980u: goto label_1d5980;
        case 0x1d5984u: goto label_1d5984;
        case 0x1d5988u: goto label_1d5988;
        case 0x1d598cu: goto label_1d598c;
        case 0x1d5990u: goto label_1d5990;
        case 0x1d5994u: goto label_1d5994;
        case 0x1d5998u: goto label_1d5998;
        case 0x1d599cu: goto label_1d599c;
        case 0x1d59a0u: goto label_1d59a0;
        case 0x1d59a4u: goto label_1d59a4;
        case 0x1d59a8u: goto label_1d59a8;
        case 0x1d59acu: goto label_1d59ac;
        case 0x1d59b0u: goto label_1d59b0;
        case 0x1d59b4u: goto label_1d59b4;
        case 0x1d59b8u: goto label_1d59b8;
        case 0x1d59bcu: goto label_1d59bc;
        case 0x1d59c0u: goto label_1d59c0;
        case 0x1d59c4u: goto label_1d59c4;
        case 0x1d59c8u: goto label_1d59c8;
        case 0x1d59ccu: goto label_1d59cc;
        case 0x1d59d0u: goto label_1d59d0;
        case 0x1d59d4u: goto label_1d59d4;
        case 0x1d59d8u: goto label_1d59d8;
        case 0x1d59dcu: goto label_1d59dc;
        case 0x1d59e0u: goto label_1d59e0;
        case 0x1d59e4u: goto label_1d59e4;
        case 0x1d59e8u: goto label_1d59e8;
        case 0x1d59ecu: goto label_1d59ec;
        case 0x1d59f0u: goto label_1d59f0;
        case 0x1d59f4u: goto label_1d59f4;
        case 0x1d59f8u: goto label_1d59f8;
        case 0x1d59fcu: goto label_1d59fc;
        case 0x1d5a00u: goto label_1d5a00;
        case 0x1d5a04u: goto label_1d5a04;
        case 0x1d5a08u: goto label_1d5a08;
        case 0x1d5a0cu: goto label_1d5a0c;
        case 0x1d5a10u: goto label_1d5a10;
        case 0x1d5a14u: goto label_1d5a14;
        case 0x1d5a18u: goto label_1d5a18;
        case 0x1d5a1cu: goto label_1d5a1c;
        case 0x1d5a20u: goto label_1d5a20;
        case 0x1d5a24u: goto label_1d5a24;
        case 0x1d5a28u: goto label_1d5a28;
        case 0x1d5a2cu: goto label_1d5a2c;
        case 0x1d5a30u: goto label_1d5a30;
        case 0x1d5a34u: goto label_1d5a34;
        case 0x1d5a38u: goto label_1d5a38;
        case 0x1d5a3cu: goto label_1d5a3c;
        case 0x1d5a40u: goto label_1d5a40;
        case 0x1d5a44u: goto label_1d5a44;
        case 0x1d5a48u: goto label_1d5a48;
        case 0x1d5a4cu: goto label_1d5a4c;
        case 0x1d5a50u: goto label_1d5a50;
        case 0x1d5a54u: goto label_1d5a54;
        case 0x1d5a58u: goto label_1d5a58;
        case 0x1d5a5cu: goto label_1d5a5c;
        case 0x1d5a60u: goto label_1d5a60;
        case 0x1d5a64u: goto label_1d5a64;
        case 0x1d5a68u: goto label_1d5a68;
        case 0x1d5a6cu: goto label_1d5a6c;
        case 0x1d5a70u: goto label_1d5a70;
        case 0x1d5a74u: goto label_1d5a74;
        case 0x1d5a78u: goto label_1d5a78;
        case 0x1d5a7cu: goto label_1d5a7c;
        case 0x1d5a80u: goto label_1d5a80;
        case 0x1d5a84u: goto label_1d5a84;
        case 0x1d5a88u: goto label_1d5a88;
        case 0x1d5a8cu: goto label_1d5a8c;
        case 0x1d5a90u: goto label_1d5a90;
        case 0x1d5a94u: goto label_1d5a94;
        case 0x1d5a98u: goto label_1d5a98;
        case 0x1d5a9cu: goto label_1d5a9c;
        case 0x1d5aa0u: goto label_1d5aa0;
        case 0x1d5aa4u: goto label_1d5aa4;
        case 0x1d5aa8u: goto label_1d5aa8;
        case 0x1d5aacu: goto label_1d5aac;
        case 0x1d5ab0u: goto label_1d5ab0;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5ab8u: goto label_1d5ab8;
        case 0x1d5abcu: goto label_1d5abc;
        case 0x1d5ac0u: goto label_1d5ac0;
        case 0x1d5ac4u: goto label_1d5ac4;
        case 0x1d5ac8u: goto label_1d5ac8;
        case 0x1d5accu: goto label_1d5acc;
        case 0x1d5ad0u: goto label_1d5ad0;
        case 0x1d5ad4u: goto label_1d5ad4;
        case 0x1d5ad8u: goto label_1d5ad8;
        case 0x1d5adcu: goto label_1d5adc;
        case 0x1d5ae0u: goto label_1d5ae0;
        case 0x1d5ae4u: goto label_1d5ae4;
        case 0x1d5ae8u: goto label_1d5ae8;
        case 0x1d5aecu: goto label_1d5aec;
        case 0x1d5af0u: goto label_1d5af0;
        case 0x1d5af4u: goto label_1d5af4;
        case 0x1d5af8u: goto label_1d5af8;
        case 0x1d5afcu: goto label_1d5afc;
        case 0x1d5b00u: goto label_1d5b00;
        case 0x1d5b04u: goto label_1d5b04;
        case 0x1d5b08u: goto label_1d5b08;
        case 0x1d5b0cu: goto label_1d5b0c;
        case 0x1d5b10u: goto label_1d5b10;
        case 0x1d5b14u: goto label_1d5b14;
        case 0x1d5b18u: goto label_1d5b18;
        case 0x1d5b1cu: goto label_1d5b1c;
        case 0x1d5b20u: goto label_1d5b20;
        case 0x1d5b24u: goto label_1d5b24;
        case 0x1d5b28u: goto label_1d5b28;
        case 0x1d5b2cu: goto label_1d5b2c;
        case 0x1d5b30u: goto label_1d5b30;
        case 0x1d5b34u: goto label_1d5b34;
        case 0x1d5b38u: goto label_1d5b38;
        case 0x1d5b3cu: goto label_1d5b3c;
        case 0x1d5b40u: goto label_1d5b40;
        case 0x1d5b44u: goto label_1d5b44;
        case 0x1d5b48u: goto label_1d5b48;
        case 0x1d5b4cu: goto label_1d5b4c;
        case 0x1d5b50u: goto label_1d5b50;
        case 0x1d5b54u: goto label_1d5b54;
        case 0x1d5b58u: goto label_1d5b58;
        case 0x1d5b5cu: goto label_1d5b5c;
        case 0x1d5b60u: goto label_1d5b60;
        case 0x1d5b64u: goto label_1d5b64;
        case 0x1d5b68u: goto label_1d5b68;
        case 0x1d5b6cu: goto label_1d5b6c;
        case 0x1d5b70u: goto label_1d5b70;
        case 0x1d5b74u: goto label_1d5b74;
        case 0x1d5b78u: goto label_1d5b78;
        case 0x1d5b7cu: goto label_1d5b7c;
        case 0x1d5b80u: goto label_1d5b80;
        case 0x1d5b84u: goto label_1d5b84;
        case 0x1d5b88u: goto label_1d5b88;
        case 0x1d5b8cu: goto label_1d5b8c;
        case 0x1d5b90u: goto label_1d5b90;
        case 0x1d5b94u: goto label_1d5b94;
        case 0x1d5b98u: goto label_1d5b98;
        case 0x1d5b9cu: goto label_1d5b9c;
        case 0x1d5ba0u: goto label_1d5ba0;
        case 0x1d5ba4u: goto label_1d5ba4;
        case 0x1d5ba8u: goto label_1d5ba8;
        case 0x1d5bacu: goto label_1d5bac;
        case 0x1d5bb0u: goto label_1d5bb0;
        case 0x1d5bb4u: goto label_1d5bb4;
        case 0x1d5bb8u: goto label_1d5bb8;
        case 0x1d5bbcu: goto label_1d5bbc;
        case 0x1d5bc0u: goto label_1d5bc0;
        case 0x1d5bc4u: goto label_1d5bc4;
        case 0x1d5bc8u: goto label_1d5bc8;
        case 0x1d5bccu: goto label_1d5bcc;
        case 0x1d5bd0u: goto label_1d5bd0;
        case 0x1d5bd4u: goto label_1d5bd4;
        case 0x1d5bd8u: goto label_1d5bd8;
        case 0x1d5bdcu: goto label_1d5bdc;
        case 0x1d5be0u: goto label_1d5be0;
        case 0x1d5be4u: goto label_1d5be4;
        case 0x1d5be8u: goto label_1d5be8;
        case 0x1d5becu: goto label_1d5bec;
        case 0x1d5bf0u: goto label_1d5bf0;
        case 0x1d5bf4u: goto label_1d5bf4;
        case 0x1d5bf8u: goto label_1d5bf8;
        case 0x1d5bfcu: goto label_1d5bfc;
        case 0x1d5c00u: goto label_1d5c00;
        case 0x1d5c04u: goto label_1d5c04;
        case 0x1d5c08u: goto label_1d5c08;
        case 0x1d5c0cu: goto label_1d5c0c;
        case 0x1d5c10u: goto label_1d5c10;
        case 0x1d5c14u: goto label_1d5c14;
        case 0x1d5c18u: goto label_1d5c18;
        case 0x1d5c1cu: goto label_1d5c1c;
        case 0x1d5c20u: goto label_1d5c20;
        case 0x1d5c24u: goto label_1d5c24;
        case 0x1d5c28u: goto label_1d5c28;
        case 0x1d5c2cu: goto label_1d5c2c;
        case 0x1d5c30u: goto label_1d5c30;
        case 0x1d5c34u: goto label_1d5c34;
        case 0x1d5c38u: goto label_1d5c38;
        case 0x1d5c3cu: goto label_1d5c3c;
        case 0x1d5c40u: goto label_1d5c40;
        case 0x1d5c44u: goto label_1d5c44;
        case 0x1d5c48u: goto label_1d5c48;
        case 0x1d5c4cu: goto label_1d5c4c;
        case 0x1d5c50u: goto label_1d5c50;
        case 0x1d5c54u: goto label_1d5c54;
        case 0x1d5c58u: goto label_1d5c58;
        case 0x1d5c5cu: goto label_1d5c5c;
        case 0x1d5c60u: goto label_1d5c60;
        case 0x1d5c64u: goto label_1d5c64;
        case 0x1d5c68u: goto label_1d5c68;
        case 0x1d5c6cu: goto label_1d5c6c;
        case 0x1d5c70u: goto label_1d5c70;
        case 0x1d5c74u: goto label_1d5c74;
        case 0x1d5c78u: goto label_1d5c78;
        case 0x1d5c7cu: goto label_1d5c7c;
        case 0x1d5c80u: goto label_1d5c80;
        case 0x1d5c84u: goto label_1d5c84;
        case 0x1d5c88u: goto label_1d5c88;
        case 0x1d5c8cu: goto label_1d5c8c;
        case 0x1d5c90u: goto label_1d5c90;
        case 0x1d5c94u: goto label_1d5c94;
        case 0x1d5c98u: goto label_1d5c98;
        case 0x1d5c9cu: goto label_1d5c9c;
        case 0x1d5ca0u: goto label_1d5ca0;
        case 0x1d5ca4u: goto label_1d5ca4;
        case 0x1d5ca8u: goto label_1d5ca8;
        case 0x1d5cacu: goto label_1d5cac;
        case 0x1d5cb0u: goto label_1d5cb0;
        case 0x1d5cb4u: goto label_1d5cb4;
        case 0x1d5cb8u: goto label_1d5cb8;
        case 0x1d5cbcu: goto label_1d5cbc;
        case 0x1d5cc0u: goto label_1d5cc0;
        case 0x1d5cc4u: goto label_1d5cc4;
        case 0x1d5cc8u: goto label_1d5cc8;
        case 0x1d5cccu: goto label_1d5ccc;
        case 0x1d5cd0u: goto label_1d5cd0;
        case 0x1d5cd4u: goto label_1d5cd4;
        case 0x1d5cd8u: goto label_1d5cd8;
        case 0x1d5cdcu: goto label_1d5cdc;
        case 0x1d5ce0u: goto label_1d5ce0;
        case 0x1d5ce4u: goto label_1d5ce4;
        case 0x1d5ce8u: goto label_1d5ce8;
        case 0x1d5cecu: goto label_1d5cec;
        case 0x1d5cf0u: goto label_1d5cf0;
        case 0x1d5cf4u: goto label_1d5cf4;
        case 0x1d5cf8u: goto label_1d5cf8;
        case 0x1d5cfcu: goto label_1d5cfc;
        case 0x1d5d00u: goto label_1d5d00;
        case 0x1d5d04u: goto label_1d5d04;
        case 0x1d5d08u: goto label_1d5d08;
        case 0x1d5d0cu: goto label_1d5d0c;
        case 0x1d5d10u: goto label_1d5d10;
        case 0x1d5d14u: goto label_1d5d14;
        case 0x1d5d18u: goto label_1d5d18;
        case 0x1d5d1cu: goto label_1d5d1c;
        case 0x1d5d20u: goto label_1d5d20;
        case 0x1d5d24u: goto label_1d5d24;
        case 0x1d5d28u: goto label_1d5d28;
        case 0x1d5d2cu: goto label_1d5d2c;
        case 0x1d5d30u: goto label_1d5d30;
        case 0x1d5d34u: goto label_1d5d34;
        case 0x1d5d38u: goto label_1d5d38;
        case 0x1d5d3cu: goto label_1d5d3c;
        case 0x1d5d40u: goto label_1d5d40;
        case 0x1d5d44u: goto label_1d5d44;
        case 0x1d5d48u: goto label_1d5d48;
        case 0x1d5d4cu: goto label_1d5d4c;
        default: break;
    }

    ctx->pc = 0x1d4020u;

label_1d4020:
    // 0x1d4020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d4024:
    // 0x1d4024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4028:
    // 0x1d4028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d4028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d402c:
    // 0x1d402c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d402cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4030:
    // 0x1d4030: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d4034:
    // 0x1d4034: 0xc064924  jal         func_192490
label_1d4038:
    if (ctx->pc == 0x1D4038u) {
        ctx->pc = 0x1D403Cu;
        goto label_1d403c;
    }
    ctx->pc = 0x1D4034u;
    SET_GPR_U32(ctx, 31, 0x1D403Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1D4034u, 0x1D403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D403Cu;
label_1d403c:
    // 0x1d403c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1d403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1d4040:
    // 0x1d4040: 0x24634c40  addiu       $v1, $v1, 0x4C40
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19520));
label_1d4044:
    // 0x1d4044: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d4044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4048:
    // 0x1d4048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d4048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1d404c:
    // 0x1d404c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4050:
    // 0x1d4050: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1d4050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1d4054:
    // 0x1d4054: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d4054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d4058:
    // 0x1d4058: 0x24a57d08  addiu       $a1, $a1, 0x7D08
    ctx->pc = 0x1d4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32008));
label_1d405c:
    // 0x1d405c: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1d405cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_1d4060:
    // 0x1d4060: 0xc08e514  jal         func_239450
label_1d4064:
    if (ctx->pc == 0x1D4064u) {
        ctx->pc = 0x1D4068u;
        goto label_1d4068;
    }
    ctx->pc = 0x1D4060u;
    SET_GPR_U32(ctx, 31, 0x1D4068u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1D4060u, 0x1D4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4068u;
label_1d4068:
    // 0x1d4068: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d4068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d406c:
    // 0x1d406c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d406cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4070:
    // 0x1d4070: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1d4070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
label_1d4074:
    // 0x1d4074: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d4074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4078:
    // 0x1d4078: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x1d4078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
label_1d407c:
    // 0x1d407c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d407cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4080:
    // 0x1d4080: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4084:
    // 0x1d4084: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1d4084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1d4088:
    // 0x1d4088: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d4088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d408c:
    // 0x1d408c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4090:
    // 0x1d4090: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d4090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d4094:
    // 0x1d4094: 0x3e00008  jr          $ra
label_1d4098:
    if (ctx->pc == 0x1D4098u) {
        ctx->pc = 0x1D409Cu;
        goto label_1d409c;
    }
    ctx->pc = 0x1D4094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D409Cu;
label_1d409c:
    // 0x1d409c: 0x0  nop
    ctx->pc = 0x1d409cu;
    // NOP
label_1d40a0:
    // 0x1d40a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d40a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1d40a4:
    // 0x1d40a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d40a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1d40a8:
    // 0x1d40a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d40a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1d40ac:
    // 0x1d40ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d40acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d40b0:
    // 0x1d40b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d40b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d40b4:
    // 0x1d40b4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d40b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d40b8:
    // 0x1d40b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d40b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d40bc:
    // 0x1d40bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d40bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d40c0:
    // 0x1d40c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d40c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d40c4:
    // 0x1d40c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d40c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d40c8:
    // 0x1d40c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d40c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d40cc:
    // 0x1d40cc: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x1d40ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_1d40d0:
    // 0x1d40d0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d40d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d40d4:
    // 0x1d40d4: 0xc064a74  jal         func_1929D0
label_1d40d8:
    if (ctx->pc == 0x1D40D8u) {
        ctx->pc = 0x1D40DCu;
        goto label_1d40dc;
    }
    ctx->pc = 0x1D40D4u;
    SET_GPR_U32(ctx, 31, 0x1D40DCu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1D40D4u, 0x1D40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40DCu;
label_1d40dc:
    // 0x1d40dc: 0x1040069c  beqz        $v0, . + 4 + (0x69C << 2)
label_1d40e0:
    if (ctx->pc == 0x1D40E0u) {
        ctx->pc = 0x1D40E4u;
        goto label_1d40e4;
    }
    ctx->pc = 0x1D40DCu;
    {
        const bool branch_taken_0x1d40dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d40dc) {
            ctx->pc = 0x1D5B50u;
            goto label_1d5b50;
        }
    }
    ctx->pc = 0x1D40E4u;
label_1d40e4:
    // 0x1d40e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d40e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d40e8:
    // 0x1d40e8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d40ec:
    // 0x1d40ec: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1d40ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1d40f0:
    // 0x1d40f0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1d40f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
label_1d40f4:
    // 0x1d40f4: 0x24847d20  addiu       $a0, $a0, 0x7D20
    ctx->pc = 0x1d40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32032));
label_1d40f8:
    // 0x1d40f8: 0xc0ac004  jal         func_2B0010
label_1d40fc:
    if (ctx->pc == 0x1D40FCu) {
        ctx->pc = 0x1D4100u;
        goto label_1d4100;
    }
    ctx->pc = 0x1D40F8u;
    SET_GPR_U32(ctx, 31, 0x1D4100u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1D40F8u, 0x1D4100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4100u;
label_1d4100:
    // 0x1d4100: 0x8fb600f0  lw          $s6, 0xF0($sp)
    ctx->pc = 0x1d4100u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4104:
    // 0x1d4104: 0xaec20060  sw          $v0, 0x60($s6)
    ctx->pc = 0x1d4104u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 2));
label_1d4108:
    // 0x1d4108: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d4108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d410c:
    // 0x1d410c: 0xa06000c0  sb          $zero, 0xC0($v1)
    ctx->pc = 0x1d410cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 192), (uint8_t)GPR_U32(ctx, 0));
label_1d4110:
    // 0x1d4110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4114:
    // 0x1d4114: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4118:
    // 0x1d4118: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1d4118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_1d411c:
    // 0x1d411c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d411cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4120:
    // 0x1d4120: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4124:
    // 0x1d4124: 0xaca400b8  sw          $a0, 0xB8($a1)
    ctx->pc = 0x1d4124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 184), GPR_U32(ctx, 4));
label_1d4128:
    // 0x1d4128: 0xa3a000ef  sb          $zero, 0xEF($sp)
    ctx->pc = 0x1d4128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 239), (uint8_t)GPR_U32(ctx, 0));
label_1d412c:
    // 0x1d412c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d4130:
    // 0x1d4130: 0xc0514a8  jal         func_1452A0
label_1d4134:
    if (ctx->pc == 0x1D4134u) {
        ctx->pc = 0x1D4138u;
        goto label_1d4138;
    }
    ctx->pc = 0x1D4130u;
    SET_GPR_U32(ctx, 31, 0x1D4138u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x1D4130u, 0x1D4138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4138u;
label_1d4138:
    // 0x1d4138: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1d4138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1d413c:
    // 0x1d413c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d4140:
    // 0x1d4140: 0x24450054  addiu       $a1, $v0, 0x54
    ctx->pc = 0x1d4140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
label_1d4144:
    // 0x1d4144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d4144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4148:
    // 0x1d4148: 0xc061bf0  jal         func_186FC0
label_1d414c:
    if (ctx->pc == 0x1D414Cu) {
        ctx->pc = 0x1D4150u;
        goto label_1d4150;
    }
    ctx->pc = 0x1D4148u;
    SET_GPR_U32(ctx, 31, 0x1D4150u);
    ctx->pc = 0x186FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186FC0u, 0x1D4148u, 0x1D4150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4150u;
label_1d4150:
    // 0x1d4150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d4150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4154:
    // 0x1d4154: 0x10000047  b           . + 4 + (0x47 << 2)
label_1d4158:
    if (ctx->pc == 0x1D4158u) {
        ctx->pc = 0x1D415Cu;
        goto label_1d415c;
    }
    ctx->pc = 0x1D4154u;
    {
        const bool branch_taken_0x1d4154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4154) {
            ctx->pc = 0x1D4274u;
            goto label_1d4274;
        }
    }
    ctx->pc = 0x1D415Cu;
label_1d415c:
    // 0x1d415c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d4160:
    // 0x1d4160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d4160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4164:
    // 0x1d4164: 0xc042ff0  jal         func_10BFC0
label_1d4168:
    if (ctx->pc == 0x1D4168u) {
        ctx->pc = 0x1D416Cu;
        goto label_1d416c;
    }
    ctx->pc = 0x1D4164u;
    SET_GPR_U32(ctx, 31, 0x1D416Cu);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x1D4164u, 0x1D416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D416Cu;
label_1d416c:
    // 0x1d416c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1d416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1d4170:
    // 0x1d4170: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4174:
    // 0x1d4174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4178:
    // 0x1d4178: 0xc042844  jal         func_10A110
label_1d417c:
    if (ctx->pc == 0x1D417Cu) {
        ctx->pc = 0x1D4180u;
        goto label_1d4180;
    }
    ctx->pc = 0x1D4178u;
    SET_GPR_U32(ctx, 31, 0x1D4180u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x1D4178u, 0x1D4180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4180u;
label_1d4180:
    // 0x1d4180: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x1d4180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1d4184:
    // 0x1d4184: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4188:
    // 0x1d4188: 0xc11931c  jal         func_464C70
label_1d418c:
    if (ctx->pc == 0x1D418Cu) {
        ctx->pc = 0x1D4190u;
        goto label_1d4190;
    }
    ctx->pc = 0x1D4188u;
    SET_GPR_U32(ctx, 31, 0x1D4190u);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x1D4188u, 0x1D4190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4190u;
label_1d4190:
    // 0x1d4190: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1d4190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1d4194:
    // 0x1d4194: 0xc041b38  jal         func_106CE0
label_1d4198:
    if (ctx->pc == 0x1D4198u) {
        ctx->pc = 0x1D419Cu;
        goto label_1d419c;
    }
    ctx->pc = 0x1D4194u;
    SET_GPR_U32(ctx, 31, 0x1D419Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4194u, 0x1D419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D419Cu;
label_1d419c:
    // 0x1d419c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d419cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d41a0:
    // 0x1d41a0: 0x27869720  addiu       $a2, $gp, -0x68E0
    ctx->pc = 0x1d41a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940448));
label_1d41a4:
    // 0x1d41a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d41a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d41a8:
    // 0x1d41a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d41a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d41ac:
    // 0x1d41ac: 0xc0bc66e  jal         func_2F19B8
label_1d41b0:
    if (ctx->pc == 0x1D41B0u) {
        ctx->pc = 0x1D41B4u;
        goto label_1d41b4;
    }
    ctx->pc = 0x1D41ACu;
    SET_GPR_U32(ctx, 31, 0x1D41B4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D41ACu, 0x1D41B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41B4u;
label_1d41b4:
    // 0x1d41b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d41b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d41b8:
    // 0x1d41b8: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1d41bc:
    if (ctx->pc == 0x1D41BCu) {
        ctx->pc = 0x1D41C0u;
        goto label_1d41c0;
    }
    ctx->pc = 0x1D41B8u;
    {
        const bool branch_taken_0x1d41b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d41b8) {
            ctx->pc = 0x1D425Cu;
            goto label_1d425c;
        }
    }
    ctx->pc = 0x1D41C0u;
label_1d41c0:
    // 0x1d41c0: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1d41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1d41c4:
    // 0x1d41c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d41c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d41c8:
    // 0x1d41c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d41c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d41cc:
    // 0x1d41cc: 0xc047848  jal         func_11E120
label_1d41d0:
    if (ctx->pc == 0x1D41D0u) {
        ctx->pc = 0x1D41D4u;
        goto label_1d41d4;
    }
    ctx->pc = 0x1D41CCu;
    SET_GPR_U32(ctx, 31, 0x1D41D4u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D41CCu, 0x1D41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41D4u;
label_1d41d4:
    // 0x1d41d4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1d41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1d41d8:
    // 0x1d41d8: 0xc041b38  jal         func_106CE0
label_1d41dc:
    if (ctx->pc == 0x1D41DCu) {
        ctx->pc = 0x1D41E0u;
        goto label_1d41e0;
    }
    ctx->pc = 0x1D41D8u;
    SET_GPR_U32(ctx, 31, 0x1D41E0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D41D8u, 0x1D41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41E0u;
label_1d41e0:
    // 0x1d41e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d41e4:
    // 0x1d41e4: 0xc0ba89e  jal         func_2EA278
label_1d41e8:
    if (ctx->pc == 0x1D41E8u) {
        ctx->pc = 0x1D41ECu;
        goto label_1d41ec;
    }
    ctx->pc = 0x1D41E4u;
    SET_GPR_U32(ctx, 31, 0x1D41ECu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D41E4u, 0x1D41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D41ECu;
label_1d41ec:
    // 0x1d41ec: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d41f0:
    // 0x1d41f0: 0xac8200b8  sw          $v0, 0xB8($a0)
    ctx->pc = 0x1d41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 2));
label_1d41f4:
    // 0x1d41f4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d41f8:
    // 0x1d41f8: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x1d41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_1d41fc:
    // 0x1d41fc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1d4200:
    if (ctx->pc == 0x1D4200u) {
        ctx->pc = 0x1D4204u;
        goto label_1d4204;
    }
    ctx->pc = 0x1D41FCu;
    {
        const bool branch_taken_0x1d41fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d41fc) {
            ctx->pc = 0x1D4214u;
            goto label_1d4214;
        }
    }
    ctx->pc = 0x1D4204u;
label_1d4204:
    // 0x1d4204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4208:
    // 0x1d4208: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1d4208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1d420c:
    // 0x1d420c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d4210:
    if (ctx->pc == 0x1D4210u) {
        ctx->pc = 0x1D4214u;
        goto label_1d4214;
    }
    ctx->pc = 0x1D420Cu;
    {
        const bool branch_taken_0x1d420c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d420c) {
            ctx->pc = 0x1D4220u;
            goto label_1d4220;
        }
    }
    ctx->pc = 0x1D4214u;
label_1d4214:
    // 0x1d4214: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4218:
    // 0x1d4218: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x1d4218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_1d421c:
    // 0x1d421c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x1d421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_1d4220:
    // 0x1d4220: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x1d4220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_1d4224:
    // 0x1d4224: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4228:
    // 0x1d4228: 0xac4400b8  sw          $a0, 0xB8($v0)
    ctx->pc = 0x1d4228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 4));
label_1d422c:
    // 0x1d422c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d422cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4230:
    // 0x1d4230: 0x8ca600b8  lw          $a2, 0xB8($a1)
    ctx->pc = 0x1d4230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 184)));
label_1d4234:
    // 0x1d4234: 0x2cc10005  sltiu       $at, $a2, 0x5
    ctx->pc = 0x1d4234u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1d4238:
    // 0x1d4238: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_1d423c:
    if (ctx->pc == 0x1D423Cu) {
        ctx->pc = 0x1D4240u;
        goto label_1d4240;
    }
    ctx->pc = 0x1D4238u;
    {
        const bool branch_taken_0x1d4238 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4238) {
            ctx->pc = 0x1D424Cu;
            goto label_1d424c;
        }
    }
    ctx->pc = 0x1D4240u;
label_1d4240:
    // 0x1d4240: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x1d4240u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4244:
    // 0x1d4244: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d4248:
    if (ctx->pc == 0x1D4248u) {
        ctx->pc = 0x1D424Cu;
        goto label_1d424c;
    }
    ctx->pc = 0x1D4244u;
    {
        const bool branch_taken_0x1d4244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4244) {
            ctx->pc = 0x1D4254u;
            goto label_1d4254;
        }
    }
    ctx->pc = 0x1D424Cu;
label_1d424c:
    // 0x1d424c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d424cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4250:
    // 0x1d4250: 0x8c9e00b8  lw          $fp, 0xB8($a0)
    ctx->pc = 0x1d4250u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_1d4254:
    // 0x1d4254: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4258:
    // 0x1d4258: 0xac5e00b8  sw          $fp, 0xB8($v0)
    ctx->pc = 0x1d4258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 30));
label_1d425c:
    // 0x1d425c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x1d425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_1d4260:
    // 0x1d4260: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d4260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d4264:
    // 0x1d4264: 0xc0402d4  jal         func_100B50
label_1d4268:
    if (ctx->pc == 0x1D4268u) {
        ctx->pc = 0x1D426Cu;
        goto label_1d426c;
    }
    ctx->pc = 0x1D4264u;
    SET_GPR_U32(ctx, 31, 0x1D426Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1D4264u, 0x1D426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D426Cu;
label_1d426c:
    // 0x1d426c: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1d426cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d4270:
    // 0x1d4270: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4274:
    // 0x1d4274: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d4274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d4278:
    // 0x1d4278: 0xc043104  jal         func_10C410
label_1d427c:
    if (ctx->pc == 0x1D427Cu) {
        ctx->pc = 0x1D4280u;
        goto label_1d4280;
    }
    ctx->pc = 0x1D4278u;
    SET_GPR_U32(ctx, 31, 0x1D4280u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x1D4278u, 0x1D4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4280u;
label_1d4280:
    // 0x1d4280: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1d4280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d4284:
    // 0x1d4284: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_1d4288:
    if (ctx->pc == 0x1D4288u) {
        ctx->pc = 0x1D428Cu;
        goto label_1d428c;
    }
    ctx->pc = 0x1D4284u;
    {
        const bool branch_taken_0x1d4284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4284) {
            ctx->pc = 0x1D415Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d415c;
        }
    }
    ctx->pc = 0x1D428Cu;
label_1d428c:
    // 0x1d428c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d428cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4290:
    // 0x1d4290: 0xa0a000b4  sb          $zero, 0xB4($a1)
    ctx->pc = 0x1d4290u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 180), (uint8_t)GPR_U32(ctx, 0));
label_1d4294:
    // 0x1d4294: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4298:
    // 0x1d4298: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d429c:
    // 0x1d429c: 0xe4c000bc  swc1        $f0, 0xBC($a2)
    ctx->pc = 0x1d429cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 188), bits); }
label_1d42a0:
    // 0x1d42a0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1d42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1d42a4:
    // 0x1d42a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d42a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d42a8:
    // 0x1d42a8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d42a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d42ac:
    // 0x1d42ac: 0xc064de4  jal         func_193790
label_1d42b0:
    if (ctx->pc == 0x1D42B0u) {
        ctx->pc = 0x1D42B4u;
        goto label_1d42b4;
    }
    ctx->pc = 0x1D42ACu;
    SET_GPR_U32(ctx, 31, 0x1D42B4u);
    ctx->pc = 0x193790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193790u, 0x1D42ACu, 0x1D42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42B4u;
label_1d42b4:
    // 0x1d42b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d42b8:
    // 0x1d42b8: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1d42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
label_1d42bc:
    // 0x1d42bc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d42c0:
    // 0x1d42c0: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1d42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_1d42c4:
    // 0x1d42c4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d42c8:
    // 0x1d42c8: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x1d42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
label_1d42cc:
    // 0x1d42cc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d42d0:
    // 0x1d42d0: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1d42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_1d42d4:
    // 0x1d42d4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d42d8:
    // 0x1d42d8: 0x8c4500b8  lw          $a1, 0xB8($v0)
    ctx->pc = 0x1d42d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_1d42dc:
    // 0x1d42dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d42dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d42e0:
    // 0x1d42e0: 0x10a60064  beq         $a1, $a2, . + 4 + (0x64 << 2)
label_1d42e4:
    if (ctx->pc == 0x1D42E4u) {
        ctx->pc = 0x1D42E8u;
        goto label_1d42e8;
    }
    ctx->pc = 0x1D42E0u;
    {
        const bool branch_taken_0x1d42e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d42e0) {
            ctx->pc = 0x1D4474u;
            goto label_1d4474;
        }
    }
    ctx->pc = 0x1D42E8u;
label_1d42e8:
    // 0x1d42e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d42ec:
    // 0x1d42ec: 0x10a40042  beq         $a1, $a0, . + 4 + (0x42 << 2)
label_1d42f0:
    if (ctx->pc == 0x1D42F0u) {
        ctx->pc = 0x1D42F4u;
        goto label_1d42f4;
    }
    ctx->pc = 0x1D42ECu;
    {
        const bool branch_taken_0x1d42ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d42ec) {
            ctx->pc = 0x1D43F8u;
            goto label_1d43f8;
        }
    }
    ctx->pc = 0x1D42F4u;
label_1d42f4:
    // 0x1d42f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d42f8:
    // 0x1d42f8: 0x10a20023  beq         $a1, $v0, . + 4 + (0x23 << 2)
label_1d42fc:
    if (ctx->pc == 0x1D42FCu) {
        ctx->pc = 0x1D4300u;
        goto label_1d4300;
    }
    ctx->pc = 0x1D42F8u;
    {
        const bool branch_taken_0x1d42f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d42f8) {
            ctx->pc = 0x1D4388u;
            goto label_1d4388;
        }
    }
    ctx->pc = 0x1D4300u;
label_1d4300:
    // 0x1d4300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4304:
    // 0x1d4304: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
label_1d4308:
    if (ctx->pc == 0x1D4308u) {
        ctx->pc = 0x1D430Cu;
        goto label_1d430c;
    }
    ctx->pc = 0x1D4304u;
    {
        const bool branch_taken_0x1d4304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d4304) {
            ctx->pc = 0x1D4314u;
            goto label_1d4314;
        }
    }
    ctx->pc = 0x1D430Cu;
label_1d430c:
    // 0x1d430c: 0x10000074  b           . + 4 + (0x74 << 2)
label_1d4310:
    if (ctx->pc == 0x1D4310u) {
        ctx->pc = 0x1D4314u;
        goto label_1d4314;
    }
    ctx->pc = 0x1D430Cu;
    {
        const bool branch_taken_0x1d430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d430c) {
            ctx->pc = 0x1D44E0u;
            goto label_1d44e0;
        }
    }
    ctx->pc = 0x1D4314u;
label_1d4314:
    // 0x1d4314: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4314u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4318:
    // 0x1d4318: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x1d4318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1d431c:
    // 0x1d431c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d431cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d4320:
    // 0x1d4320: 0x24a57d50  addiu       $a1, $a1, 0x7D50
    ctx->pc = 0x1d4320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32080));
label_1d4324:
    // 0x1d4324: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d4324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d4328:
    // 0x1d4328: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1d4328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1d432c:
    // 0x1d432c: 0x320f809  jalr        $t9
label_1d4330:
    if (ctx->pc == 0x1D4330u) {
        ctx->pc = 0x1D4334u;
        goto label_1d4334;
    }
    ctx->pc = 0x1D432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D4334u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D432Cu, 0x1D4334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4334u;
label_1d4334:
    // 0x1d4334: 0x24040108  addiu       $a0, $zero, 0x108
    ctx->pc = 0x1d4334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_1d4338:
    // 0x1d4338: 0xc119b68  jal         func_466DA0
label_1d433c:
    if (ctx->pc == 0x1D433Cu) {
        ctx->pc = 0x1D4340u;
        goto label_1d4340;
    }
    ctx->pc = 0x1D4338u;
    SET_GPR_U32(ctx, 31, 0x1D4340u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1D4338u, 0x1D4340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4340u;
label_1d4340:
    // 0x1d4340: 0x24040108  addiu       $a0, $zero, 0x108
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_1d4344:
    // 0x1d4344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4348:
    // 0x1d4348: 0xc0400e0  jal         func_100380
label_1d434c:
    if (ctx->pc == 0x1D434Cu) {
        ctx->pc = 0x1D4350u;
        goto label_1d4350;
    }
    ctx->pc = 0x1D4348u;
    SET_GPR_U32(ctx, 31, 0x1D4350u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1D4348u, 0x1D4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4350u;
label_1d4350:
    // 0x1d4350: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d4350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4354:
    // 0x1d4354: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_1d4358:
    if (ctx->pc == 0x1D4358u) {
        ctx->pc = 0x1D435Cu;
        goto label_1d435c;
    }
    ctx->pc = 0x1D4354u;
    {
        const bool branch_taken_0x1d4354 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4354) {
            ctx->pc = 0x1D4378u;
            goto label_1d4378;
        }
    }
    ctx->pc = 0x1D435Cu;
label_1d435c:
    // 0x1d435c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d435cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4360:
    // 0x1d4360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d4360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d4364:
    // 0x1d4364: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x1d4364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1d4368:
    // 0x1d4368: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d4368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d436c:
    // 0x1d436c: 0xc076cb4  jal         func_1DB2D0
label_1d4370:
    if (ctx->pc == 0x1D4370u) {
        ctx->pc = 0x1D4374u;
        goto label_1d4374;
    }
    ctx->pc = 0x1D436Cu;
    SET_GPR_U32(ctx, 31, 0x1D4374u);
    ctx->pc = 0x1DB2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB2D0u, 0x1D436Cu, 0x1D4374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4374u;
label_1d4374:
    // 0x1d4374: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d4374u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4378:
    // 0x1d4378: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d437c:
    // 0x1d437c: 0xacb400a4  sw          $s4, 0xA4($a1)
    ctx->pc = 0x1d437cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 20));
label_1d4380:
    // 0x1d4380: 0x10000057  b           . + 4 + (0x57 << 2)
label_1d4384:
    if (ctx->pc == 0x1D4384u) {
        ctx->pc = 0x1D4388u;
        goto label_1d4388;
    }
    ctx->pc = 0x1D4380u;
    {
        const bool branch_taken_0x1d4380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4380) {
            ctx->pc = 0x1D44E0u;
            goto label_1d44e0;
        }
    }
    ctx->pc = 0x1D4388u;
label_1d4388:
    // 0x1d4388: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4388u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d438c:
    // 0x1d438c: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x1d438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1d4390:
    // 0x1d4390: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d4390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d4394:
    // 0x1d4394: 0x24a57d80  addiu       $a1, $a1, 0x7D80
    ctx->pc = 0x1d4394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32128));
label_1d4398:
    // 0x1d4398: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d4398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d439c:
    // 0x1d439c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1d439cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1d43a0:
    // 0x1d43a0: 0x320f809  jalr        $t9
label_1d43a4:
    if (ctx->pc == 0x1D43A4u) {
        ctx->pc = 0x1D43A8u;
        goto label_1d43a8;
    }
    ctx->pc = 0x1D43A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D43A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D43A0u, 0x1D43A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D43A8u;
label_1d43a8:
    // 0x1d43a8: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x1d43a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1d43ac:
    // 0x1d43ac: 0xc119b68  jal         func_466DA0
label_1d43b0:
    if (ctx->pc == 0x1D43B0u) {
        ctx->pc = 0x1D43B4u;
        goto label_1d43b4;
    }
    ctx->pc = 0x1D43ACu;
    SET_GPR_U32(ctx, 31, 0x1D43B4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1D43ACu, 0x1D43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43B4u;
label_1d43b4:
    // 0x1d43b4: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x1d43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1d43b8:
    // 0x1d43b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d43b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d43bc:
    // 0x1d43bc: 0xc0400e0  jal         func_100380
label_1d43c0:
    if (ctx->pc == 0x1D43C0u) {
        ctx->pc = 0x1D43C4u;
        goto label_1d43c4;
    }
    ctx->pc = 0x1D43BCu;
    SET_GPR_U32(ctx, 31, 0x1D43C4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1D43BCu, 0x1D43C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43C4u;
label_1d43c4:
    // 0x1d43c4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d43c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d43c8:
    // 0x1d43c8: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_1d43cc:
    if (ctx->pc == 0x1D43CCu) {
        ctx->pc = 0x1D43D0u;
        goto label_1d43d0;
    }
    ctx->pc = 0x1D43C8u;
    {
        const bool branch_taken_0x1d43c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d43c8) {
            ctx->pc = 0x1D43E8u;
            goto label_1d43e8;
        }
    }
    ctx->pc = 0x1D43D0u;
label_1d43d0:
    // 0x1d43d0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d43d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d43d4:
    // 0x1d43d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d43d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d43d8:
    // 0x1d43d8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1d43d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1d43dc:
    // 0x1d43dc: 0xc077438  jal         func_1DD0E0
label_1d43e0:
    if (ctx->pc == 0x1D43E0u) {
        ctx->pc = 0x1D43E4u;
        goto label_1d43e4;
    }
    ctx->pc = 0x1D43DCu;
    SET_GPR_U32(ctx, 31, 0x1D43E4u);
    ctx->pc = 0x1DD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0E0u, 0x1D43DCu, 0x1D43E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43E4u;
label_1d43e4:
    // 0x1d43e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d43e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d43e8:
    // 0x1d43e8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d43ec:
    // 0x1d43ec: 0xacb300a8  sw          $s3, 0xA8($a1)
    ctx->pc = 0x1d43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 19));
label_1d43f0:
    // 0x1d43f0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1d43f4:
    if (ctx->pc == 0x1D43F4u) {
        ctx->pc = 0x1D43F8u;
        goto label_1d43f8;
    }
    ctx->pc = 0x1D43F0u;
    {
        const bool branch_taken_0x1d43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d43f0) {
            ctx->pc = 0x1D44E0u;
            goto label_1d44e0;
        }
    }
    ctx->pc = 0x1D43F8u;
label_1d43f8:
    // 0x1d43f8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d43f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d43fc:
    // 0x1d43fc: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1d43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1d4400:
    // 0x1d4400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4404:
    // 0x1d4404: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d4404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d4408:
    // 0x1d4408: 0x24a57db0  addiu       $a1, $a1, 0x7DB0
    ctx->pc = 0x1d4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32176));
label_1d440c:
    // 0x1d440c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d440cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d4410:
    // 0x1d4410: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1d4410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1d4414:
    // 0x1d4414: 0x320f809  jalr        $t9
label_1d4418:
    if (ctx->pc == 0x1D4418u) {
        ctx->pc = 0x1D441Cu;
        goto label_1d441c;
    }
    ctx->pc = 0x1D4414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D441Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4414u, 0x1D441Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D441Cu;
label_1d441c:
    // 0x1d441c: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x1d441cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_1d4420:
    // 0x1d4420: 0x3484fab0  ori         $a0, $a0, 0xFAB0
    ctx->pc = 0x1d4420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64176);
label_1d4424:
    // 0x1d4424: 0xc119b68  jal         func_466DA0
label_1d4428:
    if (ctx->pc == 0x1D4428u) {
        ctx->pc = 0x1D442Cu;
        goto label_1d442c;
    }
    ctx->pc = 0x1D4424u;
    SET_GPR_U32(ctx, 31, 0x1D442Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1D4424u, 0x1D442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D442Cu;
label_1d442c:
    // 0x1d442c: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1d442cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_1d4430:
    // 0x1d4430: 0x3464fab0  ori         $a0, $v1, 0xFAB0
    ctx->pc = 0x1d4430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64176);
label_1d4434:
    // 0x1d4434: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4438:
    // 0x1d4438: 0xc0400e0  jal         func_100380
label_1d443c:
    if (ctx->pc == 0x1D443Cu) {
        ctx->pc = 0x1D4440u;
        goto label_1d4440;
    }
    ctx->pc = 0x1D4438u;
    SET_GPR_U32(ctx, 31, 0x1D4440u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1D4438u, 0x1D4440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4440u;
label_1d4440:
    // 0x1d4440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d4440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4444:
    // 0x1d4444: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_1d4448:
    if (ctx->pc == 0x1D4448u) {
        ctx->pc = 0x1D444Cu;
        goto label_1d444c;
    }
    ctx->pc = 0x1D4444u;
    {
        const bool branch_taken_0x1d4444 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4444) {
            ctx->pc = 0x1D4464u;
            goto label_1d4464;
        }
    }
    ctx->pc = 0x1D444Cu;
label_1d444c:
    // 0x1d444c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4450:
    // 0x1d4450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d4450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d4454:
    // 0x1d4454: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1d4458:
    // 0x1d4458: 0xc077fd0  jal         func_1DFF40
label_1d445c:
    if (ctx->pc == 0x1D445Cu) {
        ctx->pc = 0x1D4460u;
        goto label_1d4460;
    }
    ctx->pc = 0x1D4458u;
    SET_GPR_U32(ctx, 31, 0x1D4460u);
    ctx->pc = 0x1DFF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF40u, 0x1D4458u, 0x1D4460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4460u;
label_1d4460:
    // 0x1d4460: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d4460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4464:
    // 0x1d4464: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4468:
    // 0x1d4468: 0xac5200ac  sw          $s2, 0xAC($v0)
    ctx->pc = 0x1d4468u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 18));
label_1d446c:
    // 0x1d446c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d4470:
    if (ctx->pc == 0x1D4470u) {
        ctx->pc = 0x1D4474u;
        goto label_1d4474;
    }
    ctx->pc = 0x1D446Cu;
    {
        const bool branch_taken_0x1d446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d446c) {
            ctx->pc = 0x1D44E0u;
            goto label_1d44e0;
        }
    }
    ctx->pc = 0x1D4474u;
label_1d4474:
    // 0x1d4474: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4478:
    // 0x1d4478: 0x8c860030  lw          $a2, 0x30($a0)
    ctx->pc = 0x1d4478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1d447c:
    // 0x1d447c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d447cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4480:
    // 0x1d4480: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1d4480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1d4484:
    // 0x1d4484: 0x24a57de0  addiu       $a1, $a1, 0x7DE0
    ctx->pc = 0x1d4484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32224));
label_1d4488:
    // 0x1d4488: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d448c:
    // 0x1d448c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1d448cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1d4490:
    // 0x1d4490: 0x320f809  jalr        $t9
label_1d4494:
    if (ctx->pc == 0x1D4494u) {
        ctx->pc = 0x1D4498u;
        goto label_1d4498;
    }
    ctx->pc = 0x1D4490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D4498u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4490u, 0x1D4498u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4498u;
label_1d4498:
    // 0x1d4498: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d4498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d449c:
    // 0x1d449c: 0xc119b68  jal         func_466DA0
label_1d44a0:
    if (ctx->pc == 0x1D44A0u) {
        ctx->pc = 0x1D44A4u;
        goto label_1d44a4;
    }
    ctx->pc = 0x1D449Cu;
    SET_GPR_U32(ctx, 31, 0x1D44A4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1D449Cu, 0x1D44A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D44A4u;
label_1d44a4:
    // 0x1d44a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1d44a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d44a8:
    // 0x1d44a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d44a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d44ac:
    // 0x1d44ac: 0xc0400e0  jal         func_100380
label_1d44b0:
    if (ctx->pc == 0x1D44B0u) {
        ctx->pc = 0x1D44B4u;
        goto label_1d44b4;
    }
    ctx->pc = 0x1D44ACu;
    SET_GPR_U32(ctx, 31, 0x1D44B4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1D44ACu, 0x1D44B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D44B4u;
label_1d44b4:
    // 0x1d44b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d44b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d44b8:
    // 0x1d44b8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_1d44bc:
    if (ctx->pc == 0x1D44BCu) {
        ctx->pc = 0x1D44C0u;
        goto label_1d44c0;
    }
    ctx->pc = 0x1D44B8u;
    {
        const bool branch_taken_0x1d44b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d44b8) {
            ctx->pc = 0x1D44D8u;
            goto label_1d44d8;
        }
    }
    ctx->pc = 0x1D44C0u;
label_1d44c0:
    // 0x1d44c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d44c4:
    // 0x1d44c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d44c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d44c8:
    // 0x1d44c8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x1d44c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1d44cc:
    // 0x1d44cc: 0xc079c0c  jal         func_1E7030
label_1d44d0:
    if (ctx->pc == 0x1D44D0u) {
        ctx->pc = 0x1D44D4u;
        goto label_1d44d4;
    }
    ctx->pc = 0x1D44CCu;
    SET_GPR_U32(ctx, 31, 0x1D44D4u);
    ctx->pc = 0x1E7030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7030u, 0x1D44CCu, 0x1D44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D44D4u;
label_1d44d4:
    // 0x1d44d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d44d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d44d8:
    // 0x1d44d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d44dc:
    // 0x1d44dc: 0xac5100b0  sw          $s1, 0xB0($v0)
    ctx->pc = 0x1d44dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 17));
label_1d44e0:
    // 0x1d44e0: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1d44e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_1d44e4:
    // 0x1d44e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d44e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d44e8:
    // 0x1d44e8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d44e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d44ec:
    // 0x1d44ec: 0xe4c000d0  swc1        $f0, 0xD0($a2)
    ctx->pc = 0x1d44ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 208), bits); }
label_1d44f0:
    // 0x1d44f0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1d44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1d44f4:
    // 0x1d44f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d44f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d44f8:
    // 0x1d44f8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d44f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d44fc:
    // 0x1d44fc: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1d44fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1d4500:
    // 0x1d4500: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1d4500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1d4504:
    // 0x1d4504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4508:
    // 0x1d4508: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d450c:
    // 0x1d450c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1d450cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1d4510:
    // 0x1d4510: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1d4510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1d4514:
    // 0x1d4514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4518:
    // 0x1d4518: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d451c:
    // 0x1d451c: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x1d451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_1d4520:
    // 0x1d4520: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d4520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
label_1d4524:
    // 0x1d4524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4528:
    // 0x1d4528: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d452c:
    // 0x1d452c: 0xe4a000e0  swc1        $f0, 0xE0($a1)
    ctx->pc = 0x1d452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
label_1d4530:
    // 0x1d4530: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x1d4530u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
label_1d4534:
    // 0x1d4534: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d4534u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4538:
    // 0x1d4538: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d453c:
    // 0x1d453c: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1d453cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
label_1d4540:
    // 0x1d4540: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1d4540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1d4544:
    // 0x1d4544: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d4544u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4548:
    // 0x1d4548: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d454c:
    // 0x1d454c: 0xe4c000e8  swc1        $f0, 0xE8($a2)
    ctx->pc = 0x1d454cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 232), bits); }
label_1d4550:
    // 0x1d4550: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1d4550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1d4554:
    // 0x1d4554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4558:
    // 0x1d4558: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d455c:
    // 0x1d455c: 0xe48000ec  swc1        $f0, 0xEC($a0)
    ctx->pc = 0x1d455cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
label_1d4560:
    // 0x1d4560: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1d4560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1d4564:
    // 0x1d4564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4568:
    // 0x1d4568: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d456c:
    // 0x1d456c: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x1d456cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_1d4570:
    // 0x1d4570: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1d4570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_1d4574:
    // 0x1d4574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4578:
    // 0x1d4578: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d457c:
    // 0x1d457c: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x1d457cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_1d4580:
    // 0x1d4580: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1d4580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1d4584:
    // 0x1d4584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4588:
    // 0x1d4588: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d458c:
    // 0x1d458c: 0xe4a000f8  swc1        $f0, 0xF8($a1)
    ctx->pc = 0x1d458cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 248), bits); }
label_1d4590:
    // 0x1d4590: 0x3c0641f0  lui         $a2, 0x41F0
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16880 << 16));
label_1d4594:
    // 0x1d4594: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d4594u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4598:
    // 0x1d4598: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d459c:
    // 0x1d459c: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x1d459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
label_1d45a0:
    // 0x1d45a0: 0x3c06c270  lui         $a2, 0xC270
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49776 << 16));
label_1d45a4:
    // 0x1d45a4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d45a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d45a8:
    // 0x1d45a8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d45a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d45ac:
    // 0x1d45ac: 0xe4c00100  swc1        $f0, 0x100($a2)
    ctx->pc = 0x1d45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 256), bits); }
label_1d45b0:
    // 0x1d45b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d45b4:
    // 0x1d45b4: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d45b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d45b8:
    // 0x1d45b8: 0xa0c20108  sb          $v0, 0x108($a2)
    ctx->pc = 0x1d45b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 264), (uint8_t)GPR_U32(ctx, 2));
label_1d45bc:
    // 0x1d45bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d45c0:
    // 0x1d45c0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d45c4:
    // 0x1d45c4: 0xa0820109  sb          $v0, 0x109($a0)
    ctx->pc = 0x1d45c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 265), (uint8_t)GPR_U32(ctx, 2));
label_1d45c8:
    // 0x1d45c8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d45c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d45cc:
    // 0x1d45cc: 0xa040010a  sb          $zero, 0x10A($v0)
    ctx->pc = 0x1d45ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 266), (uint8_t)GPR_U32(ctx, 0));
label_1d45d0:
    // 0x1d45d0: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x1d45d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1d45d4:
    // 0x1d45d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d45d8:
    // 0x1d45d8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d45d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d45dc:
    // 0x1d45dc: 0xaca200c4  sw          $v0, 0xC4($a1)
    ctx->pc = 0x1d45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 196), GPR_U32(ctx, 2));
label_1d45e0:
    // 0x1d45e0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d45e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d45e4:
    // 0x1d45e4: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x1d45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_1d45e8:
    // 0x1d45e8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d45e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1d45ec:
    // 0x1d45ec: 0xc085538  jal         func_2154E0
label_1d45f0:
    if (ctx->pc == 0x1D45F0u) {
        ctx->pc = 0x1D45F4u;
        goto label_1d45f4;
    }
    ctx->pc = 0x1D45ECu;
    SET_GPR_U32(ctx, 31, 0x1D45F4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D45ECu, 0x1D45F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D45F4u;
label_1d45f4:
    // 0x1d45f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d45f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d45f8:
    // 0x1d45f8: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_1d45fc:
    if (ctx->pc == 0x1D45FCu) {
        ctx->pc = 0x1D4600u;
        goto label_1d4600;
    }
    ctx->pc = 0x1D45F8u;
    {
        const bool branch_taken_0x1d45f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d45f8) {
            ctx->pc = 0x1D4640u;
            goto label_1d4640;
        }
    }
    ctx->pc = 0x1D4600u;
label_1d4600:
    // 0x1d4600: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d4600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4604:
    // 0x1d4604: 0xc063dd0  jal         func_18F740
label_1d4608:
    if (ctx->pc == 0x1D4608u) {
        ctx->pc = 0x1D460Cu;
        goto label_1d460c;
    }
    ctx->pc = 0x1D4604u;
    SET_GPR_U32(ctx, 31, 0x1D460Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1D4604u, 0x1D460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D460Cu;
label_1d460c:
    // 0x1d460c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d4610:
    if (ctx->pc == 0x1D4610u) {
        ctx->pc = 0x1D4614u;
        goto label_1d4614;
    }
    ctx->pc = 0x1D460Cu;
    {
        const bool branch_taken_0x1d460c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d460c) {
            ctx->pc = 0x1D4640u;
            goto label_1d4640;
        }
    }
    ctx->pc = 0x1D4614u;
label_1d4614:
    // 0x1d4614: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d4614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4618:
    // 0x1d4618: 0xc063dd0  jal         func_18F740
label_1d461c:
    if (ctx->pc == 0x1D461Cu) {
        ctx->pc = 0x1D4620u;
        goto label_1d4620;
    }
    ctx->pc = 0x1D4618u;
    SET_GPR_U32(ctx, 31, 0x1D4620u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1D4618u, 0x1D4620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4620u;
label_1d4620:
    // 0x1d4620: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4624:
    // 0x1d4624: 0xc0aeea8  jal         func_2BBAA0
label_1d4628:
    if (ctx->pc == 0x1D4628u) {
        ctx->pc = 0x1D462Cu;
        goto label_1d462c;
    }
    ctx->pc = 0x1D4624u;
    SET_GPR_U32(ctx, 31, 0x1D462Cu);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x1D4624u, 0x1D462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D462Cu;
label_1d462c:
    // 0x1d462c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d4630:
    // 0x1d4630: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4634:
    // 0x1d4634: 0xac8200c8  sw          $v0, 0xC8($a0)
    ctx->pc = 0x1d4634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 2));
label_1d4638:
    // 0x1d4638: 0x1000000c  b           . + 4 + (0xC << 2)
label_1d463c:
    if (ctx->pc == 0x1D463Cu) {
        ctx->pc = 0x1D4640u;
        goto label_1d4640;
    }
    ctx->pc = 0x1D4638u;
    {
        const bool branch_taken_0x1d4638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4638) {
            ctx->pc = 0x1D466Cu;
            goto label_1d466c;
        }
    }
    ctx->pc = 0x1D4640u;
label_1d4640:
    // 0x1d4640: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4644:
    // 0x1d4644: 0x8c8400c4  lw          $a0, 0xC4($a0)
    ctx->pc = 0x1d4644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_1d4648:
    // 0x1d4648: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d4648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d464c:
    // 0x1d464c: 0xc085538  jal         func_2154E0
label_1d4650:
    if (ctx->pc == 0x1D4650u) {
        ctx->pc = 0x1D4654u;
        goto label_1d4654;
    }
    ctx->pc = 0x1D464Cu;
    SET_GPR_U32(ctx, 31, 0x1D4654u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D464Cu, 0x1D4654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4654u;
label_1d4654:
    // 0x1d4654: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1d4654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1d4658:
    // 0x1d4658: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1d4658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_1d465c:
    // 0x1d465c: 0xc096880  jal         func_25A200
label_1d4660:
    if (ctx->pc == 0x1D4660u) {
        ctx->pc = 0x1D4664u;
        goto label_1d4664;
    }
    ctx->pc = 0x1D465Cu;
    SET_GPR_U32(ctx, 31, 0x1D4664u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1D465Cu, 0x1D4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4664u;
label_1d4664:
    // 0x1d4664: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4668:
    // 0x1d4668: 0xacc200c8  sw          $v0, 0xC8($a2)
    ctx->pc = 0x1d4668u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 2));
label_1d466c:
    // 0x1d466c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4670:
    // 0x1d4670: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1d4670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1d4674:
    // 0x1d4674: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4678:
    // 0x1d4678: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1d4678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1d467c:
    // 0x1d467c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_1d4680:
    if (ctx->pc == 0x1D4680u) {
        ctx->pc = 0x1D4684u;
        goto label_1d4684;
    }
    ctx->pc = 0x1D467Cu;
    {
        const bool branch_taken_0x1d467c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d467c) {
            ctx->pc = 0x1D46A8u;
            goto label_1d46a8;
        }
    }
    ctx->pc = 0x1D4684u;
label_1d4684:
    // 0x1d4684: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d4684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4688:
    // 0x1d4688: 0xc063dd0  jal         func_18F740
label_1d468c:
    if (ctx->pc == 0x1D468Cu) {
        ctx->pc = 0x1D4690u;
        goto label_1d4690;
    }
    ctx->pc = 0x1D4688u;
    SET_GPR_U32(ctx, 31, 0x1D4690u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x1D4688u, 0x1D4690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4690u;
label_1d4690:
    // 0x1d4690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4694:
    // 0x1d4694: 0xc0aeea8  jal         func_2BBAA0
label_1d4698:
    if (ctx->pc == 0x1D4698u) {
        ctx->pc = 0x1D469Cu;
        goto label_1d469c;
    }
    ctx->pc = 0x1D4694u;
    SET_GPR_U32(ctx, 31, 0x1D469Cu);
    ctx->pc = 0x2BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAA0u, 0x1D4694u, 0x1D469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D469Cu;
label_1d469c:
    // 0x1d469c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d46a0:
    // 0x1d46a0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d46a4:
    // 0x1d46a4: 0xaca200c8  sw          $v0, 0xC8($a1)
    ctx->pc = 0x1d46a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 200), GPR_U32(ctx, 2));
label_1d46a8:
    // 0x1d46a8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d46a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d46ac:
    // 0x1d46ac: 0x8cc400c4  lw          $a0, 0xC4($a2)
    ctx->pc = 0x1d46acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 196)));
label_1d46b0:
    // 0x1d46b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d46b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d46b4:
    // 0x1d46b4: 0xc085538  jal         func_2154E0
label_1d46b8:
    if (ctx->pc == 0x1D46B8u) {
        ctx->pc = 0x1D46BCu;
        goto label_1d46bc;
    }
    ctx->pc = 0x1D46B4u;
    SET_GPR_U32(ctx, 31, 0x1D46BCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1D46B4u, 0x1D46BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46BCu;
label_1d46bc:
    // 0x1d46bc: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1d46bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_1d46c0:
    // 0x1d46c0: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1d46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_1d46c4:
    // 0x1d46c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d46c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d46c8:
    // 0x1d46c8: 0xc096edc  jal         func_25BB70
label_1d46cc:
    if (ctx->pc == 0x1D46CCu) {
        ctx->pc = 0x1D46D0u;
        goto label_1d46d0;
    }
    ctx->pc = 0x1D46C8u;
    SET_GPR_U32(ctx, 31, 0x1D46D0u);
    ctx->pc = 0x25BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB70u, 0x1D46C8u, 0x1D46D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46D0u;
label_1d46d0:
    // 0x1d46d0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d46d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d46d4:
    // 0x1d46d4: 0xa082010a  sb          $v0, 0x10A($a0)
    ctx->pc = 0x1d46d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 266), (uint8_t)GPR_U32(ctx, 2));
label_1d46d8:
    // 0x1d46d8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d46d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d46dc:
    // 0x1d46dc: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x1d46dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d46e0:
    // 0x1d46e0: 0x10c00063  beqz        $a2, . + 4 + (0x63 << 2)
label_1d46e4:
    if (ctx->pc == 0x1D46E4u) {
        ctx->pc = 0x1D46E8u;
        goto label_1d46e8;
    }
    ctx->pc = 0x1D46E0u;
    {
        const bool branch_taken_0x1d46e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d46e0) {
            ctx->pc = 0x1D4870u;
            goto label_1d4870;
        }
    }
    ctx->pc = 0x1D46E8u;
label_1d46e8:
    // 0x1d46e8: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x1d46e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d46ec:
    // 0x1d46ec: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d46ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d46f0:
    // 0x1d46f0: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d46f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d46f4:
    // 0x1d46f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d46f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d46f8:
    // 0x1d46f8: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x1d46f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d46fc:
    // 0x1d46fc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4700:
    // 0x1d4700: 0x8ca600a4  lw          $a2, 0xA4($a1)
    ctx->pc = 0x1d4700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1d4704:
    // 0x1d4704: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1d4704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_1d4708:
    // 0x1d4708: 0xc7808288  lwc1        $f0, -0x7D78($gp)
    ctx->pc = 0x1d4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d470c:
    // 0x1d470c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4710:
    // 0x1d4710: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d4710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d4714:
    // 0x1d4714: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1d4714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1d4718:
    // 0x1d4718: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x1d4718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
label_1d471c:
    // 0x1d471c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d471cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4720:
    // 0x1d4720: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4724:
    // 0x1d4724: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d4724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d4728:
    // 0x1d4728: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1d4728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1d472c:
    // 0x1d472c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d472cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d4730:
    // 0x1d4730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4734:
    // 0x1d4734: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4738:
    // 0x1d4738: 0x8c4600a4  lw          $a2, 0xA4($v0)
    ctx->pc = 0x1d4738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d473c:
    // 0x1d473c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x1d473cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_1d4740:
    // 0x1d4740: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4744:
    // 0x1d4744: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d4744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d4748:
    // 0x1d4748: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1d4748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_1d474c:
    // 0x1d474c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d474cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4750:
    // 0x1d4750: 0x8cc600a4  lw          $a2, 0xA4($a2)
    ctx->pc = 0x1d4750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d4754:
    // 0x1d4754: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x1d4754u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
label_1d4758:
    // 0x1d4758: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d475c:
    // 0x1d475c: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d475cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d4760:
    // 0x1d4760: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1d4760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4764:
    // 0x1d4764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d4764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4768:
    // 0x1d4768: 0x0  nop
    ctx->pc = 0x1d4768u;
    // NOP
label_1d476c:
    // 0x1d476c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d476cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4770:
    // 0x1d4770: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1d4774:
    if (ctx->pc == 0x1D4774u) {
        ctx->pc = 0x1D4778u;
        goto label_1d4778;
    }
    ctx->pc = 0x1D4770u;
    {
        const bool branch_taken_0x1d4770 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4770) {
            ctx->pc = 0x1D47A0u;
            goto label_1d47a0;
        }
    }
    ctx->pc = 0x1D4778u;
label_1d4778:
    // 0x1d4778: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d477c:
    // 0x1d477c: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x1d477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d4780:
    // 0x1d4780: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x1d4780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4784:
    // 0x1d4784: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d4784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4788:
    // 0x1d4788: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d4788u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d478c:
    // 0x1d478c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d478cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4790:
    // 0x1d4790: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d4790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d4794:
    // 0x1d4794: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1d4794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1d4798:
    // 0x1d4798: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d479c:
    if (ctx->pc == 0x1D479Cu) {
        ctx->pc = 0x1D47A0u;
        goto label_1d47a0;
    }
    ctx->pc = 0x1D4798u;
    {
        const bool branch_taken_0x1d4798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4798) {
            ctx->pc = 0x1D47B4u;
            goto label_1d47b4;
        }
    }
    ctx->pc = 0x1D47A0u;
label_1d47a0:
    // 0x1d47a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1d47a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1d47a4:
    // 0x1d47a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d47a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d47a8:
    // 0x1d47a8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d47a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d47ac:
    // 0x1d47ac: 0x8ca600a4  lw          $a2, 0xA4($a1)
    ctx->pc = 0x1d47acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1d47b0:
    // 0x1d47b0: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1d47b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_1d47b4:
    // 0x1d47b4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d47b8:
    // 0x1d47b8: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d47b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d47bc:
    // 0x1d47bc: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1d47bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d47c0:
    // 0x1d47c0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d47c4:
    // 0x1d47c4: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x1d47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d47c8:
    // 0x1d47c8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d47c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1d47cc:
    // 0x1d47cc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d47ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d47d0:
    // 0x1d47d0: 0x8c8600a4  lw          $a2, 0xA4($a0)
    ctx->pc = 0x1d47d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d47d4:
    // 0x1d47d4: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x1d47d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d47d8:
    // 0x1d47d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d47d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d47dc:
    // 0x1d47dc: 0x0  nop
    ctx->pc = 0x1d47dcu;
    // NOP
label_1d47e0:
    // 0x1d47e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d47e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d47e4:
    // 0x1d47e4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1d47e8:
    if (ctx->pc == 0x1D47E8u) {
        ctx->pc = 0x1D47ECu;
        goto label_1d47ec;
    }
    ctx->pc = 0x1D47E4u;
    {
        const bool branch_taken_0x1d47e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d47e4) {
            ctx->pc = 0x1D4814u;
            goto label_1d4814;
        }
    }
    ctx->pc = 0x1D47ECu;
label_1d47ec:
    // 0x1d47ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d47ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d47f0:
    // 0x1d47f0: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d47f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d47f4:
    // 0x1d47f4: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x1d47f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d47f8:
    // 0x1d47f8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1d47f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d47fc:
    // 0x1d47fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d47fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d4800:
    // 0x1d4800: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4804:
    // 0x1d4804: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d4808:
    // 0x1d4808: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1d4808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1d480c:
    // 0x1d480c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d4810:
    if (ctx->pc == 0x1D4810u) {
        ctx->pc = 0x1D4814u;
        goto label_1d4814;
    }
    ctx->pc = 0x1D480Cu;
    {
        const bool branch_taken_0x1d480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d480c) {
            ctx->pc = 0x1D4828u;
            goto label_1d4828;
        }
    }
    ctx->pc = 0x1D4814u;
label_1d4814:
    // 0x1d4814: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1d4814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1d4818:
    // 0x1d4818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d481c:
    // 0x1d481c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d481cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4820:
    // 0x1d4820: 0x8ca600a4  lw          $a2, 0xA4($a1)
    ctx->pc = 0x1d4820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1d4824:
    // 0x1d4824: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x1d4824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_1d4828:
    // 0x1d4828: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d482c:
    // 0x1d482c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d4830:
    // 0x1d4830: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1d4830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4834:
    // 0x1d4834: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4838:
    // 0x1d4838: 0x8ca600a4  lw          $a2, 0xA4($a1)
    ctx->pc = 0x1d4838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1d483c:
    // 0x1d483c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1d483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_1d4840:
    // 0x1d4840: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d4840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d4844:
    // 0x1d4844: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4848:
    // 0x1d4848: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d484c:
    // 0x1d484c: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x1d484cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
label_1d4850:
    // 0x1d4850: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d4854:
    // 0x1d4854: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4858:
    // 0x1d4858: 0x8c5600a4  lw          $s6, 0xA4($v0)
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d485c:
    // 0x1d485c: 0xaec40038  sw          $a0, 0x38($s6)
    ctx->pc = 0x1d485cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 56), GPR_U32(ctx, 4));
label_1d4860:
    // 0x1d4860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d4860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4864:
    // 0x1d4864: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4868:
    // 0x1d4868: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d4868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d486c:
    // 0x1d486c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1d486cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_1d4870:
    // 0x1d4870: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4874:
    // 0x1d4874: 0x8ca400a8  lw          $a0, 0xA8($a1)
    ctx->pc = 0x1d4874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
label_1d4878:
    // 0x1d4878: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1d487c:
    if (ctx->pc == 0x1D487Cu) {
        ctx->pc = 0x1D4880u;
        goto label_1d4880;
    }
    ctx->pc = 0x1D4878u;
    {
        const bool branch_taken_0x1d4878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4878) {
            ctx->pc = 0x1D4894u;
            goto label_1d4894;
        }
    }
    ctx->pc = 0x1D4880u;
label_1d4880:
    // 0x1d4880: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d4884:
    // 0x1d4884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4888:
    // 0x1d4888: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d488c:
    // 0x1d488c: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d4890:
    // 0x1d4890: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d4890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d4894:
    // 0x1d4894: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4898:
    // 0x1d4898: 0x8ca200ac  lw          $v0, 0xAC($a1)
    ctx->pc = 0x1d4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
label_1d489c:
    // 0x1d489c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1d48a0:
    if (ctx->pc == 0x1D48A0u) {
        ctx->pc = 0x1D48A4u;
        goto label_1d48a4;
    }
    ctx->pc = 0x1D489Cu;
    {
        const bool branch_taken_0x1d489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d489c) {
            ctx->pc = 0x1D48F4u;
            goto label_1d48f4;
        }
    }
    ctx->pc = 0x1D48A4u;
label_1d48a4:
    // 0x1d48a4: 0x3c044080  lui         $a0, 0x4080
    ctx->pc = 0x1d48a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16512 << 16));
label_1d48a8:
    // 0x1d48a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d48a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d48ac:
    // 0x1d48ac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d48acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d48b0:
    // 0x1d48b0: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x1d48b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d48b4:
    // 0x1d48b4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x1d48b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1d48b8:
    // 0x1d48b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d48bc:
    // 0x1d48bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d48bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d48c0:
    // 0x1d48c0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d48c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d48c4:
    // 0x1d48c4: 0x8ca200ac  lw          $v0, 0xAC($a1)
    ctx->pc = 0x1d48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 172)));
label_1d48c8:
    // 0x1d48c8: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d48c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1d48cc:
    // 0x1d48cc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1d48d0:
    // 0x1d48d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d48d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d48d4:
    // 0x1d48d4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d48d8:
    // 0x1d48d8: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x1d48d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d48dc:
    // 0x1d48dc: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x1d48dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_1d48e0:
    // 0x1d48e0: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x1d48e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_1d48e4:
    // 0x1d48e4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d48e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d48e8:
    // 0x1d48e8: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d48ec:
    // 0x1d48ec: 0x8c6400ac  lw          $a0, 0xAC($v1)
    ctx->pc = 0x1d48ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d48f0:
    // 0x1d48f0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1d48f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1d48f4:
    // 0x1d48f4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d48f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d48f8:
    // 0x1d48f8: 0x8f86bb70  lw          $a2, -0x4490($gp)
    ctx->pc = 0x1d48f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1d48fc:
    // 0x1d48fc: 0xc4c0008c  lwc1        $f0, 0x8C($a2)
    ctx->pc = 0x1d48fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d4900:
    // 0x1d4900: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1d4900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1d4904:
    // 0x1d4904: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1d4904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d4908:
    // 0x1d4908: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
label_1d490c:
    // 0x1d490c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d490cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4910:
    // 0x1d4910: 0x0  nop
    ctx->pc = 0x1d4910u;
    // NOP
label_1d4914:
    // 0x1d4914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d4918:
    // 0x1d4918: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d491c:
    if (ctx->pc == 0x1D491Cu) {
        ctx->pc = 0x1D4920u;
        goto label_1d4920;
    }
    ctx->pc = 0x1D4918u;
    {
        const bool branch_taken_0x1d4918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4918) {
            ctx->pc = 0x1D4928u;
            goto label_1d4928;
        }
    }
    ctx->pc = 0x1D4920u;
label_1d4920:
    // 0x1d4920: 0x26e40001  addiu       $a0, $s7, 0x1
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d4924:
    // 0x1d4924: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1d4924u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4928:
    // 0x1d4928: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1d4928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d492c:
    // 0x1d492c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d492cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1d4930:
    // 0x1d4930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d4930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d4934:
    // 0x1d4934: 0x0  nop
    ctx->pc = 0x1d4934u;
    // NOP
label_1d4938:
    // 0x1d4938: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d493c:
    // 0x1d493c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d4940:
    if (ctx->pc == 0x1D4940u) {
        ctx->pc = 0x1D4944u;
        goto label_1d4944;
    }
    ctx->pc = 0x1D493Cu;
    {
        const bool branch_taken_0x1d493c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d493c) {
            ctx->pc = 0x1D494Cu;
            goto label_1d494c;
        }
    }
    ctx->pc = 0x1D4944u;
label_1d4944:
    // 0x1d4944: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d4944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d4948:
    // 0x1d4948: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d4948u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d494c:
    // 0x1d494c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d494cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4950:
    // 0x1d4950: 0x10000430  b           . + 4 + (0x430 << 2)
label_1d4954:
    if (ctx->pc == 0x1D4954u) {
        ctx->pc = 0x1D4958u;
        goto label_1d4958;
    }
    ctx->pc = 0x1D4950u;
    {
        const bool branch_taken_0x1d4950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4950) {
            ctx->pc = 0x1D5A14u;
            goto label_1d5a14;
        }
    }
    ctx->pc = 0x1D4958u;
label_1d4958:
    // 0x1d4958: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d4958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d495c:
    // 0x1d495c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4960:
    // 0x1d4960: 0xc042ff0  jal         func_10BFC0
label_1d4964:
    if (ctx->pc == 0x1D4964u) {
        ctx->pc = 0x1D4968u;
        goto label_1d4968;
    }
    ctx->pc = 0x1D4960u;
    SET_GPR_U32(ctx, 31, 0x1D4968u);
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x1D4960u, 0x1D4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4968u;
label_1d4968:
    // 0x1d4968: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d496c:
    // 0x1d496c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d496cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4970:
    // 0x1d4970: 0xc042844  jal         func_10A110
label_1d4974:
    if (ctx->pc == 0x1D4974u) {
        ctx->pc = 0x1D4978u;
        goto label_1d4978;
    }
    ctx->pc = 0x1D4970u;
    SET_GPR_U32(ctx, 31, 0x1D4978u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x1D4970u, 0x1D4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4978u;
label_1d4978:
    // 0x1d4978: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d497c:
    // 0x1d497c: 0xc11931c  jal         func_464C70
label_1d4980:
    if (ctx->pc == 0x1D4980u) {
        ctx->pc = 0x1D4984u;
        goto label_1d4984;
    }
    ctx->pc = 0x1D497Cu;
    SET_GPR_U32(ctx, 31, 0x1D4984u);
    ctx->pc = 0x464C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464C70u, 0x1D497Cu, 0x1D4984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4984u;
label_1d4984:
    // 0x1d4984: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4988:
    // 0x1d4988: 0xc041b38  jal         func_106CE0
label_1d498c:
    if (ctx->pc == 0x1D498Cu) {
        ctx->pc = 0x1D4990u;
        goto label_1d4990;
    }
    ctx->pc = 0x1D4988u;
    SET_GPR_U32(ctx, 31, 0x1D4990u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4988u, 0x1D4990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4990u;
label_1d4990:
    // 0x1d4990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4994:
    // 0x1d4994: 0x27859724  addiu       $a1, $gp, -0x68DC
    ctx->pc = 0x1d4994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940452));
label_1d4998:
    // 0x1d4998: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d4998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d499c:
    // 0x1d499c: 0xc0bc66e  jal         func_2F19B8
label_1d49a0:
    if (ctx->pc == 0x1D49A0u) {
        ctx->pc = 0x1D49A4u;
        goto label_1d49a4;
    }
    ctx->pc = 0x1D499Cu;
    SET_GPR_U32(ctx, 31, 0x1D49A4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D499Cu, 0x1D49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49A4u;
label_1d49a4:
    // 0x1d49a4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d49a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d49a8:
    // 0x1d49a8: 0x17c00019  bnez        $fp, . + 4 + (0x19 << 2)
label_1d49ac:
    if (ctx->pc == 0x1D49ACu) {
        ctx->pc = 0x1D49B0u;
        goto label_1d49b0;
    }
    ctx->pc = 0x1D49A8u;
    {
        const bool branch_taken_0x1d49a8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d49a8) {
            ctx->pc = 0x1D4A10u;
            goto label_1d4a10;
        }
    }
    ctx->pc = 0x1D49B0u;
label_1d49b0:
    // 0x1d49b0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d49b4:
    // 0x1d49b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d49b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d49b8:
    // 0x1d49b8: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x1d49b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d49bc:
    // 0x1d49bc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1d49bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d49c0:
    // 0x1d49c0: 0xc047848  jal         func_11E120
label_1d49c4:
    if (ctx->pc == 0x1D49C4u) {
        ctx->pc = 0x1D49C8u;
        goto label_1d49c8;
    }
    ctx->pc = 0x1D49C0u;
    SET_GPR_U32(ctx, 31, 0x1D49C8u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D49C0u, 0x1D49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49C8u;
label_1d49c8:
    // 0x1d49c8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d49c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d49cc:
    // 0x1d49cc: 0xc041b38  jal         func_106CE0
label_1d49d0:
    if (ctx->pc == 0x1D49D0u) {
        ctx->pc = 0x1D49D4u;
        goto label_1d49d4;
    }
    ctx->pc = 0x1D49CCu;
    SET_GPR_U32(ctx, 31, 0x1D49D4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D49CCu, 0x1D49D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49D4u;
label_1d49d4:
    // 0x1d49d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d49d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d49d8:
    // 0x1d49d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d49d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d49dc:
    // 0x1d49dc: 0xc0ba898  jal         func_2EA260
label_1d49e0:
    if (ctx->pc == 0x1D49E0u) {
        ctx->pc = 0x1D49E4u;
        goto label_1d49e4;
    }
    ctx->pc = 0x1D49DCu;
    SET_GPR_U32(ctx, 31, 0x1D49E4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D49DCu, 0x1D49E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49E4u;
label_1d49e4:
    // 0x1d49e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d49e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d49e8:
    // 0x1d49e8: 0xc0bef4c  jal         func_2FBD30
label_1d49ec:
    if (ctx->pc == 0x1D49ECu) {
        ctx->pc = 0x1D49F0u;
        goto label_1d49f0;
    }
    ctx->pc = 0x1D49E8u;
    SET_GPR_U32(ctx, 31, 0x1D49F0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D49E8u, 0x1D49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D49F0u;
label_1d49f0:
    // 0x1d49f0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1d49f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1d49f4:
    // 0x1d49f4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d49f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d49f8:
    // 0x1d49f8: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x1d49f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d49fc:
    // 0x1d49fc: 0xc064de4  jal         func_193790
label_1d4a00:
    if (ctx->pc == 0x1D4A00u) {
        ctx->pc = 0x1D4A04u;
        goto label_1d4a04;
    }
    ctx->pc = 0x1D49FCu;
    SET_GPR_U32(ctx, 31, 0x1D4A04u);
    ctx->pc = 0x193790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193790u, 0x1D49FCu, 0x1D4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A04u;
label_1d4a04:
    // 0x1d4a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a08:
    // 0x1d4a08: 0x100003fb  b           . + 4 + (0x3FB << 2)
label_1d4a0c:
    if (ctx->pc == 0x1D4A0Cu) {
        ctx->pc = 0x1D4A10u;
        goto label_1d4a10;
    }
    ctx->pc = 0x1D4A08u;
    {
        const bool branch_taken_0x1d4a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a08) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4A10u;
label_1d4a10:
    // 0x1d4a10: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4a14:
    // 0x1d4a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a18:
    // 0x1d4a18: 0xc041b38  jal         func_106CE0
label_1d4a1c:
    if (ctx->pc == 0x1D4A1Cu) {
        ctx->pc = 0x1D4A20u;
        goto label_1d4a20;
    }
    ctx->pc = 0x1D4A18u;
    SET_GPR_U32(ctx, 31, 0x1D4A20u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4A18u, 0x1D4A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A20u;
label_1d4a20:
    // 0x1d4a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a24:
    // 0x1d4a24: 0x27859728  addiu       $a1, $gp, -0x68D8
    ctx->pc = 0x1d4a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940456));
label_1d4a28:
    // 0x1d4a28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d4a28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4a2c:
    // 0x1d4a2c: 0xc0bc66e  jal         func_2F19B8
label_1d4a30:
    if (ctx->pc == 0x1D4A30u) {
        ctx->pc = 0x1D4A34u;
        goto label_1d4a34;
    }
    ctx->pc = 0x1D4A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A34u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4A2Cu, 0x1D4A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A34u;
label_1d4a34:
    // 0x1d4a34: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1d4a38:
    if (ctx->pc == 0x1D4A38u) {
        ctx->pc = 0x1D4A3Cu;
        goto label_1d4a3c;
    }
    ctx->pc = 0x1D4A34u;
    {
        const bool branch_taken_0x1d4a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a34) {
            ctx->pc = 0x1D4A84u;
            goto label_1d4a84;
        }
    }
    ctx->pc = 0x1D4A3Cu;
label_1d4a3c:
    // 0x1d4a3c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4a40:
    // 0x1d4a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a44:
    // 0x1d4a44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d4a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4a48:
    // 0x1d4a48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a4c:
    // 0x1d4a4c: 0xc047848  jal         func_11E120
label_1d4a50:
    if (ctx->pc == 0x1D4A50u) {
        ctx->pc = 0x1D4A54u;
        goto label_1d4a54;
    }
    ctx->pc = 0x1D4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A54u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4A4Cu, 0x1D4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A54u;
label_1d4a54:
    // 0x1d4a54: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4a58:
    // 0x1d4a58: 0xc041b38  jal         func_106CE0
label_1d4a5c:
    if (ctx->pc == 0x1D4A5Cu) {
        ctx->pc = 0x1D4A60u;
        goto label_1d4a60;
    }
    ctx->pc = 0x1D4A58u;
    SET_GPR_U32(ctx, 31, 0x1D4A60u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4A58u, 0x1D4A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A60u;
label_1d4a60:
    // 0x1d4a60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a64:
    // 0x1d4a64: 0xc0ba89e  jal         func_2EA278
label_1d4a68:
    if (ctx->pc == 0x1D4A68u) {
        ctx->pc = 0x1D4A6Cu;
        goto label_1d4a6c;
    }
    ctx->pc = 0x1D4A64u;
    SET_GPR_U32(ctx, 31, 0x1D4A6Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D4A64u, 0x1D4A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A6Cu;
label_1d4a6c:
    // 0x1d4a6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d4a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d4a70:
    // 0x1d4a70: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1d4a70u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d4a74:
    // 0x1d4a74: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4a78:
    // 0x1d4a78: 0xa0c500b4  sb          $a1, 0xB4($a2)
    ctx->pc = 0x1d4a78u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 180), (uint8_t)GPR_U32(ctx, 5));
label_1d4a7c:
    // 0x1d4a7c: 0x100003de  b           . + 4 + (0x3DE << 2)
label_1d4a80:
    if (ctx->pc == 0x1D4A80u) {
        ctx->pc = 0x1D4A84u;
        goto label_1d4a84;
    }
    ctx->pc = 0x1D4A7Cu;
    {
        const bool branch_taken_0x1d4a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a7c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4A84u;
label_1d4a84:
    // 0x1d4a84: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4a88:
    // 0x1d4a88: 0xc041b38  jal         func_106CE0
label_1d4a8c:
    if (ctx->pc == 0x1D4A8Cu) {
        ctx->pc = 0x1D4A90u;
        goto label_1d4a90;
    }
    ctx->pc = 0x1D4A88u;
    SET_GPR_U32(ctx, 31, 0x1D4A90u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4A88u, 0x1D4A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A90u;
label_1d4a90:
    // 0x1d4a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a94:
    // 0x1d4a94: 0x27869730  addiu       $a2, $gp, -0x68D0
    ctx->pc = 0x1d4a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940464));
label_1d4a98:
    // 0x1d4a98: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d4a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4a9c:
    // 0x1d4a9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d4a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4aa0:
    // 0x1d4aa0: 0xc0bc66e  jal         func_2F19B8
label_1d4aa4:
    if (ctx->pc == 0x1D4AA4u) {
        ctx->pc = 0x1D4AA8u;
        goto label_1d4aa8;
    }
    ctx->pc = 0x1D4AA0u;
    SET_GPR_U32(ctx, 31, 0x1D4AA8u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4AA0u, 0x1D4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AA8u;
label_1d4aa8:
    // 0x1d4aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4aac:
    // 0x1d4aac: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
label_1d4ab0:
    if (ctx->pc == 0x1D4AB0u) {
        ctx->pc = 0x1D4AB4u;
        goto label_1d4ab4;
    }
    ctx->pc = 0x1D4AACu;
    {
        const bool branch_taken_0x1d4aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4aac) {
            ctx->pc = 0x1D4B0Cu;
            goto label_1d4b0c;
        }
    }
    ctx->pc = 0x1D4AB4u;
label_1d4ab4:
    // 0x1d4ab4: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d4ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4ab8:
    // 0x1d4ab8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4abc:
    // 0x1d4abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ac0:
    // 0x1d4ac0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d4ac4:
    // 0x1d4ac4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ac8:
    // 0x1d4ac8: 0xc047848  jal         func_11E120
label_1d4acc:
    if (ctx->pc == 0x1D4ACCu) {
        ctx->pc = 0x1D4AD0u;
        goto label_1d4ad0;
    }
    ctx->pc = 0x1D4AC8u;
    SET_GPR_U32(ctx, 31, 0x1D4AD0u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4AC8u, 0x1D4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AD0u;
label_1d4ad0:
    // 0x1d4ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ad4:
    // 0x1d4ad4: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4ad8:
    // 0x1d4ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4adc:
    // 0x1d4adc: 0xc041b38  jal         func_106CE0
label_1d4ae0:
    if (ctx->pc == 0x1D4AE0u) {
        ctx->pc = 0x1D4AE4u;
        goto label_1d4ae4;
    }
    ctx->pc = 0x1D4ADCu;
    SET_GPR_U32(ctx, 31, 0x1D4AE4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4ADCu, 0x1D4AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AE4u;
label_1d4ae4:
    // 0x1d4ae4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ae8:
    // 0x1d4ae8: 0xc0ba898  jal         func_2EA260
label_1d4aec:
    if (ctx->pc == 0x1D4AECu) {
        ctx->pc = 0x1D4AF0u;
        goto label_1d4af0;
    }
    ctx->pc = 0x1D4AE8u;
    SET_GPR_U32(ctx, 31, 0x1D4AF0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4AE8u, 0x1D4AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AF0u;
label_1d4af0:
    // 0x1d4af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4af4:
    // 0x1d4af4: 0xc0bef4c  jal         func_2FBD30
label_1d4af8:
    if (ctx->pc == 0x1D4AF8u) {
        ctx->pc = 0x1D4AFCu;
        goto label_1d4afc;
    }
    ctx->pc = 0x1D4AF4u;
    SET_GPR_U32(ctx, 31, 0x1D4AFCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4AF4u, 0x1D4AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AFCu;
label_1d4afc:
    // 0x1d4afc: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d4afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4b00:
    // 0x1d4b00: 0xe4a000e4  swc1        $f0, 0xE4($a1)
    ctx->pc = 0x1d4b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 228), bits); }
label_1d4b04:
    // 0x1d4b04: 0x100003bc  b           . + 4 + (0x3BC << 2)
label_1d4b08:
    if (ctx->pc == 0x1D4B08u) {
        ctx->pc = 0x1D4B0Cu;
        goto label_1d4b0c;
    }
    ctx->pc = 0x1D4B04u;
    {
        const bool branch_taken_0x1d4b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b04) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4B0Cu;
label_1d4b0c:
    // 0x1d4b0c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d4b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4b10:
    // 0x1d4b10: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d4b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b14:
    // 0x1d4b14: 0xc041b38  jal         func_106CE0
label_1d4b18:
    if (ctx->pc == 0x1D4B18u) {
        ctx->pc = 0x1D4B1Cu;
        goto label_1d4b1c;
    }
    ctx->pc = 0x1D4B14u;
    SET_GPR_U32(ctx, 31, 0x1D4B1Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4B14u, 0x1D4B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B1Cu;
label_1d4b1c:
    // 0x1d4b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b20:
    // 0x1d4b20: 0x27859738  addiu       $a1, $gp, -0x68C8
    ctx->pc = 0x1d4b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940472));
label_1d4b24:
    // 0x1d4b24: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d4b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d4b28:
    // 0x1d4b28: 0xc0bc66e  jal         func_2F19B8
label_1d4b2c:
    if (ctx->pc == 0x1D4B2Cu) {
        ctx->pc = 0x1D4B30u;
        goto label_1d4b30;
    }
    ctx->pc = 0x1D4B28u;
    SET_GPR_U32(ctx, 31, 0x1D4B30u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4B28u, 0x1D4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B30u;
label_1d4b30:
    // 0x1d4b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b34:
    // 0x1d4b34: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
label_1d4b38:
    if (ctx->pc == 0x1D4B38u) {
        ctx->pc = 0x1D4B3Cu;
        goto label_1d4b3c;
    }
    ctx->pc = 0x1D4B34u;
    {
        const bool branch_taken_0x1d4b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b34) {
            ctx->pc = 0x1D4B94u;
            goto label_1d4b94;
        }
    }
    ctx->pc = 0x1D4B3Cu;
label_1d4b3c:
    // 0x1d4b3c: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d4b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4b40:
    // 0x1d4b40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b44:
    // 0x1d4b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b48:
    // 0x1d4b48: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d4b4c:
    // 0x1d4b4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b50:
    // 0x1d4b50: 0xc047848  jal         func_11E120
label_1d4b54:
    if (ctx->pc == 0x1D4B54u) {
        ctx->pc = 0x1D4B58u;
        goto label_1d4b58;
    }
    ctx->pc = 0x1D4B50u;
    SET_GPR_U32(ctx, 31, 0x1D4B58u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4B50u, 0x1D4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B58u;
label_1d4b58:
    // 0x1d4b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b5c:
    // 0x1d4b5c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4b60:
    // 0x1d4b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b64:
    // 0x1d4b64: 0xc041b38  jal         func_106CE0
label_1d4b68:
    if (ctx->pc == 0x1D4B68u) {
        ctx->pc = 0x1D4B6Cu;
        goto label_1d4b6c;
    }
    ctx->pc = 0x1D4B64u;
    SET_GPR_U32(ctx, 31, 0x1D4B6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4B64u, 0x1D4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B6Cu;
label_1d4b6c:
    // 0x1d4b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b70:
    // 0x1d4b70: 0xc0ba898  jal         func_2EA260
label_1d4b74:
    if (ctx->pc == 0x1D4B74u) {
        ctx->pc = 0x1D4B78u;
        goto label_1d4b78;
    }
    ctx->pc = 0x1D4B70u;
    SET_GPR_U32(ctx, 31, 0x1D4B78u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4B70u, 0x1D4B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B78u;
label_1d4b78:
    // 0x1d4b78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b7c:
    // 0x1d4b7c: 0xc0bef4c  jal         func_2FBD30
label_1d4b80:
    if (ctx->pc == 0x1D4B80u) {
        ctx->pc = 0x1D4B84u;
        goto label_1d4b84;
    }
    ctx->pc = 0x1D4B7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B84u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4B7Cu, 0x1D4B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B84u;
label_1d4b84:
    // 0x1d4b84: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4b88:
    // 0x1d4b88: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1d4b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_1d4b8c:
    // 0x1d4b8c: 0x1000039a  b           . + 4 + (0x39A << 2)
label_1d4b90:
    if (ctx->pc == 0x1D4B90u) {
        ctx->pc = 0x1D4B94u;
        goto label_1d4b94;
    }
    ctx->pc = 0x1D4B8Cu;
    {
        const bool branch_taken_0x1d4b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b8c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4B94u;
label_1d4b94:
    // 0x1d4b94: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d4b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4b98:
    // 0x1d4b98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4b9c:
    // 0x1d4b9c: 0xc041b38  jal         func_106CE0
label_1d4ba0:
    if (ctx->pc == 0x1D4BA0u) {
        ctx->pc = 0x1D4BA4u;
        goto label_1d4ba4;
    }
    ctx->pc = 0x1D4B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4BA4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4B9Cu, 0x1D4BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BA4u;
label_1d4ba4:
    // 0x1d4ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ba8:
    // 0x1d4ba8: 0x27859740  addiu       $a1, $gp, -0x68C0
    ctx->pc = 0x1d4ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940480));
label_1d4bac:
    // 0x1d4bac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d4bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4bb0:
    // 0x1d4bb0: 0xc0bc66e  jal         func_2F19B8
label_1d4bb4:
    if (ctx->pc == 0x1D4BB4u) {
        ctx->pc = 0x1D4BB8u;
        goto label_1d4bb8;
    }
    ctx->pc = 0x1D4BB0u;
    SET_GPR_U32(ctx, 31, 0x1D4BB8u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4BB0u, 0x1D4BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BB8u;
label_1d4bb8:
    // 0x1d4bb8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1d4bbc:
    if (ctx->pc == 0x1D4BBCu) {
        ctx->pc = 0x1D4BC0u;
        goto label_1d4bc0;
    }
    ctx->pc = 0x1D4BB8u;
    {
        const bool branch_taken_0x1d4bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4bb8) {
            ctx->pc = 0x1D4C14u;
            goto label_1d4c14;
        }
    }
    ctx->pc = 0x1D4BC0u;
label_1d4bc0:
    // 0x1d4bc0: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d4bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4bc4:
    // 0x1d4bc4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bc8:
    // 0x1d4bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bcc:
    // 0x1d4bcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d4bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4bd0:
    // 0x1d4bd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bd4:
    // 0x1d4bd4: 0xc047848  jal         func_11E120
label_1d4bd8:
    if (ctx->pc == 0x1D4BD8u) {
        ctx->pc = 0x1D4BDCu;
        goto label_1d4bdc;
    }
    ctx->pc = 0x1D4BD4u;
    SET_GPR_U32(ctx, 31, 0x1D4BDCu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4BD4u, 0x1D4BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BDCu;
label_1d4bdc:
    // 0x1d4bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4be0:
    // 0x1d4be0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4be4:
    // 0x1d4be4: 0xc041b38  jal         func_106CE0
label_1d4be8:
    if (ctx->pc == 0x1D4BE8u) {
        ctx->pc = 0x1D4BECu;
        goto label_1d4bec;
    }
    ctx->pc = 0x1D4BE4u;
    SET_GPR_U32(ctx, 31, 0x1D4BECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4BE4u, 0x1D4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BECu;
label_1d4bec:
    // 0x1d4bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bf0:
    // 0x1d4bf0: 0xc0ba898  jal         func_2EA260
label_1d4bf4:
    if (ctx->pc == 0x1D4BF4u) {
        ctx->pc = 0x1D4BF8u;
        goto label_1d4bf8;
    }
    ctx->pc = 0x1D4BF0u;
    SET_GPR_U32(ctx, 31, 0x1D4BF8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4BF0u, 0x1D4BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4BF8u;
label_1d4bf8:
    // 0x1d4bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4bfc:
    // 0x1d4bfc: 0xc0bef4c  jal         func_2FBD30
label_1d4c00:
    if (ctx->pc == 0x1D4C00u) {
        ctx->pc = 0x1D4C04u;
        goto label_1d4c04;
    }
    ctx->pc = 0x1D4BFCu;
    SET_GPR_U32(ctx, 31, 0x1D4C04u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4BFCu, 0x1D4C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C04u;
label_1d4c04:
    // 0x1d4c04: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4c08:
    // 0x1d4c08: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x1d4c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
label_1d4c0c:
    // 0x1d4c0c: 0x1000037a  b           . + 4 + (0x37A << 2)
label_1d4c10:
    if (ctx->pc == 0x1D4C10u) {
        ctx->pc = 0x1D4C14u;
        goto label_1d4c14;
    }
    ctx->pc = 0x1D4C0Cu;
    {
        const bool branch_taken_0x1d4c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c0c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4C14u;
label_1d4c14:
    // 0x1d4c14: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4c18:
    // 0x1d4c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c1c:
    // 0x1d4c1c: 0xc041b38  jal         func_106CE0
label_1d4c20:
    if (ctx->pc == 0x1D4C20u) {
        ctx->pc = 0x1D4C24u;
        goto label_1d4c24;
    }
    ctx->pc = 0x1D4C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C24u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4C1Cu, 0x1D4C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C24u;
label_1d4c24:
    // 0x1d4c24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c28:
    // 0x1d4c28: 0x27859744  addiu       $a1, $gp, -0x68BC
    ctx->pc = 0x1d4c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940484));
label_1d4c2c:
    // 0x1d4c2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4c30:
    // 0x1d4c30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c34:
    // 0x1d4c34: 0xc0bc66e  jal         func_2F19B8
label_1d4c38:
    if (ctx->pc == 0x1D4C38u) {
        ctx->pc = 0x1D4C3Cu;
        goto label_1d4c3c;
    }
    ctx->pc = 0x1D4C34u;
    SET_GPR_U32(ctx, 31, 0x1D4C3Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4C34u, 0x1D4C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C3Cu;
label_1d4c3c:
    // 0x1d4c3c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1d4c40:
    if (ctx->pc == 0x1D4C40u) {
        ctx->pc = 0x1D4C44u;
        goto label_1d4c44;
    }
    ctx->pc = 0x1D4C3Cu;
    {
        const bool branch_taken_0x1d4c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c3c) {
            ctx->pc = 0x1D4C94u;
            goto label_1d4c94;
        }
    }
    ctx->pc = 0x1D4C44u;
label_1d4c44:
    // 0x1d4c44: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4c48:
    // 0x1d4c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c4c:
    // 0x1d4c4c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d4c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4c50:
    // 0x1d4c50: 0xc047848  jal         func_11E120
label_1d4c54:
    if (ctx->pc == 0x1D4C54u) {
        ctx->pc = 0x1D4C58u;
        goto label_1d4c58;
    }
    ctx->pc = 0x1D4C50u;
    SET_GPR_U32(ctx, 31, 0x1D4C58u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4C50u, 0x1D4C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C58u;
label_1d4c58:
    // 0x1d4c58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c5c:
    // 0x1d4c5c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4c60:
    // 0x1d4c60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c64:
    // 0x1d4c64: 0xc041b38  jal         func_106CE0
label_1d4c68:
    if (ctx->pc == 0x1D4C68u) {
        ctx->pc = 0x1D4C6Cu;
        goto label_1d4c6c;
    }
    ctx->pc = 0x1D4C64u;
    SET_GPR_U32(ctx, 31, 0x1D4C6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4C64u, 0x1D4C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C6Cu;
label_1d4c6c:
    // 0x1d4c6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c70:
    // 0x1d4c70: 0xc0ba898  jal         func_2EA260
label_1d4c74:
    if (ctx->pc == 0x1D4C74u) {
        ctx->pc = 0x1D4C78u;
        goto label_1d4c78;
    }
    ctx->pc = 0x1D4C70u;
    SET_GPR_U32(ctx, 31, 0x1D4C78u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4C70u, 0x1D4C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C78u;
label_1d4c78:
    // 0x1d4c78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c7c:
    // 0x1d4c7c: 0xc0bef4c  jal         func_2FBD30
label_1d4c80:
    if (ctx->pc == 0x1D4C80u) {
        ctx->pc = 0x1D4C84u;
        goto label_1d4c84;
    }
    ctx->pc = 0x1D4C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D4C84u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4C7Cu, 0x1D4C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4C84u;
label_1d4c84:
    // 0x1d4c84: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4c88:
    // 0x1d4c88: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x1d4c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_1d4c8c:
    // 0x1d4c8c: 0x1000035a  b           . + 4 + (0x35A << 2)
label_1d4c90:
    if (ctx->pc == 0x1D4C90u) {
        ctx->pc = 0x1D4C94u;
        goto label_1d4c94;
    }
    ctx->pc = 0x1D4C8Cu;
    {
        const bool branch_taken_0x1d4c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c8c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4C94u;
label_1d4c94:
    // 0x1d4c94: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4c98:
    // 0x1d4c98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4c9c:
    // 0x1d4c9c: 0xc041b38  jal         func_106CE0
label_1d4ca0:
    if (ctx->pc == 0x1D4CA0u) {
        ctx->pc = 0x1D4CA4u;
        goto label_1d4ca4;
    }
    ctx->pc = 0x1D4C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4CA4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4C9Cu, 0x1D4CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CA4u;
label_1d4ca4:
    // 0x1d4ca4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ca8:
    // 0x1d4ca8: 0x27859748  addiu       $a1, $gp, -0x68B8
    ctx->pc = 0x1d4ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940488));
label_1d4cac:
    // 0x1d4cac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4cb0:
    // 0x1d4cb0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4cb4:
    // 0x1d4cb4: 0xc0bc66e  jal         func_2F19B8
label_1d4cb8:
    if (ctx->pc == 0x1D4CB8u) {
        ctx->pc = 0x1D4CBCu;
        goto label_1d4cbc;
    }
    ctx->pc = 0x1D4CB4u;
    SET_GPR_U32(ctx, 31, 0x1D4CBCu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4CB4u, 0x1D4CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CBCu;
label_1d4cbc:
    // 0x1d4cbc: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1d4cc0:
    if (ctx->pc == 0x1D4CC0u) {
        ctx->pc = 0x1D4CC4u;
        goto label_1d4cc4;
    }
    ctx->pc = 0x1D4CBCu;
    {
        const bool branch_taken_0x1d4cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4cbc) {
            ctx->pc = 0x1D4D0Cu;
            goto label_1d4d0c;
        }
    }
    ctx->pc = 0x1D4CC4u;
label_1d4cc4:
    // 0x1d4cc4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4cc8:
    // 0x1d4cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ccc:
    // 0x1d4ccc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d4cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4cd0:
    // 0x1d4cd0: 0xc047848  jal         func_11E120
label_1d4cd4:
    if (ctx->pc == 0x1D4CD4u) {
        ctx->pc = 0x1D4CD8u;
        goto label_1d4cd8;
    }
    ctx->pc = 0x1D4CD0u;
    SET_GPR_U32(ctx, 31, 0x1D4CD8u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4CD0u, 0x1D4CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CD8u;
label_1d4cd8:
    // 0x1d4cd8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4cdc:
    // 0x1d4cdc: 0xc041b38  jal         func_106CE0
label_1d4ce0:
    if (ctx->pc == 0x1D4CE0u) {
        ctx->pc = 0x1D4CE4u;
        goto label_1d4ce4;
    }
    ctx->pc = 0x1D4CDCu;
    SET_GPR_U32(ctx, 31, 0x1D4CE4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4CDCu, 0x1D4CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CE4u;
label_1d4ce4:
    // 0x1d4ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ce8:
    // 0x1d4ce8: 0xc0ba898  jal         func_2EA260
label_1d4cec:
    if (ctx->pc == 0x1D4CECu) {
        ctx->pc = 0x1D4CF0u;
        goto label_1d4cf0;
    }
    ctx->pc = 0x1D4CE8u;
    SET_GPR_U32(ctx, 31, 0x1D4CF0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4CE8u, 0x1D4CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CF0u;
label_1d4cf0:
    // 0x1d4cf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4cf4:
    // 0x1d4cf4: 0xc0bef4c  jal         func_2FBD30
label_1d4cf8:
    if (ctx->pc == 0x1D4CF8u) {
        ctx->pc = 0x1D4CFCu;
        goto label_1d4cfc;
    }
    ctx->pc = 0x1D4CF4u;
    SET_GPR_U32(ctx, 31, 0x1D4CFCu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4CF4u, 0x1D4CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4CFCu;
label_1d4cfc:
    // 0x1d4cfc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4d00:
    // 0x1d4d00: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1d4d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1d4d04:
    // 0x1d4d04: 0x1000033c  b           . + 4 + (0x33C << 2)
label_1d4d08:
    if (ctx->pc == 0x1D4D08u) {
        ctx->pc = 0x1D4D0Cu;
        goto label_1d4d0c;
    }
    ctx->pc = 0x1D4D04u;
    {
        const bool branch_taken_0x1d4d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d04) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4D0Cu;
label_1d4d0c:
    // 0x1d4d0c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4d10:
    // 0x1d4d10: 0xc041b38  jal         func_106CE0
label_1d4d14:
    if (ctx->pc == 0x1D4D14u) {
        ctx->pc = 0x1D4D18u;
        goto label_1d4d18;
    }
    ctx->pc = 0x1D4D10u;
    SET_GPR_U32(ctx, 31, 0x1D4D18u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4D10u, 0x1D4D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D18u;
label_1d4d18:
    // 0x1d4d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d1c:
    // 0x1d4d1c: 0x2785974c  addiu       $a1, $gp, -0x68B4
    ctx->pc = 0x1d4d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940492));
label_1d4d20:
    // 0x1d4d20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d4d20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4d24:
    // 0x1d4d24: 0xc0bc66e  jal         func_2F19B8
label_1d4d28:
    if (ctx->pc == 0x1D4D28u) {
        ctx->pc = 0x1D4D2Cu;
        goto label_1d4d2c;
    }
    ctx->pc = 0x1D4D24u;
    SET_GPR_U32(ctx, 31, 0x1D4D2Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4D24u, 0x1D4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D2Cu;
label_1d4d2c:
    // 0x1d4d2c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1d4d30:
    if (ctx->pc == 0x1D4D30u) {
        ctx->pc = 0x1D4D34u;
        goto label_1d4d34;
    }
    ctx->pc = 0x1D4D2Cu;
    {
        const bool branch_taken_0x1d4d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d2c) {
            ctx->pc = 0x1D4D7Cu;
            goto label_1d4d7c;
        }
    }
    ctx->pc = 0x1D4D34u;
label_1d4d34:
    // 0x1d4d34: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4d38:
    // 0x1d4d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d3c:
    // 0x1d4d3c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d4d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4d40:
    // 0x1d4d40: 0xc047848  jal         func_11E120
label_1d4d44:
    if (ctx->pc == 0x1D4D44u) {
        ctx->pc = 0x1D4D48u;
        goto label_1d4d48;
    }
    ctx->pc = 0x1D4D40u;
    SET_GPR_U32(ctx, 31, 0x1D4D48u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4D40u, 0x1D4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D48u;
label_1d4d48:
    // 0x1d4d48: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4d4c:
    // 0x1d4d4c: 0xc041b38  jal         func_106CE0
label_1d4d50:
    if (ctx->pc == 0x1D4D50u) {
        ctx->pc = 0x1D4D54u;
        goto label_1d4d54;
    }
    ctx->pc = 0x1D4D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D4D54u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4D4Cu, 0x1D4D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D54u;
label_1d4d54:
    // 0x1d4d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d58:
    // 0x1d4d58: 0xc0ba898  jal         func_2EA260
label_1d4d5c:
    if (ctx->pc == 0x1D4D5Cu) {
        ctx->pc = 0x1D4D60u;
        goto label_1d4d60;
    }
    ctx->pc = 0x1D4D58u;
    SET_GPR_U32(ctx, 31, 0x1D4D60u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4D58u, 0x1D4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D60u;
label_1d4d60:
    // 0x1d4d60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d64:
    // 0x1d4d64: 0xc0bef4c  jal         func_2FBD30
label_1d4d68:
    if (ctx->pc == 0x1D4D68u) {
        ctx->pc = 0x1D4D6Cu;
        goto label_1d4d6c;
    }
    ctx->pc = 0x1D4D64u;
    SET_GPR_U32(ctx, 31, 0x1D4D6Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4D64u, 0x1D4D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D6Cu;
label_1d4d6c:
    // 0x1d4d6c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4d70:
    // 0x1d4d70: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1d4d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
label_1d4d74:
    // 0x1d4d74: 0x10000320  b           . + 4 + (0x320 << 2)
label_1d4d78:
    if (ctx->pc == 0x1D4D78u) {
        ctx->pc = 0x1D4D7Cu;
        goto label_1d4d7c;
    }
    ctx->pc = 0x1D4D74u;
    {
        const bool branch_taken_0x1d4d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d74) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4D7Cu;
label_1d4d7c:
    // 0x1d4d7c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4d80:
    // 0x1d4d80: 0xc041b38  jal         func_106CE0
label_1d4d84:
    if (ctx->pc == 0x1D4D84u) {
        ctx->pc = 0x1D4D88u;
        goto label_1d4d88;
    }
    ctx->pc = 0x1D4D80u;
    SET_GPR_U32(ctx, 31, 0x1D4D88u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4D80u, 0x1D4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D88u;
label_1d4d88:
    // 0x1d4d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4d8c:
    // 0x1d4d8c: 0x27859750  addiu       $a1, $gp, -0x68B0
    ctx->pc = 0x1d4d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940496));
label_1d4d90:
    // 0x1d4d90: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d4d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4d94:
    // 0x1d4d94: 0xc0bc66e  jal         func_2F19B8
label_1d4d98:
    if (ctx->pc == 0x1D4D98u) {
        ctx->pc = 0x1D4D9Cu;
        goto label_1d4d9c;
    }
    ctx->pc = 0x1D4D94u;
    SET_GPR_U32(ctx, 31, 0x1D4D9Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4D94u, 0x1D4D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4D9Cu;
label_1d4d9c:
    // 0x1d4d9c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1d4da0:
    if (ctx->pc == 0x1D4DA0u) {
        ctx->pc = 0x1D4DA4u;
        goto label_1d4da4;
    }
    ctx->pc = 0x1D4D9Cu;
    {
        const bool branch_taken_0x1d4d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4d9c) {
            ctx->pc = 0x1D4DF4u;
            goto label_1d4df4;
        }
    }
    ctx->pc = 0x1D4DA4u;
label_1d4da4:
    // 0x1d4da4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4da8:
    // 0x1d4da8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4dac:
    // 0x1d4dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4db0:
    // 0x1d4db0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d4db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4db4:
    // 0x1d4db4: 0xc047848  jal         func_11E120
label_1d4db8:
    if (ctx->pc == 0x1D4DB8u) {
        ctx->pc = 0x1D4DBCu;
        goto label_1d4dbc;
    }
    ctx->pc = 0x1D4DB4u;
    SET_GPR_U32(ctx, 31, 0x1D4DBCu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4DB4u, 0x1D4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DBCu;
label_1d4dbc:
    // 0x1d4dbc: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d4dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4dc0:
    // 0x1d4dc0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d4dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4dc4:
    // 0x1d4dc4: 0xc041b38  jal         func_106CE0
label_1d4dc8:
    if (ctx->pc == 0x1D4DC8u) {
        ctx->pc = 0x1D4DCCu;
        goto label_1d4dcc;
    }
    ctx->pc = 0x1D4DC4u;
    SET_GPR_U32(ctx, 31, 0x1D4DCCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4DC4u, 0x1D4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DCCu;
label_1d4dcc:
    // 0x1d4dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4dd0:
    // 0x1d4dd0: 0xc0ba898  jal         func_2EA260
label_1d4dd4:
    if (ctx->pc == 0x1D4DD4u) {
        ctx->pc = 0x1D4DD8u;
        goto label_1d4dd8;
    }
    ctx->pc = 0x1D4DD0u;
    SET_GPR_U32(ctx, 31, 0x1D4DD8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4DD0u, 0x1D4DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DD8u;
label_1d4dd8:
    // 0x1d4dd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ddc:
    // 0x1d4ddc: 0xc0bef4c  jal         func_2FBD30
label_1d4de0:
    if (ctx->pc == 0x1D4DE0u) {
        ctx->pc = 0x1D4DE4u;
        goto label_1d4de4;
    }
    ctx->pc = 0x1D4DDCu;
    SET_GPR_U32(ctx, 31, 0x1D4DE4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4DDCu, 0x1D4DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DE4u;
label_1d4de4:
    // 0x1d4de4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4de8:
    // 0x1d4de8: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x1d4de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
label_1d4dec:
    // 0x1d4dec: 0x10000302  b           . + 4 + (0x302 << 2)
label_1d4df0:
    if (ctx->pc == 0x1D4DF0u) {
        ctx->pc = 0x1D4DF4u;
        goto label_1d4df4;
    }
    ctx->pc = 0x1D4DECu;
    {
        const bool branch_taken_0x1d4dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4dec) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4DF4u;
label_1d4df4:
    // 0x1d4df4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4df8:
    // 0x1d4df8: 0xc041b38  jal         func_106CE0
label_1d4dfc:
    if (ctx->pc == 0x1D4DFCu) {
        ctx->pc = 0x1D4E00u;
        goto label_1d4e00;
    }
    ctx->pc = 0x1D4DF8u;
    SET_GPR_U32(ctx, 31, 0x1D4E00u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4DF8u, 0x1D4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E00u;
label_1d4e00:
    // 0x1d4e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e04:
    // 0x1d4e04: 0x27859758  addiu       $a1, $gp, -0x68A8
    ctx->pc = 0x1d4e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940504));
label_1d4e08:
    // 0x1d4e08: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d4e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4e0c:
    // 0x1d4e0c: 0xc0bc66e  jal         func_2F19B8
label_1d4e10:
    if (ctx->pc == 0x1D4E10u) {
        ctx->pc = 0x1D4E14u;
        goto label_1d4e14;
    }
    ctx->pc = 0x1D4E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E14u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4E0Cu, 0x1D4E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E14u;
label_1d4e14:
    // 0x1d4e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e18:
    // 0x1d4e18: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
label_1d4e1c:
    if (ctx->pc == 0x1D4E1Cu) {
        ctx->pc = 0x1D4E20u;
        goto label_1d4e20;
    }
    ctx->pc = 0x1D4E18u;
    {
        const bool branch_taken_0x1d4e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e18) {
            ctx->pc = 0x1D4E74u;
            goto label_1d4e74;
        }
    }
    ctx->pc = 0x1D4E20u;
label_1d4e20:
    // 0x1d4e20: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d4e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4e24:
    // 0x1d4e24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e28:
    // 0x1d4e28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e2c:
    // 0x1d4e2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4e30:
    // 0x1d4e30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e34:
    // 0x1d4e34: 0xc047848  jal         func_11E120
label_1d4e38:
    if (ctx->pc == 0x1D4E38u) {
        ctx->pc = 0x1D4E3Cu;
        goto label_1d4e3c;
    }
    ctx->pc = 0x1D4E34u;
    SET_GPR_U32(ctx, 31, 0x1D4E3Cu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4E34u, 0x1D4E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E3Cu;
label_1d4e3c:
    // 0x1d4e3c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4e40:
    // 0x1d4e40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e44:
    // 0x1d4e44: 0xc041b38  jal         func_106CE0
label_1d4e48:
    if (ctx->pc == 0x1D4E48u) {
        ctx->pc = 0x1D4E4Cu;
        goto label_1d4e4c;
    }
    ctx->pc = 0x1D4E44u;
    SET_GPR_U32(ctx, 31, 0x1D4E4Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4E44u, 0x1D4E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E4Cu;
label_1d4e4c:
    // 0x1d4e4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e50:
    // 0x1d4e50: 0xc0ba898  jal         func_2EA260
label_1d4e54:
    if (ctx->pc == 0x1D4E54u) {
        ctx->pc = 0x1D4E58u;
        goto label_1d4e58;
    }
    ctx->pc = 0x1D4E50u;
    SET_GPR_U32(ctx, 31, 0x1D4E58u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4E50u, 0x1D4E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E58u;
label_1d4e58:
    // 0x1d4e58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e5c:
    // 0x1d4e5c: 0xc0bef4c  jal         func_2FBD30
label_1d4e60:
    if (ctx->pc == 0x1D4E60u) {
        ctx->pc = 0x1D4E64u;
        goto label_1d4e64;
    }
    ctx->pc = 0x1D4E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4E64u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4E5Cu, 0x1D4E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E64u;
label_1d4e64:
    // 0x1d4e64: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4e68:
    // 0x1d4e68: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x1d4e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
label_1d4e6c:
    // 0x1d4e6c: 0x100002e2  b           . + 4 + (0x2E2 << 2)
label_1d4e70:
    if (ctx->pc == 0x1D4E70u) {
        ctx->pc = 0x1D4E74u;
        goto label_1d4e74;
    }
    ctx->pc = 0x1D4E6Cu;
    {
        const bool branch_taken_0x1d4e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e6c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4E74u;
label_1d4e74:
    // 0x1d4e74: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4e78:
    // 0x1d4e78: 0xc041b38  jal         func_106CE0
label_1d4e7c:
    if (ctx->pc == 0x1D4E7Cu) {
        ctx->pc = 0x1D4E80u;
        goto label_1d4e80;
    }
    ctx->pc = 0x1D4E78u;
    SET_GPR_U32(ctx, 31, 0x1D4E80u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4E78u, 0x1D4E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E80u;
label_1d4e80:
    // 0x1d4e80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e84:
    // 0x1d4e84: 0x27859760  addiu       $a1, $gp, -0x68A0
    ctx->pc = 0x1d4e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940512));
label_1d4e88:
    // 0x1d4e88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4e8c:
    // 0x1d4e8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e90:
    // 0x1d4e90: 0xc0bc66e  jal         func_2F19B8
label_1d4e94:
    if (ctx->pc == 0x1D4E94u) {
        ctx->pc = 0x1D4E98u;
        goto label_1d4e98;
    }
    ctx->pc = 0x1D4E90u;
    SET_GPR_U32(ctx, 31, 0x1D4E98u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4E90u, 0x1D4E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4E98u;
label_1d4e98:
    // 0x1d4e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4e9c:
    // 0x1d4e9c: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_1d4ea0:
    if (ctx->pc == 0x1D4EA0u) {
        ctx->pc = 0x1D4EA4u;
        goto label_1d4ea4;
    }
    ctx->pc = 0x1D4E9Cu;
    {
        const bool branch_taken_0x1d4e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4e9c) {
            ctx->pc = 0x1D4EF0u;
            goto label_1d4ef0;
        }
    }
    ctx->pc = 0x1D4EA4u;
label_1d4ea4:
    // 0x1d4ea4: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4ea8:
    // 0x1d4ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4eac:
    // 0x1d4eac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4eb0:
    // 0x1d4eb0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d4eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4eb4:
    // 0x1d4eb4: 0xc047848  jal         func_11E120
label_1d4eb8:
    if (ctx->pc == 0x1D4EB8u) {
        ctx->pc = 0x1D4EBCu;
        goto label_1d4ebc;
    }
    ctx->pc = 0x1D4EB4u;
    SET_GPR_U32(ctx, 31, 0x1D4EBCu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4EB4u, 0x1D4EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EBCu;
label_1d4ebc:
    // 0x1d4ebc: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4ec0:
    // 0x1d4ec0: 0xc041b38  jal         func_106CE0
label_1d4ec4:
    if (ctx->pc == 0x1D4EC4u) {
        ctx->pc = 0x1D4EC8u;
        goto label_1d4ec8;
    }
    ctx->pc = 0x1D4EC0u;
    SET_GPR_U32(ctx, 31, 0x1D4EC8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4EC0u, 0x1D4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EC8u;
label_1d4ec8:
    // 0x1d4ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ecc:
    // 0x1d4ecc: 0xc0ba898  jal         func_2EA260
label_1d4ed0:
    if (ctx->pc == 0x1D4ED0u) {
        ctx->pc = 0x1D4ED4u;
        goto label_1d4ed4;
    }
    ctx->pc = 0x1D4ECCu;
    SET_GPR_U32(ctx, 31, 0x1D4ED4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4ECCu, 0x1D4ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4ED4u;
label_1d4ed4:
    // 0x1d4ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ed8:
    // 0x1d4ed8: 0xc0bef4c  jal         func_2FBD30
label_1d4edc:
    if (ctx->pc == 0x1D4EDCu) {
        ctx->pc = 0x1D4EE0u;
        goto label_1d4ee0;
    }
    ctx->pc = 0x1D4ED8u;
    SET_GPR_U32(ctx, 31, 0x1D4EE0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4ED8u, 0x1D4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4EE0u;
label_1d4ee0:
    // 0x1d4ee0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4ee4:
    // 0x1d4ee4: 0xe44000dc  swc1        $f0, 0xDC($v0)
    ctx->pc = 0x1d4ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 220), bits); }
label_1d4ee8:
    // 0x1d4ee8: 0x100002c3  b           . + 4 + (0x2C3 << 2)
label_1d4eec:
    if (ctx->pc == 0x1D4EECu) {
        ctx->pc = 0x1D4EF0u;
        goto label_1d4ef0;
    }
    ctx->pc = 0x1D4EE8u;
    {
        const bool branch_taken_0x1d4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ee8) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4EF0u;
label_1d4ef0:
    // 0x1d4ef0: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4ef4:
    // 0x1d4ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ef8:
    // 0x1d4ef8: 0xc041b38  jal         func_106CE0
label_1d4efc:
    if (ctx->pc == 0x1D4EFCu) {
        ctx->pc = 0x1D4F00u;
        goto label_1d4f00;
    }
    ctx->pc = 0x1D4EF8u;
    SET_GPR_U32(ctx, 31, 0x1D4F00u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4EF8u, 0x1D4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F00u;
label_1d4f00:
    // 0x1d4f00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f04:
    // 0x1d4f04: 0x27859768  addiu       $a1, $gp, -0x6898
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940520));
label_1d4f08:
    // 0x1d4f08: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d4f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4f0c:
    // 0x1d4f0c: 0xc0bc66e  jal         func_2F19B8
label_1d4f10:
    if (ctx->pc == 0x1D4F10u) {
        ctx->pc = 0x1D4F14u;
        goto label_1d4f14;
    }
    ctx->pc = 0x1D4F0Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F14u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4F0Cu, 0x1D4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F14u;
label_1d4f14:
    // 0x1d4f14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f18:
    // 0x1d4f18: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
label_1d4f1c:
    if (ctx->pc == 0x1D4F1Cu) {
        ctx->pc = 0x1D4F20u;
        goto label_1d4f20;
    }
    ctx->pc = 0x1D4F18u;
    {
        const bool branch_taken_0x1d4f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f18) {
            ctx->pc = 0x1D4F74u;
            goto label_1d4f74;
        }
    }
    ctx->pc = 0x1D4F20u;
label_1d4f20:
    // 0x1d4f20: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4f24:
    // 0x1d4f24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d4f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f28:
    // 0x1d4f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f2c:
    // 0x1d4f2c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d4f30:
    // 0x1d4f30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d4f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f34:
    // 0x1d4f34: 0xc047848  jal         func_11E120
label_1d4f38:
    if (ctx->pc == 0x1D4F38u) {
        ctx->pc = 0x1D4F3Cu;
        goto label_1d4f3c;
    }
    ctx->pc = 0x1D4F34u;
    SET_GPR_U32(ctx, 31, 0x1D4F3Cu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4F34u, 0x1D4F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F3Cu;
label_1d4f3c:
    // 0x1d4f3c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4f40:
    // 0x1d4f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f44:
    // 0x1d4f44: 0xc041b38  jal         func_106CE0
label_1d4f48:
    if (ctx->pc == 0x1D4F48u) {
        ctx->pc = 0x1D4F4Cu;
        goto label_1d4f4c;
    }
    ctx->pc = 0x1D4F44u;
    SET_GPR_U32(ctx, 31, 0x1D4F4Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4F44u, 0x1D4F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F4Cu;
label_1d4f4c:
    // 0x1d4f4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f50:
    // 0x1d4f50: 0xc0ba898  jal         func_2EA260
label_1d4f54:
    if (ctx->pc == 0x1D4F54u) {
        ctx->pc = 0x1D4F58u;
        goto label_1d4f58;
    }
    ctx->pc = 0x1D4F50u;
    SET_GPR_U32(ctx, 31, 0x1D4F58u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4F50u, 0x1D4F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F58u;
label_1d4f58:
    // 0x1d4f58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f5c:
    // 0x1d4f5c: 0xc0bef4c  jal         func_2FBD30
label_1d4f60:
    if (ctx->pc == 0x1D4F60u) {
        ctx->pc = 0x1D4F64u;
        goto label_1d4f64;
    }
    ctx->pc = 0x1D4F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F64u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4F5Cu, 0x1D4F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F64u;
label_1d4f64:
    // 0x1d4f64: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4f68:
    // 0x1d4f68: 0xe4c000fc  swc1        $f0, 0xFC($a2)
    ctx->pc = 0x1d4f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 252), bits); }
label_1d4f6c:
    // 0x1d4f6c: 0x100002a2  b           . + 4 + (0x2A2 << 2)
label_1d4f70:
    if (ctx->pc == 0x1D4F70u) {
        ctx->pc = 0x1D4F74u;
        goto label_1d4f74;
    }
    ctx->pc = 0x1D4F6Cu;
    {
        const bool branch_taken_0x1d4f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f6c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4F74u;
label_1d4f74:
    // 0x1d4f74: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4f78:
    // 0x1d4f78: 0xc041b38  jal         func_106CE0
label_1d4f7c:
    if (ctx->pc == 0x1D4F7Cu) {
        ctx->pc = 0x1D4F80u;
        goto label_1d4f80;
    }
    ctx->pc = 0x1D4F78u;
    SET_GPR_U32(ctx, 31, 0x1D4F80u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4F78u, 0x1D4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F80u;
label_1d4f80:
    // 0x1d4f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4f84:
    // 0x1d4f84: 0x27859770  addiu       $a1, $gp, -0x6890
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940528));
label_1d4f88:
    // 0x1d4f88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d4f8c:
    // 0x1d4f8c: 0xc0bc66e  jal         func_2F19B8
label_1d4f90:
    if (ctx->pc == 0x1D4F90u) {
        ctx->pc = 0x1D4F94u;
        goto label_1d4f94;
    }
    ctx->pc = 0x1D4F8Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F94u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D4F8Cu, 0x1D4F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F94u;
label_1d4f94:
    // 0x1d4f94: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1d4f98:
    if (ctx->pc == 0x1D4F98u) {
        ctx->pc = 0x1D4F9Cu;
        goto label_1d4f9c;
    }
    ctx->pc = 0x1D4F94u;
    {
        const bool branch_taken_0x1d4f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f94) {
            ctx->pc = 0x1D4FE4u;
            goto label_1d4fe4;
        }
    }
    ctx->pc = 0x1D4F9Cu;
label_1d4f9c:
    // 0x1d4f9c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4fa0:
    // 0x1d4fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fa4:
    // 0x1d4fa4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d4fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d4fa8:
    // 0x1d4fa8: 0xc047848  jal         func_11E120
label_1d4fac:
    if (ctx->pc == 0x1D4FACu) {
        ctx->pc = 0x1D4FB0u;
        goto label_1d4fb0;
    }
    ctx->pc = 0x1D4FA8u;
    SET_GPR_U32(ctx, 31, 0x1D4FB0u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D4FA8u, 0x1D4FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FB0u;
label_1d4fb0:
    // 0x1d4fb0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4fb4:
    // 0x1d4fb4: 0xc041b38  jal         func_106CE0
label_1d4fb8:
    if (ctx->pc == 0x1D4FB8u) {
        ctx->pc = 0x1D4FBCu;
        goto label_1d4fbc;
    }
    ctx->pc = 0x1D4FB4u;
    SET_GPR_U32(ctx, 31, 0x1D4FBCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4FB4u, 0x1D4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FBCu;
label_1d4fbc:
    // 0x1d4fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fc0:
    // 0x1d4fc0: 0xc0ba898  jal         func_2EA260
label_1d4fc4:
    if (ctx->pc == 0x1D4FC4u) {
        ctx->pc = 0x1D4FC8u;
        goto label_1d4fc8;
    }
    ctx->pc = 0x1D4FC0u;
    SET_GPR_U32(ctx, 31, 0x1D4FC8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D4FC0u, 0x1D4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FC8u;
label_1d4fc8:
    // 0x1d4fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4fcc:
    // 0x1d4fcc: 0xc0bef4c  jal         func_2FBD30
label_1d4fd0:
    if (ctx->pc == 0x1D4FD0u) {
        ctx->pc = 0x1D4FD4u;
        goto label_1d4fd4;
    }
    ctx->pc = 0x1D4FCCu;
    SET_GPR_U32(ctx, 31, 0x1D4FD4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D4FCCu, 0x1D4FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FD4u;
label_1d4fd4:
    // 0x1d4fd4: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d4fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d4fd8:
    // 0x1d4fd8: 0xe4c000e0  swc1        $f0, 0xE0($a2)
    ctx->pc = 0x1d4fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 224), bits); }
label_1d4fdc:
    // 0x1d4fdc: 0x10000286  b           . + 4 + (0x286 << 2)
label_1d4fe0:
    if (ctx->pc == 0x1D4FE0u) {
        ctx->pc = 0x1D4FE4u;
        goto label_1d4fe4;
    }
    ctx->pc = 0x1D4FDCu;
    {
        const bool branch_taken_0x1d4fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fdc) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D4FE4u;
label_1d4fe4:
    // 0x1d4fe4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d4fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d4fe8:
    // 0x1d4fe8: 0xc041b38  jal         func_106CE0
label_1d4fec:
    if (ctx->pc == 0x1D4FECu) {
        ctx->pc = 0x1D4FF0u;
        goto label_1d4ff0;
    }
    ctx->pc = 0x1D4FE8u;
    SET_GPR_U32(ctx, 31, 0x1D4FF0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D4FE8u, 0x1D4FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FF0u;
label_1d4ff0:
    // 0x1d4ff0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ff4:
    // 0x1d4ff4: 0x27869774  addiu       $a2, $gp, -0x688C
    ctx->pc = 0x1d4ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940532));
label_1d4ff8:
    // 0x1d4ff8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d4ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4ffc:
    // 0x1d4ffc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5000:
    // 0x1d5000: 0xc0bc66e  jal         func_2F19B8
label_1d5004:
    if (ctx->pc == 0x1D5004u) {
        ctx->pc = 0x1D5008u;
        goto label_1d5008;
    }
    ctx->pc = 0x1D5000u;
    SET_GPR_U32(ctx, 31, 0x1D5008u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5000u, 0x1D5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5008u;
label_1d5008:
    // 0x1d5008: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_1d500c:
    if (ctx->pc == 0x1D500Cu) {
        ctx->pc = 0x1D5010u;
        goto label_1d5010;
    }
    ctx->pc = 0x1D5008u;
    {
        const bool branch_taken_0x1d5008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5008) {
            ctx->pc = 0x1D5058u;
            goto label_1d5058;
        }
    }
    ctx->pc = 0x1D5010u;
label_1d5010:
    // 0x1d5010: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5014:
    // 0x1d5014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5018:
    // 0x1d5018: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d5018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d501c:
    // 0x1d501c: 0xc047848  jal         func_11E120
label_1d5020:
    if (ctx->pc == 0x1D5020u) {
        ctx->pc = 0x1D5024u;
        goto label_1d5024;
    }
    ctx->pc = 0x1D501Cu;
    SET_GPR_U32(ctx, 31, 0x1D5024u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D501Cu, 0x1D5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5024u;
label_1d5024:
    // 0x1d5024: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5028:
    // 0x1d5028: 0xc041b38  jal         func_106CE0
label_1d502c:
    if (ctx->pc == 0x1D502Cu) {
        ctx->pc = 0x1D5030u;
        goto label_1d5030;
    }
    ctx->pc = 0x1D5028u;
    SET_GPR_U32(ctx, 31, 0x1D5030u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5028u, 0x1D5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5030u;
label_1d5030:
    // 0x1d5030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5034:
    // 0x1d5034: 0xc0ba898  jal         func_2EA260
label_1d5038:
    if (ctx->pc == 0x1D5038u) {
        ctx->pc = 0x1D503Cu;
        goto label_1d503c;
    }
    ctx->pc = 0x1D5034u;
    SET_GPR_U32(ctx, 31, 0x1D503Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D5034u, 0x1D503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D503Cu;
label_1d503c:
    // 0x1d503c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d503cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5040:
    // 0x1d5040: 0xc0bef4c  jal         func_2FBD30
label_1d5044:
    if (ctx->pc == 0x1D5044u) {
        ctx->pc = 0x1D5048u;
        goto label_1d5048;
    }
    ctx->pc = 0x1D5040u;
    SET_GPR_U32(ctx, 31, 0x1D5048u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D5040u, 0x1D5048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5048u;
label_1d5048:
    // 0x1d5048: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d504c:
    // 0x1d504c: 0xe4a00100  swc1        $f0, 0x100($a1)
    ctx->pc = 0x1d504cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 256), bits); }
label_1d5050:
    // 0x1d5050: 0x10000269  b           . + 4 + (0x269 << 2)
label_1d5054:
    if (ctx->pc == 0x1D5054u) {
        ctx->pc = 0x1D5058u;
        goto label_1d5058;
    }
    ctx->pc = 0x1D5050u;
    {
        const bool branch_taken_0x1d5050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5050) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5058u;
label_1d5058:
    // 0x1d5058: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d505c:
    // 0x1d505c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d5060:
    // 0x1d5060: 0xc041b38  jal         func_106CE0
label_1d5064:
    if (ctx->pc == 0x1D5064u) {
        ctx->pc = 0x1D5068u;
        goto label_1d5068;
    }
    ctx->pc = 0x1D5060u;
    SET_GPR_U32(ctx, 31, 0x1D5068u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5060u, 0x1D5068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5068u;
label_1d5068:
    // 0x1d5068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d506c:
    // 0x1d506c: 0x27859778  addiu       $a1, $gp, -0x6888
    ctx->pc = 0x1d506cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940536));
label_1d5070:
    // 0x1d5070: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d5070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5074:
    // 0x1d5074: 0xc0bc66e  jal         func_2F19B8
label_1d5078:
    if (ctx->pc == 0x1D5078u) {
        ctx->pc = 0x1D507Cu;
        goto label_1d507c;
    }
    ctx->pc = 0x1D5074u;
    SET_GPR_U32(ctx, 31, 0x1D507Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5074u, 0x1D507Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D507Cu;
label_1d507c:
    // 0x1d507c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1d5080:
    if (ctx->pc == 0x1D5080u) {
        ctx->pc = 0x1D5084u;
        goto label_1d5084;
    }
    ctx->pc = 0x1D507Cu;
    {
        const bool branch_taken_0x1d507c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d507c) {
            ctx->pc = 0x1D50C8u;
            goto label_1d50c8;
        }
    }
    ctx->pc = 0x1D5084u;
label_1d5084:
    // 0x1d5084: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5088:
    // 0x1d5088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d508c:
    // 0x1d508c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d508cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d5090:
    // 0x1d5090: 0xc047848  jal         func_11E120
label_1d5094:
    if (ctx->pc == 0x1D5094u) {
        ctx->pc = 0x1D5098u;
        goto label_1d5098;
    }
    ctx->pc = 0x1D5090u;
    SET_GPR_U32(ctx, 31, 0x1D5098u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D5090u, 0x1D5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5098u;
label_1d5098:
    // 0x1d5098: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d509c:
    // 0x1d509c: 0xc041b38  jal         func_106CE0
label_1d50a0:
    if (ctx->pc == 0x1D50A0u) {
        ctx->pc = 0x1D50A4u;
        goto label_1d50a4;
    }
    ctx->pc = 0x1D509Cu;
    SET_GPR_U32(ctx, 31, 0x1D50A4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D509Cu, 0x1D50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50A4u;
label_1d50a4:
    // 0x1d50a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d50a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d50a8:
    // 0x1d50a8: 0xc0ba89e  jal         func_2EA278
label_1d50ac:
    if (ctx->pc == 0x1D50ACu) {
        ctx->pc = 0x1D50B0u;
        goto label_1d50b0;
    }
    ctx->pc = 0x1D50A8u;
    SET_GPR_U32(ctx, 31, 0x1D50B0u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D50A8u, 0x1D50B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50B0u;
label_1d50b0:
    // 0x1d50b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d50b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d50b4:
    // 0x1d50b4: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1d50b4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d50b8:
    // 0x1d50b8: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d50b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d50bc:
    // 0x1d50bc: 0xa0c50108  sb          $a1, 0x108($a2)
    ctx->pc = 0x1d50bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 264), (uint8_t)GPR_U32(ctx, 5));
label_1d50c0:
    // 0x1d50c0: 0x1000024d  b           . + 4 + (0x24D << 2)
label_1d50c4:
    if (ctx->pc == 0x1D50C4u) {
        ctx->pc = 0x1D50C8u;
        goto label_1d50c8;
    }
    ctx->pc = 0x1D50C0u;
    {
        const bool branch_taken_0x1d50c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50c0) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D50C8u;
label_1d50c8:
    // 0x1d50c8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d50c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d50cc:
    // 0x1d50cc: 0xc041b38  jal         func_106CE0
label_1d50d0:
    if (ctx->pc == 0x1D50D0u) {
        ctx->pc = 0x1D50D4u;
        goto label_1d50d4;
    }
    ctx->pc = 0x1D50CCu;
    SET_GPR_U32(ctx, 31, 0x1D50D4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D50CCu, 0x1D50D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50D4u;
label_1d50d4:
    // 0x1d50d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d50d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d50d8:
    // 0x1d50d8: 0x27859780  addiu       $a1, $gp, -0x6880
    ctx->pc = 0x1d50d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940544));
label_1d50dc:
    // 0x1d50dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d50dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d50e0:
    // 0x1d50e0: 0xc0bc66e  jal         func_2F19B8
label_1d50e4:
    if (ctx->pc == 0x1D50E4u) {
        ctx->pc = 0x1D50E8u;
        goto label_1d50e8;
    }
    ctx->pc = 0x1D50E0u;
    SET_GPR_U32(ctx, 31, 0x1D50E8u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D50E0u, 0x1D50E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50E8u;
label_1d50e8:
    // 0x1d50e8: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_1d50ec:
    if (ctx->pc == 0x1D50ECu) {
        ctx->pc = 0x1D50F0u;
        goto label_1d50f0;
    }
    ctx->pc = 0x1D50E8u;
    {
        const bool branch_taken_0x1d50e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d50e8) {
            ctx->pc = 0x1D5194u;
            goto label_1d5194;
        }
    }
    ctx->pc = 0x1D50F0u;
label_1d50f0:
    // 0x1d50f0: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d50f4:
    // 0x1d50f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d50f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d50f8:
    // 0x1d50f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d50fc:
    // 0x1d50fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d50fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5100:
    // 0x1d5100: 0xc047848  jal         func_11E120
label_1d5104:
    if (ctx->pc == 0x1D5104u) {
        ctx->pc = 0x1D5108u;
        goto label_1d5108;
    }
    ctx->pc = 0x1D5100u;
    SET_GPR_U32(ctx, 31, 0x1D5108u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D5100u, 0x1D5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5108u;
label_1d5108:
    // 0x1d5108: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d510c:
    // 0x1d510c: 0xc041b38  jal         func_106CE0
label_1d5110:
    if (ctx->pc == 0x1D5110u) {
        ctx->pc = 0x1D5114u;
        goto label_1d5114;
    }
    ctx->pc = 0x1D510Cu;
    SET_GPR_U32(ctx, 31, 0x1D5114u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D510Cu, 0x1D5114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5114u;
label_1d5114:
    // 0x1d5114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5118:
    // 0x1d5118: 0xc0ba89e  jal         func_2EA278
label_1d511c:
    if (ctx->pc == 0x1D511Cu) {
        ctx->pc = 0x1D5120u;
        goto label_1d5120;
    }
    ctx->pc = 0x1D5118u;
    SET_GPR_U32(ctx, 31, 0x1D5120u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D5118u, 0x1D5120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5120u;
label_1d5120:
    // 0x1d5120: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d5120u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5124:
    // 0x1d5124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5128:
    // 0x1d5128: 0x16c30006  bne         $s6, $v1, . + 4 + (0x6 << 2)
label_1d512c:
    if (ctx->pc == 0x1D512Cu) {
        ctx->pc = 0x1D5130u;
        goto label_1d5130;
    }
    ctx->pc = 0x1D5128u;
    {
        const bool branch_taken_0x1d5128 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5128) {
            ctx->pc = 0x1D5144u;
            goto label_1d5144;
        }
    }
    ctx->pc = 0x1D5130u;
label_1d5130:
    // 0x1d5130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5134:
    // 0x1d5134: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5138:
    // 0x1d5138: 0xa0820109  sb          $v0, 0x109($a0)
    ctx->pc = 0x1d5138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 265), (uint8_t)GPR_U32(ctx, 2));
label_1d513c:
    // 0x1d513c: 0x1000022e  b           . + 4 + (0x22E << 2)
label_1d5140:
    if (ctx->pc == 0x1D5140u) {
        ctx->pc = 0x1D5144u;
        goto label_1d5144;
    }
    ctx->pc = 0x1D513Cu;
    {
        const bool branch_taken_0x1d513c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d513c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5144u;
label_1d5144:
    // 0x1d5144: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5148:
    // 0x1d5148: 0x16c5000c  bne         $s6, $a1, . + 4 + (0xC << 2)
label_1d514c:
    if (ctx->pc == 0x1D514Cu) {
        ctx->pc = 0x1D5150u;
        goto label_1d5150;
    }
    ctx->pc = 0x1D5148u;
    {
        const bool branch_taken_0x1d5148 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d5148) {
            ctx->pc = 0x1D517Cu;
            goto label_1d517c;
        }
    }
    ctx->pc = 0x1D5150u;
label_1d5150:
    // 0x1d5150: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5154:
    // 0x1d5154: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5158:
    // 0x1d5158: 0xa0440109  sb          $a0, 0x109($v0)
    ctx->pc = 0x1d5158u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 265), (uint8_t)GPR_U32(ctx, 4));
label_1d515c:
    // 0x1d515c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d515cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5160:
    // 0x1d5160: 0x9044010a  lbu         $a0, 0x10A($v0)
    ctx->pc = 0x1d5160u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 266)));
label_1d5164:
    // 0x1d5164: 0x4282b  sltu        $a1, $zero, $a0
    ctx->pc = 0x1d5164u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d5168:
    // 0x1d5168: 0x38a20001  xori        $v0, $a1, 0x1
    ctx->pc = 0x1d5168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_1d516c:
    // 0x1d516c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5170:
    // 0x1d5170: 0xa082010a  sb          $v0, 0x10A($a0)
    ctx->pc = 0x1d5170u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 266), (uint8_t)GPR_U32(ctx, 2));
label_1d5174:
    // 0x1d5174: 0x10000220  b           . + 4 + (0x220 << 2)
label_1d5178:
    if (ctx->pc == 0x1D5178u) {
        ctx->pc = 0x1D517Cu;
        goto label_1d517c;
    }
    ctx->pc = 0x1D5174u;
    {
        const bool branch_taken_0x1d5174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5174) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D517Cu;
label_1d517c:
    // 0x1d517c: 0x16c0021e  bnez        $s6, . + 4 + (0x21E << 2)
label_1d5180:
    if (ctx->pc == 0x1D5180u) {
        ctx->pc = 0x1D5184u;
        goto label_1d5184;
    }
    ctx->pc = 0x1D517Cu;
    {
        const bool branch_taken_0x1d517c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d517c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5184u;
label_1d5184:
    // 0x1d5184: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5188:
    // 0x1d5188: 0xa0400109  sb          $zero, 0x109($v0)
    ctx->pc = 0x1d5188u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 265), (uint8_t)GPR_U32(ctx, 0));
label_1d518c:
    // 0x1d518c: 0x1000021a  b           . + 4 + (0x21A << 2)
label_1d5190:
    if (ctx->pc == 0x1D5190u) {
        ctx->pc = 0x1D5194u;
        goto label_1d5194;
    }
    ctx->pc = 0x1D518Cu;
    {
        const bool branch_taken_0x1d518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d518c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5194u;
label_1d5194:
    // 0x1d5194: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d5194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5198:
    // 0x1d5198: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d5198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d519c:
    // 0x1d519c: 0xc041b38  jal         func_106CE0
label_1d51a0:
    if (ctx->pc == 0x1D51A0u) {
        ctx->pc = 0x1D51A4u;
        goto label_1d51a4;
    }
    ctx->pc = 0x1D519Cu;
    SET_GPR_U32(ctx, 31, 0x1D51A4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D519Cu, 0x1D51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51A4u;
label_1d51a4:
    // 0x1d51a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d51a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d51a8:
    // 0x1d51a8: 0x27859788  addiu       $a1, $gp, -0x6878
    ctx->pc = 0x1d51a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940552));
label_1d51ac:
    // 0x1d51ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d51acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d51b0:
    // 0x1d51b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d51b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d51b4:
    // 0x1d51b4: 0xc0bc66e  jal         func_2F19B8
label_1d51b8:
    if (ctx->pc == 0x1D51B8u) {
        ctx->pc = 0x1D51BCu;
        goto label_1d51bc;
    }
    ctx->pc = 0x1D51B4u;
    SET_GPR_U32(ctx, 31, 0x1D51BCu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D51B4u, 0x1D51BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51BCu;
label_1d51bc:
    // 0x1d51bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d51bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d51c0:
    // 0x1d51c0: 0x1480005a  bnez        $a0, . + 4 + (0x5A << 2)
label_1d51c4:
    if (ctx->pc == 0x1D51C4u) {
        ctx->pc = 0x1D51C8u;
        goto label_1d51c8;
    }
    ctx->pc = 0x1D51C0u;
    {
        const bool branch_taken_0x1d51c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d51c0) {
            ctx->pc = 0x1D532Cu;
            goto label_1d532c;
        }
    }
    ctx->pc = 0x1D51C8u;
label_1d51c8:
    // 0x1d51c8: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d51cc:
    // 0x1d51cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d51ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d51d0:
    // 0x1d51d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d51d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d51d4:
    // 0x1d51d4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d51d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d51d8:
    // 0x1d51d8: 0xc047848  jal         func_11E120
label_1d51dc:
    if (ctx->pc == 0x1D51DCu) {
        ctx->pc = 0x1D51E0u;
        goto label_1d51e0;
    }
    ctx->pc = 0x1D51D8u;
    SET_GPR_U32(ctx, 31, 0x1D51E0u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D51D8u, 0x1D51E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D51E0u;
label_1d51e0:
    // 0x1d51e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d51e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d51e4:
    // 0x1d51e4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d51e8:
    // 0x1d51e8: 0x8c6400a4  lw          $a0, 0xA4($v1)
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1d51ec:
    // 0x1d51ec: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
label_1d51f0:
    if (ctx->pc == 0x1D51F0u) {
        ctx->pc = 0x1D51F4u;
        goto label_1d51f4;
    }
    ctx->pc = 0x1D51ECu;
    {
        const bool branch_taken_0x1d51ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d51ec) {
            ctx->pc = 0x1D529Cu;
            goto label_1d529c;
        }
    }
    ctx->pc = 0x1D51F4u;
label_1d51f4:
    // 0x1d51f4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d51f8:
    // 0x1d51f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d51f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d51fc:
    // 0x1d51fc: 0xc041b38  jal         func_106CE0
label_1d5200:
    if (ctx->pc == 0x1D5200u) {
        ctx->pc = 0x1D5204u;
        goto label_1d5204;
    }
    ctx->pc = 0x1D51FCu;
    SET_GPR_U32(ctx, 31, 0x1D5204u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D51FCu, 0x1D5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5204u;
label_1d5204:
    // 0x1d5204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5208:
    // 0x1d5208: 0xc0ba898  jal         func_2EA260
label_1d520c:
    if (ctx->pc == 0x1D520Cu) {
        ctx->pc = 0x1D5210u;
        goto label_1d5210;
    }
    ctx->pc = 0x1D5208u;
    SET_GPR_U32(ctx, 31, 0x1D5210u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D5208u, 0x1D5210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5210u;
label_1d5210:
    // 0x1d5210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5214:
    // 0x1d5214: 0xc0bef4c  jal         func_2FBD30
label_1d5218:
    if (ctx->pc == 0x1D5218u) {
        ctx->pc = 0x1D521Cu;
        goto label_1d521c;
    }
    ctx->pc = 0x1D5214u;
    SET_GPR_U32(ctx, 31, 0x1D521Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D5214u, 0x1D521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D521Cu;
label_1d521c:
    // 0x1d521c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5220:
    // 0x1d5220: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5224:
    // 0x1d5224: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d5224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1d5228:
    // 0x1d5228: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d522c:
    // 0x1d522c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d5230:
    // 0x1d5230: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1d5230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5234:
    // 0x1d5234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d5234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5238:
    // 0x1d5238: 0x0  nop
    ctx->pc = 0x1d5238u;
    // NOP
label_1d523c:
    // 0x1d523c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d523cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d5240:
    // 0x1d5240: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1d5244:
    if (ctx->pc == 0x1D5244u) {
        ctx->pc = 0x1D5248u;
        goto label_1d5248;
    }
    ctx->pc = 0x1D5240u;
    {
        const bool branch_taken_0x1d5240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5240) {
            ctx->pc = 0x1D5270u;
            goto label_1d5270;
        }
    }
    ctx->pc = 0x1D5248u;
label_1d5248:
    // 0x1d5248: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d524c:
    // 0x1d524c: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d5250:
    // 0x1d5250: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x1d5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d5254:
    // 0x1d5254: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d5254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5258:
    // 0x1d5258: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d5258u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d525c:
    // 0x1d525c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d525cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5260:
    // 0x1d5260: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d5264:
    // 0x1d5264: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1d5264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1d5268:
    // 0x1d5268: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d526c:
    if (ctx->pc == 0x1D526Cu) {
        ctx->pc = 0x1D5270u;
        goto label_1d5270;
    }
    ctx->pc = 0x1D5268u;
    {
        const bool branch_taken_0x1d5268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5268) {
            ctx->pc = 0x1D5284u;
            goto label_1d5284;
        }
    }
    ctx->pc = 0x1D5270u;
label_1d5270:
    // 0x1d5270: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1d5270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_1d5274:
    // 0x1d5274: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5274u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d5278:
    // 0x1d5278: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d527c:
    // 0x1d527c: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d527cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5280:
    // 0x1d5280: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x1d5280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_1d5284:
    // 0x1d5284: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d5284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5288:
    // 0x1d5288: 0x8cde00a4  lw          $fp, 0xA4($a2)
    ctx->pc = 0x1d5288u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d528c:
    // 0x1d528c: 0xc7c00020  lwc1        $f0, 0x20($fp)
    ctx->pc = 0x1d528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5290:
    // 0x1d5290: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5294:
    // 0x1d5294: 0x8c9e00a4  lw          $fp, 0xA4($a0)
    ctx->pc = 0x1d5294u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d5298:
    // 0x1d5298: 0xe7c0001c  swc1        $f0, 0x1C($fp)
    ctx->pc = 0x1d5298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 28), bits); }
label_1d529c:
    // 0x1d529c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d52a0:
    // 0x1d52a0: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d52a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d52a4:
    // 0x1d52a4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_1d52a8:
    if (ctx->pc == 0x1D52A8u) {
        ctx->pc = 0x1D52ACu;
        goto label_1d52ac;
    }
    ctx->pc = 0x1D52A4u;
    {
        const bool branch_taken_0x1d52a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d52a4) {
            ctx->pc = 0x1D52E0u;
            goto label_1d52e0;
        }
    }
    ctx->pc = 0x1D52ACu;
label_1d52ac:
    // 0x1d52ac: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d52acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d52b0:
    // 0x1d52b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d52b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d52b4:
    // 0x1d52b4: 0xc041b38  jal         func_106CE0
label_1d52b8:
    if (ctx->pc == 0x1D52B8u) {
        ctx->pc = 0x1D52BCu;
        goto label_1d52bc;
    }
    ctx->pc = 0x1D52B4u;
    SET_GPR_U32(ctx, 31, 0x1D52BCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D52B4u, 0x1D52BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52BCu;
label_1d52bc:
    // 0x1d52bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d52bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d52c0:
    // 0x1d52c0: 0xc0ba898  jal         func_2EA260
label_1d52c4:
    if (ctx->pc == 0x1D52C4u) {
        ctx->pc = 0x1D52C8u;
        goto label_1d52c8;
    }
    ctx->pc = 0x1D52C0u;
    SET_GPR_U32(ctx, 31, 0x1D52C8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D52C0u, 0x1D52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C8u;
label_1d52c8:
    // 0x1d52c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d52c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d52cc:
    // 0x1d52cc: 0xc0bef4c  jal         func_2FBD30
label_1d52d0:
    if (ctx->pc == 0x1D52D0u) {
        ctx->pc = 0x1D52D4u;
        goto label_1d52d4;
    }
    ctx->pc = 0x1D52CCu;
    SET_GPR_U32(ctx, 31, 0x1D52D4u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D52CCu, 0x1D52D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52D4u;
label_1d52d4:
    // 0x1d52d4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d52d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d52d8:
    // 0x1d52d8: 0x8c8200a8  lw          $v0, 0xA8($a0)
    ctx->pc = 0x1d52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
label_1d52dc:
    // 0x1d52dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d52dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d52e0:
    // 0x1d52e0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d52e4:
    // 0x1d52e4: 0x8c4500ac  lw          $a1, 0xAC($v0)
    ctx->pc = 0x1d52e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d52e8:
    // 0x1d52e8: 0x10a001c3  beqz        $a1, . + 4 + (0x1C3 << 2)
label_1d52ec:
    if (ctx->pc == 0x1D52ECu) {
        ctx->pc = 0x1D52F0u;
        goto label_1d52f0;
    }
    ctx->pc = 0x1D52E8u;
    {
        const bool branch_taken_0x1d52e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d52e8) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D52F0u;
label_1d52f0:
    // 0x1d52f0: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d52f4:
    // 0x1d52f4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d52f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d52f8:
    // 0x1d52f8: 0xc041b38  jal         func_106CE0
label_1d52fc:
    if (ctx->pc == 0x1D52FCu) {
        ctx->pc = 0x1D5300u;
        goto label_1d5300;
    }
    ctx->pc = 0x1D52F8u;
    SET_GPR_U32(ctx, 31, 0x1D5300u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D52F8u, 0x1D5300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5300u;
label_1d5300:
    // 0x1d5300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5304:
    // 0x1d5304: 0xc0ba898  jal         func_2EA260
label_1d5308:
    if (ctx->pc == 0x1D5308u) {
        ctx->pc = 0x1D530Cu;
        goto label_1d530c;
    }
    ctx->pc = 0x1D5304u;
    SET_GPR_U32(ctx, 31, 0x1D530Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D5304u, 0x1D530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D530Cu;
label_1d530c:
    // 0x1d530c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5310:
    // 0x1d5310: 0xc0bef4c  jal         func_2FBD30
label_1d5314:
    if (ctx->pc == 0x1D5314u) {
        ctx->pc = 0x1D5318u;
        goto label_1d5318;
    }
    ctx->pc = 0x1D5310u;
    SET_GPR_U32(ctx, 31, 0x1D5318u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D5310u, 0x1D5318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5318u;
label_1d5318:
    // 0x1d5318: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d531c:
    // 0x1d531c: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d5320:
    // 0x1d5320: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1d5320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1d5324:
    // 0x1d5324: 0x100001b4  b           . + 4 + (0x1B4 << 2)
label_1d5328:
    if (ctx->pc == 0x1D5328u) {
        ctx->pc = 0x1D532Cu;
        goto label_1d532c;
    }
    ctx->pc = 0x1D5324u;
    {
        const bool branch_taken_0x1d5324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5324) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D532Cu;
label_1d532c:
    // 0x1d532c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5330:
    // 0x1d5330: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d5330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d5334:
    // 0x1d5334: 0x1040014a  beqz        $v0, . + 4 + (0x14A << 2)
label_1d5338:
    if (ctx->pc == 0x1D5338u) {
        ctx->pc = 0x1D533Cu;
        goto label_1d533c;
    }
    ctx->pc = 0x1D5334u;
    {
        const bool branch_taken_0x1d5334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5334) {
            ctx->pc = 0x1D5860u;
            goto label_1d5860;
        }
    }
    ctx->pc = 0x1D533Cu;
label_1d533c:
    // 0x1d533c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5340:
    // 0x1d5340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5344:
    // 0x1d5344: 0xc041b38  jal         func_106CE0
label_1d5348:
    if (ctx->pc == 0x1D5348u) {
        ctx->pc = 0x1D534Cu;
        goto label_1d534c;
    }
    ctx->pc = 0x1D5344u;
    SET_GPR_U32(ctx, 31, 0x1D534Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5344u, 0x1D534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D534Cu;
label_1d534c:
    // 0x1d534c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5350:
    // 0x1d5350: 0x27859790  addiu       $a1, $gp, -0x6870
    ctx->pc = 0x1d5350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940560));
label_1d5354:
    // 0x1d5354: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5358:
    // 0x1d5358: 0xc0bc66e  jal         func_2F19B8
label_1d535c:
    if (ctx->pc == 0x1D535Cu) {
        ctx->pc = 0x1D5360u;
        goto label_1d5360;
    }
    ctx->pc = 0x1D5358u;
    SET_GPR_U32(ctx, 31, 0x1D5360u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5358u, 0x1D5360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5360u;
label_1d5360:
    // 0x1d5360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5364:
    // 0x1d5364: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
label_1d5368:
    if (ctx->pc == 0x1D5368u) {
        ctx->pc = 0x1D536Cu;
        goto label_1d536c;
    }
    ctx->pc = 0x1D5364u;
    {
        const bool branch_taken_0x1d5364 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5364) {
            ctx->pc = 0x1D53C4u;
            goto label_1d53c4;
        }
    }
    ctx->pc = 0x1D536Cu;
label_1d536c:
    // 0x1d536c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5370:
    // 0x1d5370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5374:
    // 0x1d5374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5378:
    // 0x1d5378: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d5378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d537c:
    // 0x1d537c: 0xc047848  jal         func_11E120
label_1d5380:
    if (ctx->pc == 0x1D5380u) {
        ctx->pc = 0x1D5384u;
        goto label_1d5384;
    }
    ctx->pc = 0x1D537Cu;
    SET_GPR_U32(ctx, 31, 0x1D5384u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D537Cu, 0x1D5384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5384u;
label_1d5384:
    // 0x1d5384: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5388:
    // 0x1d5388: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d538c:
    // 0x1d538c: 0xc041b38  jal         func_106CE0
label_1d5390:
    if (ctx->pc == 0x1D5390u) {
        ctx->pc = 0x1D5394u;
        goto label_1d5394;
    }
    ctx->pc = 0x1D538Cu;
    SET_GPR_U32(ctx, 31, 0x1D5394u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D538Cu, 0x1D5394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5394u;
label_1d5394:
    // 0x1d5394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5398:
    // 0x1d5398: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d5398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d539c:
    // 0x1d539c: 0xc0ba898  jal         func_2EA260
label_1d53a0:
    if (ctx->pc == 0x1D53A0u) {
        ctx->pc = 0x1D53A4u;
        goto label_1d53a4;
    }
    ctx->pc = 0x1D539Cu;
    SET_GPR_U32(ctx, 31, 0x1D53A4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D539Cu, 0x1D53A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53A4u;
label_1d53a4:
    // 0x1d53a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d53a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d53a8:
    // 0x1d53a8: 0xc0bef4c  jal         func_2FBD30
label_1d53ac:
    if (ctx->pc == 0x1D53ACu) {
        ctx->pc = 0x1D53B0u;
        goto label_1d53b0;
    }
    ctx->pc = 0x1D53A8u;
    SET_GPR_U32(ctx, 31, 0x1D53B0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D53A8u, 0x1D53B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53B0u;
label_1d53b0:
    // 0x1d53b0: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d53b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d53b4:
    // 0x1d53b4: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d53b8:
    // 0x1d53b8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1d53b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1d53bc:
    // 0x1d53bc: 0x1000018e  b           . + 4 + (0x18E << 2)
label_1d53c0:
    if (ctx->pc == 0x1D53C0u) {
        ctx->pc = 0x1D53C4u;
        goto label_1d53c4;
    }
    ctx->pc = 0x1D53BCu;
    {
        const bool branch_taken_0x1d53bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d53bc) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D53C4u;
label_1d53c4:
    // 0x1d53c4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d53c8:
    // 0x1d53c8: 0xc041b38  jal         func_106CE0
label_1d53cc:
    if (ctx->pc == 0x1D53CCu) {
        ctx->pc = 0x1D53D0u;
        goto label_1d53d0;
    }
    ctx->pc = 0x1D53C8u;
    SET_GPR_U32(ctx, 31, 0x1D53D0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D53C8u, 0x1D53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53D0u;
label_1d53d0:
    // 0x1d53d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d53d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d53d4:
    // 0x1d53d4: 0x27859794  addiu       $a1, $gp, -0x686C
    ctx->pc = 0x1d53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940564));
label_1d53d8:
    // 0x1d53d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d53d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d53dc:
    // 0x1d53dc: 0xc0bc66e  jal         func_2F19B8
label_1d53e0:
    if (ctx->pc == 0x1D53E0u) {
        ctx->pc = 0x1D53E4u;
        goto label_1d53e4;
    }
    ctx->pc = 0x1D53DCu;
    SET_GPR_U32(ctx, 31, 0x1D53E4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D53DCu, 0x1D53E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53E4u;
label_1d53e4:
    // 0x1d53e4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1d53e8:
    if (ctx->pc == 0x1D53E8u) {
        ctx->pc = 0x1D53ECu;
        goto label_1d53ec;
    }
    ctx->pc = 0x1D53E4u;
    {
        const bool branch_taken_0x1d53e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d53e4) {
            ctx->pc = 0x1D5444u;
            goto label_1d5444;
        }
    }
    ctx->pc = 0x1D53ECu;
label_1d53ec:
    // 0x1d53ec: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d53ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d53f0:
    // 0x1d53f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d53f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d53f4:
    // 0x1d53f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d53f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d53f8:
    // 0x1d53f8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d53f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d53fc:
    // 0x1d53fc: 0xc047848  jal         func_11E120
label_1d5400:
    if (ctx->pc == 0x1D5400u) {
        ctx->pc = 0x1D5404u;
        goto label_1d5404;
    }
    ctx->pc = 0x1D53FCu;
    SET_GPR_U32(ctx, 31, 0x1D5404u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D53FCu, 0x1D5404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5404u;
label_1d5404:
    // 0x1d5404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5408:
    // 0x1d5408: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d5408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d540c:
    // 0x1d540c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d540cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5410:
    // 0x1d5410: 0xc041b38  jal         func_106CE0
label_1d5414:
    if (ctx->pc == 0x1D5414u) {
        ctx->pc = 0x1D5418u;
        goto label_1d5418;
    }
    ctx->pc = 0x1D5410u;
    SET_GPR_U32(ctx, 31, 0x1D5418u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5410u, 0x1D5418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5418u;
label_1d5418:
    // 0x1d5418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d541c:
    // 0x1d541c: 0xc0ba898  jal         func_2EA260
label_1d5420:
    if (ctx->pc == 0x1D5420u) {
        ctx->pc = 0x1D5424u;
        goto label_1d5424;
    }
    ctx->pc = 0x1D541Cu;
    SET_GPR_U32(ctx, 31, 0x1D5424u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D541Cu, 0x1D5424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5424u;
label_1d5424:
    // 0x1d5424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5428:
    // 0x1d5428: 0xc0bef4c  jal         func_2FBD30
label_1d542c:
    if (ctx->pc == 0x1D542Cu) {
        ctx->pc = 0x1D5430u;
        goto label_1d5430;
    }
    ctx->pc = 0x1D5428u;
    SET_GPR_U32(ctx, 31, 0x1D5430u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D5428u, 0x1D5430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5430u;
label_1d5430:
    // 0x1d5430: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5434:
    // 0x1d5434: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d5434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5438:
    // 0x1d5438: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1d5438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1d543c:
    // 0x1d543c: 0x1000016e  b           . + 4 + (0x16E << 2)
label_1d5440:
    if (ctx->pc == 0x1D5440u) {
        ctx->pc = 0x1D5444u;
        goto label_1d5444;
    }
    ctx->pc = 0x1D543Cu;
    {
        const bool branch_taken_0x1d543c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d543c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5444u;
label_1d5444:
    // 0x1d5444: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d5444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5448:
    // 0x1d5448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d544c:
    // 0x1d544c: 0xc041b38  jal         func_106CE0
label_1d5450:
    if (ctx->pc == 0x1D5450u) {
        ctx->pc = 0x1D5454u;
        goto label_1d5454;
    }
    ctx->pc = 0x1D544Cu;
    SET_GPR_U32(ctx, 31, 0x1D5454u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D544Cu, 0x1D5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5454u;
label_1d5454:
    // 0x1d5454: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5458:
    // 0x1d5458: 0x27859798  addiu       $a1, $gp, -0x6868
    ctx->pc = 0x1d5458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940568));
label_1d545c:
    // 0x1d545c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5460:
    // 0x1d5460: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5464:
    // 0x1d5464: 0xc0bc66e  jal         func_2F19B8
label_1d5468:
    if (ctx->pc == 0x1D5468u) {
        ctx->pc = 0x1D546Cu;
        goto label_1d546c;
    }
    ctx->pc = 0x1D5464u;
    SET_GPR_U32(ctx, 31, 0x1D546Cu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5464u, 0x1D546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D546Cu;
label_1d546c:
    // 0x1d546c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d546cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5470:
    // 0x1d5470: 0x14a00035  bnez        $a1, . + 4 + (0x35 << 2)
label_1d5474:
    if (ctx->pc == 0x1D5474u) {
        ctx->pc = 0x1D5478u;
        goto label_1d5478;
    }
    ctx->pc = 0x1D5470u;
    {
        const bool branch_taken_0x1d5470 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5470) {
            ctx->pc = 0x1D5548u;
            goto label_1d5548;
        }
    }
    ctx->pc = 0x1D5478u;
label_1d5478:
    // 0x1d5478: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d5478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d547c:
    // 0x1d547c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d547cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d5480:
    // 0x1d5480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5484:
    // 0x1d5484: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5488:
    // 0x1d5488: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d548c:
    // 0x1d548c: 0xc047848  jal         func_11E120
label_1d5490:
    if (ctx->pc == 0x1D5490u) {
        ctx->pc = 0x1D5494u;
        goto label_1d5494;
    }
    ctx->pc = 0x1D548Cu;
    SET_GPR_U32(ctx, 31, 0x1D5494u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D548Cu, 0x1D5494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5494u;
label_1d5494:
    // 0x1d5494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5498:
    // 0x1d5498: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d5498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d549c:
    // 0x1d549c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d549cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d54a0:
    // 0x1d54a0: 0xc041b38  jal         func_106CE0
label_1d54a4:
    if (ctx->pc == 0x1D54A4u) {
        ctx->pc = 0x1D54A8u;
        goto label_1d54a8;
    }
    ctx->pc = 0x1D54A0u;
    SET_GPR_U32(ctx, 31, 0x1D54A8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D54A0u, 0x1D54A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54A8u;
label_1d54a8:
    // 0x1d54a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d54a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d54ac:
    // 0x1d54ac: 0xc0ba898  jal         func_2EA260
label_1d54b0:
    if (ctx->pc == 0x1D54B0u) {
        ctx->pc = 0x1D54B4u;
        goto label_1d54b4;
    }
    ctx->pc = 0x1D54ACu;
    SET_GPR_U32(ctx, 31, 0x1D54B4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D54ACu, 0x1D54B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54B4u;
label_1d54b4:
    // 0x1d54b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d54b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d54b8:
    // 0x1d54b8: 0xc0bef4c  jal         func_2FBD30
label_1d54bc:
    if (ctx->pc == 0x1D54BCu) {
        ctx->pc = 0x1D54C0u;
        goto label_1d54c0;
    }
    ctx->pc = 0x1D54B8u;
    SET_GPR_U32(ctx, 31, 0x1D54C0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D54B8u, 0x1D54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D54C0u;
label_1d54c0:
    // 0x1d54c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d54c4:
    // 0x1d54c4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d54c8:
    // 0x1d54c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1d54c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1d54cc:
    // 0x1d54cc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d54d0:
    // 0x1d54d0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1d54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1d54d4:
    // 0x1d54d4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1d54d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d54d8:
    // 0x1d54d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d54d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d54dc:
    // 0x1d54dc: 0x0  nop
    ctx->pc = 0x1d54dcu;
    // NOP
label_1d54e0:
    // 0x1d54e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d54e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d54e4:
    // 0x1d54e4: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1d54e8:
    if (ctx->pc == 0x1D54E8u) {
        ctx->pc = 0x1D54ECu;
        goto label_1d54ec;
    }
    ctx->pc = 0x1D54E4u;
    {
        const bool branch_taken_0x1d54e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d54e4) {
            ctx->pc = 0x1D5514u;
            goto label_1d5514;
        }
    }
    ctx->pc = 0x1D54ECu;
label_1d54ec:
    // 0x1d54ec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d54f0:
    // 0x1d54f0: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d54f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d54f4:
    // 0x1d54f4: 0xc7818278  lwc1        $f1, -0x7D88($gp)
    ctx->pc = 0x1d54f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d54f8:
    // 0x1d54f8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1d54f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d54fc:
    // 0x1d54fc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1d54fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1d5500:
    // 0x1d5500: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5504:
    // 0x1d5504: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d5504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5508:
    // 0x1d5508: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1d5508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1d550c:
    // 0x1d550c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1d5510:
    if (ctx->pc == 0x1D5510u) {
        ctx->pc = 0x1D5514u;
        goto label_1d5514;
    }
    ctx->pc = 0x1D550Cu;
    {
        const bool branch_taken_0x1d550c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d550c) {
            ctx->pc = 0x1D5528u;
            goto label_1d5528;
        }
    }
    ctx->pc = 0x1D5514u;
label_1d5514:
    // 0x1d5514: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1d5514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
label_1d5518:
    // 0x1d5518: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1d5518u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d551c:
    // 0x1d551c: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d551cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5520:
    // 0x1d5520: 0x8cc500a4  lw          $a1, 0xA4($a2)
    ctx->pc = 0x1d5520u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d5524:
    // 0x1d5524: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x1d5524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_1d5528:
    // 0x1d5528: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d552c:
    // 0x1d552c: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d552cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5530:
    // 0x1d5530: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x1d5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d5534:
    // 0x1d5534: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5538:
    // 0x1d5538: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d5538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d553c:
    // 0x1d553c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1d553cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1d5540:
    // 0x1d5540: 0x1000012d  b           . + 4 + (0x12D << 2)
label_1d5544:
    if (ctx->pc == 0x1D5544u) {
        ctx->pc = 0x1D5548u;
        goto label_1d5548;
    }
    ctx->pc = 0x1D5540u;
    {
        const bool branch_taken_0x1d5540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5540) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5548u;
label_1d5548:
    // 0x1d5548: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d5548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d554c:
    // 0x1d554c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5550:
    // 0x1d5550: 0xc041b38  jal         func_106CE0
label_1d5554:
    if (ctx->pc == 0x1D5554u) {
        ctx->pc = 0x1D5558u;
        goto label_1d5558;
    }
    ctx->pc = 0x1D5550u;
    SET_GPR_U32(ctx, 31, 0x1D5558u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5550u, 0x1D5558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5558u;
label_1d5558:
    // 0x1d5558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d555c:
    // 0x1d555c: 0x278597a0  addiu       $a1, $gp, -0x6860
    ctx->pc = 0x1d555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940576));
label_1d5560:
    // 0x1d5560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5564:
    // 0x1d5564: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5568:
    // 0x1d5568: 0xc0bc66e  jal         func_2F19B8
label_1d556c:
    if (ctx->pc == 0x1D556Cu) {
        ctx->pc = 0x1D5570u;
        goto label_1d5570;
    }
    ctx->pc = 0x1D5568u;
    SET_GPR_U32(ctx, 31, 0x1D5570u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5568u, 0x1D5570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5570u;
label_1d5570:
    // 0x1d5570: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1d5574:
    if (ctx->pc == 0x1D5574u) {
        ctx->pc = 0x1D5578u;
        goto label_1d5578;
    }
    ctx->pc = 0x1D5570u;
    {
        const bool branch_taken_0x1d5570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5570) {
            ctx->pc = 0x1D55C4u;
            goto label_1d55c4;
        }
    }
    ctx->pc = 0x1D5578u;
label_1d5578:
    // 0x1d5578: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d557c:
    // 0x1d557c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d557cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5580:
    // 0x1d5580: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5584:
    // 0x1d5584: 0xc047848  jal         func_11E120
label_1d5588:
    if (ctx->pc == 0x1D5588u) {
        ctx->pc = 0x1D558Cu;
        goto label_1d558c;
    }
    ctx->pc = 0x1D5584u;
    SET_GPR_U32(ctx, 31, 0x1D558Cu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D5584u, 0x1D558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D558Cu;
label_1d558c:
    // 0x1d558c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d558cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5590:
    // 0x1d5590: 0xc041b38  jal         func_106CE0
label_1d5594:
    if (ctx->pc == 0x1D5594u) {
        ctx->pc = 0x1D5598u;
        goto label_1d5598;
    }
    ctx->pc = 0x1D5590u;
    SET_GPR_U32(ctx, 31, 0x1D5598u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5590u, 0x1D5598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5598u;
label_1d5598:
    // 0x1d5598: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d559c:
    // 0x1d559c: 0xc0ba898  jal         func_2EA260
label_1d55a0:
    if (ctx->pc == 0x1D55A0u) {
        ctx->pc = 0x1D55A4u;
        goto label_1d55a4;
    }
    ctx->pc = 0x1D559Cu;
    SET_GPR_U32(ctx, 31, 0x1D55A4u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D559Cu, 0x1D55A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55A4u;
label_1d55a4:
    // 0x1d55a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d55a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d55a8:
    // 0x1d55a8: 0xc0bef4c  jal         func_2FBD30
label_1d55ac:
    if (ctx->pc == 0x1D55ACu) {
        ctx->pc = 0x1D55B0u;
        goto label_1d55b0;
    }
    ctx->pc = 0x1D55A8u;
    SET_GPR_U32(ctx, 31, 0x1D55B0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D55A8u, 0x1D55B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55B0u;
label_1d55b0:
    // 0x1d55b0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d55b4:
    // 0x1d55b4: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d55b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d55b8:
    // 0x1d55b8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1d55b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1d55bc:
    // 0x1d55bc: 0x1000010e  b           . + 4 + (0x10E << 2)
label_1d55c0:
    if (ctx->pc == 0x1D55C0u) {
        ctx->pc = 0x1D55C4u;
        goto label_1d55c4;
    }
    ctx->pc = 0x1D55BCu;
    {
        const bool branch_taken_0x1d55bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d55bc) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D55C4u;
label_1d55c4:
    // 0x1d55c4: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d55c8:
    // 0x1d55c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d55c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d55cc:
    // 0x1d55cc: 0xc041b38  jal         func_106CE0
label_1d55d0:
    if (ctx->pc == 0x1D55D0u) {
        ctx->pc = 0x1D55D4u;
        goto label_1d55d4;
    }
    ctx->pc = 0x1D55CCu;
    SET_GPR_U32(ctx, 31, 0x1D55D4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D55CCu, 0x1D55D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55D4u;
label_1d55d4:
    // 0x1d55d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d55d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d55d8:
    // 0x1d55d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d55d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d55dc:
    // 0x1d55dc: 0x278697a4  addiu       $a2, $gp, -0x685C
    ctx->pc = 0x1d55dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940580));
label_1d55e0:
    // 0x1d55e0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d55e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d55e4:
    // 0x1d55e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d55e8:
    // 0x1d55e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d55e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d55ec:
    // 0x1d55ec: 0xc0bc66e  jal         func_2F19B8
label_1d55f0:
    if (ctx->pc == 0x1D55F0u) {
        ctx->pc = 0x1D55F4u;
        goto label_1d55f4;
    }
    ctx->pc = 0x1D55ECu;
    SET_GPR_U32(ctx, 31, 0x1D55F4u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D55ECu, 0x1D55F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55F4u;
label_1d55f4:
    // 0x1d55f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d55f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d55f8:
    // 0x1d55f8: 0x14800016  bnez        $a0, . + 4 + (0x16 << 2)
label_1d55fc:
    if (ctx->pc == 0x1D55FCu) {
        ctx->pc = 0x1D5600u;
        goto label_1d5600;
    }
    ctx->pc = 0x1D55F8u;
    {
        const bool branch_taken_0x1d55f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d55f8) {
            ctx->pc = 0x1D5654u;
            goto label_1d5654;
        }
    }
    ctx->pc = 0x1D5600u;
label_1d5600:
    // 0x1d5600: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d5600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5604:
    // 0x1d5604: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d5604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d5608:
    // 0x1d5608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d560c:
    // 0x1d560c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5610:
    // 0x1d5610: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5614:
    // 0x1d5614: 0xc047848  jal         func_11E120
label_1d5618:
    if (ctx->pc == 0x1D5618u) {
        ctx->pc = 0x1D561Cu;
        goto label_1d561c;
    }
    ctx->pc = 0x1D5614u;
    SET_GPR_U32(ctx, 31, 0x1D561Cu);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D5614u, 0x1D561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D561Cu;
label_1d561c:
    // 0x1d561c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5620:
    // 0x1d5620: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d5620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5624:
    // 0x1d5624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5628:
    // 0x1d5628: 0xc041b38  jal         func_106CE0
label_1d562c:
    if (ctx->pc == 0x1D562Cu) {
        ctx->pc = 0x1D5630u;
        goto label_1d5630;
    }
    ctx->pc = 0x1D5628u;
    SET_GPR_U32(ctx, 31, 0x1D5630u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5628u, 0x1D5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5630u;
label_1d5630:
    // 0x1d5630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5634:
    // 0x1d5634: 0xc0ba89e  jal         func_2EA278
label_1d5638:
    if (ctx->pc == 0x1D5638u) {
        ctx->pc = 0x1D563Cu;
        goto label_1d563c;
    }
    ctx->pc = 0x1D5634u;
    SET_GPR_U32(ctx, 31, 0x1D563Cu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D5634u, 0x1D563Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D563Cu;
label_1d563c:
    // 0x1d563c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d563cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5640:
    // 0x1d5640: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5644:
    // 0x1d5644: 0x8c8200a4  lw          $v0, 0xA4($a0)
    ctx->pc = 0x1d5644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
label_1d5648:
    // 0x1d5648: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1d5648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_1d564c:
    // 0x1d564c: 0x100000ea  b           . + 4 + (0xEA << 2)
label_1d5650:
    if (ctx->pc == 0x1D5650u) {
        ctx->pc = 0x1D5654u;
        goto label_1d5654;
    }
    ctx->pc = 0x1D564Cu;
    {
        const bool branch_taken_0x1d564c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d564c) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5654u;
label_1d5654:
    // 0x1d5654: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d5654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5658:
    // 0x1d5658: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d5658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d565c:
    // 0x1d565c: 0xc041b38  jal         func_106CE0
label_1d5660:
    if (ctx->pc == 0x1D5660u) {
        ctx->pc = 0x1D5664u;
        goto label_1d5664;
    }
    ctx->pc = 0x1D565Cu;
    SET_GPR_U32(ctx, 31, 0x1D5664u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D565Cu, 0x1D5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5664u;
label_1d5664:
    // 0x1d5664: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5668:
    // 0x1d5668: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d5668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d566c:
    // 0x1d566c: 0x278297a8  addiu       $v0, $gp, -0x6858
    ctx->pc = 0x1d566cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940584));
label_1d5670:
    // 0x1d5670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5674:
    // 0x1d5674: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5678:
    // 0x1d5678: 0xc0bc66e  jal         func_2F19B8
label_1d567c:
    if (ctx->pc == 0x1D567Cu) {
        ctx->pc = 0x1D5680u;
        goto label_1d5680;
    }
    ctx->pc = 0x1D5678u;
    SET_GPR_U32(ctx, 31, 0x1D5680u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5678u, 0x1D5680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5680u;
label_1d5680:
    // 0x1d5680: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5684:
    // 0x1d5684: 0x14c00013  bnez        $a2, . + 4 + (0x13 << 2)
label_1d5688:
    if (ctx->pc == 0x1D5688u) {
        ctx->pc = 0x1D568Cu;
        goto label_1d568c;
    }
    ctx->pc = 0x1D5684u;
    {
        const bool branch_taken_0x1d5684 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5684) {
            ctx->pc = 0x1D56D4u;
            goto label_1d56d4;
        }
    }
    ctx->pc = 0x1D568Cu;
label_1d568c:
    // 0x1d568c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d568cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5690:
    // 0x1d5690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5694:
    // 0x1d5694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5698:
    // 0x1d5698: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d5698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d569c:
    // 0x1d569c: 0xc047848  jal         func_11E120
label_1d56a0:
    if (ctx->pc == 0x1D56A0u) {
        ctx->pc = 0x1D56A4u;
        goto label_1d56a4;
    }
    ctx->pc = 0x1D569Cu;
    SET_GPR_U32(ctx, 31, 0x1D56A4u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D569Cu, 0x1D56A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56A4u;
label_1d56a4:
    // 0x1d56a4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d56a8:
    // 0x1d56a8: 0xc041b38  jal         func_106CE0
label_1d56ac:
    if (ctx->pc == 0x1D56ACu) {
        ctx->pc = 0x1D56B0u;
        goto label_1d56b0;
    }
    ctx->pc = 0x1D56A8u;
    SET_GPR_U32(ctx, 31, 0x1D56B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D56A8u, 0x1D56B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56B0u;
label_1d56b0:
    // 0x1d56b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d56b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d56b4:
    // 0x1d56b4: 0xc0ba89e  jal         func_2EA278
label_1d56b8:
    if (ctx->pc == 0x1D56B8u) {
        ctx->pc = 0x1D56BCu;
        goto label_1d56bc;
    }
    ctx->pc = 0x1D56B4u;
    SET_GPR_U32(ctx, 31, 0x1D56BCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D56B4u, 0x1D56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56BCu;
label_1d56bc:
    // 0x1d56bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d56bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d56c0:
    // 0x1d56c0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d56c4:
    // 0x1d56c4: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1d56c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d56c8:
    // 0x1d56c8: 0xaca40038  sw          $a0, 0x38($a1)
    ctx->pc = 0x1d56c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 4));
label_1d56cc:
    // 0x1d56cc: 0x100000ca  b           . + 4 + (0xCA << 2)
label_1d56d0:
    if (ctx->pc == 0x1D56D0u) {
        ctx->pc = 0x1D56D4u;
        goto label_1d56d4;
    }
    ctx->pc = 0x1D56CCu;
    {
        const bool branch_taken_0x1d56cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d56cc) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D56D4u;
label_1d56d4:
    // 0x1d56d4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1d56d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d56d8:
    // 0x1d56d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d56d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d56dc:
    // 0x1d56dc: 0xc041b38  jal         func_106CE0
label_1d56e0:
    if (ctx->pc == 0x1D56E0u) {
        ctx->pc = 0x1D56E4u;
        goto label_1d56e4;
    }
    ctx->pc = 0x1D56DCu;
    SET_GPR_U32(ctx, 31, 0x1D56E4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D56DCu, 0x1D56E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56E4u;
label_1d56e4:
    // 0x1d56e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d56e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d56e8:
    // 0x1d56e8: 0x278597ac  addiu       $a1, $gp, -0x6854
    ctx->pc = 0x1d56e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940588));
label_1d56ec:
    // 0x1d56ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d56f0:
    // 0x1d56f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d56f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d56f4:
    // 0x1d56f4: 0xc0bc66e  jal         func_2F19B8
label_1d56f8:
    if (ctx->pc == 0x1D56F8u) {
        ctx->pc = 0x1D56FCu;
        goto label_1d56fc;
    }
    ctx->pc = 0x1D56F4u;
    SET_GPR_U32(ctx, 31, 0x1D56FCu);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D56F4u, 0x1D56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56FCu;
label_1d56fc:
    // 0x1d56fc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_1d5700:
    if (ctx->pc == 0x1D5700u) {
        ctx->pc = 0x1D5704u;
        goto label_1d5704;
    }
    ctx->pc = 0x1D56FCu;
    {
        const bool branch_taken_0x1d56fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d56fc) {
            ctx->pc = 0x1D5750u;
            goto label_1d5750;
        }
    }
    ctx->pc = 0x1D5704u;
label_1d5704:
    // 0x1d5704: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d5704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5708:
    // 0x1d5708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d570c:
    // 0x1d570c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5710:
    // 0x1d5710: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d5710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5714:
    // 0x1d5714: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5718:
    // 0x1d5718: 0xc047848  jal         func_11E120
label_1d571c:
    if (ctx->pc == 0x1D571Cu) {
        ctx->pc = 0x1D5720u;
        goto label_1d5720;
    }
    ctx->pc = 0x1D5718u;
    SET_GPR_U32(ctx, 31, 0x1D5720u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D5718u, 0x1D5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5720u;
label_1d5720:
    // 0x1d5720: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5724:
    // 0x1d5724: 0xc041b38  jal         func_106CE0
label_1d5728:
    if (ctx->pc == 0x1D5728u) {
        ctx->pc = 0x1D572Cu;
        goto label_1d572c;
    }
    ctx->pc = 0x1D5724u;
    SET_GPR_U32(ctx, 31, 0x1D572Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5724u, 0x1D572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D572Cu;
label_1d572c:
    // 0x1d572c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5730:
    // 0x1d5730: 0xc0ba89e  jal         func_2EA278
label_1d5734:
    if (ctx->pc == 0x1D5734u) {
        ctx->pc = 0x1D5738u;
        goto label_1d5738;
    }
    ctx->pc = 0x1D5730u;
    SET_GPR_U32(ctx, 31, 0x1D5738u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D5730u, 0x1D5738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5738u;
label_1d5738:
    // 0x1d5738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d573c:
    // 0x1d573c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x1d573cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5740:
    // 0x1d5740: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x1d5740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1d5744:
    // 0x1d5744: 0xac44003c  sw          $a0, 0x3C($v0)
    ctx->pc = 0x1d5744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 4));
label_1d5748:
    // 0x1d5748: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1d574c:
    if (ctx->pc == 0x1D574Cu) {
        ctx->pc = 0x1D5750u;
        goto label_1d5750;
    }
    ctx->pc = 0x1D5748u;
    {
        const bool branch_taken_0x1d5748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5748) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5750u;
label_1d5750:
    // 0x1d5750: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5754:
    // 0x1d5754: 0xc041b38  jal         func_106CE0
label_1d5758:
    if (ctx->pc == 0x1D5758u) {
        ctx->pc = 0x1D575Cu;
        goto label_1d575c;
    }
    ctx->pc = 0x1D5754u;
    SET_GPR_U32(ctx, 31, 0x1D575Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5754u, 0x1D575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D575Cu;
label_1d575c:
    // 0x1d575c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d575cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5760:
    // 0x1d5760: 0x278697b0  addiu       $a2, $gp, -0x6850
    ctx->pc = 0x1d5760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940592));
label_1d5764:
    // 0x1d5764: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d5764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d5768:
    // 0x1d5768: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d576c:
    // 0x1d576c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d576cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5770:
    // 0x1d5770: 0xc0bc66e  jal         func_2F19B8
label_1d5774:
    if (ctx->pc == 0x1D5774u) {
        ctx->pc = 0x1D5778u;
        goto label_1d5778;
    }
    ctx->pc = 0x1D5770u;
    SET_GPR_U32(ctx, 31, 0x1D5778u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5770u, 0x1D5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5778u;
label_1d5778:
    // 0x1d5778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d577c:
    // 0x1d577c: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_1d5780:
    if (ctx->pc == 0x1D5780u) {
        ctx->pc = 0x1D5784u;
        goto label_1d5784;
    }
    ctx->pc = 0x1D577Cu;
    {
        const bool branch_taken_0x1d577c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d577c) {
            ctx->pc = 0x1D57D4u;
            goto label_1d57d4;
        }
    }
    ctx->pc = 0x1D5784u;
label_1d5784:
    // 0x1d5784: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d5784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5788:
    // 0x1d5788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d578c:
    // 0x1d578c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d578cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5790:
    // 0x1d5790: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d5790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5794:
    // 0x1d5794: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5798:
    // 0x1d5798: 0xc047848  jal         func_11E120
label_1d579c:
    if (ctx->pc == 0x1D579Cu) {
        ctx->pc = 0x1D57A0u;
        goto label_1d57a0;
    }
    ctx->pc = 0x1D5798u;
    SET_GPR_U32(ctx, 31, 0x1D57A0u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D5798u, 0x1D57A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57A0u;
label_1d57a0:
    // 0x1d57a0: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d57a4:
    // 0x1d57a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d57a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d57a8:
    // 0x1d57a8: 0xc041b38  jal         func_106CE0
label_1d57ac:
    if (ctx->pc == 0x1D57ACu) {
        ctx->pc = 0x1D57B0u;
        goto label_1d57b0;
    }
    ctx->pc = 0x1D57A8u;
    SET_GPR_U32(ctx, 31, 0x1D57B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D57A8u, 0x1D57B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57B0u;
label_1d57b0:
    // 0x1d57b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d57b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d57b4:
    // 0x1d57b4: 0xc0ba89e  jal         func_2EA278
label_1d57b8:
    if (ctx->pc == 0x1D57B8u) {
        ctx->pc = 0x1D57BCu;
        goto label_1d57bc;
    }
    ctx->pc = 0x1D57B4u;
    SET_GPR_U32(ctx, 31, 0x1D57BCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D57B4u, 0x1D57BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57BCu;
label_1d57bc:
    // 0x1d57bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d57bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d57c0:
    // 0x1d57c0: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d57c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d57c4:
    // 0x1d57c4: 0x8cc400a4  lw          $a0, 0xA4($a2)
    ctx->pc = 0x1d57c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d57c8:
    // 0x1d57c8: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x1d57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
label_1d57cc:
    // 0x1d57cc: 0x1000008a  b           . + 4 + (0x8A << 2)
label_1d57d0:
    if (ctx->pc == 0x1D57D0u) {
        ctx->pc = 0x1D57D4u;
        goto label_1d57d4;
    }
    ctx->pc = 0x1D57CCu;
    {
        const bool branch_taken_0x1d57cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d57cc) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D57D4u;
label_1d57d4:
    // 0x1d57d4: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d57d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d57d8:
    // 0x1d57d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d57d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d57dc:
    // 0x1d57dc: 0xc041b38  jal         func_106CE0
label_1d57e0:
    if (ctx->pc == 0x1D57E0u) {
        ctx->pc = 0x1D57E4u;
        goto label_1d57e4;
    }
    ctx->pc = 0x1D57DCu;
    SET_GPR_U32(ctx, 31, 0x1D57E4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D57DCu, 0x1D57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57E4u;
label_1d57e4:
    // 0x1d57e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d57e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d57e8:
    // 0x1d57e8: 0x278297b4  addiu       $v0, $gp, -0x684C
    ctx->pc = 0x1d57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940596));
label_1d57ec:
    // 0x1d57ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d57ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d57f0:
    // 0x1d57f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d57f4:
    // 0x1d57f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d57f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d57f8:
    // 0x1d57f8: 0xc0bc66e  jal         func_2F19B8
label_1d57fc:
    if (ctx->pc == 0x1D57FCu) {
        ctx->pc = 0x1D5800u;
        goto label_1d5800;
    }
    ctx->pc = 0x1D57F8u;
    SET_GPR_U32(ctx, 31, 0x1D5800u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D57F8u, 0x1D5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5800u;
label_1d5800:
    // 0x1d5800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5804:
    // 0x1d5804: 0x1480007c  bnez        $a0, . + 4 + (0x7C << 2)
label_1d5808:
    if (ctx->pc == 0x1D5808u) {
        ctx->pc = 0x1D580Cu;
        goto label_1d580c;
    }
    ctx->pc = 0x1D5804u;
    {
        const bool branch_taken_0x1d5804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5804) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D580Cu;
label_1d580c:
    // 0x1d580c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5810:
    // 0x1d5810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5814:
    // 0x1d5814: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5818:
    // 0x1d5818: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d581c:
    // 0x1d581c: 0xc047848  jal         func_11E120
label_1d5820:
    if (ctx->pc == 0x1D5820u) {
        ctx->pc = 0x1D5824u;
        goto label_1d5824;
    }
    ctx->pc = 0x1D581Cu;
    SET_GPR_U32(ctx, 31, 0x1D5824u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D581Cu, 0x1D5824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5824u;
label_1d5824:
    // 0x1d5824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5828:
    // 0x1d5828: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d5828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d582c:
    // 0x1d582c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5830:
    // 0x1d5830: 0xc041b38  jal         func_106CE0
label_1d5834:
    if (ctx->pc == 0x1D5834u) {
        ctx->pc = 0x1D5838u;
        goto label_1d5838;
    }
    ctx->pc = 0x1D5830u;
    SET_GPR_U32(ctx, 31, 0x1D5838u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5830u, 0x1D5838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5838u;
label_1d5838:
    // 0x1d5838: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d583c:
    // 0x1d583c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5840:
    // 0x1d5840: 0xc0ba89e  jal         func_2EA278
label_1d5844:
    if (ctx->pc == 0x1D5844u) {
        ctx->pc = 0x1D5848u;
        goto label_1d5848;
    }
    ctx->pc = 0x1D5840u;
    SET_GPR_U32(ctx, 31, 0x1D5848u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1D5840u, 0x1D5848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5848u;
label_1d5848:
    // 0x1d5848: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d5848u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d584c:
    // 0x1d584c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5850:
    // 0x1d5850: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5854:
    // 0x1d5854: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x1d5854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
label_1d5858:
    // 0x1d5858: 0x10000067  b           . + 4 + (0x67 << 2)
label_1d585c:
    if (ctx->pc == 0x1D585Cu) {
        ctx->pc = 0x1D5860u;
        goto label_1d5860;
    }
    ctx->pc = 0x1D5858u;
    {
        const bool branch_taken_0x1d5858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5858) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5860u;
label_1d5860:
    // 0x1d5860: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d5860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5864:
    // 0x1d5864: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x1d5864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_1d5868:
    // 0x1d5868: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
label_1d586c:
    if (ctx->pc == 0x1D586Cu) {
        ctx->pc = 0x1D5870u;
        goto label_1d5870;
    }
    ctx->pc = 0x1D5868u;
    {
        const bool branch_taken_0x1d5868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5868) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D5870u;
label_1d5870:
    // 0x1d5870: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5874:
    // 0x1d5874: 0xc041b38  jal         func_106CE0
label_1d5878:
    if (ctx->pc == 0x1D5878u) {
        ctx->pc = 0x1D587Cu;
        goto label_1d587c;
    }
    ctx->pc = 0x1D5874u;
    SET_GPR_U32(ctx, 31, 0x1D587Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5874u, 0x1D587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D587Cu;
label_1d587c:
    // 0x1d587c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5880:
    // 0x1d5880: 0x278297b8  addiu       $v0, $gp, -0x6848
    ctx->pc = 0x1d5880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940600));
label_1d5884:
    // 0x1d5884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5888:
    // 0x1d5888: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d5888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d588c:
    // 0x1d588c: 0xc0bc66e  jal         func_2F19B8
label_1d5890:
    if (ctx->pc == 0x1D5890u) {
        ctx->pc = 0x1D5894u;
        goto label_1d5894;
    }
    ctx->pc = 0x1D588Cu;
    SET_GPR_U32(ctx, 31, 0x1D5894u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D588Cu, 0x1D5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5894u;
label_1d5894:
    // 0x1d5894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5898:
    // 0x1d5898: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
label_1d589c:
    if (ctx->pc == 0x1D589Cu) {
        ctx->pc = 0x1D58A0u;
        goto label_1d58a0;
    }
    ctx->pc = 0x1D5898u;
    {
        const bool branch_taken_0x1d5898 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5898) {
            ctx->pc = 0x1D58FCu;
            goto label_1d58fc;
        }
    }
    ctx->pc = 0x1D58A0u;
label_1d58a0:
    // 0x1d58a0: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d58a4:
    // 0x1d58a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d58a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d58a8:
    // 0x1d58a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d58a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d58ac:
    // 0x1d58ac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d58b0:
    // 0x1d58b0: 0xc047848  jal         func_11E120
label_1d58b4:
    if (ctx->pc == 0x1D58B4u) {
        ctx->pc = 0x1D58B8u;
        goto label_1d58b8;
    }
    ctx->pc = 0x1D58B0u;
    SET_GPR_U32(ctx, 31, 0x1D58B8u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D58B0u, 0x1D58B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58B8u;
label_1d58b8:
    // 0x1d58b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d58b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d58bc:
    // 0x1d58bc: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d58c0:
    // 0x1d58c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d58c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d58c4:
    // 0x1d58c4: 0xc041b38  jal         func_106CE0
label_1d58c8:
    if (ctx->pc == 0x1D58C8u) {
        ctx->pc = 0x1D58CCu;
        goto label_1d58cc;
    }
    ctx->pc = 0x1D58C4u;
    SET_GPR_U32(ctx, 31, 0x1D58CCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D58C4u, 0x1D58CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58CCu;
label_1d58cc:
    // 0x1d58cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d58ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d58d0:
    // 0x1d58d0: 0xc0ba898  jal         func_2EA260
label_1d58d4:
    if (ctx->pc == 0x1D58D4u) {
        ctx->pc = 0x1D58D8u;
        goto label_1d58d8;
    }
    ctx->pc = 0x1D58D0u;
    SET_GPR_U32(ctx, 31, 0x1D58D8u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D58D0u, 0x1D58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58D8u;
label_1d58d8:
    // 0x1d58d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d58d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d58dc:
    // 0x1d58dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d58dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d58e0:
    // 0x1d58e0: 0xc0bef4c  jal         func_2FBD30
label_1d58e4:
    if (ctx->pc == 0x1D58E4u) {
        ctx->pc = 0x1D58E8u;
        goto label_1d58e8;
    }
    ctx->pc = 0x1D58E0u;
    SET_GPR_U32(ctx, 31, 0x1D58E8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D58E0u, 0x1D58E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D58E8u;
label_1d58e8:
    // 0x1d58e8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d58ec:
    // 0x1d58ec: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d58ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d58f0:
    // 0x1d58f0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1d58f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1d58f4:
    // 0x1d58f4: 0x10000040  b           . + 4 + (0x40 << 2)
label_1d58f8:
    if (ctx->pc == 0x1D58F8u) {
        ctx->pc = 0x1D58FCu;
        goto label_1d58fc;
    }
    ctx->pc = 0x1D58F4u;
    {
        const bool branch_taken_0x1d58f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d58f4) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D58FCu;
label_1d58fc:
    // 0x1d58fc: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d58fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5900:
    // 0x1d5900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5904:
    // 0x1d5904: 0xc041b38  jal         func_106CE0
label_1d5908:
    if (ctx->pc == 0x1D5908u) {
        ctx->pc = 0x1D590Cu;
        goto label_1d590c;
    }
    ctx->pc = 0x1D5904u;
    SET_GPR_U32(ctx, 31, 0x1D590Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5904u, 0x1D590Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D590Cu;
label_1d590c:
    // 0x1d590c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5910:
    // 0x1d5910: 0x278597c0  addiu       $a1, $gp, -0x6840
    ctx->pc = 0x1d5910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940608));
label_1d5914:
    // 0x1d5914: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d5918:
    // 0x1d5918: 0xc0bc66e  jal         func_2F19B8
label_1d591c:
    if (ctx->pc == 0x1D591Cu) {
        ctx->pc = 0x1D5920u;
        goto label_1d5920;
    }
    ctx->pc = 0x1D5918u;
    SET_GPR_U32(ctx, 31, 0x1D5920u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5918u, 0x1D5920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5920u;
label_1d5920:
    // 0x1d5920: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1d5924:
    if (ctx->pc == 0x1D5924u) {
        ctx->pc = 0x1D5928u;
        goto label_1d5928;
    }
    ctx->pc = 0x1D5920u;
    {
        const bool branch_taken_0x1d5920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5920) {
            ctx->pc = 0x1D597Cu;
            goto label_1d597c;
        }
    }
    ctx->pc = 0x1D5928u;
label_1d5928:
    // 0x1d5928: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x1d5928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d592c:
    // 0x1d592c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5930:
    // 0x1d5930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5934:
    // 0x1d5934: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1d5934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d5938:
    // 0x1d5938: 0xc047848  jal         func_11E120
label_1d593c:
    if (ctx->pc == 0x1D593Cu) {
        ctx->pc = 0x1D5940u;
        goto label_1d5940;
    }
    ctx->pc = 0x1D5938u;
    SET_GPR_U32(ctx, 31, 0x1D5940u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D5938u, 0x1D5940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5940u;
label_1d5940:
    // 0x1d5940: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d5940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5944:
    // 0x1d5944: 0xc041b38  jal         func_106CE0
label_1d5948:
    if (ctx->pc == 0x1D5948u) {
        ctx->pc = 0x1D594Cu;
        goto label_1d594c;
    }
    ctx->pc = 0x1D5944u;
    SET_GPR_U32(ctx, 31, 0x1D594Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5944u, 0x1D594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D594Cu;
label_1d594c:
    // 0x1d594c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d594cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5950:
    // 0x1d5950: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1d5950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d5954:
    // 0x1d5954: 0xc0ba898  jal         func_2EA260
label_1d5958:
    if (ctx->pc == 0x1D5958u) {
        ctx->pc = 0x1D595Cu;
        goto label_1d595c;
    }
    ctx->pc = 0x1D5954u;
    SET_GPR_U32(ctx, 31, 0x1D595Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D5954u, 0x1D595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D595Cu;
label_1d595c:
    // 0x1d595c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d595cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5960:
    // 0x1d5960: 0xc0bef4c  jal         func_2FBD30
label_1d5964:
    if (ctx->pc == 0x1D5964u) {
        ctx->pc = 0x1D5968u;
        goto label_1d5968;
    }
    ctx->pc = 0x1D5960u;
    SET_GPR_U32(ctx, 31, 0x1D5968u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D5960u, 0x1D5968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5968u;
label_1d5968:
    // 0x1d5968: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d596c:
    // 0x1d596c: 0x8c8200ac  lw          $v0, 0xAC($a0)
    ctx->pc = 0x1d596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_1d5970:
    // 0x1d5970: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1d5970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1d5974:
    // 0x1d5974: 0x10000020  b           . + 4 + (0x20 << 2)
label_1d5978:
    if (ctx->pc == 0x1D5978u) {
        ctx->pc = 0x1D597Cu;
        goto label_1d597c;
    }
    ctx->pc = 0x1D5974u;
    {
        const bool branch_taken_0x1d5974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5974) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D597Cu;
label_1d597c:
    // 0x1d597c: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x1d597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d5980:
    // 0x1d5980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5984:
    // 0x1d5984: 0xc041b38  jal         func_106CE0
label_1d5988:
    if (ctx->pc == 0x1D5988u) {
        ctx->pc = 0x1D598Cu;
        goto label_1d598c;
    }
    ctx->pc = 0x1D5984u;
    SET_GPR_U32(ctx, 31, 0x1D598Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D5984u, 0x1D598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D598Cu;
label_1d598c:
    // 0x1d598c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d598cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5990:
    // 0x1d5990: 0x278597c8  addiu       $a1, $gp, -0x6838
    ctx->pc = 0x1d5990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940616));
label_1d5994:
    // 0x1d5994: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1d5994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d5998:
    // 0x1d5998: 0xc0bc66e  jal         func_2F19B8
label_1d599c:
    if (ctx->pc == 0x1D599Cu) {
        ctx->pc = 0x1D59A0u;
        goto label_1d59a0;
    }
    ctx->pc = 0x1D5998u;
    SET_GPR_U32(ctx, 31, 0x1D59A0u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x1D5998u, 0x1D59A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59A0u;
label_1d59a0:
    // 0x1d59a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d59a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d59a4:
    // 0x1d59a4: 0x14800014  bnez        $a0, . + 4 + (0x14 << 2)
label_1d59a8:
    if (ctx->pc == 0x1D59A8u) {
        ctx->pc = 0x1D59ACu;
        goto label_1d59ac;
    }
    ctx->pc = 0x1D59A4u;
    {
        const bool branch_taken_0x1d59a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d59a4) {
            ctx->pc = 0x1D59F8u;
            goto label_1d59f8;
        }
    }
    ctx->pc = 0x1D59ACu;
label_1d59ac:
    // 0x1d59ac: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d59acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d59b0:
    // 0x1d59b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d59b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d59b4:
    // 0x1d59b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d59b8:
    // 0x1d59b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d59b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d59bc:
    // 0x1d59bc: 0xc047848  jal         func_11E120
label_1d59c0:
    if (ctx->pc == 0x1D59C0u) {
        ctx->pc = 0x1D59C4u;
        goto label_1d59c4;
    }
    ctx->pc = 0x1D59BCu;
    SET_GPR_U32(ctx, 31, 0x1D59C4u);
    ctx->pc = 0x11E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E120u, 0x1D59BCu, 0x1D59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59C4u;
label_1d59c4:
    // 0x1d59c4: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d59c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d59c8:
    // 0x1d59c8: 0xc041b38  jal         func_106CE0
label_1d59cc:
    if (ctx->pc == 0x1D59CCu) {
        ctx->pc = 0x1D59D0u;
        goto label_1d59d0;
    }
    ctx->pc = 0x1D59C8u;
    SET_GPR_U32(ctx, 31, 0x1D59D0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1D59C8u, 0x1D59D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59D0u;
label_1d59d0:
    // 0x1d59d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d59d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d59d4:
    // 0x1d59d4: 0xc0ba898  jal         func_2EA260
label_1d59d8:
    if (ctx->pc == 0x1D59D8u) {
        ctx->pc = 0x1D59DCu;
        goto label_1d59dc;
    }
    ctx->pc = 0x1D59D4u;
    SET_GPR_U32(ctx, 31, 0x1D59DCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1D59D4u, 0x1D59DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59DCu;
label_1d59dc:
    // 0x1d59dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d59dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d59e0:
    // 0x1d59e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d59e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d59e4:
    // 0x1d59e4: 0xc0bef4c  jal         func_2FBD30
label_1d59e8:
    if (ctx->pc == 0x1D59E8u) {
        ctx->pc = 0x1D59ECu;
        goto label_1d59ec;
    }
    ctx->pc = 0x1D59E4u;
    SET_GPR_U32(ctx, 31, 0x1D59ECu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1D59E4u, 0x1D59ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D59ECu;
label_1d59ec:
    // 0x1d59ec: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d59f0:
    // 0x1d59f0: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1d59f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1d59f4:
    // 0x1d59f4: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1d59f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_1d59f8:
    // 0x1d59f8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_1d59fc:
    // 0x1d59fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d59fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5a00:
    // 0x1d5a00: 0xc0402d4  jal         func_100B50
label_1d5a04:
    if (ctx->pc == 0x1D5A04u) {
        ctx->pc = 0x1D5A08u;
        goto label_1d5a08;
    }
    ctx->pc = 0x1D5A00u;
    SET_GPR_U32(ctx, 31, 0x1D5A08u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1D5A00u, 0x1D5A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A08u;
label_1d5a08:
    // 0x1d5a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a0c:
    // 0x1d5a0c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1d5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d5a10:
    // 0x1d5a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a14:
    // 0x1d5a14: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1d5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d5a18:
    // 0x1d5a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a1c:
    // 0x1d5a1c: 0xc043104  jal         func_10C410
label_1d5a20:
    if (ctx->pc == 0x1D5A20u) {
        ctx->pc = 0x1D5A24u;
        goto label_1d5a24;
    }
    ctx->pc = 0x1D5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5A24u);
    ctx->pc = 0x10C410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C410u, 0x1D5A1Cu, 0x1D5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A24u;
label_1d5a24:
    // 0x1d5a24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a28:
    // 0x1d5a28: 0x204282b  sltu        $a1, $s0, $a0
    ctx->pc = 0x1d5a28u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1d5a2c:
    // 0x1d5a2c: 0x14a0fbca  bnez        $a1, . + 4 + (-0x436 << 2)
label_1d5a30:
    if (ctx->pc == 0x1D5A30u) {
        ctx->pc = 0x1D5A34u;
        goto label_1d5a34;
    }
    ctx->pc = 0x1D5A2Cu;
    {
        const bool branch_taken_0x1d5a2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a2c) {
            ctx->pc = 0x1D4958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4958;
        }
    }
    ctx->pc = 0x1D5A34u;
label_1d5a34:
    // 0x1d5a34: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5a38:
    // 0x1d5a38: 0x904400b4  lbu         $a0, 0xB4($v0)
    ctx->pc = 0x1d5a38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 180)));
label_1d5a3c:
    // 0x1d5a3c: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_1d5a40:
    if (ctx->pc == 0x1D5A40u) {
        ctx->pc = 0x1D5A44u;
        goto label_1d5a44;
    }
    ctx->pc = 0x1D5A3Cu;
    {
        const bool branch_taken_0x1d5a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5a3c) {
            ctx->pc = 0x1D5A6Cu;
            goto label_1d5a6c;
        }
    }
    ctx->pc = 0x1D5A44u;
label_1d5a44:
    // 0x1d5a44: 0x8f82ba7c  lw          $v0, -0x4584($gp)
    ctx->pc = 0x1d5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
label_1d5a48:
    // 0x1d5a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a4c:
    // 0x1d5a4c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d5a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5a50:
    // 0x1d5a50: 0xc04fbd0  jal         func_13EF40
label_1d5a54:
    if (ctx->pc == 0x1D5A54u) {
        ctx->pc = 0x1D5A58u;
        goto label_1d5a58;
    }
    ctx->pc = 0x1D5A50u;
    SET_GPR_U32(ctx, 31, 0x1D5A58u);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x1D5A50u, 0x1D5A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A58u;
label_1d5a58:
    // 0x1d5a58: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x1d5a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_1d5a5c:
    // 0x1d5a5c: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1d5a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_1d5a60:
    // 0x1d5a60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d5a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a64:
    // 0x1d5a64: 0xc04d374  jal         func_134DD0
label_1d5a68:
    if (ctx->pc == 0x1D5A68u) {
        ctx->pc = 0x1D5A6Cu;
        goto label_1d5a6c;
    }
    ctx->pc = 0x1D5A64u;
    SET_GPR_U32(ctx, 31, 0x1D5A6Cu);
    ctx->pc = 0x134DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134DD0u, 0x1D5A64u, 0x1D5A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A6Cu;
label_1d5a6c:
    // 0x1d5a6c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5a70:
    // 0x1d5a70: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x1d5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_1d5a74:
    // 0x1d5a74: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d5a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d5a78:
    // 0x1d5a78: 0x10460022  beq         $v0, $a2, . + 4 + (0x22 << 2)
label_1d5a7c:
    if (ctx->pc == 0x1D5A7Cu) {
        ctx->pc = 0x1D5A80u;
        goto label_1d5a80;
    }
    ctx->pc = 0x1D5A78u;
    {
        const bool branch_taken_0x1d5a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d5a78) {
            ctx->pc = 0x1D5B04u;
            goto label_1d5b04;
        }
    }
    ctx->pc = 0x1D5A80u;
label_1d5a80:
    // 0x1d5a80: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d5a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d5a84:
    // 0x1d5a84: 0x10460019  beq         $v0, $a2, . + 4 + (0x19 << 2)
label_1d5a88:
    if (ctx->pc == 0x1D5A88u) {
        ctx->pc = 0x1D5A8Cu;
        goto label_1d5a8c;
    }
    ctx->pc = 0x1D5A84u;
    {
        const bool branch_taken_0x1d5a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d5a84) {
            ctx->pc = 0x1D5AECu;
            goto label_1d5aec;
        }
    }
    ctx->pc = 0x1D5A8Cu;
label_1d5a8c:
    // 0x1d5a8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d5a90:
    // 0x1d5a90: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_1d5a94:
    if (ctx->pc == 0x1D5A94u) {
        ctx->pc = 0x1D5A98u;
        goto label_1d5a98;
    }
    ctx->pc = 0x1D5A90u;
    {
        const bool branch_taken_0x1d5a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5a90) {
            ctx->pc = 0x1D5ACCu;
            goto label_1d5acc;
        }
    }
    ctx->pc = 0x1D5A98u;
label_1d5a98:
    // 0x1d5a98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5a9c:
    // 0x1d5a9c: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_1d5aa0:
    if (ctx->pc == 0x1D5AA0u) {
        ctx->pc = 0x1D5AA4u;
        goto label_1d5aa4;
    }
    ctx->pc = 0x1D5A9Cu;
    {
        const bool branch_taken_0x1d5a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d5a9c) {
            ctx->pc = 0x1D5AACu;
            goto label_1d5aac;
        }
    }
    ctx->pc = 0x1D5AA4u;
label_1d5aa4:
    // 0x1d5aa4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d5aa8:
    if (ctx->pc == 0x1D5AA8u) {
        ctx->pc = 0x1D5AACu;
        goto label_1d5aac;
    }
    ctx->pc = 0x1D5AA4u;
    {
        const bool branch_taken_0x1d5aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5aa4) {
            ctx->pc = 0x1D5B1Cu;
            goto label_1d5b1c;
        }
    }
    ctx->pc = 0x1D5AACu;
label_1d5aac:
    // 0x1d5aac: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x1d5aacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5ab0:
    // 0x1d5ab0: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x1d5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
label_1d5ab4:
    // 0x1d5ab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ab8:
    // 0x1d5ab8: 0xc076f74  jal         func_1DBDD0
label_1d5abc:
    if (ctx->pc == 0x1D5ABCu) {
        ctx->pc = 0x1D5AC0u;
        goto label_1d5ac0;
    }
    ctx->pc = 0x1D5AB8u;
    SET_GPR_U32(ctx, 31, 0x1D5AC0u);
    ctx->pc = 0x1DBDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBDD0u, 0x1D5AB8u, 0x1D5AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AC0u;
label_1d5ac0:
    // 0x1d5ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ac4:
    // 0x1d5ac4: 0x10000015  b           . + 4 + (0x15 << 2)
label_1d5ac8:
    if (ctx->pc == 0x1D5AC8u) {
        ctx->pc = 0x1D5ACCu;
        goto label_1d5acc;
    }
    ctx->pc = 0x1D5AC4u;
    {
        const bool branch_taken_0x1d5ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ac4) {
            ctx->pc = 0x1D5B1Cu;
            goto label_1d5b1c;
        }
    }
    ctx->pc = 0x1D5ACCu;
label_1d5acc:
    // 0x1d5acc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5ad0:
    // 0x1d5ad0: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1d5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d5ad4:
    // 0x1d5ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ad8:
    // 0x1d5ad8: 0xc0774c0  jal         func_1DD300
label_1d5adc:
    if (ctx->pc == 0x1D5ADCu) {
        ctx->pc = 0x1D5AE0u;
        goto label_1d5ae0;
    }
    ctx->pc = 0x1D5AD8u;
    SET_GPR_U32(ctx, 31, 0x1D5AE0u);
    ctx->pc = 0x1DD300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD300u, 0x1D5AD8u, 0x1D5AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AE0u;
label_1d5ae0:
    // 0x1d5ae0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ae4:
    // 0x1d5ae4: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d5ae8:
    if (ctx->pc == 0x1D5AE8u) {
        ctx->pc = 0x1D5AECu;
        goto label_1d5aec;
    }
    ctx->pc = 0x1D5AE4u;
    {
        const bool branch_taken_0x1d5ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ae4) {
            ctx->pc = 0x1D5B1Cu;
            goto label_1d5b1c;
        }
    }
    ctx->pc = 0x1D5AECu;
label_1d5aec:
    // 0x1d5aec: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5af0:
    // 0x1d5af0: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d5af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d5af4:
    // 0x1d5af4: 0xc0781b4  jal         func_1E06D0
label_1d5af8:
    if (ctx->pc == 0x1D5AF8u) {
        ctx->pc = 0x1D5AFCu;
        goto label_1d5afc;
    }
    ctx->pc = 0x1D5AF4u;
    SET_GPR_U32(ctx, 31, 0x1D5AFCu);
    ctx->pc = 0x1E06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E06D0u, 0x1D5AF4u, 0x1D5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AFCu;
label_1d5afc:
    // 0x1d5afc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d5b00:
    if (ctx->pc == 0x1D5B00u) {
        ctx->pc = 0x1D5B04u;
        goto label_1d5b04;
    }
    ctx->pc = 0x1D5AFCu;
    {
        const bool branch_taken_0x1d5afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5afc) {
            ctx->pc = 0x1D5B1Cu;
            goto label_1d5b1c;
        }
    }
    ctx->pc = 0x1D5B04u;
label_1d5b04:
    // 0x1d5b04: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1d5b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5b08:
    // 0x1d5b08: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x1d5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_1d5b0c:
    // 0x1d5b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b10:
    // 0x1d5b10: 0xc079c18  jal         func_1E7060
label_1d5b14:
    if (ctx->pc == 0x1D5B14u) {
        ctx->pc = 0x1D5B18u;
        goto label_1d5b18;
    }
    ctx->pc = 0x1D5B10u;
    SET_GPR_U32(ctx, 31, 0x1D5B18u);
    ctx->pc = 0x1E7060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7060u, 0x1D5B10u, 0x1D5B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B18u;
label_1d5b18:
    // 0x1d5b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b1c:
    // 0x1d5b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5b20:
    // 0x1d5b20: 0xa3a200ee  sb          $v0, 0xEE($sp)
    ctx->pc = 0x1d5b20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 238), (uint8_t)GPR_U32(ctx, 2));
label_1d5b24:
    // 0x1d5b24: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d5b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d5b28:
    // 0x1d5b28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d5b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b2c:
    // 0x1d5b2c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5b30:
    // 0x1d5b30: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d5b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b34:
    // 0x1d5b34: 0xc051428  jal         func_1450A0
label_1d5b38:
    if (ctx->pc == 0x1D5B38u) {
        ctx->pc = 0x1D5B3Cu;
        goto label_1d5b3c;
    }
    ctx->pc = 0x1D5B34u;
    SET_GPR_U32(ctx, 31, 0x1D5B3Cu);
    ctx->pc = 0x1450A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1450A0u, 0x1D5B34u, 0x1D5B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B3Cu;
label_1d5b3c:
    // 0x1d5b3c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1d5b3cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b40:
    // 0x1d5b40: 0x93a400ee  lbu         $a0, 0xEE($sp)
    ctx->pc = 0x1d5b40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 238)));
label_1d5b44:
    // 0x1d5b44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d5b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b48:
    // 0x1d5b48: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d5b4c:
    if (ctx->pc == 0x1D5B4Cu) {
        ctx->pc = 0x1D5B50u;
        goto label_1d5b50;
    }
    ctx->pc = 0x1D5B48u;
    {
        const bool branch_taken_0x1d5b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b48) {
            ctx->pc = 0x1D5B54u;
            goto label_1d5b54;
        }
    }
    ctx->pc = 0x1D5B50u;
label_1d5b50:
    // 0x1d5b50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b54:
    // 0x1d5b54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d5b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d5b58:
    // 0x1d5b58: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d5b58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d5b5c:
    // 0x1d5b5c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d5b5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d5b60:
    // 0x1d5b60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d5b60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d5b64:
    // 0x1d5b64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d5b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d5b68:
    // 0x1d5b68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d5b68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d5b6c:
    // 0x1d5b6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d5b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d5b70:
    // 0x1d5b70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d5b74:
    // 0x1d5b74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5b78:
    // 0x1d5b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5b7c:
    // 0x1d5b7c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1d5b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1d5b80:
    // 0x1d5b80: 0x3e00008  jr          $ra
label_1d5b84:
    if (ctx->pc == 0x1D5B84u) {
        ctx->pc = 0x1D5B88u;
        goto label_1d5b88;
    }
    ctx->pc = 0x1D5B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5B88u;
label_1d5b88:
    // 0x1d5b88: 0x0  nop
    ctx->pc = 0x1d5b88u;
    // NOP
label_1d5b8c:
    // 0x1d5b8c: 0x0  nop
    ctx->pc = 0x1d5b8cu;
    // NOP
label_1d5b90:
    // 0x1d5b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d5b94:
    // 0x1d5b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d5b98:
    // 0x1d5b98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d5b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1d5b9c:
    // 0x1d5b9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5ba0:
    // 0x1d5ba0: 0x8c42010c  lw          $v0, 0x10C($v0)
    ctx->pc = 0x1d5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1d5ba4:
    // 0x1d5ba4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d5ba8:
    if (ctx->pc == 0x1D5BA8u) {
        ctx->pc = 0x1D5BACu;
        goto label_1d5bac;
    }
    ctx->pc = 0x1D5BA4u;
    {
        const bool branch_taken_0x1d5ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ba4) {
            ctx->pc = 0x1D5BC4u;
            goto label_1d5bc4;
        }
    }
    ctx->pc = 0x1D5BACu;
label_1d5bac:
    // 0x1d5bac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5bb0:
    // 0x1d5bb0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d5bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d5bb4:
    // 0x1d5bb4: 0x8c45010c  lw          $a1, 0x10C($v0)
    ctx->pc = 0x1d5bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_1d5bb8:
    // 0x1d5bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5bbc:
    // 0x1d5bbc: 0xc08f71c  jal         func_23DC70
label_1d5bc0:
    if (ctx->pc == 0x1D5BC0u) {
        ctx->pc = 0x1D5BC4u;
        goto label_1d5bc4;
    }
    ctx->pc = 0x1D5BBCu;
    SET_GPR_U32(ctx, 31, 0x1D5BC4u);
    ctx->pc = 0x23DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DC70u, 0x1D5BBCu, 0x1D5BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BC4u;
label_1d5bc4:
    // 0x1d5bc4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1d5bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1d5bc8:
    // 0x1d5bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5bcc:
    // 0x1d5bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5bd0:
    // 0x1d5bd0: 0xc08f740  jal         func_23DD00
label_1d5bd4:
    if (ctx->pc == 0x1D5BD4u) {
        ctx->pc = 0x1D5BD8u;
        goto label_1d5bd8;
    }
    ctx->pc = 0x1D5BD0u;
    SET_GPR_U32(ctx, 31, 0x1D5BD8u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1D5BD0u, 0x1D5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BD8u;
label_1d5bd8:
    // 0x1d5bd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5bdc:
    // 0x1d5bdc: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1d5bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1d5be0:
    // 0x1d5be0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d5be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5be4:
    // 0x1d5be4: 0xc0ac13c  jal         func_2B04F0
label_1d5be8:
    if (ctx->pc == 0x1D5BE8u) {
        ctx->pc = 0x1D5BECu;
        goto label_1d5bec;
    }
    ctx->pc = 0x1D5BE4u;
    SET_GPR_U32(ctx, 31, 0x1D5BECu);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1D5BE4u, 0x1D5BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BECu;
label_1d5bec:
    // 0x1d5bec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5bf0:
    // 0x1d5bf0: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1d5bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d5bf4:
    // 0x1d5bf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d5bf8:
    if (ctx->pc == 0x1D5BF8u) {
        ctx->pc = 0x1D5BFCu;
        goto label_1d5bfc;
    }
    ctx->pc = 0x1D5BF4u;
    {
        const bool branch_taken_0x1d5bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5bf4) {
            ctx->pc = 0x1D5C0Cu;
            goto label_1d5c0c;
        }
    }
    ctx->pc = 0x1D5BFCu;
label_1d5bfc:
    // 0x1d5bfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c00:
    // 0x1d5c00: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d5c04:
    // 0x1d5c04: 0xc0774b4  jal         func_1DD2D0
label_1d5c08:
    if (ctx->pc == 0x1D5C08u) {
        ctx->pc = 0x1D5C0Cu;
        goto label_1d5c0c;
    }
    ctx->pc = 0x1D5C04u;
    SET_GPR_U32(ctx, 31, 0x1D5C0Cu);
    ctx->pc = 0x1DD2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD2D0u, 0x1D5C04u, 0x1D5C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C0Cu;
label_1d5c0c:
    // 0x1d5c0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c10:
    // 0x1d5c10: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d5c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d5c14:
    // 0x1d5c14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d5c18:
    if (ctx->pc == 0x1D5C18u) {
        ctx->pc = 0x1D5C1Cu;
        goto label_1d5c1c;
    }
    ctx->pc = 0x1D5C14u;
    {
        const bool branch_taken_0x1d5c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c14) {
            ctx->pc = 0x1D5C2Cu;
            goto label_1d5c2c;
        }
    }
    ctx->pc = 0x1D5C1Cu;
label_1d5c1c:
    // 0x1d5c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c20:
    // 0x1d5c20: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d5c24:
    // 0x1d5c24: 0xc078e4c  jal         func_1E3930
label_1d5c28:
    if (ctx->pc == 0x1D5C28u) {
        ctx->pc = 0x1D5C2Cu;
        goto label_1d5c2c;
    }
    ctx->pc = 0x1D5C24u;
    SET_GPR_U32(ctx, 31, 0x1D5C2Cu);
    ctx->pc = 0x1E3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3930u, 0x1D5C24u, 0x1D5C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C2Cu;
label_1d5c2c:
    // 0x1d5c2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c30:
    // 0x1d5c30: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1d5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5c34:
    // 0x1d5c34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d5c38:
    if (ctx->pc == 0x1D5C38u) {
        ctx->pc = 0x1D5C3Cu;
        goto label_1d5c3c;
    }
    ctx->pc = 0x1D5C34u;
    {
        const bool branch_taken_0x1d5c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c34) {
            ctx->pc = 0x1D5C64u;
            goto label_1d5c64;
        }
    }
    ctx->pc = 0x1D5C3Cu;
label_1d5c3c:
    // 0x1d5c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c40:
    // 0x1d5c40: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d5c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5c44:
    // 0x1d5c44: 0xc075ab4  jal         func_1D6AD0
label_1d5c48:
    if (ctx->pc == 0x1D5C48u) {
        ctx->pc = 0x1D5C4Cu;
        goto label_1d5c4c;
    }
    ctx->pc = 0x1D5C44u;
    SET_GPR_U32(ctx, 31, 0x1D5C4Cu);
    ctx->pc = 0x1D6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6AD0u, 0x1D5C44u, 0x1D5C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C4Cu;
label_1d5c4c:
    // 0x1d5c4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c50:
    // 0x1d5c50: 0x8c4400a4  lw          $a0, 0xA4($v0)
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d5c54:
    // 0x1d5c54: 0xc119c5c  jal         func_467170
label_1d5c58:
    if (ctx->pc == 0x1D5C58u) {
        ctx->pc = 0x1D5C5Cu;
        goto label_1d5c5c;
    }
    ctx->pc = 0x1D5C54u;
    SET_GPR_U32(ctx, 31, 0x1D5C5Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1D5C54u, 0x1D5C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C5Cu;
label_1d5c5c:
    // 0x1d5c5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c60:
    // 0x1d5c60: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1d5c60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
label_1d5c64:
    // 0x1d5c64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c68:
    // 0x1d5c68: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1d5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d5c6c:
    // 0x1d5c6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d5c70:
    if (ctx->pc == 0x1D5C70u) {
        ctx->pc = 0x1D5C74u;
        goto label_1d5c74;
    }
    ctx->pc = 0x1D5C6Cu;
    {
        const bool branch_taken_0x1d5c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c6c) {
            ctx->pc = 0x1D5C9Cu;
            goto label_1d5c9c;
        }
    }
    ctx->pc = 0x1D5C74u;
label_1d5c74:
    // 0x1d5c74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c78:
    // 0x1d5c78: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d5c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d5c7c:
    // 0x1d5c7c: 0xc075a84  jal         func_1D6A10
label_1d5c80:
    if (ctx->pc == 0x1D5C80u) {
        ctx->pc = 0x1D5C84u;
        goto label_1d5c84;
    }
    ctx->pc = 0x1D5C7Cu;
    SET_GPR_U32(ctx, 31, 0x1D5C84u);
    ctx->pc = 0x1D6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A10u, 0x1D5C7Cu, 0x1D5C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C84u;
label_1d5c84:
    // 0x1d5c84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c88:
    // 0x1d5c88: 0x8c4400a8  lw          $a0, 0xA8($v0)
    ctx->pc = 0x1d5c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1d5c8c:
    // 0x1d5c8c: 0xc119c5c  jal         func_467170
label_1d5c90:
    if (ctx->pc == 0x1D5C90u) {
        ctx->pc = 0x1D5C94u;
        goto label_1d5c94;
    }
    ctx->pc = 0x1D5C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D5C94u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1D5C8Cu, 0x1D5C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C94u;
label_1d5c94:
    // 0x1d5c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5c98:
    // 0x1d5c98: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x1d5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
label_1d5c9c:
    // 0x1d5c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5ca0:
    // 0x1d5ca0: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d5ca4:
    // 0x1d5ca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d5ca8:
    if (ctx->pc == 0x1D5CA8u) {
        ctx->pc = 0x1D5CACu;
        goto label_1d5cac;
    }
    ctx->pc = 0x1D5CA4u;
    {
        const bool branch_taken_0x1d5ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ca4) {
            ctx->pc = 0x1D5CD4u;
            goto label_1d5cd4;
        }
    }
    ctx->pc = 0x1D5CACu;
label_1d5cac:
    // 0x1d5cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5cb0:
    // 0x1d5cb0: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d5cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d5cb4:
    // 0x1d5cb4: 0xc07575c  jal         func_1D5D70
label_1d5cb8:
    if (ctx->pc == 0x1D5CB8u) {
        ctx->pc = 0x1D5CBCu;
        goto label_1d5cbc;
    }
    ctx->pc = 0x1D5CB4u;
    SET_GPR_U32(ctx, 31, 0x1D5CBCu);
    ctx->pc = 0x1D5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D70u, 0x1D5CB4u, 0x1D5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CBCu;
label_1d5cbc:
    // 0x1d5cbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5cc0:
    // 0x1d5cc0: 0x8c4400ac  lw          $a0, 0xAC($v0)
    ctx->pc = 0x1d5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d5cc4:
    // 0x1d5cc4: 0xc119c5c  jal         func_467170
label_1d5cc8:
    if (ctx->pc == 0x1D5CC8u) {
        ctx->pc = 0x1D5CCCu;
        goto label_1d5ccc;
    }
    ctx->pc = 0x1D5CC4u;
    SET_GPR_U32(ctx, 31, 0x1D5CCCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1D5CC4u, 0x1D5CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CCCu;
label_1d5ccc:
    // 0x1d5ccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5cd0:
    // 0x1d5cd0: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x1d5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
label_1d5cd4:
    // 0x1d5cd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5cd8:
    // 0x1d5cd8: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1d5cdc:
    // 0x1d5cdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1d5ce0:
    if (ctx->pc == 0x1D5CE0u) {
        ctx->pc = 0x1D5CE4u;
        goto label_1d5ce4;
    }
    ctx->pc = 0x1D5CDCu;
    {
        const bool branch_taken_0x1d5cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cdc) {
            ctx->pc = 0x1D5D0Cu;
            goto label_1d5d0c;
        }
    }
    ctx->pc = 0x1D5CE4u;
label_1d5ce4:
    // 0x1d5ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5ce8:
    // 0x1d5ce8: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1d5cec:
    // 0x1d5cec: 0xc075754  jal         func_1D5D50
label_1d5cf0:
    if (ctx->pc == 0x1D5CF0u) {
        ctx->pc = 0x1D5CF4u;
        goto label_1d5cf4;
    }
    ctx->pc = 0x1D5CECu;
    SET_GPR_U32(ctx, 31, 0x1D5CF4u);
    ctx->pc = 0x1D5D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D50u, 0x1D5CECu, 0x1D5CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CF4u;
label_1d5cf4:
    // 0x1d5cf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5cf8:
    // 0x1d5cf8: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1d5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1d5cfc:
    // 0x1d5cfc: 0xc119c5c  jal         func_467170
label_1d5d00:
    if (ctx->pc == 0x1D5D00u) {
        ctx->pc = 0x1D5D04u;
        goto label_1d5d04;
    }
    ctx->pc = 0x1D5CFCu;
    SET_GPR_U32(ctx, 31, 0x1D5D04u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1D5CFCu, 0x1D5D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D04u;
label_1d5d04:
    // 0x1d5d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5d08:
    // 0x1d5d08: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x1d5d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_1d5d0c:
    // 0x1d5d0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5d10:
    // 0x1d5d10: 0xc06479c  jal         func_191E70
label_1d5d14:
    if (ctx->pc == 0x1D5D14u) {
        ctx->pc = 0x1D5D18u;
        goto label_1d5d18;
    }
    ctx->pc = 0x1D5D10u;
    SET_GPR_U32(ctx, 31, 0x1D5D18u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1D5D10u, 0x1D5D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D18u;
label_1d5d18:
    // 0x1d5d18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5d1c:
    // 0x1d5d1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d5d20:
    // 0x1d5d20: 0xc08c910  jal         func_232440
label_1d5d24:
    if (ctx->pc == 0x1D5D24u) {
        ctx->pc = 0x1D5D28u;
        goto label_1d5d28;
    }
    ctx->pc = 0x1D5D20u;
    SET_GPR_U32(ctx, 31, 0x1D5D28u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x1D5D20u, 0x1D5D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D28u;
label_1d5d28:
    // 0x1d5d28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d5d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1d5d2c:
    // 0x1d5d2c: 0xc064adc  jal         func_192B70
label_1d5d30:
    if (ctx->pc == 0x1D5D30u) {
        ctx->pc = 0x1D5D34u;
        goto label_1d5d34;
    }
    ctx->pc = 0x1D5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D34u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1D5D2Cu, 0x1D5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D34u;
label_1d5d34:
    // 0x1d5d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5d38:
    // 0x1d5d38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d5d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d5d3c:
    // 0x1d5d3c: 0x3e00008  jr          $ra
label_1d5d40:
    if (ctx->pc == 0x1D5D40u) {
        ctx->pc = 0x1D5D44u;
        goto label_1d5d44;
    }
    ctx->pc = 0x1D5D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5D44u;
label_1d5d44:
    // 0x1d5d44: 0x0  nop
    ctx->pc = 0x1d5d44u;
    // NOP
label_1d5d48:
    // 0x1d5d48: 0x0  nop
    ctx->pc = 0x1d5d48u;
    // NOP
label_1d5d4c:
    // 0x1d5d4c: 0x0  nop
    ctx->pc = 0x1d5d4cu;
    // NOP
    ctx->pc = 0x1d5d50u;
}
