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

// Function: sub_005F43C0
// Address: 0x5f43c0 - 0x5f5d68
void sub_005F43C0_0x5f43c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F43C0_0x5f43c0");
#endif

    switch (ctx->pc) {
        case 0x5f43c0u: goto label_5f43c0;
        case 0x5f43c4u: goto label_5f43c4;
        case 0x5f43c8u: goto label_5f43c8;
        case 0x5f43ccu: goto label_5f43cc;
        case 0x5f43d0u: goto label_5f43d0;
        case 0x5f43d4u: goto label_5f43d4;
        case 0x5f43d8u: goto label_5f43d8;
        case 0x5f43dcu: goto label_5f43dc;
        case 0x5f43e0u: goto label_5f43e0;
        case 0x5f43e4u: goto label_5f43e4;
        case 0x5f43e8u: goto label_5f43e8;
        case 0x5f43ecu: goto label_5f43ec;
        case 0x5f43f0u: goto label_5f43f0;
        case 0x5f43f4u: goto label_5f43f4;
        case 0x5f43f8u: goto label_5f43f8;
        case 0x5f43fcu: goto label_5f43fc;
        case 0x5f4400u: goto label_5f4400;
        case 0x5f4404u: goto label_5f4404;
        case 0x5f4408u: goto label_5f4408;
        case 0x5f440cu: goto label_5f440c;
        case 0x5f4410u: goto label_5f4410;
        case 0x5f4414u: goto label_5f4414;
        case 0x5f4418u: goto label_5f4418;
        case 0x5f441cu: goto label_5f441c;
        case 0x5f4420u: goto label_5f4420;
        case 0x5f4424u: goto label_5f4424;
        case 0x5f4428u: goto label_5f4428;
        case 0x5f442cu: goto label_5f442c;
        case 0x5f4430u: goto label_5f4430;
        case 0x5f4434u: goto label_5f4434;
        case 0x5f4438u: goto label_5f4438;
        case 0x5f443cu: goto label_5f443c;
        case 0x5f4440u: goto label_5f4440;
        case 0x5f4444u: goto label_5f4444;
        case 0x5f4448u: goto label_5f4448;
        case 0x5f444cu: goto label_5f444c;
        case 0x5f4450u: goto label_5f4450;
        case 0x5f4454u: goto label_5f4454;
        case 0x5f4458u: goto label_5f4458;
        case 0x5f445cu: goto label_5f445c;
        case 0x5f4460u: goto label_5f4460;
        case 0x5f4464u: goto label_5f4464;
        case 0x5f4468u: goto label_5f4468;
        case 0x5f446cu: goto label_5f446c;
        case 0x5f4470u: goto label_5f4470;
        case 0x5f4474u: goto label_5f4474;
        case 0x5f4478u: goto label_5f4478;
        case 0x5f447cu: goto label_5f447c;
        case 0x5f4480u: goto label_5f4480;
        case 0x5f4484u: goto label_5f4484;
        case 0x5f4488u: goto label_5f4488;
        case 0x5f448cu: goto label_5f448c;
        case 0x5f4490u: goto label_5f4490;
        case 0x5f4494u: goto label_5f4494;
        case 0x5f4498u: goto label_5f4498;
        case 0x5f449cu: goto label_5f449c;
        case 0x5f44a0u: goto label_5f44a0;
        case 0x5f44a4u: goto label_5f44a4;
        case 0x5f44a8u: goto label_5f44a8;
        case 0x5f44acu: goto label_5f44ac;
        case 0x5f44b0u: goto label_5f44b0;
        case 0x5f44b4u: goto label_5f44b4;
        case 0x5f44b8u: goto label_5f44b8;
        case 0x5f44bcu: goto label_5f44bc;
        case 0x5f44c0u: goto label_5f44c0;
        case 0x5f44c4u: goto label_5f44c4;
        case 0x5f44c8u: goto label_5f44c8;
        case 0x5f44ccu: goto label_5f44cc;
        case 0x5f44d0u: goto label_5f44d0;
        case 0x5f44d4u: goto label_5f44d4;
        case 0x5f44d8u: goto label_5f44d8;
        case 0x5f44dcu: goto label_5f44dc;
        case 0x5f44e0u: goto label_5f44e0;
        case 0x5f44e4u: goto label_5f44e4;
        case 0x5f44e8u: goto label_5f44e8;
        case 0x5f44ecu: goto label_5f44ec;
        case 0x5f44f0u: goto label_5f44f0;
        case 0x5f44f4u: goto label_5f44f4;
        case 0x5f44f8u: goto label_5f44f8;
        case 0x5f44fcu: goto label_5f44fc;
        case 0x5f4500u: goto label_5f4500;
        case 0x5f4504u: goto label_5f4504;
        case 0x5f4508u: goto label_5f4508;
        case 0x5f450cu: goto label_5f450c;
        case 0x5f4510u: goto label_5f4510;
        case 0x5f4514u: goto label_5f4514;
        case 0x5f4518u: goto label_5f4518;
        case 0x5f451cu: goto label_5f451c;
        case 0x5f4520u: goto label_5f4520;
        case 0x5f4524u: goto label_5f4524;
        case 0x5f4528u: goto label_5f4528;
        case 0x5f452cu: goto label_5f452c;
        case 0x5f4530u: goto label_5f4530;
        case 0x5f4534u: goto label_5f4534;
        case 0x5f4538u: goto label_5f4538;
        case 0x5f453cu: goto label_5f453c;
        case 0x5f4540u: goto label_5f4540;
        case 0x5f4544u: goto label_5f4544;
        case 0x5f4548u: goto label_5f4548;
        case 0x5f454cu: goto label_5f454c;
        case 0x5f4550u: goto label_5f4550;
        case 0x5f4554u: goto label_5f4554;
        case 0x5f4558u: goto label_5f4558;
        case 0x5f455cu: goto label_5f455c;
        case 0x5f4560u: goto label_5f4560;
        case 0x5f4564u: goto label_5f4564;
        case 0x5f4568u: goto label_5f4568;
        case 0x5f456cu: goto label_5f456c;
        case 0x5f4570u: goto label_5f4570;
        case 0x5f4574u: goto label_5f4574;
        case 0x5f4578u: goto label_5f4578;
        case 0x5f457cu: goto label_5f457c;
        case 0x5f4580u: goto label_5f4580;
        case 0x5f4584u: goto label_5f4584;
        case 0x5f4588u: goto label_5f4588;
        case 0x5f458cu: goto label_5f458c;
        case 0x5f4590u: goto label_5f4590;
        case 0x5f4594u: goto label_5f4594;
        case 0x5f4598u: goto label_5f4598;
        case 0x5f459cu: goto label_5f459c;
        case 0x5f45a0u: goto label_5f45a0;
        case 0x5f45a4u: goto label_5f45a4;
        case 0x5f45a8u: goto label_5f45a8;
        case 0x5f45acu: goto label_5f45ac;
        case 0x5f45b0u: goto label_5f45b0;
        case 0x5f45b4u: goto label_5f45b4;
        case 0x5f45b8u: goto label_5f45b8;
        case 0x5f45bcu: goto label_5f45bc;
        case 0x5f45c0u: goto label_5f45c0;
        case 0x5f45c4u: goto label_5f45c4;
        case 0x5f45c8u: goto label_5f45c8;
        case 0x5f45ccu: goto label_5f45cc;
        case 0x5f45d0u: goto label_5f45d0;
        case 0x5f45d4u: goto label_5f45d4;
        case 0x5f45d8u: goto label_5f45d8;
        case 0x5f45dcu: goto label_5f45dc;
        case 0x5f45e0u: goto label_5f45e0;
        case 0x5f45e4u: goto label_5f45e4;
        case 0x5f45e8u: goto label_5f45e8;
        case 0x5f45ecu: goto label_5f45ec;
        case 0x5f45f0u: goto label_5f45f0;
        case 0x5f45f4u: goto label_5f45f4;
        case 0x5f45f8u: goto label_5f45f8;
        case 0x5f45fcu: goto label_5f45fc;
        case 0x5f4600u: goto label_5f4600;
        case 0x5f4604u: goto label_5f4604;
        case 0x5f4608u: goto label_5f4608;
        case 0x5f460cu: goto label_5f460c;
        case 0x5f4610u: goto label_5f4610;
        case 0x5f4614u: goto label_5f4614;
        case 0x5f4618u: goto label_5f4618;
        case 0x5f461cu: goto label_5f461c;
        case 0x5f4620u: goto label_5f4620;
        case 0x5f4624u: goto label_5f4624;
        case 0x5f4628u: goto label_5f4628;
        case 0x5f462cu: goto label_5f462c;
        case 0x5f4630u: goto label_5f4630;
        case 0x5f4634u: goto label_5f4634;
        case 0x5f4638u: goto label_5f4638;
        case 0x5f463cu: goto label_5f463c;
        case 0x5f4640u: goto label_5f4640;
        case 0x5f4644u: goto label_5f4644;
        case 0x5f4648u: goto label_5f4648;
        case 0x5f464cu: goto label_5f464c;
        case 0x5f4650u: goto label_5f4650;
        case 0x5f4654u: goto label_5f4654;
        case 0x5f4658u: goto label_5f4658;
        case 0x5f465cu: goto label_5f465c;
        case 0x5f4660u: goto label_5f4660;
        case 0x5f4664u: goto label_5f4664;
        case 0x5f4668u: goto label_5f4668;
        case 0x5f466cu: goto label_5f466c;
        case 0x5f4670u: goto label_5f4670;
        case 0x5f4674u: goto label_5f4674;
        case 0x5f4678u: goto label_5f4678;
        case 0x5f467cu: goto label_5f467c;
        case 0x5f4680u: goto label_5f4680;
        case 0x5f4684u: goto label_5f4684;
        case 0x5f4688u: goto label_5f4688;
        case 0x5f468cu: goto label_5f468c;
        case 0x5f4690u: goto label_5f4690;
        case 0x5f4694u: goto label_5f4694;
        case 0x5f4698u: goto label_5f4698;
        case 0x5f469cu: goto label_5f469c;
        case 0x5f46a0u: goto label_5f46a0;
        case 0x5f46a4u: goto label_5f46a4;
        case 0x5f46a8u: goto label_5f46a8;
        case 0x5f46acu: goto label_5f46ac;
        case 0x5f46b0u: goto label_5f46b0;
        case 0x5f46b4u: goto label_5f46b4;
        case 0x5f46b8u: goto label_5f46b8;
        case 0x5f46bcu: goto label_5f46bc;
        case 0x5f46c0u: goto label_5f46c0;
        case 0x5f46c4u: goto label_5f46c4;
        case 0x5f46c8u: goto label_5f46c8;
        case 0x5f46ccu: goto label_5f46cc;
        case 0x5f46d0u: goto label_5f46d0;
        case 0x5f46d4u: goto label_5f46d4;
        case 0x5f46d8u: goto label_5f46d8;
        case 0x5f46dcu: goto label_5f46dc;
        case 0x5f46e0u: goto label_5f46e0;
        case 0x5f46e4u: goto label_5f46e4;
        case 0x5f46e8u: goto label_5f46e8;
        case 0x5f46ecu: goto label_5f46ec;
        case 0x5f46f0u: goto label_5f46f0;
        case 0x5f46f4u: goto label_5f46f4;
        case 0x5f46f8u: goto label_5f46f8;
        case 0x5f46fcu: goto label_5f46fc;
        case 0x5f4700u: goto label_5f4700;
        case 0x5f4704u: goto label_5f4704;
        case 0x5f4708u: goto label_5f4708;
        case 0x5f470cu: goto label_5f470c;
        case 0x5f4710u: goto label_5f4710;
        case 0x5f4714u: goto label_5f4714;
        case 0x5f4718u: goto label_5f4718;
        case 0x5f471cu: goto label_5f471c;
        case 0x5f4720u: goto label_5f4720;
        case 0x5f4724u: goto label_5f4724;
        case 0x5f4728u: goto label_5f4728;
        case 0x5f472cu: goto label_5f472c;
        case 0x5f4730u: goto label_5f4730;
        case 0x5f4734u: goto label_5f4734;
        case 0x5f4738u: goto label_5f4738;
        case 0x5f473cu: goto label_5f473c;
        case 0x5f4740u: goto label_5f4740;
        case 0x5f4744u: goto label_5f4744;
        case 0x5f4748u: goto label_5f4748;
        case 0x5f474cu: goto label_5f474c;
        case 0x5f4750u: goto label_5f4750;
        case 0x5f4754u: goto label_5f4754;
        case 0x5f4758u: goto label_5f4758;
        case 0x5f475cu: goto label_5f475c;
        case 0x5f4760u: goto label_5f4760;
        case 0x5f4764u: goto label_5f4764;
        case 0x5f4768u: goto label_5f4768;
        case 0x5f476cu: goto label_5f476c;
        case 0x5f4770u: goto label_5f4770;
        case 0x5f4774u: goto label_5f4774;
        case 0x5f4778u: goto label_5f4778;
        case 0x5f477cu: goto label_5f477c;
        case 0x5f4780u: goto label_5f4780;
        case 0x5f4784u: goto label_5f4784;
        case 0x5f4788u: goto label_5f4788;
        case 0x5f478cu: goto label_5f478c;
        case 0x5f4790u: goto label_5f4790;
        case 0x5f4794u: goto label_5f4794;
        case 0x5f4798u: goto label_5f4798;
        case 0x5f479cu: goto label_5f479c;
        case 0x5f47a0u: goto label_5f47a0;
        case 0x5f47a4u: goto label_5f47a4;
        case 0x5f47a8u: goto label_5f47a8;
        case 0x5f47acu: goto label_5f47ac;
        case 0x5f47b0u: goto label_5f47b0;
        case 0x5f47b4u: goto label_5f47b4;
        case 0x5f47b8u: goto label_5f47b8;
        case 0x5f47bcu: goto label_5f47bc;
        case 0x5f47c0u: goto label_5f47c0;
        case 0x5f47c4u: goto label_5f47c4;
        case 0x5f47c8u: goto label_5f47c8;
        case 0x5f47ccu: goto label_5f47cc;
        case 0x5f47d0u: goto label_5f47d0;
        case 0x5f47d4u: goto label_5f47d4;
        case 0x5f47d8u: goto label_5f47d8;
        case 0x5f47dcu: goto label_5f47dc;
        case 0x5f47e0u: goto label_5f47e0;
        case 0x5f47e4u: goto label_5f47e4;
        case 0x5f47e8u: goto label_5f47e8;
        case 0x5f47ecu: goto label_5f47ec;
        case 0x5f47f0u: goto label_5f47f0;
        case 0x5f47f4u: goto label_5f47f4;
        case 0x5f47f8u: goto label_5f47f8;
        case 0x5f47fcu: goto label_5f47fc;
        case 0x5f4800u: goto label_5f4800;
        case 0x5f4804u: goto label_5f4804;
        case 0x5f4808u: goto label_5f4808;
        case 0x5f480cu: goto label_5f480c;
        case 0x5f4810u: goto label_5f4810;
        case 0x5f4814u: goto label_5f4814;
        case 0x5f4818u: goto label_5f4818;
        case 0x5f481cu: goto label_5f481c;
        case 0x5f4820u: goto label_5f4820;
        case 0x5f4824u: goto label_5f4824;
        case 0x5f4828u: goto label_5f4828;
        case 0x5f482cu: goto label_5f482c;
        case 0x5f4830u: goto label_5f4830;
        case 0x5f4834u: goto label_5f4834;
        case 0x5f4838u: goto label_5f4838;
        case 0x5f483cu: goto label_5f483c;
        case 0x5f4840u: goto label_5f4840;
        case 0x5f4844u: goto label_5f4844;
        case 0x5f4848u: goto label_5f4848;
        case 0x5f484cu: goto label_5f484c;
        case 0x5f4850u: goto label_5f4850;
        case 0x5f4854u: goto label_5f4854;
        case 0x5f4858u: goto label_5f4858;
        case 0x5f485cu: goto label_5f485c;
        case 0x5f4860u: goto label_5f4860;
        case 0x5f4864u: goto label_5f4864;
        case 0x5f4868u: goto label_5f4868;
        case 0x5f486cu: goto label_5f486c;
        case 0x5f4870u: goto label_5f4870;
        case 0x5f4874u: goto label_5f4874;
        case 0x5f4878u: goto label_5f4878;
        case 0x5f487cu: goto label_5f487c;
        case 0x5f4880u: goto label_5f4880;
        case 0x5f4884u: goto label_5f4884;
        case 0x5f4888u: goto label_5f4888;
        case 0x5f488cu: goto label_5f488c;
        case 0x5f4890u: goto label_5f4890;
        case 0x5f4894u: goto label_5f4894;
        case 0x5f4898u: goto label_5f4898;
        case 0x5f489cu: goto label_5f489c;
        case 0x5f48a0u: goto label_5f48a0;
        case 0x5f48a4u: goto label_5f48a4;
        case 0x5f48a8u: goto label_5f48a8;
        case 0x5f48acu: goto label_5f48ac;
        case 0x5f48b0u: goto label_5f48b0;
        case 0x5f48b4u: goto label_5f48b4;
        case 0x5f48b8u: goto label_5f48b8;
        case 0x5f48bcu: goto label_5f48bc;
        case 0x5f48c0u: goto label_5f48c0;
        case 0x5f48c4u: goto label_5f48c4;
        case 0x5f48c8u: goto label_5f48c8;
        case 0x5f48ccu: goto label_5f48cc;
        case 0x5f48d0u: goto label_5f48d0;
        case 0x5f48d4u: goto label_5f48d4;
        case 0x5f48d8u: goto label_5f48d8;
        case 0x5f48dcu: goto label_5f48dc;
        case 0x5f48e0u: goto label_5f48e0;
        case 0x5f48e4u: goto label_5f48e4;
        case 0x5f48e8u: goto label_5f48e8;
        case 0x5f48ecu: goto label_5f48ec;
        case 0x5f48f0u: goto label_5f48f0;
        case 0x5f48f4u: goto label_5f48f4;
        case 0x5f48f8u: goto label_5f48f8;
        case 0x5f48fcu: goto label_5f48fc;
        case 0x5f4900u: goto label_5f4900;
        case 0x5f4904u: goto label_5f4904;
        case 0x5f4908u: goto label_5f4908;
        case 0x5f490cu: goto label_5f490c;
        case 0x5f4910u: goto label_5f4910;
        case 0x5f4914u: goto label_5f4914;
        case 0x5f4918u: goto label_5f4918;
        case 0x5f491cu: goto label_5f491c;
        case 0x5f4920u: goto label_5f4920;
        case 0x5f4924u: goto label_5f4924;
        case 0x5f4928u: goto label_5f4928;
        case 0x5f492cu: goto label_5f492c;
        case 0x5f4930u: goto label_5f4930;
        case 0x5f4934u: goto label_5f4934;
        case 0x5f4938u: goto label_5f4938;
        case 0x5f493cu: goto label_5f493c;
        case 0x5f4940u: goto label_5f4940;
        case 0x5f4944u: goto label_5f4944;
        case 0x5f4948u: goto label_5f4948;
        case 0x5f494cu: goto label_5f494c;
        case 0x5f4950u: goto label_5f4950;
        case 0x5f4954u: goto label_5f4954;
        case 0x5f4958u: goto label_5f4958;
        case 0x5f495cu: goto label_5f495c;
        case 0x5f4960u: goto label_5f4960;
        case 0x5f4964u: goto label_5f4964;
        case 0x5f4968u: goto label_5f4968;
        case 0x5f496cu: goto label_5f496c;
        case 0x5f4970u: goto label_5f4970;
        case 0x5f4974u: goto label_5f4974;
        case 0x5f4978u: goto label_5f4978;
        case 0x5f497cu: goto label_5f497c;
        case 0x5f4980u: goto label_5f4980;
        case 0x5f4984u: goto label_5f4984;
        case 0x5f4988u: goto label_5f4988;
        case 0x5f498cu: goto label_5f498c;
        case 0x5f4990u: goto label_5f4990;
        case 0x5f4994u: goto label_5f4994;
        case 0x5f4998u: goto label_5f4998;
        case 0x5f499cu: goto label_5f499c;
        case 0x5f49a0u: goto label_5f49a0;
        case 0x5f49a4u: goto label_5f49a4;
        case 0x5f49a8u: goto label_5f49a8;
        case 0x5f49acu: goto label_5f49ac;
        case 0x5f49b0u: goto label_5f49b0;
        case 0x5f49b4u: goto label_5f49b4;
        case 0x5f49b8u: goto label_5f49b8;
        case 0x5f49bcu: goto label_5f49bc;
        case 0x5f49c0u: goto label_5f49c0;
        case 0x5f49c4u: goto label_5f49c4;
        case 0x5f49c8u: goto label_5f49c8;
        case 0x5f49ccu: goto label_5f49cc;
        case 0x5f49d0u: goto label_5f49d0;
        case 0x5f49d4u: goto label_5f49d4;
        case 0x5f49d8u: goto label_5f49d8;
        case 0x5f49dcu: goto label_5f49dc;
        case 0x5f49e0u: goto label_5f49e0;
        case 0x5f49e4u: goto label_5f49e4;
        case 0x5f49e8u: goto label_5f49e8;
        case 0x5f49ecu: goto label_5f49ec;
        case 0x5f49f0u: goto label_5f49f0;
        case 0x5f49f4u: goto label_5f49f4;
        case 0x5f49f8u: goto label_5f49f8;
        case 0x5f49fcu: goto label_5f49fc;
        case 0x5f4a00u: goto label_5f4a00;
        case 0x5f4a04u: goto label_5f4a04;
        case 0x5f4a08u: goto label_5f4a08;
        case 0x5f4a0cu: goto label_5f4a0c;
        case 0x5f4a10u: goto label_5f4a10;
        case 0x5f4a14u: goto label_5f4a14;
        case 0x5f4a18u: goto label_5f4a18;
        case 0x5f4a1cu: goto label_5f4a1c;
        case 0x5f4a20u: goto label_5f4a20;
        case 0x5f4a24u: goto label_5f4a24;
        case 0x5f4a28u: goto label_5f4a28;
        case 0x5f4a2cu: goto label_5f4a2c;
        case 0x5f4a30u: goto label_5f4a30;
        case 0x5f4a34u: goto label_5f4a34;
        case 0x5f4a38u: goto label_5f4a38;
        case 0x5f4a3cu: goto label_5f4a3c;
        case 0x5f4a40u: goto label_5f4a40;
        case 0x5f4a44u: goto label_5f4a44;
        case 0x5f4a48u: goto label_5f4a48;
        case 0x5f4a4cu: goto label_5f4a4c;
        case 0x5f4a50u: goto label_5f4a50;
        case 0x5f4a54u: goto label_5f4a54;
        case 0x5f4a58u: goto label_5f4a58;
        case 0x5f4a5cu: goto label_5f4a5c;
        case 0x5f4a60u: goto label_5f4a60;
        case 0x5f4a64u: goto label_5f4a64;
        case 0x5f4a68u: goto label_5f4a68;
        case 0x5f4a6cu: goto label_5f4a6c;
        case 0x5f4a70u: goto label_5f4a70;
        case 0x5f4a74u: goto label_5f4a74;
        case 0x5f4a78u: goto label_5f4a78;
        case 0x5f4a7cu: goto label_5f4a7c;
        case 0x5f4a80u: goto label_5f4a80;
        case 0x5f4a84u: goto label_5f4a84;
        case 0x5f4a88u: goto label_5f4a88;
        case 0x5f4a8cu: goto label_5f4a8c;
        case 0x5f4a90u: goto label_5f4a90;
        case 0x5f4a94u: goto label_5f4a94;
        case 0x5f4a98u: goto label_5f4a98;
        case 0x5f4a9cu: goto label_5f4a9c;
        case 0x5f4aa0u: goto label_5f4aa0;
        case 0x5f4aa4u: goto label_5f4aa4;
        case 0x5f4aa8u: goto label_5f4aa8;
        case 0x5f4aacu: goto label_5f4aac;
        case 0x5f4ab0u: goto label_5f4ab0;
        case 0x5f4ab4u: goto label_5f4ab4;
        case 0x5f4ab8u: goto label_5f4ab8;
        case 0x5f4abcu: goto label_5f4abc;
        case 0x5f4ac0u: goto label_5f4ac0;
        case 0x5f4ac4u: goto label_5f4ac4;
        case 0x5f4ac8u: goto label_5f4ac8;
        case 0x5f4accu: goto label_5f4acc;
        case 0x5f4ad0u: goto label_5f4ad0;
        case 0x5f4ad4u: goto label_5f4ad4;
        case 0x5f4ad8u: goto label_5f4ad8;
        case 0x5f4adcu: goto label_5f4adc;
        case 0x5f4ae0u: goto label_5f4ae0;
        case 0x5f4ae4u: goto label_5f4ae4;
        case 0x5f4ae8u: goto label_5f4ae8;
        case 0x5f4aecu: goto label_5f4aec;
        case 0x5f4af0u: goto label_5f4af0;
        case 0x5f4af4u: goto label_5f4af4;
        case 0x5f4af8u: goto label_5f4af8;
        case 0x5f4afcu: goto label_5f4afc;
        case 0x5f4b00u: goto label_5f4b00;
        case 0x5f4b04u: goto label_5f4b04;
        case 0x5f4b08u: goto label_5f4b08;
        case 0x5f4b0cu: goto label_5f4b0c;
        case 0x5f4b10u: goto label_5f4b10;
        case 0x5f4b14u: goto label_5f4b14;
        case 0x5f4b18u: goto label_5f4b18;
        case 0x5f4b1cu: goto label_5f4b1c;
        case 0x5f4b20u: goto label_5f4b20;
        case 0x5f4b24u: goto label_5f4b24;
        case 0x5f4b28u: goto label_5f4b28;
        case 0x5f4b2cu: goto label_5f4b2c;
        case 0x5f4b30u: goto label_5f4b30;
        case 0x5f4b34u: goto label_5f4b34;
        case 0x5f4b38u: goto label_5f4b38;
        case 0x5f4b3cu: goto label_5f4b3c;
        case 0x5f4b40u: goto label_5f4b40;
        case 0x5f4b44u: goto label_5f4b44;
        case 0x5f4b48u: goto label_5f4b48;
        case 0x5f4b4cu: goto label_5f4b4c;
        case 0x5f4b50u: goto label_5f4b50;
        case 0x5f4b54u: goto label_5f4b54;
        case 0x5f4b58u: goto label_5f4b58;
        case 0x5f4b5cu: goto label_5f4b5c;
        case 0x5f4b60u: goto label_5f4b60;
        case 0x5f4b64u: goto label_5f4b64;
        case 0x5f4b68u: goto label_5f4b68;
        case 0x5f4b6cu: goto label_5f4b6c;
        case 0x5f4b70u: goto label_5f4b70;
        case 0x5f4b74u: goto label_5f4b74;
        case 0x5f4b78u: goto label_5f4b78;
        case 0x5f4b7cu: goto label_5f4b7c;
        case 0x5f4b80u: goto label_5f4b80;
        case 0x5f4b84u: goto label_5f4b84;
        case 0x5f4b88u: goto label_5f4b88;
        case 0x5f4b8cu: goto label_5f4b8c;
        case 0x5f4b90u: goto label_5f4b90;
        case 0x5f4b94u: goto label_5f4b94;
        case 0x5f4b98u: goto label_5f4b98;
        case 0x5f4b9cu: goto label_5f4b9c;
        case 0x5f4ba0u: goto label_5f4ba0;
        case 0x5f4ba4u: goto label_5f4ba4;
        case 0x5f4ba8u: goto label_5f4ba8;
        case 0x5f4bacu: goto label_5f4bac;
        case 0x5f4bb0u: goto label_5f4bb0;
        case 0x5f4bb4u: goto label_5f4bb4;
        case 0x5f4bb8u: goto label_5f4bb8;
        case 0x5f4bbcu: goto label_5f4bbc;
        case 0x5f4bc0u: goto label_5f4bc0;
        case 0x5f4bc4u: goto label_5f4bc4;
        case 0x5f4bc8u: goto label_5f4bc8;
        case 0x5f4bccu: goto label_5f4bcc;
        case 0x5f4bd0u: goto label_5f4bd0;
        case 0x5f4bd4u: goto label_5f4bd4;
        case 0x5f4bd8u: goto label_5f4bd8;
        case 0x5f4bdcu: goto label_5f4bdc;
        case 0x5f4be0u: goto label_5f4be0;
        case 0x5f4be4u: goto label_5f4be4;
        case 0x5f4be8u: goto label_5f4be8;
        case 0x5f4becu: goto label_5f4bec;
        case 0x5f4bf0u: goto label_5f4bf0;
        case 0x5f4bf4u: goto label_5f4bf4;
        case 0x5f4bf8u: goto label_5f4bf8;
        case 0x5f4bfcu: goto label_5f4bfc;
        case 0x5f4c00u: goto label_5f4c00;
        case 0x5f4c04u: goto label_5f4c04;
        case 0x5f4c08u: goto label_5f4c08;
        case 0x5f4c0cu: goto label_5f4c0c;
        case 0x5f4c10u: goto label_5f4c10;
        case 0x5f4c14u: goto label_5f4c14;
        case 0x5f4c18u: goto label_5f4c18;
        case 0x5f4c1cu: goto label_5f4c1c;
        case 0x5f4c20u: goto label_5f4c20;
        case 0x5f4c24u: goto label_5f4c24;
        case 0x5f4c28u: goto label_5f4c28;
        case 0x5f4c2cu: goto label_5f4c2c;
        case 0x5f4c30u: goto label_5f4c30;
        case 0x5f4c34u: goto label_5f4c34;
        case 0x5f4c38u: goto label_5f4c38;
        case 0x5f4c3cu: goto label_5f4c3c;
        case 0x5f4c40u: goto label_5f4c40;
        case 0x5f4c44u: goto label_5f4c44;
        case 0x5f4c48u: goto label_5f4c48;
        case 0x5f4c4cu: goto label_5f4c4c;
        case 0x5f4c50u: goto label_5f4c50;
        case 0x5f4c54u: goto label_5f4c54;
        case 0x5f4c58u: goto label_5f4c58;
        case 0x5f4c5cu: goto label_5f4c5c;
        case 0x5f4c60u: goto label_5f4c60;
        case 0x5f4c64u: goto label_5f4c64;
        case 0x5f4c68u: goto label_5f4c68;
        case 0x5f4c6cu: goto label_5f4c6c;
        case 0x5f4c70u: goto label_5f4c70;
        case 0x5f4c74u: goto label_5f4c74;
        case 0x5f4c78u: goto label_5f4c78;
        case 0x5f4c7cu: goto label_5f4c7c;
        case 0x5f4c80u: goto label_5f4c80;
        case 0x5f4c84u: goto label_5f4c84;
        case 0x5f4c88u: goto label_5f4c88;
        case 0x5f4c8cu: goto label_5f4c8c;
        case 0x5f4c90u: goto label_5f4c90;
        case 0x5f4c94u: goto label_5f4c94;
        case 0x5f4c98u: goto label_5f4c98;
        case 0x5f4c9cu: goto label_5f4c9c;
        case 0x5f4ca0u: goto label_5f4ca0;
        case 0x5f4ca4u: goto label_5f4ca4;
        case 0x5f4ca8u: goto label_5f4ca8;
        case 0x5f4cacu: goto label_5f4cac;
        case 0x5f4cb0u: goto label_5f4cb0;
        case 0x5f4cb4u: goto label_5f4cb4;
        case 0x5f4cb8u: goto label_5f4cb8;
        case 0x5f4cbcu: goto label_5f4cbc;
        case 0x5f4cc0u: goto label_5f4cc0;
        case 0x5f4cc4u: goto label_5f4cc4;
        case 0x5f4cc8u: goto label_5f4cc8;
        case 0x5f4cccu: goto label_5f4ccc;
        case 0x5f4cd0u: goto label_5f4cd0;
        case 0x5f4cd4u: goto label_5f4cd4;
        case 0x5f4cd8u: goto label_5f4cd8;
        case 0x5f4cdcu: goto label_5f4cdc;
        case 0x5f4ce0u: goto label_5f4ce0;
        case 0x5f4ce4u: goto label_5f4ce4;
        case 0x5f4ce8u: goto label_5f4ce8;
        case 0x5f4cecu: goto label_5f4cec;
        case 0x5f4cf0u: goto label_5f4cf0;
        case 0x5f4cf4u: goto label_5f4cf4;
        case 0x5f4cf8u: goto label_5f4cf8;
        case 0x5f4cfcu: goto label_5f4cfc;
        case 0x5f4d00u: goto label_5f4d00;
        case 0x5f4d04u: goto label_5f4d04;
        case 0x5f4d08u: goto label_5f4d08;
        case 0x5f4d0cu: goto label_5f4d0c;
        case 0x5f4d10u: goto label_5f4d10;
        case 0x5f4d14u: goto label_5f4d14;
        case 0x5f4d18u: goto label_5f4d18;
        case 0x5f4d1cu: goto label_5f4d1c;
        case 0x5f4d20u: goto label_5f4d20;
        case 0x5f4d24u: goto label_5f4d24;
        case 0x5f4d28u: goto label_5f4d28;
        case 0x5f4d2cu: goto label_5f4d2c;
        case 0x5f4d30u: goto label_5f4d30;
        case 0x5f4d34u: goto label_5f4d34;
        case 0x5f4d38u: goto label_5f4d38;
        case 0x5f4d3cu: goto label_5f4d3c;
        case 0x5f4d40u: goto label_5f4d40;
        case 0x5f4d44u: goto label_5f4d44;
        case 0x5f4d48u: goto label_5f4d48;
        case 0x5f4d4cu: goto label_5f4d4c;
        case 0x5f4d50u: goto label_5f4d50;
        case 0x5f4d54u: goto label_5f4d54;
        case 0x5f4d58u: goto label_5f4d58;
        case 0x5f4d5cu: goto label_5f4d5c;
        case 0x5f4d60u: goto label_5f4d60;
        case 0x5f4d64u: goto label_5f4d64;
        case 0x5f4d68u: goto label_5f4d68;
        case 0x5f4d6cu: goto label_5f4d6c;
        case 0x5f4d70u: goto label_5f4d70;
        case 0x5f4d74u: goto label_5f4d74;
        case 0x5f4d78u: goto label_5f4d78;
        case 0x5f4d7cu: goto label_5f4d7c;
        case 0x5f4d80u: goto label_5f4d80;
        case 0x5f4d84u: goto label_5f4d84;
        case 0x5f4d88u: goto label_5f4d88;
        case 0x5f4d8cu: goto label_5f4d8c;
        case 0x5f4d90u: goto label_5f4d90;
        case 0x5f4d94u: goto label_5f4d94;
        case 0x5f4d98u: goto label_5f4d98;
        case 0x5f4d9cu: goto label_5f4d9c;
        case 0x5f4da0u: goto label_5f4da0;
        case 0x5f4da4u: goto label_5f4da4;
        case 0x5f4da8u: goto label_5f4da8;
        case 0x5f4dacu: goto label_5f4dac;
        case 0x5f4db0u: goto label_5f4db0;
        case 0x5f4db4u: goto label_5f4db4;
        case 0x5f4db8u: goto label_5f4db8;
        case 0x5f4dbcu: goto label_5f4dbc;
        case 0x5f4dc0u: goto label_5f4dc0;
        case 0x5f4dc4u: goto label_5f4dc4;
        case 0x5f4dc8u: goto label_5f4dc8;
        case 0x5f4dccu: goto label_5f4dcc;
        case 0x5f4dd0u: goto label_5f4dd0;
        case 0x5f4dd4u: goto label_5f4dd4;
        case 0x5f4dd8u: goto label_5f4dd8;
        case 0x5f4ddcu: goto label_5f4ddc;
        case 0x5f4de0u: goto label_5f4de0;
        case 0x5f4de4u: goto label_5f4de4;
        case 0x5f4de8u: goto label_5f4de8;
        case 0x5f4decu: goto label_5f4dec;
        case 0x5f4df0u: goto label_5f4df0;
        case 0x5f4df4u: goto label_5f4df4;
        case 0x5f4df8u: goto label_5f4df8;
        case 0x5f4dfcu: goto label_5f4dfc;
        case 0x5f4e00u: goto label_5f4e00;
        case 0x5f4e04u: goto label_5f4e04;
        case 0x5f4e08u: goto label_5f4e08;
        case 0x5f4e0cu: goto label_5f4e0c;
        case 0x5f4e10u: goto label_5f4e10;
        case 0x5f4e14u: goto label_5f4e14;
        case 0x5f4e18u: goto label_5f4e18;
        case 0x5f4e1cu: goto label_5f4e1c;
        case 0x5f4e20u: goto label_5f4e20;
        case 0x5f4e24u: goto label_5f4e24;
        case 0x5f4e28u: goto label_5f4e28;
        case 0x5f4e2cu: goto label_5f4e2c;
        case 0x5f4e30u: goto label_5f4e30;
        case 0x5f4e34u: goto label_5f4e34;
        case 0x5f4e38u: goto label_5f4e38;
        case 0x5f4e3cu: goto label_5f4e3c;
        case 0x5f4e40u: goto label_5f4e40;
        case 0x5f4e44u: goto label_5f4e44;
        case 0x5f4e48u: goto label_5f4e48;
        case 0x5f4e4cu: goto label_5f4e4c;
        case 0x5f4e50u: goto label_5f4e50;
        case 0x5f4e54u: goto label_5f4e54;
        case 0x5f4e58u: goto label_5f4e58;
        case 0x5f4e5cu: goto label_5f4e5c;
        case 0x5f4e60u: goto label_5f4e60;
        case 0x5f4e64u: goto label_5f4e64;
        case 0x5f4e68u: goto label_5f4e68;
        case 0x5f4e6cu: goto label_5f4e6c;
        case 0x5f4e70u: goto label_5f4e70;
        case 0x5f4e74u: goto label_5f4e74;
        case 0x5f4e78u: goto label_5f4e78;
        case 0x5f4e7cu: goto label_5f4e7c;
        case 0x5f4e80u: goto label_5f4e80;
        case 0x5f4e84u: goto label_5f4e84;
        case 0x5f4e88u: goto label_5f4e88;
        case 0x5f4e8cu: goto label_5f4e8c;
        case 0x5f4e90u: goto label_5f4e90;
        case 0x5f4e94u: goto label_5f4e94;
        case 0x5f4e98u: goto label_5f4e98;
        case 0x5f4e9cu: goto label_5f4e9c;
        case 0x5f4ea0u: goto label_5f4ea0;
        case 0x5f4ea4u: goto label_5f4ea4;
        case 0x5f4ea8u: goto label_5f4ea8;
        case 0x5f4eacu: goto label_5f4eac;
        case 0x5f4eb0u: goto label_5f4eb0;
        case 0x5f4eb4u: goto label_5f4eb4;
        case 0x5f4eb8u: goto label_5f4eb8;
        case 0x5f4ebcu: goto label_5f4ebc;
        case 0x5f4ec0u: goto label_5f4ec0;
        case 0x5f4ec4u: goto label_5f4ec4;
        case 0x5f4ec8u: goto label_5f4ec8;
        case 0x5f4eccu: goto label_5f4ecc;
        case 0x5f4ed0u: goto label_5f4ed0;
        case 0x5f4ed4u: goto label_5f4ed4;
        case 0x5f4ed8u: goto label_5f4ed8;
        case 0x5f4edcu: goto label_5f4edc;
        case 0x5f4ee0u: goto label_5f4ee0;
        case 0x5f4ee4u: goto label_5f4ee4;
        case 0x5f4ee8u: goto label_5f4ee8;
        case 0x5f4eecu: goto label_5f4eec;
        case 0x5f4ef0u: goto label_5f4ef0;
        case 0x5f4ef4u: goto label_5f4ef4;
        case 0x5f4ef8u: goto label_5f4ef8;
        case 0x5f4efcu: goto label_5f4efc;
        case 0x5f4f00u: goto label_5f4f00;
        case 0x5f4f04u: goto label_5f4f04;
        case 0x5f4f08u: goto label_5f4f08;
        case 0x5f4f0cu: goto label_5f4f0c;
        case 0x5f4f10u: goto label_5f4f10;
        case 0x5f4f14u: goto label_5f4f14;
        case 0x5f4f18u: goto label_5f4f18;
        case 0x5f4f1cu: goto label_5f4f1c;
        case 0x5f4f20u: goto label_5f4f20;
        case 0x5f4f24u: goto label_5f4f24;
        case 0x5f4f28u: goto label_5f4f28;
        case 0x5f4f2cu: goto label_5f4f2c;
        case 0x5f4f30u: goto label_5f4f30;
        case 0x5f4f34u: goto label_5f4f34;
        case 0x5f4f38u: goto label_5f4f38;
        case 0x5f4f3cu: goto label_5f4f3c;
        case 0x5f4f40u: goto label_5f4f40;
        case 0x5f4f44u: goto label_5f4f44;
        case 0x5f4f48u: goto label_5f4f48;
        case 0x5f4f4cu: goto label_5f4f4c;
        case 0x5f4f50u: goto label_5f4f50;
        case 0x5f4f54u: goto label_5f4f54;
        case 0x5f4f58u: goto label_5f4f58;
        case 0x5f4f5cu: goto label_5f4f5c;
        case 0x5f4f60u: goto label_5f4f60;
        case 0x5f4f64u: goto label_5f4f64;
        case 0x5f4f68u: goto label_5f4f68;
        case 0x5f4f6cu: goto label_5f4f6c;
        case 0x5f4f70u: goto label_5f4f70;
        case 0x5f4f74u: goto label_5f4f74;
        case 0x5f4f78u: goto label_5f4f78;
        case 0x5f4f7cu: goto label_5f4f7c;
        case 0x5f4f80u: goto label_5f4f80;
        case 0x5f4f84u: goto label_5f4f84;
        case 0x5f4f88u: goto label_5f4f88;
        case 0x5f4f8cu: goto label_5f4f8c;
        case 0x5f4f90u: goto label_5f4f90;
        case 0x5f4f94u: goto label_5f4f94;
        case 0x5f4f98u: goto label_5f4f98;
        case 0x5f4f9cu: goto label_5f4f9c;
        case 0x5f4fa0u: goto label_5f4fa0;
        case 0x5f4fa4u: goto label_5f4fa4;
        case 0x5f4fa8u: goto label_5f4fa8;
        case 0x5f4facu: goto label_5f4fac;
        case 0x5f4fb0u: goto label_5f4fb0;
        case 0x5f4fb4u: goto label_5f4fb4;
        case 0x5f4fb8u: goto label_5f4fb8;
        case 0x5f4fbcu: goto label_5f4fbc;
        case 0x5f4fc0u: goto label_5f4fc0;
        case 0x5f4fc4u: goto label_5f4fc4;
        case 0x5f4fc8u: goto label_5f4fc8;
        case 0x5f4fccu: goto label_5f4fcc;
        case 0x5f4fd0u: goto label_5f4fd0;
        case 0x5f4fd4u: goto label_5f4fd4;
        case 0x5f4fd8u: goto label_5f4fd8;
        case 0x5f4fdcu: goto label_5f4fdc;
        case 0x5f4fe0u: goto label_5f4fe0;
        case 0x5f4fe4u: goto label_5f4fe4;
        case 0x5f4fe8u: goto label_5f4fe8;
        case 0x5f4fecu: goto label_5f4fec;
        case 0x5f4ff0u: goto label_5f4ff0;
        case 0x5f4ff4u: goto label_5f4ff4;
        case 0x5f4ff8u: goto label_5f4ff8;
        case 0x5f4ffcu: goto label_5f4ffc;
        case 0x5f5000u: goto label_5f5000;
        case 0x5f5004u: goto label_5f5004;
        case 0x5f5008u: goto label_5f5008;
        case 0x5f500cu: goto label_5f500c;
        case 0x5f5010u: goto label_5f5010;
        case 0x5f5014u: goto label_5f5014;
        case 0x5f5018u: goto label_5f5018;
        case 0x5f501cu: goto label_5f501c;
        case 0x5f5020u: goto label_5f5020;
        case 0x5f5024u: goto label_5f5024;
        case 0x5f5028u: goto label_5f5028;
        case 0x5f502cu: goto label_5f502c;
        case 0x5f5030u: goto label_5f5030;
        case 0x5f5034u: goto label_5f5034;
        case 0x5f5038u: goto label_5f5038;
        case 0x5f503cu: goto label_5f503c;
        case 0x5f5040u: goto label_5f5040;
        case 0x5f5044u: goto label_5f5044;
        case 0x5f5048u: goto label_5f5048;
        case 0x5f504cu: goto label_5f504c;
        case 0x5f5050u: goto label_5f5050;
        case 0x5f5054u: goto label_5f5054;
        case 0x5f5058u: goto label_5f5058;
        case 0x5f505cu: goto label_5f505c;
        case 0x5f5060u: goto label_5f5060;
        case 0x5f5064u: goto label_5f5064;
        case 0x5f5068u: goto label_5f5068;
        case 0x5f506cu: goto label_5f506c;
        case 0x5f5070u: goto label_5f5070;
        case 0x5f5074u: goto label_5f5074;
        case 0x5f5078u: goto label_5f5078;
        case 0x5f507cu: goto label_5f507c;
        case 0x5f5080u: goto label_5f5080;
        case 0x5f5084u: goto label_5f5084;
        case 0x5f5088u: goto label_5f5088;
        case 0x5f508cu: goto label_5f508c;
        case 0x5f5090u: goto label_5f5090;
        case 0x5f5094u: goto label_5f5094;
        case 0x5f5098u: goto label_5f5098;
        case 0x5f509cu: goto label_5f509c;
        case 0x5f50a0u: goto label_5f50a0;
        case 0x5f50a4u: goto label_5f50a4;
        case 0x5f50a8u: goto label_5f50a8;
        case 0x5f50acu: goto label_5f50ac;
        case 0x5f50b0u: goto label_5f50b0;
        case 0x5f50b4u: goto label_5f50b4;
        case 0x5f50b8u: goto label_5f50b8;
        case 0x5f50bcu: goto label_5f50bc;
        case 0x5f50c0u: goto label_5f50c0;
        case 0x5f50c4u: goto label_5f50c4;
        case 0x5f50c8u: goto label_5f50c8;
        case 0x5f50ccu: goto label_5f50cc;
        case 0x5f50d0u: goto label_5f50d0;
        case 0x5f50d4u: goto label_5f50d4;
        case 0x5f50d8u: goto label_5f50d8;
        case 0x5f50dcu: goto label_5f50dc;
        case 0x5f50e0u: goto label_5f50e0;
        case 0x5f50e4u: goto label_5f50e4;
        case 0x5f50e8u: goto label_5f50e8;
        case 0x5f50ecu: goto label_5f50ec;
        case 0x5f50f0u: goto label_5f50f0;
        case 0x5f50f4u: goto label_5f50f4;
        case 0x5f50f8u: goto label_5f50f8;
        case 0x5f50fcu: goto label_5f50fc;
        case 0x5f5100u: goto label_5f5100;
        case 0x5f5104u: goto label_5f5104;
        case 0x5f5108u: goto label_5f5108;
        case 0x5f510cu: goto label_5f510c;
        case 0x5f5110u: goto label_5f5110;
        case 0x5f5114u: goto label_5f5114;
        case 0x5f5118u: goto label_5f5118;
        case 0x5f511cu: goto label_5f511c;
        case 0x5f5120u: goto label_5f5120;
        case 0x5f5124u: goto label_5f5124;
        case 0x5f5128u: goto label_5f5128;
        case 0x5f512cu: goto label_5f512c;
        case 0x5f5130u: goto label_5f5130;
        case 0x5f5134u: goto label_5f5134;
        case 0x5f5138u: goto label_5f5138;
        case 0x5f513cu: goto label_5f513c;
        case 0x5f5140u: goto label_5f5140;
        case 0x5f5144u: goto label_5f5144;
        case 0x5f5148u: goto label_5f5148;
        case 0x5f514cu: goto label_5f514c;
        case 0x5f5150u: goto label_5f5150;
        case 0x5f5154u: goto label_5f5154;
        case 0x5f5158u: goto label_5f5158;
        case 0x5f515cu: goto label_5f515c;
        case 0x5f5160u: goto label_5f5160;
        case 0x5f5164u: goto label_5f5164;
        case 0x5f5168u: goto label_5f5168;
        case 0x5f516cu: goto label_5f516c;
        case 0x5f5170u: goto label_5f5170;
        case 0x5f5174u: goto label_5f5174;
        case 0x5f5178u: goto label_5f5178;
        case 0x5f517cu: goto label_5f517c;
        case 0x5f5180u: goto label_5f5180;
        case 0x5f5184u: goto label_5f5184;
        case 0x5f5188u: goto label_5f5188;
        case 0x5f518cu: goto label_5f518c;
        case 0x5f5190u: goto label_5f5190;
        case 0x5f5194u: goto label_5f5194;
        case 0x5f5198u: goto label_5f5198;
        case 0x5f519cu: goto label_5f519c;
        case 0x5f51a0u: goto label_5f51a0;
        case 0x5f51a4u: goto label_5f51a4;
        case 0x5f51a8u: goto label_5f51a8;
        case 0x5f51acu: goto label_5f51ac;
        case 0x5f51b0u: goto label_5f51b0;
        case 0x5f51b4u: goto label_5f51b4;
        case 0x5f51b8u: goto label_5f51b8;
        case 0x5f51bcu: goto label_5f51bc;
        case 0x5f51c0u: goto label_5f51c0;
        case 0x5f51c4u: goto label_5f51c4;
        case 0x5f51c8u: goto label_5f51c8;
        case 0x5f51ccu: goto label_5f51cc;
        case 0x5f51d0u: goto label_5f51d0;
        case 0x5f51d4u: goto label_5f51d4;
        case 0x5f51d8u: goto label_5f51d8;
        case 0x5f51dcu: goto label_5f51dc;
        case 0x5f51e0u: goto label_5f51e0;
        case 0x5f51e4u: goto label_5f51e4;
        case 0x5f51e8u: goto label_5f51e8;
        case 0x5f51ecu: goto label_5f51ec;
        case 0x5f51f0u: goto label_5f51f0;
        case 0x5f51f4u: goto label_5f51f4;
        case 0x5f51f8u: goto label_5f51f8;
        case 0x5f51fcu: goto label_5f51fc;
        case 0x5f5200u: goto label_5f5200;
        case 0x5f5204u: goto label_5f5204;
        case 0x5f5208u: goto label_5f5208;
        case 0x5f520cu: goto label_5f520c;
        case 0x5f5210u: goto label_5f5210;
        case 0x5f5214u: goto label_5f5214;
        case 0x5f5218u: goto label_5f5218;
        case 0x5f521cu: goto label_5f521c;
        case 0x5f5220u: goto label_5f5220;
        case 0x5f5224u: goto label_5f5224;
        case 0x5f5228u: goto label_5f5228;
        case 0x5f522cu: goto label_5f522c;
        case 0x5f5230u: goto label_5f5230;
        case 0x5f5234u: goto label_5f5234;
        case 0x5f5238u: goto label_5f5238;
        case 0x5f523cu: goto label_5f523c;
        case 0x5f5240u: goto label_5f5240;
        case 0x5f5244u: goto label_5f5244;
        case 0x5f5248u: goto label_5f5248;
        case 0x5f524cu: goto label_5f524c;
        case 0x5f5250u: goto label_5f5250;
        case 0x5f5254u: goto label_5f5254;
        case 0x5f5258u: goto label_5f5258;
        case 0x5f525cu: goto label_5f525c;
        case 0x5f5260u: goto label_5f5260;
        case 0x5f5264u: goto label_5f5264;
        case 0x5f5268u: goto label_5f5268;
        case 0x5f526cu: goto label_5f526c;
        case 0x5f5270u: goto label_5f5270;
        case 0x5f5274u: goto label_5f5274;
        case 0x5f5278u: goto label_5f5278;
        case 0x5f527cu: goto label_5f527c;
        case 0x5f5280u: goto label_5f5280;
        case 0x5f5284u: goto label_5f5284;
        case 0x5f5288u: goto label_5f5288;
        case 0x5f528cu: goto label_5f528c;
        case 0x5f5290u: goto label_5f5290;
        case 0x5f5294u: goto label_5f5294;
        case 0x5f5298u: goto label_5f5298;
        case 0x5f529cu: goto label_5f529c;
        case 0x5f52a0u: goto label_5f52a0;
        case 0x5f52a4u: goto label_5f52a4;
        case 0x5f52a8u: goto label_5f52a8;
        case 0x5f52acu: goto label_5f52ac;
        case 0x5f52b0u: goto label_5f52b0;
        case 0x5f52b4u: goto label_5f52b4;
        case 0x5f52b8u: goto label_5f52b8;
        case 0x5f52bcu: goto label_5f52bc;
        case 0x5f52c0u: goto label_5f52c0;
        case 0x5f52c4u: goto label_5f52c4;
        case 0x5f52c8u: goto label_5f52c8;
        case 0x5f52ccu: goto label_5f52cc;
        case 0x5f52d0u: goto label_5f52d0;
        case 0x5f52d4u: goto label_5f52d4;
        case 0x5f52d8u: goto label_5f52d8;
        case 0x5f52dcu: goto label_5f52dc;
        case 0x5f52e0u: goto label_5f52e0;
        case 0x5f52e4u: goto label_5f52e4;
        case 0x5f52e8u: goto label_5f52e8;
        case 0x5f52ecu: goto label_5f52ec;
        case 0x5f52f0u: goto label_5f52f0;
        case 0x5f52f4u: goto label_5f52f4;
        case 0x5f52f8u: goto label_5f52f8;
        case 0x5f52fcu: goto label_5f52fc;
        case 0x5f5300u: goto label_5f5300;
        case 0x5f5304u: goto label_5f5304;
        case 0x5f5308u: goto label_5f5308;
        case 0x5f530cu: goto label_5f530c;
        case 0x5f5310u: goto label_5f5310;
        case 0x5f5314u: goto label_5f5314;
        case 0x5f5318u: goto label_5f5318;
        case 0x5f531cu: goto label_5f531c;
        case 0x5f5320u: goto label_5f5320;
        case 0x5f5324u: goto label_5f5324;
        case 0x5f5328u: goto label_5f5328;
        case 0x5f532cu: goto label_5f532c;
        case 0x5f5330u: goto label_5f5330;
        case 0x5f5334u: goto label_5f5334;
        case 0x5f5338u: goto label_5f5338;
        case 0x5f533cu: goto label_5f533c;
        case 0x5f5340u: goto label_5f5340;
        case 0x5f5344u: goto label_5f5344;
        case 0x5f5348u: goto label_5f5348;
        case 0x5f534cu: goto label_5f534c;
        case 0x5f5350u: goto label_5f5350;
        case 0x5f5354u: goto label_5f5354;
        case 0x5f5358u: goto label_5f5358;
        case 0x5f535cu: goto label_5f535c;
        case 0x5f5360u: goto label_5f5360;
        case 0x5f5364u: goto label_5f5364;
        case 0x5f5368u: goto label_5f5368;
        case 0x5f536cu: goto label_5f536c;
        case 0x5f5370u: goto label_5f5370;
        case 0x5f5374u: goto label_5f5374;
        case 0x5f5378u: goto label_5f5378;
        case 0x5f537cu: goto label_5f537c;
        case 0x5f5380u: goto label_5f5380;
        case 0x5f5384u: goto label_5f5384;
        case 0x5f5388u: goto label_5f5388;
        case 0x5f538cu: goto label_5f538c;
        case 0x5f5390u: goto label_5f5390;
        case 0x5f5394u: goto label_5f5394;
        case 0x5f5398u: goto label_5f5398;
        case 0x5f539cu: goto label_5f539c;
        case 0x5f53a0u: goto label_5f53a0;
        case 0x5f53a4u: goto label_5f53a4;
        case 0x5f53a8u: goto label_5f53a8;
        case 0x5f53acu: goto label_5f53ac;
        case 0x5f53b0u: goto label_5f53b0;
        case 0x5f53b4u: goto label_5f53b4;
        case 0x5f53b8u: goto label_5f53b8;
        case 0x5f53bcu: goto label_5f53bc;
        case 0x5f53c0u: goto label_5f53c0;
        case 0x5f53c4u: goto label_5f53c4;
        case 0x5f53c8u: goto label_5f53c8;
        case 0x5f53ccu: goto label_5f53cc;
        case 0x5f53d0u: goto label_5f53d0;
        case 0x5f53d4u: goto label_5f53d4;
        case 0x5f53d8u: goto label_5f53d8;
        case 0x5f53dcu: goto label_5f53dc;
        case 0x5f53e0u: goto label_5f53e0;
        case 0x5f53e4u: goto label_5f53e4;
        case 0x5f53e8u: goto label_5f53e8;
        case 0x5f53ecu: goto label_5f53ec;
        case 0x5f53f0u: goto label_5f53f0;
        case 0x5f53f4u: goto label_5f53f4;
        case 0x5f53f8u: goto label_5f53f8;
        case 0x5f53fcu: goto label_5f53fc;
        case 0x5f5400u: goto label_5f5400;
        case 0x5f5404u: goto label_5f5404;
        case 0x5f5408u: goto label_5f5408;
        case 0x5f540cu: goto label_5f540c;
        case 0x5f5410u: goto label_5f5410;
        case 0x5f5414u: goto label_5f5414;
        case 0x5f5418u: goto label_5f5418;
        case 0x5f541cu: goto label_5f541c;
        case 0x5f5420u: goto label_5f5420;
        case 0x5f5424u: goto label_5f5424;
        case 0x5f5428u: goto label_5f5428;
        case 0x5f542cu: goto label_5f542c;
        case 0x5f5430u: goto label_5f5430;
        case 0x5f5434u: goto label_5f5434;
        case 0x5f5438u: goto label_5f5438;
        case 0x5f543cu: goto label_5f543c;
        case 0x5f5440u: goto label_5f5440;
        case 0x5f5444u: goto label_5f5444;
        case 0x5f5448u: goto label_5f5448;
        case 0x5f544cu: goto label_5f544c;
        case 0x5f5450u: goto label_5f5450;
        case 0x5f5454u: goto label_5f5454;
        case 0x5f5458u: goto label_5f5458;
        case 0x5f545cu: goto label_5f545c;
        case 0x5f5460u: goto label_5f5460;
        case 0x5f5464u: goto label_5f5464;
        case 0x5f5468u: goto label_5f5468;
        case 0x5f546cu: goto label_5f546c;
        case 0x5f5470u: goto label_5f5470;
        case 0x5f5474u: goto label_5f5474;
        case 0x5f5478u: goto label_5f5478;
        case 0x5f547cu: goto label_5f547c;
        case 0x5f5480u: goto label_5f5480;
        case 0x5f5484u: goto label_5f5484;
        case 0x5f5488u: goto label_5f5488;
        case 0x5f548cu: goto label_5f548c;
        case 0x5f5490u: goto label_5f5490;
        case 0x5f5494u: goto label_5f5494;
        case 0x5f5498u: goto label_5f5498;
        case 0x5f549cu: goto label_5f549c;
        case 0x5f54a0u: goto label_5f54a0;
        case 0x5f54a4u: goto label_5f54a4;
        case 0x5f54a8u: goto label_5f54a8;
        case 0x5f54acu: goto label_5f54ac;
        case 0x5f54b0u: goto label_5f54b0;
        case 0x5f54b4u: goto label_5f54b4;
        case 0x5f54b8u: goto label_5f54b8;
        case 0x5f54bcu: goto label_5f54bc;
        case 0x5f54c0u: goto label_5f54c0;
        case 0x5f54c4u: goto label_5f54c4;
        case 0x5f54c8u: goto label_5f54c8;
        case 0x5f54ccu: goto label_5f54cc;
        case 0x5f54d0u: goto label_5f54d0;
        case 0x5f54d4u: goto label_5f54d4;
        case 0x5f54d8u: goto label_5f54d8;
        case 0x5f54dcu: goto label_5f54dc;
        case 0x5f54e0u: goto label_5f54e0;
        case 0x5f54e4u: goto label_5f54e4;
        case 0x5f54e8u: goto label_5f54e8;
        case 0x5f54ecu: goto label_5f54ec;
        case 0x5f54f0u: goto label_5f54f0;
        case 0x5f54f4u: goto label_5f54f4;
        case 0x5f54f8u: goto label_5f54f8;
        case 0x5f54fcu: goto label_5f54fc;
        case 0x5f5500u: goto label_5f5500;
        case 0x5f5504u: goto label_5f5504;
        case 0x5f5508u: goto label_5f5508;
        case 0x5f550cu: goto label_5f550c;
        case 0x5f5510u: goto label_5f5510;
        case 0x5f5514u: goto label_5f5514;
        case 0x5f5518u: goto label_5f5518;
        case 0x5f551cu: goto label_5f551c;
        case 0x5f5520u: goto label_5f5520;
        case 0x5f5524u: goto label_5f5524;
        case 0x5f5528u: goto label_5f5528;
        case 0x5f552cu: goto label_5f552c;
        case 0x5f5530u: goto label_5f5530;
        case 0x5f5534u: goto label_5f5534;
        case 0x5f5538u: goto label_5f5538;
        case 0x5f553cu: goto label_5f553c;
        case 0x5f5540u: goto label_5f5540;
        case 0x5f5544u: goto label_5f5544;
        case 0x5f5548u: goto label_5f5548;
        case 0x5f554cu: goto label_5f554c;
        case 0x5f5550u: goto label_5f5550;
        case 0x5f5554u: goto label_5f5554;
        case 0x5f5558u: goto label_5f5558;
        case 0x5f555cu: goto label_5f555c;
        case 0x5f5560u: goto label_5f5560;
        case 0x5f5564u: goto label_5f5564;
        case 0x5f5568u: goto label_5f5568;
        case 0x5f556cu: goto label_5f556c;
        case 0x5f5570u: goto label_5f5570;
        case 0x5f5574u: goto label_5f5574;
        case 0x5f5578u: goto label_5f5578;
        case 0x5f557cu: goto label_5f557c;
        case 0x5f5580u: goto label_5f5580;
        case 0x5f5584u: goto label_5f5584;
        case 0x5f5588u: goto label_5f5588;
        case 0x5f558cu: goto label_5f558c;
        case 0x5f5590u: goto label_5f5590;
        case 0x5f5594u: goto label_5f5594;
        case 0x5f5598u: goto label_5f5598;
        case 0x5f559cu: goto label_5f559c;
        case 0x5f55a0u: goto label_5f55a0;
        case 0x5f55a4u: goto label_5f55a4;
        case 0x5f55a8u: goto label_5f55a8;
        case 0x5f55acu: goto label_5f55ac;
        case 0x5f55b0u: goto label_5f55b0;
        case 0x5f55b4u: goto label_5f55b4;
        case 0x5f55b8u: goto label_5f55b8;
        case 0x5f55bcu: goto label_5f55bc;
        case 0x5f55c0u: goto label_5f55c0;
        case 0x5f55c4u: goto label_5f55c4;
        case 0x5f55c8u: goto label_5f55c8;
        case 0x5f55ccu: goto label_5f55cc;
        case 0x5f55d0u: goto label_5f55d0;
        case 0x5f55d4u: goto label_5f55d4;
        case 0x5f55d8u: goto label_5f55d8;
        case 0x5f55dcu: goto label_5f55dc;
        case 0x5f55e0u: goto label_5f55e0;
        case 0x5f55e4u: goto label_5f55e4;
        case 0x5f55e8u: goto label_5f55e8;
        case 0x5f55ecu: goto label_5f55ec;
        case 0x5f55f0u: goto label_5f55f0;
        case 0x5f55f4u: goto label_5f55f4;
        case 0x5f55f8u: goto label_5f55f8;
        case 0x5f55fcu: goto label_5f55fc;
        case 0x5f5600u: goto label_5f5600;
        case 0x5f5604u: goto label_5f5604;
        case 0x5f5608u: goto label_5f5608;
        case 0x5f560cu: goto label_5f560c;
        case 0x5f5610u: goto label_5f5610;
        case 0x5f5614u: goto label_5f5614;
        case 0x5f5618u: goto label_5f5618;
        case 0x5f561cu: goto label_5f561c;
        case 0x5f5620u: goto label_5f5620;
        case 0x5f5624u: goto label_5f5624;
        case 0x5f5628u: goto label_5f5628;
        case 0x5f562cu: goto label_5f562c;
        case 0x5f5630u: goto label_5f5630;
        case 0x5f5634u: goto label_5f5634;
        case 0x5f5638u: goto label_5f5638;
        case 0x5f563cu: goto label_5f563c;
        case 0x5f5640u: goto label_5f5640;
        case 0x5f5644u: goto label_5f5644;
        case 0x5f5648u: goto label_5f5648;
        case 0x5f564cu: goto label_5f564c;
        case 0x5f5650u: goto label_5f5650;
        case 0x5f5654u: goto label_5f5654;
        case 0x5f5658u: goto label_5f5658;
        case 0x5f565cu: goto label_5f565c;
        case 0x5f5660u: goto label_5f5660;
        case 0x5f5664u: goto label_5f5664;
        case 0x5f5668u: goto label_5f5668;
        case 0x5f566cu: goto label_5f566c;
        case 0x5f5670u: goto label_5f5670;
        case 0x5f5674u: goto label_5f5674;
        case 0x5f5678u: goto label_5f5678;
        case 0x5f567cu: goto label_5f567c;
        case 0x5f5680u: goto label_5f5680;
        case 0x5f5684u: goto label_5f5684;
        case 0x5f5688u: goto label_5f5688;
        case 0x5f568cu: goto label_5f568c;
        case 0x5f5690u: goto label_5f5690;
        case 0x5f5694u: goto label_5f5694;
        case 0x5f5698u: goto label_5f5698;
        case 0x5f569cu: goto label_5f569c;
        case 0x5f56a0u: goto label_5f56a0;
        case 0x5f56a4u: goto label_5f56a4;
        case 0x5f56a8u: goto label_5f56a8;
        case 0x5f56acu: goto label_5f56ac;
        case 0x5f56b0u: goto label_5f56b0;
        case 0x5f56b4u: goto label_5f56b4;
        case 0x5f56b8u: goto label_5f56b8;
        case 0x5f56bcu: goto label_5f56bc;
        case 0x5f56c0u: goto label_5f56c0;
        case 0x5f56c4u: goto label_5f56c4;
        case 0x5f56c8u: goto label_5f56c8;
        case 0x5f56ccu: goto label_5f56cc;
        case 0x5f56d0u: goto label_5f56d0;
        case 0x5f56d4u: goto label_5f56d4;
        case 0x5f56d8u: goto label_5f56d8;
        case 0x5f56dcu: goto label_5f56dc;
        case 0x5f56e0u: goto label_5f56e0;
        case 0x5f56e4u: goto label_5f56e4;
        case 0x5f56e8u: goto label_5f56e8;
        case 0x5f56ecu: goto label_5f56ec;
        case 0x5f56f0u: goto label_5f56f0;
        case 0x5f56f4u: goto label_5f56f4;
        case 0x5f56f8u: goto label_5f56f8;
        case 0x5f56fcu: goto label_5f56fc;
        case 0x5f5700u: goto label_5f5700;
        case 0x5f5704u: goto label_5f5704;
        case 0x5f5708u: goto label_5f5708;
        case 0x5f570cu: goto label_5f570c;
        case 0x5f5710u: goto label_5f5710;
        case 0x5f5714u: goto label_5f5714;
        case 0x5f5718u: goto label_5f5718;
        case 0x5f571cu: goto label_5f571c;
        case 0x5f5720u: goto label_5f5720;
        case 0x5f5724u: goto label_5f5724;
        case 0x5f5728u: goto label_5f5728;
        case 0x5f572cu: goto label_5f572c;
        case 0x5f5730u: goto label_5f5730;
        case 0x5f5734u: goto label_5f5734;
        case 0x5f5738u: goto label_5f5738;
        case 0x5f573cu: goto label_5f573c;
        case 0x5f5740u: goto label_5f5740;
        case 0x5f5744u: goto label_5f5744;
        case 0x5f5748u: goto label_5f5748;
        case 0x5f574cu: goto label_5f574c;
        case 0x5f5750u: goto label_5f5750;
        case 0x5f5754u: goto label_5f5754;
        case 0x5f5758u: goto label_5f5758;
        case 0x5f575cu: goto label_5f575c;
        case 0x5f5760u: goto label_5f5760;
        case 0x5f5764u: goto label_5f5764;
        case 0x5f5768u: goto label_5f5768;
        case 0x5f576cu: goto label_5f576c;
        case 0x5f5770u: goto label_5f5770;
        case 0x5f5774u: goto label_5f5774;
        case 0x5f5778u: goto label_5f5778;
        case 0x5f577cu: goto label_5f577c;
        case 0x5f5780u: goto label_5f5780;
        case 0x5f5784u: goto label_5f5784;
        case 0x5f5788u: goto label_5f5788;
        case 0x5f578cu: goto label_5f578c;
        case 0x5f5790u: goto label_5f5790;
        case 0x5f5794u: goto label_5f5794;
        case 0x5f5798u: goto label_5f5798;
        case 0x5f579cu: goto label_5f579c;
        case 0x5f57a0u: goto label_5f57a0;
        case 0x5f57a4u: goto label_5f57a4;
        case 0x5f57a8u: goto label_5f57a8;
        case 0x5f57acu: goto label_5f57ac;
        case 0x5f57b0u: goto label_5f57b0;
        case 0x5f57b4u: goto label_5f57b4;
        case 0x5f57b8u: goto label_5f57b8;
        case 0x5f57bcu: goto label_5f57bc;
        case 0x5f57c0u: goto label_5f57c0;
        case 0x5f57c4u: goto label_5f57c4;
        case 0x5f57c8u: goto label_5f57c8;
        case 0x5f57ccu: goto label_5f57cc;
        case 0x5f57d0u: goto label_5f57d0;
        case 0x5f57d4u: goto label_5f57d4;
        case 0x5f57d8u: goto label_5f57d8;
        case 0x5f57dcu: goto label_5f57dc;
        case 0x5f57e0u: goto label_5f57e0;
        case 0x5f57e4u: goto label_5f57e4;
        case 0x5f57e8u: goto label_5f57e8;
        case 0x5f57ecu: goto label_5f57ec;
        case 0x5f57f0u: goto label_5f57f0;
        case 0x5f57f4u: goto label_5f57f4;
        case 0x5f57f8u: goto label_5f57f8;
        case 0x5f57fcu: goto label_5f57fc;
        case 0x5f5800u: goto label_5f5800;
        case 0x5f5804u: goto label_5f5804;
        case 0x5f5808u: goto label_5f5808;
        case 0x5f580cu: goto label_5f580c;
        case 0x5f5810u: goto label_5f5810;
        case 0x5f5814u: goto label_5f5814;
        case 0x5f5818u: goto label_5f5818;
        case 0x5f581cu: goto label_5f581c;
        case 0x5f5820u: goto label_5f5820;
        case 0x5f5824u: goto label_5f5824;
        case 0x5f5828u: goto label_5f5828;
        case 0x5f582cu: goto label_5f582c;
        case 0x5f5830u: goto label_5f5830;
        case 0x5f5834u: goto label_5f5834;
        case 0x5f5838u: goto label_5f5838;
        case 0x5f583cu: goto label_5f583c;
        case 0x5f5840u: goto label_5f5840;
        case 0x5f5844u: goto label_5f5844;
        case 0x5f5848u: goto label_5f5848;
        case 0x5f584cu: goto label_5f584c;
        case 0x5f5850u: goto label_5f5850;
        case 0x5f5854u: goto label_5f5854;
        case 0x5f5858u: goto label_5f5858;
        case 0x5f585cu: goto label_5f585c;
        case 0x5f5860u: goto label_5f5860;
        case 0x5f5864u: goto label_5f5864;
        case 0x5f5868u: goto label_5f5868;
        case 0x5f586cu: goto label_5f586c;
        case 0x5f5870u: goto label_5f5870;
        case 0x5f5874u: goto label_5f5874;
        case 0x5f5878u: goto label_5f5878;
        case 0x5f587cu: goto label_5f587c;
        case 0x5f5880u: goto label_5f5880;
        case 0x5f5884u: goto label_5f5884;
        case 0x5f5888u: goto label_5f5888;
        case 0x5f588cu: goto label_5f588c;
        case 0x5f5890u: goto label_5f5890;
        case 0x5f5894u: goto label_5f5894;
        case 0x5f5898u: goto label_5f5898;
        case 0x5f589cu: goto label_5f589c;
        case 0x5f58a0u: goto label_5f58a0;
        case 0x5f58a4u: goto label_5f58a4;
        case 0x5f58a8u: goto label_5f58a8;
        case 0x5f58acu: goto label_5f58ac;
        case 0x5f58b0u: goto label_5f58b0;
        case 0x5f58b4u: goto label_5f58b4;
        case 0x5f58b8u: goto label_5f58b8;
        case 0x5f58bcu: goto label_5f58bc;
        case 0x5f58c0u: goto label_5f58c0;
        case 0x5f58c4u: goto label_5f58c4;
        case 0x5f58c8u: goto label_5f58c8;
        case 0x5f58ccu: goto label_5f58cc;
        case 0x5f58d0u: goto label_5f58d0;
        case 0x5f58d4u: goto label_5f58d4;
        case 0x5f58d8u: goto label_5f58d8;
        case 0x5f58dcu: goto label_5f58dc;
        case 0x5f58e0u: goto label_5f58e0;
        case 0x5f58e4u: goto label_5f58e4;
        case 0x5f58e8u: goto label_5f58e8;
        case 0x5f58ecu: goto label_5f58ec;
        case 0x5f58f0u: goto label_5f58f0;
        case 0x5f58f4u: goto label_5f58f4;
        case 0x5f58f8u: goto label_5f58f8;
        case 0x5f58fcu: goto label_5f58fc;
        case 0x5f5900u: goto label_5f5900;
        case 0x5f5904u: goto label_5f5904;
        case 0x5f5908u: goto label_5f5908;
        case 0x5f590cu: goto label_5f590c;
        case 0x5f5910u: goto label_5f5910;
        case 0x5f5914u: goto label_5f5914;
        case 0x5f5918u: goto label_5f5918;
        case 0x5f591cu: goto label_5f591c;
        case 0x5f5920u: goto label_5f5920;
        case 0x5f5924u: goto label_5f5924;
        case 0x5f5928u: goto label_5f5928;
        case 0x5f592cu: goto label_5f592c;
        case 0x5f5930u: goto label_5f5930;
        case 0x5f5934u: goto label_5f5934;
        case 0x5f5938u: goto label_5f5938;
        case 0x5f593cu: goto label_5f593c;
        case 0x5f5940u: goto label_5f5940;
        case 0x5f5944u: goto label_5f5944;
        case 0x5f5948u: goto label_5f5948;
        case 0x5f594cu: goto label_5f594c;
        case 0x5f5950u: goto label_5f5950;
        case 0x5f5954u: goto label_5f5954;
        case 0x5f5958u: goto label_5f5958;
        case 0x5f595cu: goto label_5f595c;
        case 0x5f5960u: goto label_5f5960;
        case 0x5f5964u: goto label_5f5964;
        case 0x5f5968u: goto label_5f5968;
        case 0x5f596cu: goto label_5f596c;
        case 0x5f5970u: goto label_5f5970;
        case 0x5f5974u: goto label_5f5974;
        case 0x5f5978u: goto label_5f5978;
        case 0x5f597cu: goto label_5f597c;
        case 0x5f5980u: goto label_5f5980;
        case 0x5f5984u: goto label_5f5984;
        case 0x5f5988u: goto label_5f5988;
        case 0x5f598cu: goto label_5f598c;
        case 0x5f5990u: goto label_5f5990;
        case 0x5f5994u: goto label_5f5994;
        case 0x5f5998u: goto label_5f5998;
        case 0x5f599cu: goto label_5f599c;
        case 0x5f59a0u: goto label_5f59a0;
        case 0x5f59a4u: goto label_5f59a4;
        case 0x5f59a8u: goto label_5f59a8;
        case 0x5f59acu: goto label_5f59ac;
        case 0x5f59b0u: goto label_5f59b0;
        case 0x5f59b4u: goto label_5f59b4;
        case 0x5f59b8u: goto label_5f59b8;
        case 0x5f59bcu: goto label_5f59bc;
        case 0x5f59c0u: goto label_5f59c0;
        case 0x5f59c4u: goto label_5f59c4;
        case 0x5f59c8u: goto label_5f59c8;
        case 0x5f59ccu: goto label_5f59cc;
        case 0x5f59d0u: goto label_5f59d0;
        case 0x5f59d4u: goto label_5f59d4;
        case 0x5f59d8u: goto label_5f59d8;
        case 0x5f59dcu: goto label_5f59dc;
        case 0x5f59e0u: goto label_5f59e0;
        case 0x5f59e4u: goto label_5f59e4;
        case 0x5f59e8u: goto label_5f59e8;
        case 0x5f59ecu: goto label_5f59ec;
        case 0x5f59f0u: goto label_5f59f0;
        case 0x5f59f4u: goto label_5f59f4;
        case 0x5f59f8u: goto label_5f59f8;
        case 0x5f59fcu: goto label_5f59fc;
        case 0x5f5a00u: goto label_5f5a00;
        case 0x5f5a04u: goto label_5f5a04;
        case 0x5f5a08u: goto label_5f5a08;
        case 0x5f5a0cu: goto label_5f5a0c;
        case 0x5f5a10u: goto label_5f5a10;
        case 0x5f5a14u: goto label_5f5a14;
        case 0x5f5a18u: goto label_5f5a18;
        case 0x5f5a1cu: goto label_5f5a1c;
        case 0x5f5a20u: goto label_5f5a20;
        case 0x5f5a24u: goto label_5f5a24;
        case 0x5f5a28u: goto label_5f5a28;
        case 0x5f5a2cu: goto label_5f5a2c;
        case 0x5f5a30u: goto label_5f5a30;
        case 0x5f5a34u: goto label_5f5a34;
        case 0x5f5a38u: goto label_5f5a38;
        case 0x5f5a3cu: goto label_5f5a3c;
        case 0x5f5a40u: goto label_5f5a40;
        case 0x5f5a44u: goto label_5f5a44;
        case 0x5f5a48u: goto label_5f5a48;
        case 0x5f5a4cu: goto label_5f5a4c;
        case 0x5f5a50u: goto label_5f5a50;
        case 0x5f5a54u: goto label_5f5a54;
        case 0x5f5a58u: goto label_5f5a58;
        case 0x5f5a5cu: goto label_5f5a5c;
        case 0x5f5a60u: goto label_5f5a60;
        case 0x5f5a64u: goto label_5f5a64;
        case 0x5f5a68u: goto label_5f5a68;
        case 0x5f5a6cu: goto label_5f5a6c;
        case 0x5f5a70u: goto label_5f5a70;
        case 0x5f5a74u: goto label_5f5a74;
        case 0x5f5a78u: goto label_5f5a78;
        case 0x5f5a7cu: goto label_5f5a7c;
        case 0x5f5a80u: goto label_5f5a80;
        case 0x5f5a84u: goto label_5f5a84;
        case 0x5f5a88u: goto label_5f5a88;
        case 0x5f5a8cu: goto label_5f5a8c;
        case 0x5f5a90u: goto label_5f5a90;
        case 0x5f5a94u: goto label_5f5a94;
        case 0x5f5a98u: goto label_5f5a98;
        case 0x5f5a9cu: goto label_5f5a9c;
        case 0x5f5aa0u: goto label_5f5aa0;
        case 0x5f5aa4u: goto label_5f5aa4;
        case 0x5f5aa8u: goto label_5f5aa8;
        case 0x5f5aacu: goto label_5f5aac;
        case 0x5f5ab0u: goto label_5f5ab0;
        case 0x5f5ab4u: goto label_5f5ab4;
        case 0x5f5ab8u: goto label_5f5ab8;
        case 0x5f5abcu: goto label_5f5abc;
        case 0x5f5ac0u: goto label_5f5ac0;
        case 0x5f5ac4u: goto label_5f5ac4;
        case 0x5f5ac8u: goto label_5f5ac8;
        case 0x5f5accu: goto label_5f5acc;
        case 0x5f5ad0u: goto label_5f5ad0;
        case 0x5f5ad4u: goto label_5f5ad4;
        case 0x5f5ad8u: goto label_5f5ad8;
        case 0x5f5adcu: goto label_5f5adc;
        case 0x5f5ae0u: goto label_5f5ae0;
        case 0x5f5ae4u: goto label_5f5ae4;
        case 0x5f5ae8u: goto label_5f5ae8;
        case 0x5f5aecu: goto label_5f5aec;
        case 0x5f5af0u: goto label_5f5af0;
        case 0x5f5af4u: goto label_5f5af4;
        case 0x5f5af8u: goto label_5f5af8;
        case 0x5f5afcu: goto label_5f5afc;
        case 0x5f5b00u: goto label_5f5b00;
        case 0x5f5b04u: goto label_5f5b04;
        case 0x5f5b08u: goto label_5f5b08;
        case 0x5f5b0cu: goto label_5f5b0c;
        case 0x5f5b10u: goto label_5f5b10;
        case 0x5f5b14u: goto label_5f5b14;
        case 0x5f5b18u: goto label_5f5b18;
        case 0x5f5b1cu: goto label_5f5b1c;
        case 0x5f5b20u: goto label_5f5b20;
        case 0x5f5b24u: goto label_5f5b24;
        case 0x5f5b28u: goto label_5f5b28;
        case 0x5f5b2cu: goto label_5f5b2c;
        case 0x5f5b30u: goto label_5f5b30;
        case 0x5f5b34u: goto label_5f5b34;
        case 0x5f5b38u: goto label_5f5b38;
        case 0x5f5b3cu: goto label_5f5b3c;
        case 0x5f5b40u: goto label_5f5b40;
        case 0x5f5b44u: goto label_5f5b44;
        case 0x5f5b48u: goto label_5f5b48;
        case 0x5f5b4cu: goto label_5f5b4c;
        case 0x5f5b50u: goto label_5f5b50;
        case 0x5f5b54u: goto label_5f5b54;
        case 0x5f5b58u: goto label_5f5b58;
        case 0x5f5b5cu: goto label_5f5b5c;
        case 0x5f5b60u: goto label_5f5b60;
        case 0x5f5b64u: goto label_5f5b64;
        case 0x5f5b68u: goto label_5f5b68;
        case 0x5f5b6cu: goto label_5f5b6c;
        case 0x5f5b70u: goto label_5f5b70;
        case 0x5f5b74u: goto label_5f5b74;
        case 0x5f5b78u: goto label_5f5b78;
        case 0x5f5b7cu: goto label_5f5b7c;
        case 0x5f5b80u: goto label_5f5b80;
        case 0x5f5b84u: goto label_5f5b84;
        case 0x5f5b88u: goto label_5f5b88;
        case 0x5f5b8cu: goto label_5f5b8c;
        case 0x5f5b90u: goto label_5f5b90;
        case 0x5f5b94u: goto label_5f5b94;
        case 0x5f5b98u: goto label_5f5b98;
        case 0x5f5b9cu: goto label_5f5b9c;
        case 0x5f5ba0u: goto label_5f5ba0;
        case 0x5f5ba4u: goto label_5f5ba4;
        case 0x5f5ba8u: goto label_5f5ba8;
        case 0x5f5bacu: goto label_5f5bac;
        case 0x5f5bb0u: goto label_5f5bb0;
        case 0x5f5bb4u: goto label_5f5bb4;
        case 0x5f5bb8u: goto label_5f5bb8;
        case 0x5f5bbcu: goto label_5f5bbc;
        case 0x5f5bc0u: goto label_5f5bc0;
        case 0x5f5bc4u: goto label_5f5bc4;
        case 0x5f5bc8u: goto label_5f5bc8;
        case 0x5f5bccu: goto label_5f5bcc;
        case 0x5f5bd0u: goto label_5f5bd0;
        case 0x5f5bd4u: goto label_5f5bd4;
        case 0x5f5bd8u: goto label_5f5bd8;
        case 0x5f5bdcu: goto label_5f5bdc;
        case 0x5f5be0u: goto label_5f5be0;
        case 0x5f5be4u: goto label_5f5be4;
        case 0x5f5be8u: goto label_5f5be8;
        case 0x5f5becu: goto label_5f5bec;
        case 0x5f5bf0u: goto label_5f5bf0;
        case 0x5f5bf4u: goto label_5f5bf4;
        case 0x5f5bf8u: goto label_5f5bf8;
        case 0x5f5bfcu: goto label_5f5bfc;
        case 0x5f5c00u: goto label_5f5c00;
        case 0x5f5c04u: goto label_5f5c04;
        case 0x5f5c08u: goto label_5f5c08;
        case 0x5f5c0cu: goto label_5f5c0c;
        case 0x5f5c10u: goto label_5f5c10;
        case 0x5f5c14u: goto label_5f5c14;
        case 0x5f5c18u: goto label_5f5c18;
        case 0x5f5c1cu: goto label_5f5c1c;
        case 0x5f5c20u: goto label_5f5c20;
        case 0x5f5c24u: goto label_5f5c24;
        case 0x5f5c28u: goto label_5f5c28;
        case 0x5f5c2cu: goto label_5f5c2c;
        case 0x5f5c30u: goto label_5f5c30;
        case 0x5f5c34u: goto label_5f5c34;
        case 0x5f5c38u: goto label_5f5c38;
        case 0x5f5c3cu: goto label_5f5c3c;
        case 0x5f5c40u: goto label_5f5c40;
        case 0x5f5c44u: goto label_5f5c44;
        case 0x5f5c48u: goto label_5f5c48;
        case 0x5f5c4cu: goto label_5f5c4c;
        case 0x5f5c50u: goto label_5f5c50;
        case 0x5f5c54u: goto label_5f5c54;
        case 0x5f5c58u: goto label_5f5c58;
        case 0x5f5c5cu: goto label_5f5c5c;
        case 0x5f5c60u: goto label_5f5c60;
        case 0x5f5c64u: goto label_5f5c64;
        case 0x5f5c68u: goto label_5f5c68;
        case 0x5f5c6cu: goto label_5f5c6c;
        case 0x5f5c70u: goto label_5f5c70;
        case 0x5f5c74u: goto label_5f5c74;
        case 0x5f5c78u: goto label_5f5c78;
        case 0x5f5c7cu: goto label_5f5c7c;
        case 0x5f5c80u: goto label_5f5c80;
        case 0x5f5c84u: goto label_5f5c84;
        case 0x5f5c88u: goto label_5f5c88;
        case 0x5f5c8cu: goto label_5f5c8c;
        case 0x5f5c90u: goto label_5f5c90;
        case 0x5f5c94u: goto label_5f5c94;
        case 0x5f5c98u: goto label_5f5c98;
        case 0x5f5c9cu: goto label_5f5c9c;
        case 0x5f5ca0u: goto label_5f5ca0;
        case 0x5f5ca4u: goto label_5f5ca4;
        case 0x5f5ca8u: goto label_5f5ca8;
        case 0x5f5cacu: goto label_5f5cac;
        case 0x5f5cb0u: goto label_5f5cb0;
        case 0x5f5cb4u: goto label_5f5cb4;
        case 0x5f5cb8u: goto label_5f5cb8;
        case 0x5f5cbcu: goto label_5f5cbc;
        case 0x5f5cc0u: goto label_5f5cc0;
        case 0x5f5cc4u: goto label_5f5cc4;
        case 0x5f5cc8u: goto label_5f5cc8;
        case 0x5f5cccu: goto label_5f5ccc;
        case 0x5f5cd0u: goto label_5f5cd0;
        case 0x5f5cd4u: goto label_5f5cd4;
        case 0x5f5cd8u: goto label_5f5cd8;
        case 0x5f5cdcu: goto label_5f5cdc;
        case 0x5f5ce0u: goto label_5f5ce0;
        case 0x5f5ce4u: goto label_5f5ce4;
        case 0x5f5ce8u: goto label_5f5ce8;
        case 0x5f5cecu: goto label_5f5cec;
        case 0x5f5cf0u: goto label_5f5cf0;
        case 0x5f5cf4u: goto label_5f5cf4;
        case 0x5f5cf8u: goto label_5f5cf8;
        case 0x5f5cfcu: goto label_5f5cfc;
        case 0x5f5d00u: goto label_5f5d00;
        case 0x5f5d04u: goto label_5f5d04;
        case 0x5f5d08u: goto label_5f5d08;
        case 0x5f5d0cu: goto label_5f5d0c;
        case 0x5f5d10u: goto label_5f5d10;
        case 0x5f5d14u: goto label_5f5d14;
        case 0x5f5d18u: goto label_5f5d18;
        case 0x5f5d1cu: goto label_5f5d1c;
        case 0x5f5d20u: goto label_5f5d20;
        case 0x5f5d24u: goto label_5f5d24;
        case 0x5f5d28u: goto label_5f5d28;
        case 0x5f5d2cu: goto label_5f5d2c;
        case 0x5f5d30u: goto label_5f5d30;
        case 0x5f5d34u: goto label_5f5d34;
        case 0x5f5d38u: goto label_5f5d38;
        case 0x5f5d3cu: goto label_5f5d3c;
        case 0x5f5d40u: goto label_5f5d40;
        case 0x5f5d44u: goto label_5f5d44;
        case 0x5f5d48u: goto label_5f5d48;
        case 0x5f5d4cu: goto label_5f5d4c;
        case 0x5f5d50u: goto label_5f5d50;
        case 0x5f5d54u: goto label_5f5d54;
        case 0x5f5d58u: goto label_5f5d58;
        case 0x5f5d5cu: goto label_5f5d5c;
        case 0x5f5d60u: goto label_5f5d60;
        case 0x5f5d64u: goto label_5f5d64;
        default: break;
    }

    ctx->pc = 0x5f43c0u;

label_5f43c0:
    // 0x5f43c0: 0x49414620  .word       0x49414620                   # INVALID     $t2, $at, 0x4620 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f43c0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F43C0 raw=0x49414620");
label_5f43c4:
    // 0x5f43c4: 0xa44454c  j           func_9111530
label_5f43c8:
    if (ctx->pc == 0x5F43C8u) {
        ctx->pc = 0x5F43CCu;
        goto label_5f43cc;
    }
    ctx->pc = 0x5F43C4u;
    ctx->pc = 0x9111530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9111530u, 0x5F43C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F43CCu;
label_5f43cc:
    // 0x5f43cc: 0x0  nop
    ctx->pc = 0x5f43ccu;
    // NOP
label_5f43d0:
    // 0x5f43d0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
label_5f43d4:
    if (ctx->pc == 0x5F43D4u) {
        ctx->pc = 0x5F43D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F43D0u;
        // 0x5f43d4: 0x61724777  daddi       $s2, $t3, 0x4777 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F43D8u;
        goto label_5f43d8;
    }
    ctx->pc = 0x5F43D0u;
    {
        const bool branch_taken_0x5f43d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f43d0) {
            ctx->pc = 0x5F43D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F43D0u;
            // 0x5f43d4: 0x61724777  daddi       $s2, $t3, 0x4777 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611564u;
            return;
        }
    }
    ctx->pc = 0x5F43D8u;
label_5f43d8:
    // 0x5f43d8: 0x63696870  daddi       $t1, $k1, 0x6870
    ctx->pc = 0x5f43d8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26736; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f43dc:
    // 0x5f43dc: 0x203a2073  addi        $k0, $at, 0x2073
    ctx->pc = 0x5f43dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8307, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5f43e0:
    // 0x5f43e0: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f43e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F43E0 raw=0x74696E49");
label_5f43e4:
    // 0x5f43e4: 0x74616c50  .word       0x74616C50                   # INVALID     $v1, $at, 0x6C50 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f43e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F43E4 raw=0x74616C50");
label_5f43e8:
    // 0x5f43e8: 0x6d726f66  ldr         $s2, 0x6F66($t3)
    ctx->pc = 0x5f43e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_5f43ec:
    // 0x5f43ec: 0x63657053  daddi       $a1, $k1, 0x7053
    ctx->pc = 0x5f43ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)28755; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_5f43f0:
    // 0x5f43f0: 0x63696669  daddi       $t1, $k1, 0x6669
    ctx->pc = 0x5f43f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26217; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f43f4:
    // 0x5f43f4: 0x66202928  daddiu      $zero, $s1, 0x2928
    ctx->pc = 0x5f43f4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)10536);
label_5f43f8:
    // 0x5f43f8: 0x656c6961  daddiu      $t4, $t3, 0x6961
    ctx->pc = 0x5f43f8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26977);
label_5f43fc:
    // 0x5f43fc: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f43fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_5f4400:
    // 0x5f4400: 0x20212121  addi        $at, $at, 0x2121
    ctx->pc = 0x5f4400u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5f4404:
    // 0x5f4404: 0x544e4144  bnel        $v0, $t6, . + 4 + (0x4144 << 2)
label_5f4408:
    if (ctx->pc == 0x5F4408u) {
        ctx->pc = 0x5F4408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4404u;
        // 0x5f4408: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F440Cu;
        goto label_5f440c;
    }
    ctx->pc = 0x5F4404u;
    {
        const bool branch_taken_0x5f4404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        if (branch_taken_0x5f4404) {
            ctx->pc = 0x5F4408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4404u;
            // 0x5f4408: 0x64205345  daddiu      $zero, $at, 0x5345 (Delay Slot)
            SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)21317);
            ctx->in_delay_slot = false;
            ctx->pc = 0x604918u;
            return;
        }
    }
    ctx->pc = 0x5F440Cu;
label_5f440c:
    // 0x5f440c: 0x77526774  .word       0x77526774                   # INVALID     $k0, $s2, 0x6774 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f440cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F440C raw=0x77526774");
label_5f4410:
    // 0x5f4410: 0x70617247  .word       0x70617247                   # INVALID     $v1, $at, 0x7247 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4410u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x5F4410 raw=0x70617247");
label_5f4414:
    // 0x5f4414: 0x73636968  .word       0x73636968                   # pabsh       $t5, $v1 # 03600000 <InstrIdType: R5900_MMI_1>
    ctx->pc = 0x5f4414u;
    SET_GPR_VEC(ctx, 13, PS2_PABSH(GPR_VEC(ctx, 27)));
label_5f4418:
    // 0x5f4418: 0x68533a3a  ldl         $s3, 0x3A3A($v0)
    ctx->pc = 0x5f4418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_5f441c:
    // 0x5f441c: 0x6f647475  ldr         $a0, 0x7475($k1)
    ctx->pc = 0x5f441cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29813); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_5f4420:
    // 0x5f4420: 0x3a206e77  xori        $zero, $s1, 0x6E77
    ctx->pc = 0x5f4420u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28279);
label_5f4424:
    // 0x5f4424: 0x67746420  daddiu      $s4, $k1, 0x6420
    ctx->pc = 0x5f4424u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25632);
label_5f4428:
    // 0x5f4428: 0x6c507752  ldr         $s0, 0x7752($v0)
    ctx->pc = 0x5f4428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 30546); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f442c:
    // 0x5f442c: 0x6e696775  ldr         $t1, 0x6775($s3)
    ctx->pc = 0x5f442cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26485); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4430:
    // 0x5f4430: 0x616e614d  daddi       $t6, $t3, 0x614D
    ctx->pc = 0x5f4430u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24909; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5f4434:
    // 0x5f4434: 0x3a726567  xori        $s2, $s3, 0x6567
    ctx->pc = 0x5f4434u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25959);
label_5f4438:
    // 0x5f4438: 0x6f6c433a  ldr         $t4, 0x433A($k1)
    ctx->pc = 0x5f4438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17210); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5f443c:
    // 0x5f443c: 0x6f546573  ldr         $s4, 0x6573($k0)
    ctx->pc = 0x5f443cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 25971); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_5f4440:
    // 0x5f4440: 0x696b6c6f  ldl         $t3, 0x6C6F($t3)
    ctx->pc = 0x5f4440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27759); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_5f4444:
    // 0x5f4444: 0x46207374  .word       0x46207374                   # INVALID     $s1, $zero, 0x7374 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4444u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x34 at 0x5F4444 raw=0x46207374");
label_5f4448:
    // 0x5f4448: 0x454c4941  .word       0x454C4941                   # INVALID     $t2, $t4, 0x4941 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4448u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x5F4448 raw=0x454C4941");
label_5f444c:
    // 0x5f444c: 0xa44  .word       0x00000A44                   # sllv        $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f444cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f4450:
    // 0x5f4450: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4450u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4450 raw=0x746E6144");
label_5f4454:
    // 0x5f4454: 0x3a2073e8  xori        $zero, $s1, 0x73E8
    ctx->pc = 0x5f4454u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29672);
label_5f4458:
    // 0x5f4458: 0x6c655320  ldr         $a1, 0x5320($v1)
    ctx->pc = 0x5f4458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 21280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f445c:
    // 0x5f445c: 0x65746365  daddiu      $s4, $t3, 0x6365
    ctx->pc = 0x5f445cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25445);
label_5f4460:
    // 0x5f4460: 0x69562064  ldl         $s6, 0x2064($t2)
    ctx->pc = 0x5f4460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
label_5f4464:
    // 0x5f4464: 0x206f6564  addi        $t7, $v1, 0x6564
    ctx->pc = 0x5f4464u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_5f4468:
    // 0x5f4468: 0x65646f4d  daddiu      $a0, $t3, 0x6F4D
    ctx->pc = 0x5f4468u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28493);
label_5f446c:
    // 0x5f446c: 0xa3a20  .word       0x000A3A20                   # add         $a3, $zero, $t2 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f446cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_5f4470:
    // 0x5f4470: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4470u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4470 raw=0x746E6144");
label_5f4474:
    // 0x5f4474: 0x3a2073e8  xori        $zero, $s1, 0x73E8
    ctx->pc = 0x5f4474u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29672);
label_5f4478:
    // 0x5f4478: 0x2a2a2a20  slti        $t2, $s1, 0x2A20
    ctx->pc = 0x5f4478u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10784) ? 1 : 0);
label_5f447c:
    // 0x5f447c: 0x65735520  daddiu      $s3, $t3, 0x5520
    ctx->pc = 0x5f447cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21792);
label_5f4480:
    // 0x5f4480: 0x65532072  daddiu      $s3, $t2, 0x2072
    ctx->pc = 0x5f4480u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8306);
label_5f4484:
    // 0x5f4484: 0x7463656c  .word       0x7463656C                   # INVALID     $v1, $v1, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4484u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4484 raw=0x7463656C");
label_5f4488:
    // 0x5f4488: 0x56206465  bnel        $s1, $zero, . + 4 + (0x6465 << 2)
label_5f448c:
    if (ctx->pc == 0x5F448Cu) {
        ctx->pc = 0x5F448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4488u;
        // 0x5f448c: 0x6f656469  ldr         $a1, 0x6469($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25705); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4490u;
        goto label_5f4490;
    }
    ctx->pc = 0x5F4488u;
    {
        const bool branch_taken_0x5f4488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x5f4488) {
            ctx->pc = 0x5F448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4488u;
            // 0x5f448c: 0x6f656469  ldr         $a1, 0x6469($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25705); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x60D620u;
            return;
        }
    }
    ctx->pc = 0x5F4490u;
label_5f4490:
    // 0x5f4490: 0x646f4d20  daddiu      $t7, $v1, 0x4D20
    ctx->pc = 0x5f4490u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)19744);
label_5f4494:
    // 0x5f4494: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4494u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F4494 raw=0x73692065");
label_5f4498:
    // 0x5f4498: 0x544f4e20  bnel        $v0, $t7, . + 4 + (0x4E20 << 2)
label_5f449c:
    if (ctx->pc == 0x5F449Cu) {
        ctx->pc = 0x5F449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4498u;
        // 0x5f449c: 0x50555320  beql        $v0, $s5, . + 4 + (0x5320 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F449C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F44A0u;
        goto label_5f44a0;
    }
    ctx->pc = 0x5F4498u;
    {
        const bool branch_taken_0x5f4498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x5f4498) {
            ctx->pc = 0x5F449Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4498u;
            // 0x5f449c: 0x50555320  beql        $v0, $s5, . + 4 + (0x5320 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F449C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x607D1Cu;
            return;
        }
    }
    ctx->pc = 0x5F44A0u;
label_5f44a0:
    // 0x5f44a0: 0x54524f50  bnel        $v0, $s2, . + 4 + (0x4F50 << 2)
label_5f44a4:
    if (ctx->pc == 0x5F44A4u) {
        ctx->pc = 0x5F44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F44A0u;
        // 0x5f44a4: 0x2a204445  slti        $zero, $s1, 0x4445 (Delay Slot)
        SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17477) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F44A8u;
        goto label_5f44a8;
    }
    ctx->pc = 0x5F44A0u;
    {
        const bool branch_taken_0x5f44a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f44a0) {
            ctx->pc = 0x5F44A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F44A0u;
            // 0x5f44a4: 0x2a204445  slti        $zero, $s1, 0x4445 (Delay Slot)
            SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17477) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x6081E4u;
            return;
        }
    }
    ctx->pc = 0x5F44A8u;
label_5f44a8:
    // 0x5f44a8: 0xa202a2a  j           func_880A8A8
label_5f44ac:
    if (ctx->pc == 0x5F44ACu) {
        ctx->pc = 0x5F44B0u;
        goto label_5f44b0;
    }
    ctx->pc = 0x5F44A8u;
    ctx->pc = 0x880A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x880A8A8u, 0x5F44A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F44B0u;
label_5f44b0:
    // 0x5f44b0: 0x252e7525  addiu       $t6, $t1, 0x7525
    ctx->pc = 0x5f44b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 29989));
label_5f44b4:
    // 0x5f44b4: 0x75252e75  .word       0x75252E75                   # INVALID     $t1, $a1, 0x2E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f44b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F44B4 raw=0x75252E75");
label_5f44b8:
    // 0x5f44b8: 0x75252e  .word       0x0075252E                   # dsub        $a0, $v1, $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f44b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
label_5f44bc:
    // 0x5f44bc: 0x0  nop
    ctx->pc = 0x5f44bcu;
    // NOP
label_5f44c0:
    // 0x5f44c0: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
label_5f44c4:
    if (ctx->pc == 0x5F44C4u) {
        ctx->pc = 0x5F44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F44C0u;
        // 0x5f44c4: 0x61724777  daddi       $s2, $t3, 0x4777 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F44C8u;
        goto label_5f44c8;
    }
    ctx->pc = 0x5F44C0u;
    {
        const bool branch_taken_0x5f44c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f44c0) {
            ctx->pc = 0x5F44C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F44C0u;
            // 0x5f44c4: 0x61724777  daddi       $s2, $t3, 0x4777 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611654u;
            return;
        }
    }
    ctx->pc = 0x5F44C8u;
label_5f44c8:
    // 0x5f44c8: 0x63696870  daddi       $t1, $k1, 0x6870
    ctx->pc = 0x5f44c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26736; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f44cc:
    // 0x5f44cc: 0x6f435f73  ldr         $v1, 0x5F73($k0)
    ctx->pc = 0x5f44ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 24435); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f44d0:
    // 0x5f44d0: 0x6e6f6d6d  ldr         $t7, 0x6D6D($s3)
    ctx->pc = 0x5f44d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28013); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5f44d4:
    // 0x5f44d4: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f44d4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F44D4 raw=0x7070632E");
label_5f44d8:
    // 0x5f44d8: 0x0  nop
    ctx->pc = 0x5f44d8u;
    // NOP
label_5f44dc:
    // 0x5f44dc: 0x0  nop
    ctx->pc = 0x5f44dcu;
    // NOP
label_5f44e0:
    // 0x5f44e0: 0x42705f6d  .word       0x42705F6D                   # INVALID     $s3, $s0, 0x5F6D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f44e0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5F44E0 raw=0x42705F6D");
label_5f44e4:
    // 0x5f44e4: 0x626c6c69  daddi       $t4, $s3, 0x6C69
    ctx->pc = 0x5f44e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)27753; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_5f44e8:
    // 0x5f44e8: 0x6472616f  daddiu      $s2, $v1, 0x616F
    ctx->pc = 0x5f44e8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24943);
label_5f44ec:
    // 0x5f44ec: 0x616e614d  daddi       $t6, $t3, 0x614D
    ctx->pc = 0x5f44ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24909; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5f44f0:
    // 0x5f44f0: 0x20726567  addi        $s2, $v1, 0x6567
    ctx->pc = 0x5f44f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25959, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_5f44f4:
    // 0x5f44f4: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f44f4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F44F4 raw=0x4E203D21");
label_5f44f8:
    // 0x5f44f8: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f44f8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F44F8 raw=0x004C4C55");
label_5f44fc:
    // 0x5f44fc: 0x0  nop
    ctx->pc = 0x5f44fcu;
    // NOP
label_5f4500:
    // 0x5f4500: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
label_5f4504:
    if (ctx->pc == 0x5F4504u) {
        ctx->pc = 0x5F4504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4500u;
        // 0x5f4504: 0x61724777  daddi       $s2, $t3, 0x4777 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4508u;
        goto label_5f4508;
    }
    ctx->pc = 0x5F4500u;
    {
        const bool branch_taken_0x5f4500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4500) {
            ctx->pc = 0x5F4504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4500u;
            // 0x5f4504: 0x61724777  daddi       $s2, $t3, 0x4777 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611694u;
            return;
        }
    }
    ctx->pc = 0x5F4508u;
label_5f4508:
    // 0x5f4508: 0x63696870  daddi       $t1, $k1, 0x6870
    ctx->pc = 0x5f4508u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26736; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f450c:
    // 0x5f450c: 0x473a3a73  .word       0x473A3A73                   # INVALID     $t9, $k0, 0x3A73 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f450cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x33 at 0x5F450C raw=0x473A3A73");
label_5f4510:
    // 0x5f4510: 0x69427465  ldl         $v0, 0x7465($t2)
    ctx->pc = 0x5f4510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_5f4514:
    // 0x5f4514: 0x6f626c6c  ldr         $v0, 0x6C6C($k1)
    ctx->pc = 0x5f4514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_5f4518:
    // 0x5f4518: 0x4d647261  .word       0x4D647261                   # INVALID     $t3, $a0, 0x7261 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4518u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4518 raw=0x4D647261");
label_5f451c:
    // 0x5f451c: 0x67616e61  daddiu      $at, $k1, 0x6E61
    ctx->pc = 0x5f451cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28257);
label_5f4520:
    // 0x5f4520: 0x2d207265  sltiu       $zero, $t1, 0x7265
    ctx->pc = 0x5f4520u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29285) ? 1 : 0);
label_5f4524:
    // 0x5f4524: 0x49203e2d  .word       0x49203E2D                   # INVALID     $t1, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f4524u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F4524 raw=0x49203E2D");
label_5f4528:
    // 0x5f4528: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f4528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f452c:
    // 0x5f452c: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5f452cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5f4530:
    // 0x5f4530: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4530u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4530 raw=0x4C4C554E");
label_5f4534:
    // 0x5f4534: 0x656d2029  daddiu      $t5, $t3, 0x2029
    ctx->pc = 0x5f4534u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8233);
label_5f4538:
    // 0x5f4538: 0x7265626d  .word       0x7265626D                   # INVALID     $s3, $a1, 0x626D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4538u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5F4538 raw=0x7265626D");
label_5f453c:
    // 0x5f453c: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5f453cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5f4540:
    // 0x5f4540: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4540u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F4540 raw=0x7265746E");
label_5f4544:
    // 0x5f4544: 0x6d203a20  ldr         $zero, 0x3A20($t1)
    ctx->pc = 0x5f4544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 14880); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4548:
    // 0x5f4548: 0x6942705f  ldl         $v0, 0x705F($t2)
    ctx->pc = 0x5f4548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_5f454c:
    // 0x5f454c: 0x6f626c6c  ldr         $v0, 0x6C6C($k1)
    ctx->pc = 0x5f454cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 27756); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_5f4550:
    // 0x5f4550: 0x4d647261  .word       0x4D647261                   # INVALID     $t3, $a0, 0x7261 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4550u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4550 raw=0x4D647261");
label_5f4554:
    // 0x5f4554: 0x67616e61  daddiu      $at, $k1, 0x6E61
    ctx->pc = 0x5f4554u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28257);
label_5f4558:
    // 0x5f4558: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4558u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5f455c:
    // 0x5f455c: 0x0  nop
    ctx->pc = 0x5f455cu;
    // NOP
label_5f4560:
    // 0x5f4560: 0x25787525  addiu       $t8, $t3, 0x7525
    ctx->pc = 0x5f4560u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 29989));
label_5f4564:
    // 0x5f4564: 0x3d5a2075  .word       0x3D5A2075                   # lui         $k0, 0x2075 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4564u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)8309 << 16));
label_5f4568:
    // 0x5f4568: 0x62207525  daddi       $zero, $s1, 0x7525
    ctx->pc = 0x5f4568u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)29989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5f456c:
    // 0x5f456c: 0x20737469  addi        $s3, $v1, 0x7469
    ctx->pc = 0x5f456cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29801, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f4570:
    // 0x5f4570: 0x0  nop
    ctx->pc = 0x5f4570u;
    // NOP
label_5f4574:
    // 0x5f4574: 0x0  nop
    ctx->pc = 0x5f4574u;
    // NOP
label_5f4578:
    // 0x5f4578: 0x0  nop
    ctx->pc = 0x5f4578u;
    // NOP
label_5f457c:
    // 0x5f457c: 0x0  nop
    ctx->pc = 0x5f457cu;
    // NOP
label_5f4580:
    // 0x5f4580: 0x49567772  .word       0x49567772                   # INVALID     $t2, $s6, 0x7772 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f4580u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F4580 raw=0x49567772");
label_5f4584:
    // 0x5f4584: 0x4d4f4544  .word       0x4D4F4544                   # INVALID     $t2, $t7, 0x4544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4584u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4584 raw=0x4D4F4544");
label_5f4588:
    // 0x5f4588: 0x4545444f  .word       0x4545444F                   # INVALID     $t2, $a1, 0x444F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4588u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xF at 0x5F4588 raw=0x4545444F");
label_5f458c:
    // 0x5f458c: 0x554c4358  bnel        $t2, $t4, . + 4 + (0x4358 << 2)
label_5f4590:
    if (ctx->pc == 0x5F4590u) {
        ctx->pc = 0x5F4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F458Cu;
        // 0x5f4590: 0x45564953  .word       0x45564953                   # INVALID     $t2, $s6, 0x4953 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x13 at 0x5F4590 raw=0x45564953");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4594u;
        goto label_5f4594;
    }
    ctx->pc = 0x5F458Cu;
    {
        const bool branch_taken_0x5f458c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        if (branch_taken_0x5f458c) {
            ctx->pc = 0x5F4590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F458Cu;
            // 0x5f4590: 0x45564953  .word       0x45564953                   # INVALID     $t2, $s6, 0x4953 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x13 at 0x5F4590 raw=0x45564953");
            ctx->in_delay_slot = false;
            ctx->pc = 0x6052F0u;
            return;
        }
    }
    ctx->pc = 0x5F4594u;
label_5f4594:
    // 0x5f4594: 0x7c  dsll32      $zero, $zero, 1
    ctx->pc = 0x5f4594u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 1));
label_5f4598:
    // 0x5f4598: 0x0  nop
    ctx->pc = 0x5f4598u;
    // NOP
label_5f459c:
    // 0x5f459c: 0x0  nop
    ctx->pc = 0x5f459cu;
    // NOP
label_5f45a0:
    // 0x5f45a0: 0x5677727c  bnel        $s3, $s7, . + 4 + (0x727C << 2)
label_5f45a4:
    if (ctx->pc == 0x5F45A4u) {
        ctx->pc = 0x5F45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F45A0u;
        // 0x5f45a4: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45A4 raw=0x4F454449");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F45A8u;
        goto label_5f45a8;
    }
    ctx->pc = 0x5F45A0u;
    {
        const bool branch_taken_0x5f45a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        if (branch_taken_0x5f45a0) {
            ctx->pc = 0x5F45A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F45A0u;
            // 0x5f45a4: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45A4 raw=0x4F454449");
            ctx->in_delay_slot = false;
            ctx->pc = 0x610F94u;
            return;
        }
    }
    ctx->pc = 0x5F45A8u;
label_5f45a8:
    // 0x5f45a8: 0x45444f4d  .word       0x45444F4D                   # INVALID     $t2, $a0, 0x4F4D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f45a8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x5F45A8 raw=0x45444F4D");
label_5f45ac:
    // 0x5f45ac: 0x45544e49  .word       0x45544E49                   # INVALID     $t2, $s4, 0x4E49 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f45acu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x5F45AC raw=0x45544E49");
label_5f45b0:
    // 0x5f45b0: 0x43414c52  .word       0x43414C52                   # INVALID     $k0, $at, 0x4C52 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f45b0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F45B0 raw=0x43414C52");
label_5f45b4:
    // 0x5f45b4: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f45b4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5F45B4 raw=0x00000045");
label_5f45b8:
    // 0x5f45b8: 0x0  nop
    ctx->pc = 0x5f45b8u;
    // NOP
label_5f45bc:
    // 0x5f45bc: 0x0  nop
    ctx->pc = 0x5f45bcu;
    // NOP
label_5f45c0:
    // 0x5f45c0: 0x5677727c  bnel        $s3, $s7, . + 4 + (0x727C << 2)
label_5f45c4:
    if (ctx->pc == 0x5F45C4u) {
        ctx->pc = 0x5F45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F45C0u;
        // 0x5f45c4: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45C4 raw=0x4F454449");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F45C8u;
        goto label_5f45c8;
    }
    ctx->pc = 0x5F45C0u;
    {
        const bool branch_taken_0x5f45c0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        if (branch_taken_0x5f45c0) {
            ctx->pc = 0x5F45C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F45C0u;
            // 0x5f45c4: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45C4 raw=0x4F454449");
            ctx->in_delay_slot = false;
            ctx->pc = 0x610FB4u;
            return;
        }
    }
    ctx->pc = 0x5F45C8u;
label_5f45c8:
    // 0x5f45c8: 0x45444f4d  .word       0x45444F4D                   # INVALID     $t2, $a0, 0x4F4D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f45c8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x5F45C8 raw=0x45444F4D");
label_5f45cc:
    // 0x5f45cc: 0x4e494646  .word       0x4E494646                   # INVALID     $s2, $t1, 0x4646 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f45ccu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45CC raw=0x4E494646");
label_5f45d0:
    // 0x5f45d0: 0x4c524554  .word       0x4C524554                   # INVALID     $v0, $s2, 0x4554 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f45d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45D0 raw=0x4C524554");
label_5f45d4:
    // 0x5f45d4: 0x454341  .word       0x00454341                   # INVALID     $v0, $a1, 0x4341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f45d4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F45D4 raw=0x00454341");
label_5f45d8:
    // 0x5f45d8: 0x0  nop
    ctx->pc = 0x5f45d8u;
    // NOP
label_5f45dc:
    // 0x5f45dc: 0x0  nop
    ctx->pc = 0x5f45dcu;
    // NOP
label_5f45e0:
    // 0x5f45e0: 0x5677727c  bnel        $s3, $s7, . + 4 + (0x727C << 2)
label_5f45e4:
    if (ctx->pc == 0x5F45E4u) {
        ctx->pc = 0x5F45E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F45E0u;
        // 0x5f45e4: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45E4 raw=0x4F454449");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F45E8u;
        goto label_5f45e8;
    }
    ctx->pc = 0x5F45E0u;
    {
        const bool branch_taken_0x5f45e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        if (branch_taken_0x5f45e0) {
            ctx->pc = 0x5F45E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F45E0u;
            // 0x5f45e4: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F45E4 raw=0x4F454449");
            ctx->in_delay_slot = false;
            ctx->pc = 0x610FD4u;
            return;
        }
    }
    ctx->pc = 0x5F45E8u;
label_5f45e8:
    // 0x5f45e8: 0x45444f4d  .word       0x45444F4D                   # INVALID     $t2, $a0, 0x4F4D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f45e8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x5F45E8 raw=0x45444F4D");
label_5f45ec:
    // 0x5f45ec: 0x3253505f  andi        $s3, $s2, 0x505F
    ctx->pc = 0x5f45ecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)20575);
label_5f45f0:
    // 0x5f45f0: 0x4153465f  .word       0x4153465F                   # INVALID     $t2, $s3, 0x465F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f45f0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F45F0 raw=0x4153465F");
label_5f45f4:
    // 0x5f45f4: 0x52485341  beql        $s2, $t0, . + 4 + (0x5341 << 2)
label_5f45f8:
    if (ctx->pc == 0x5F45F8u) {
        ctx->pc = 0x5F45F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F45F4u;
        // 0x5f45f8: 0x424b4e49  .word       0x424B4E49                   # INVALID     $s2, $t3, 0x4E49 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x5F45F8 raw=0x424B4E49");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F45FCu;
        goto label_5f45fc;
    }
    ctx->pc = 0x5F45F4u;
    {
        const bool branch_taken_0x5f45f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x5f45f4) {
            ctx->pc = 0x5F45F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F45F4u;
            // 0x5f45f8: 0x424b4e49  .word       0x424B4E49                   # INVALID     $s2, $t3, 0x4E49 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x5F45F8 raw=0x424B4E49");
            ctx->in_delay_slot = false;
            ctx->pc = 0x6092FCu;
            return;
        }
    }
    ctx->pc = 0x5F45FCu;
label_5f45fc:
    // 0x5f45fc: 0x54494c  .word       0x0054494C                   # syscall     293 # 00540000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f45fcu;
    ctx->pc = 0x5F4600u;
runtime->handleSyscall(rdram, ctx, 0x15125u);
label_5f4600:
    // 0x5f4600: 0x5677727c  bnel        $s3, $s7, . + 4 + (0x727C << 2)
label_5f4604:
    if (ctx->pc == 0x5F4604u) {
        ctx->pc = 0x5F4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4600u;
        // 0x5f4604: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4604 raw=0x4F454449");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4608u;
        goto label_5f4608;
    }
    ctx->pc = 0x5F4600u;
    {
        const bool branch_taken_0x5f4600 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        if (branch_taken_0x5f4600) {
            ctx->pc = 0x5F4604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4600u;
            // 0x5f4604: 0x4f454449  .word       0x4F454449                   # INVALID     $k0, $a1, 0x4449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4604 raw=0x4F454449");
            ctx->in_delay_slot = false;
            ctx->pc = 0x610FF4u;
            return;
        }
    }
    ctx->pc = 0x5F4608u;
label_5f4608:
    // 0x5f4608: 0x45444f4d  .word       0x45444F4D                   # INVALID     $t2, $a0, 0x4F4D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4608u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xD at 0x5F4608 raw=0x45444F4D");
label_5f460c:
    // 0x5f460c: 0x3253505f  andi        $s3, $s2, 0x505F
    ctx->pc = 0x5f460cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)20575);
label_5f4610:
    // 0x5f4610: 0x4153465f  .word       0x4153465F                   # INVALID     $t2, $s3, 0x465F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f4610u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F4610 raw=0x4153465F");
label_5f4614:
    // 0x5f4614: 0x41455241  .word       0x41455241                   # INVALID     $t2, $a1, 0x5241 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f4614u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F4614 raw=0x41455241");
label_5f4618:
    // 0x5f4618: 0x52494344  beql        $s2, $t1, . + 4 + (0x4344 << 2)
label_5f461c:
    if (ctx->pc == 0x5F461Cu) {
        ctx->pc = 0x5F461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4618u;
        // 0x5f461c: 0x54495543  bnel        $v0, $t1, . + 4 + (0x5543 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F461C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4620u;
        goto label_5f4620;
    }
    ctx->pc = 0x5F4618u;
    {
        const bool branch_taken_0x5f4618 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        if (branch_taken_0x5f4618) {
            ctx->pc = 0x5F461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4618u;
            // 0x5f461c: 0x54495543  bnel        $v0, $t1, . + 4 + (0x5543 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F461C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x60532Cu;
            return;
        }
    }
    ctx->pc = 0x5F4620u;
label_5f4620:
    // 0x5f4620: 0x0  nop
    ctx->pc = 0x5f4620u;
    // NOP
label_5f4624:
    // 0x5f4624: 0x0  nop
    ctx->pc = 0x5f4624u;
    // NOP
label_5f4628:
    // 0x5f4628: 0x43677464  .word       0x43677464                   # INVALID     $k1, $a3, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f4628u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5F4628 raw=0x43677464");
label_5f462c:
    // 0x5f462c: 0x72656d61  .word       0x72656D61                   # maddu1      $t5, $s3, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f462cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5f4630:
    // 0x5f4630: 0x70632e61  .word       0x70632E61                   # maddu1      $a1, $v1, $v1 # 00000640 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4630u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 3); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_5f4634:
    // 0x5f4634: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5f4634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f4638:
    // 0x5f4638: 0x0  nop
    ctx->pc = 0x5f4638u;
    // NOP
label_5f463c:
    // 0x5f463c: 0x0  nop
    ctx->pc = 0x5f463cu;
    // NOP
label_5f4640:
    // 0x5f4640: 0x52705f6d  beql        $s3, $s0, . + 4 + (0x5F6D << 2)
label_5f4644:
    if (ctx->pc == 0x5F4644u) {
        ctx->pc = 0x5F4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4640u;
        // 0x5f4644: 0x6d614377  ldr         $at, 0x4377($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4648u;
        goto label_5f4648;
    }
    ctx->pc = 0x5F4640u;
    {
        const bool branch_taken_0x5f4640 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x5f4640) {
            ctx->pc = 0x5F4644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4640u;
            // 0x5f4644: 0x6d614377  ldr         $at, 0x4377($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x60C3F8u;
            return;
        }
    }
    ctx->pc = 0x5F4648u;
label_5f4648:
    // 0x5f4648: 0x20617265  addi        $at, $v1, 0x7265
    ctx->pc = 0x5f4648u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5f464c:
    // 0x5f464c: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f464cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F464C raw=0x4E203D21");
label_5f4650:
    // 0x5f4650: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4650u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F4650 raw=0x004C4C55");
label_5f4654:
    // 0x5f4654: 0x0  nop
    ctx->pc = 0x5f4654u;
    // NOP
label_5f4658:
    // 0x5f4658: 0x0  nop
    ctx->pc = 0x5f4658u;
    // NOP
label_5f465c:
    // 0x5f465c: 0x0  nop
    ctx->pc = 0x5f465cu;
    // NOP
label_5f4660:
    // 0x5f4660: 0x46705f6d  .word       0x46705F6D                   # INVALID     $s3, $s0, 0x5F6D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4660u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x2D at 0x5F4660 raw=0x46705F6D");
label_5f4664:
    // 0x5f4664: 0x656d6172  daddiu      $t5, $t3, 0x6172
    ctx->pc = 0x5f4664u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24946);
label_5f4668:
    // 0x5f4668: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4668u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f466c:
    // 0x5f466c: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f466cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F466C raw=0x4C4C554E");
label_5f4670:
    // 0x5f4670: 0x0  nop
    ctx->pc = 0x5f4670u;
    // NOP
label_5f4674:
    // 0x5f4674: 0x0  nop
    ctx->pc = 0x5f4674u;
    // NOP
label_5f4678:
    // 0x5f4678: 0x0  nop
    ctx->pc = 0x5f4678u;
    // NOP
label_5f467c:
    // 0x5f467c: 0x0  nop
    ctx->pc = 0x5f467cu;
    // NOP
label_5f4680:
    // 0x5f4680: 0x6d614370  ldr         $at, 0x4370($t3)
    ctx->pc = 0x5f4680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4684:
    // 0x5f4684: 0x7274614d  .word       0x7274614D                   # INVALID     $s3, $s4, 0x614D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4684u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xD at 0x5F4684 raw=0x7274614D");
label_5f4688:
    // 0x5f4688: 0x21207869  addi        $zero, $t1, 0x7869
    ctx->pc = 0x5f4688u;
    // NOP (addi to $zero)
label_5f468c:
    // 0x5f468c: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
label_5f4690:
    if (ctx->pc == 0x5F4690u) {
        ctx->pc = 0x5F4690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F468Cu;
        // 0x5f4690: 0x4c4c  syscall     305 (Delay Slot)
        ctx->pc = 0x5F4694u;
        runtime->handleSyscall(rdram, ctx, 0x131u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4694u;
        goto label_5f4694;
    }
    ctx->pc = 0x5F468Cu;
    {
        const bool branch_taken_0x5f468c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5f468c) {
            ctx->pc = 0x5F4690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F468Cu;
            // 0x5f4690: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5F4694u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC784u;
            return;
        }
    }
    ctx->pc = 0x5F4694u;
label_5f4694:
    // 0x5f4694: 0x0  nop
    ctx->pc = 0x5f4694u;
    // NOP
label_5f4698:
    // 0x5f4698: 0x0  nop
    ctx->pc = 0x5f4698u;
    // NOP
label_5f469c:
    // 0x5f469c: 0x0  nop
    ctx->pc = 0x5f469cu;
    // NOP
label_5f46a0:
    // 0x5f46a0: 0x6f50705f  ldr         $s0, 0x705F($k0)
    ctx->pc = 0x5f46a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f46a4:
    // 0x5f46a4: 0x69746973  ldl         $s4, 0x6973($t3)
    ctx->pc = 0x5f46a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f46a8:
    // 0x5f46a8: 0x21206e6f  addi        $zero, $t1, 0x6E6F
    ctx->pc = 0x5f46a8u;
    // NOP (addi to $zero)
label_5f46ac:
    // 0x5f46ac: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
label_5f46b0:
    if (ctx->pc == 0x5F46B0u) {
        ctx->pc = 0x5F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F46ACu;
        // 0x5f46b0: 0x4c4c  syscall     305 (Delay Slot)
        ctx->pc = 0x5F46B4u;
        runtime->handleSyscall(rdram, ctx, 0x131u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F46B4u;
        goto label_5f46b4;
    }
    ctx->pc = 0x5F46ACu;
    {
        const bool branch_taken_0x5f46ac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5f46ac) {
            ctx->pc = 0x5F46B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F46ACu;
            // 0x5f46b0: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5F46B4u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC7A4u;
            return;
        }
    }
    ctx->pc = 0x5F46B4u;
label_5f46b4:
    // 0x5f46b4: 0x0  nop
    ctx->pc = 0x5f46b4u;
    // NOP
label_5f46b8:
    // 0x5f46b8: 0x0  nop
    ctx->pc = 0x5f46b8u;
    // NOP
label_5f46bc:
    // 0x5f46bc: 0x0  nop
    ctx->pc = 0x5f46bcu;
    // NOP
label_5f46c0:
    // 0x5f46c0: 0x7551705f  .word       0x7551705F                   # INVALID     $t2, $s1, 0x705F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f46c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F46C0 raw=0x7551705F");
label_5f46c4:
    // 0x5f46c4: 0x724f7461  .word       0x724F7461                   # maddu1      $t6, $s2, $t7 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f46c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 18) * (uint64_t)GPR_U32(ctx, 15); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_5f46c8:
    // 0x5f46c8: 0x746e6569  .word       0x746E6569                   # INVALID     $v1, $t6, 0x6569 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f46c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F46C8 raw=0x746E6569");
label_5f46cc:
    // 0x5f46cc: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f46ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f46d0:
    // 0x5f46d0: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f46d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F46D0 raw=0x4C4C554E");
label_5f46d4:
    // 0x5f46d4: 0x0  nop
    ctx->pc = 0x5f46d4u;
    // NOP
label_5f46d8:
    // 0x5f46d8: 0x0  nop
    ctx->pc = 0x5f46d8u;
    // NOP
label_5f46dc:
    // 0x5f46dc: 0x0  nop
    ctx->pc = 0x5f46dcu;
    // NOP
label_5f46e0:
    // 0x5f46e0: 0x3376705f  andi        $s6, $k1, 0x705F
    ctx->pc = 0x5f46e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 27) & (uint64_t)(uint16_t)28767);
label_5f46e4:
    // 0x5f46e4: 0x6b6f6f4c  ldl         $t7, 0x6F4C($k1)
    ctx->pc = 0x5f46e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28492); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5f46e8:
    // 0x5f46e8: 0x69447441  ldl         $a0, 0x7441($t2)
    ctx->pc = 0x5f46e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29761); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_5f46ec:
    // 0x5f46ec: 0x3d212072  .word       0x3D212072                   # lui         $at, 0x2072 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f46ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8306 << 16));
label_5f46f0:
    // 0x5f46f0: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f46f0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F46F0 raw=0x4C554E20");
label_5f46f4:
    // 0x5f46f4: 0x4c  syscall     1
    ctx->pc = 0x5f46f4u;
    ctx->pc = 0x5F46F8u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5f46f8:
    // 0x5f46f8: 0x0  nop
    ctx->pc = 0x5f46f8u;
    // NOP
label_5f46fc:
    // 0x5f46fc: 0x0  nop
    ctx->pc = 0x5f46fcu;
    // NOP
label_5f4700:
    // 0x5f4700: 0x6154705f  daddi       $s4, $t2, 0x705F
    ctx->pc = 0x5f4700u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_5f4704:
    // 0x5f4704: 0x74656772  .word       0x74656772                   # INVALID     $v1, $a1, 0x6772 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4704u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4704 raw=0x74656772");
label_5f4708:
    // 0x5f4708: 0x20736f50  addi        $s3, $v1, 0x6F50
    ctx->pc = 0x5f4708u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28496, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f470c:
    // 0x5f470c: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f470cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F470C raw=0x4E203D21");
label_5f4710:
    // 0x5f4710: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4710u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F4710 raw=0x004C4C55");
label_5f4714:
    // 0x5f4714: 0x0  nop
    ctx->pc = 0x5f4714u;
    // NOP
label_5f4718:
    // 0x5f4718: 0x0  nop
    ctx->pc = 0x5f4718u;
    // NOP
label_5f471c:
    // 0x5f471c: 0x0  nop
    ctx->pc = 0x5f471cu;
    // NOP
label_5f4720:
    // 0x5f4720: 0x6143705f  daddi       $v1, $t2, 0x705F
    ctx->pc = 0x5f4720u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_5f4724:
    // 0x5f4724: 0x7261506d  .word       0x7261506D                   # INVALID     $s3, $at, 0x506D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4724u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5F4724 raw=0x7261506D");
label_5f4728:
    // 0x5f4728: 0x20736d61  addi        $s3, $v1, 0x6D61
    ctx->pc = 0x5f4728u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f472c:
    // 0x5f472c: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f472cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F472C raw=0x4E203D21");
label_5f4730:
    // 0x5f4730: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4730u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F4730 raw=0x004C4C55");
label_5f4734:
    // 0x5f4734: 0x0  nop
    ctx->pc = 0x5f4734u;
    // NOP
label_5f4738:
    // 0x5f4738: 0x0  nop
    ctx->pc = 0x5f4738u;
    // NOP
label_5f473c:
    // 0x5f473c: 0x0  nop
    ctx->pc = 0x5f473cu;
    // NOP
label_5f4740:
    // 0x5f4740: 0x43677464  .word       0x43677464                   # INVALID     $k1, $a3, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f4740u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5F4740 raw=0x43677464");
label_5f4744:
    // 0x5f4744: 0x72656d61  .word       0x72656D61                   # maddu1      $t5, $s3, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4744u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5f4748:
    // 0x5f4748: 0x533a3a61  beql        $t9, $k0, . + 4 + (0x3A61 << 2)
label_5f474c:
    if (ctx->pc == 0x5F474Cu) {
        ctx->pc = 0x5F474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4748u;
        // 0x5f474c: 0x61507465  daddi       $s0, $t2, 0x7465 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29797; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4750u;
        goto label_5f4750;
    }
    ctx->pc = 0x5F4748u;
    {
        const bool branch_taken_0x5f4748 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 26));
        if (branch_taken_0x5f4748) {
            ctx->pc = 0x5F474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4748u;
            // 0x5f474c: 0x61507465  daddi       $s0, $t2, 0x7465 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29797; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6030D0u;
            return;
        }
    }
    ctx->pc = 0x5F4750u;
label_5f4750:
    // 0x5f4750: 0x736d6172  .word       0x736D6172                   # INVALID     $k1, $t5, 0x6172 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4750u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F4750 raw=0x736D6172");
label_5f4754:
    // 0x5f4754: 0x49203a20  .word       0x49203A20                   # INVALID     $t1, $zero, 0x3A20 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f4754u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F4754 raw=0x49203A20");
label_5f4758:
    // 0x5f4758: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f4758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f475c:
    // 0x5f475c: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5f475cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5f4760:
    // 0x5f4760: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4760u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4760 raw=0x4C4C554E");
label_5f4764:
    // 0x5f4764: 0x6f702029  ldr         $s0, 0x2029($k1)
    ctx->pc = 0x5f4764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f4768:
    // 0x5f4768: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5f4768u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5f476c:
    // 0x5f476c: 0x61702072  daddi       $s0, $t3, 0x2072
    ctx->pc = 0x5f476cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5f4770:
    // 0x5f4770: 0x6d6172  tlt         $v1, $t5, 389
    ctx->pc = 0x5f4770u;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_5f4774:
    // 0x5f4774: 0x0  nop
    ctx->pc = 0x5f4774u;
    // NOP
label_5f4778:
    // 0x5f4778: 0x0  nop
    ctx->pc = 0x5f4778u;
    // NOP
label_5f477c:
    // 0x5f477c: 0x0  nop
    ctx->pc = 0x5f477cu;
    // NOP
label_5f4780:
    // 0x5f4780: 0x3376705f  andi        $s6, $k1, 0x705F
    ctx->pc = 0x5f4780u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 27) & (uint64_t)(uint16_t)28767);
label_5f4784:
    // 0x5f4784: 0x67726154  daddiu      $s2, $k1, 0x6154
    ctx->pc = 0x5f4784u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24916);
label_5f4788:
    // 0x5f4788: 0x6f507465  ldr         $s0, 0x7465($k0)
    ctx->pc = 0x5f4788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f478c:
    // 0x5f478c: 0x3d212073  .word       0x3D212073                   # lui         $at, 0x2073 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f478cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8307 << 16));
label_5f4790:
    // 0x5f4790: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4790u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4790 raw=0x4C554E20");
label_5f4794:
    // 0x5f4794: 0x4c  syscall     1
    ctx->pc = 0x5f4794u;
    ctx->pc = 0x5F4798u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5f4798:
    // 0x5f4798: 0x0  nop
    ctx->pc = 0x5f4798u;
    // NOP
label_5f479c:
    // 0x5f479c: 0x0  nop
    ctx->pc = 0x5f479cu;
    // NOP
label_5f47a0:
    // 0x5f47a0: 0x43677464  .word       0x43677464                   # INVALID     $k1, $a3, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f47a0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5F47A0 raw=0x43677464");
label_5f47a4:
    // 0x5f47a4: 0x72656d61  .word       0x72656D61                   # maddu1      $t5, $s3, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f47a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5f47a8:
    // 0x5f47a8: 0x493a3a61  .word       0x493A3A61                   # INVALID     $t1, $k0, 0x3A61 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f47a8u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F47A8 raw=0x493A3A61");
label_5f47ac:
    // 0x5f47ac: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f47acu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F47AC raw=0x7265746E");
label_5f47b0:
    // 0x5f47b0: 0x616c6f70  daddi       $t4, $t3, 0x6F70
    ctx->pc = 0x5f47b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28528; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_5f47b4:
    // 0x5f47b4: 0x6f506574  ldr         $s0, 0x6574($k0)
    ctx->pc = 0x5f47b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f47b8:
    // 0x5f47b8: 0x69746973  ldl         $s4, 0x6973($t3)
    ctx->pc = 0x5f47b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f47bc:
    // 0x5f47bc: 0x3a206e6f  xori        $zero, $s1, 0x6E6F
    ctx->pc = 0x5f47bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)28271);
label_5f47c0:
    // 0x5f47c0: 0x746f6720  .word       0x746F6720                   # INVALID     $v1, $t7, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f47c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F47C0 raw=0x746F6720");
label_5f47c4:
    // 0x5f47c4: 0x49206120  .word       0x49206120                   # INVALID     $t1, $zero, 0x6120 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f47c4u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F47C4 raw=0x49206120");
label_5f47c8:
    // 0x5f47c8: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f47c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f47cc:
    // 0x5f47cc: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5f47ccu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5f47d0:
    // 0x5f47d0: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f47d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F47D0 raw=0x4C4C554E");
label_5f47d4:
    // 0x5f47d4: 0x61702029  daddi       $s0, $t3, 0x2029
    ctx->pc = 0x5f47d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5f47d8:
    // 0x5f47d8: 0x206d6172  addi        $t5, $v1, 0x6172
    ctx->pc = 0x5f47d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24946, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_5f47dc:
    // 0x5f47dc: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x5f47dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f47e0:
    // 0x5f47e0: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5f47e0u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_5f47e4:
    // 0x5f47e4: 0x0  nop
    ctx->pc = 0x5f47e4u;
    // NOP
label_5f47e8:
    // 0x5f47e8: 0x0  nop
    ctx->pc = 0x5f47e8u;
    // NOP
label_5f47ec:
    // 0x5f47ec: 0x0  nop
    ctx->pc = 0x5f47ecu;
    // NOP
label_5f47f0:
    // 0x5f47f0: 0x7571705f  .word       0x7571705F                   # INVALID     $t3, $s1, 0x705F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f47f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F47F0 raw=0x7571705F");
label_5f47f4:
    // 0x5f47f4: 0x61547461  daddi       $s4, $t2, 0x7461
    ctx->pc = 0x5f47f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29793; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_5f47f8:
    // 0x5f47f8: 0x74656772  .word       0x74656772                   # INVALID     $v1, $a1, 0x6772 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f47f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F47F8 raw=0x74656772");
label_5f47fc:
    // 0x5f47fc: 0x6569724f  daddiu      $t1, $t3, 0x724F
    ctx->pc = 0x5f47fcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29263);
label_5f4800:
    // 0x5f4800: 0x2120746e  addi        $zero, $t1, 0x746E
    ctx->pc = 0x5f4800u;
    // NOP (addi to $zero)
label_5f4804:
    // 0x5f4804: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
label_5f4808:
    if (ctx->pc == 0x5F4808u) {
        ctx->pc = 0x5F4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4804u;
        // 0x5f4808: 0x4c4c  syscall     305 (Delay Slot)
        ctx->pc = 0x5F480Cu;
        runtime->handleSyscall(rdram, ctx, 0x131u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F480Cu;
        goto label_5f480c;
    }
    ctx->pc = 0x5F4804u;
    {
        const bool branch_taken_0x5f4804 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5f4804) {
            ctx->pc = 0x5F4808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4804u;
            // 0x5f4808: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5F480Cu;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC8FCu;
            return;
        }
    }
    ctx->pc = 0x5F480Cu;
label_5f480c:
    // 0x5f480c: 0x0  nop
    ctx->pc = 0x5f480cu;
    // NOP
label_5f4810:
    // 0x5f4810: 0x6146665f  daddi       $a2, $t2, 0x665F
    ctx->pc = 0x5f4810u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)26207; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_5f4814:
    // 0x5f4814: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4814u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x5F4814 raw=0x726F7463");
label_5f4818:
    // 0x5f4818: 0x2e303d3e  sltiu       $s0, $s1, 0x3D3E
    ctx->pc = 0x5f4818u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15678) ? 1 : 0);
label_5f481c:
    // 0x5f481c: 0x26206630  addiu       $zero, $s1, 0x6630
    ctx->pc = 0x5f481cu;
    // NOP (addiu $zero, ...)
label_5f4820:
    // 0x5f4820: 0x665f2026  daddiu      $ra, $s2, 0x2026
    ctx->pc = 0x5f4820u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)8230);
label_5f4824:
    // 0x5f4824: 0x74636146  .word       0x74636146                   # INVALID     $v1, $v1, 0x6146 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4824u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4824 raw=0x74636146");
label_5f4828:
    // 0x5f4828: 0x3d3c726f  .word       0x3D3C726F                   # lui         $gp, 0x726F # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4828u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)29295 << 16));
label_5f482c:
    // 0x5f482c: 0x66302e31  daddiu      $s0, $s1, 0x2E31
    ctx->pc = 0x5f482cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11825);
label_5f4830:
    // 0x5f4830: 0x0  nop
    ctx->pc = 0x5f4830u;
    // NOP
label_5f4834:
    // 0x5f4834: 0x0  nop
    ctx->pc = 0x5f4834u;
    // NOP
label_5f4838:
    // 0x5f4838: 0x0  nop
    ctx->pc = 0x5f4838u;
    // NOP
label_5f483c:
    // 0x5f483c: 0x0  nop
    ctx->pc = 0x5f483cu;
    // NOP
label_5f4840:
    // 0x5f4840: 0x52705f28  beql        $s3, $s0, . + 4 + (0x5F28 << 2)
label_5f4844:
    if (ctx->pc == 0x5F4844u) {
        ctx->pc = 0x5F4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4840u;
        // 0x5f4844: 0x6d614377  ldr         $at, 0x4377($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4848u;
        goto label_5f4848;
    }
    ctx->pc = 0x5F4840u;
    {
        const bool branch_taken_0x5f4840 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x5f4840) {
            ctx->pc = 0x5F4844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4840u;
            // 0x5f4844: 0x6d614377  ldr         $at, 0x4377($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x60C4E4u;
            return;
        }
    }
    ctx->pc = 0x5F4848u;
label_5f4848:
    // 0x5f4848: 0x20617265  addi        $at, $v1, 0x7265
    ctx->pc = 0x5f4848u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5f484c:
    // 0x5f484c: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f484cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F484C raw=0x4E203D21");
label_5f4850:
    // 0x5f4850: 0x294c4c55  slti        $t4, $t2, 0x4C55
    ctx->pc = 0x5f4850u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19541) ? 1 : 0);
label_5f4854:
    // 0x5f4854: 0x20262620  addi        $a2, $at, 0x2620
    ctx->pc = 0x5f4854u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)9760, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_5f4858:
    // 0x5f4858: 0x76705f28  .word       0x76705F28                   # INVALID     $s3, $s0, 0x5F28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4858u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4858 raw=0x76705F28");
label_5f485c:
    // 0x5f485c: 0x6f506433  ldr         $s0, 0x6433($k0)
    ctx->pc = 0x5f485cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 25651); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f4860:
    // 0x5f4860: 0x20746e69  addi        $s4, $v1, 0x6E69
    ctx->pc = 0x5f4860u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5f4864:
    // 0x5f4864: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4864u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4864 raw=0x4E203D21");
label_5f4868:
    // 0x5f4868: 0x294c4c55  slti        $t4, $t2, 0x4C55
    ctx->pc = 0x5f4868u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19541) ? 1 : 0);
label_5f486c:
    // 0x5f486c: 0x20262620  addi        $a2, $at, 0x2620
    ctx->pc = 0x5f486cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)9760, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_5f4870:
    // 0x5f4870: 0x76705f28  .word       0x76705F28                   # INVALID     $s3, $s0, 0x5F28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4870u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4870 raw=0x76705F28");
label_5f4874:
    // 0x5f4874: 0x6f506432  ldr         $s0, 0x6432($k0)
    ctx->pc = 0x5f4874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 25650); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f4878:
    // 0x5f4878: 0x21746e69  addi        $s4, $t3, 0x6E69
    ctx->pc = 0x5f4878u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)28265, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5f487c:
    // 0x5f487c: 0x4c554e3d  .word       0x4C554E3D                   # INVALID     $v0, $s5, 0x4E3D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f487cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F487C raw=0x4C554E3D");
label_5f4880:
    // 0x5f4880: 0x294c  syscall     165
    ctx->pc = 0x5f4880u;
    ctx->pc = 0x5F4884u;
runtime->handleSyscall(rdram, ctx, 0xA5u);
label_5f4884:
    // 0x5f4884: 0x0  nop
    ctx->pc = 0x5f4884u;
    // NOP
label_5f4888:
    // 0x5f4888: 0x0  nop
    ctx->pc = 0x5f4888u;
    // NOP
label_5f488c:
    // 0x5f488c: 0x0  nop
    ctx->pc = 0x5f488cu;
    // NOP
label_5f4890:
    // 0x5f4890: 0x72635370  .word       0x72635370                   # INVALID     $s3, $v1, 0x5370 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5f4890u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0xD at 0x5F4890 raw=0x72635370");
label_5f4894:
    // 0x5f4894: 0x526e6565  beql        $s3, $t6, . + 4 + (0x6565 << 2)
label_5f4898:
    if (ctx->pc == 0x5F4898u) {
        ctx->pc = 0x5F4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4894u;
        // 0x5f4898: 0x65747361  daddiu      $s4, $t3, 0x7361 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29537);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F489Cu;
        goto label_5f489c;
    }
    ctx->pc = 0x5F4894u;
    {
        const bool branch_taken_0x5f4894 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 14));
        if (branch_taken_0x5f4894) {
            ctx->pc = 0x5F4898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4894u;
            // 0x5f4898: 0x65747361  daddiu      $s4, $t3, 0x7361 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29537);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60DE2Cu;
            return;
        }
    }
    ctx->pc = 0x5F489Cu;
label_5f489c:
    // 0x5f489c: 0x3d212072  .word       0x3D212072                   # lui         $at, 0x2072 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f489cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8306 << 16));
label_5f48a0:
    // 0x5f48a0: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f48a0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F48A0 raw=0x4C554E20");
label_5f48a4:
    // 0x5f48a4: 0x4c  syscall     1
    ctx->pc = 0x5f48a4u;
    ctx->pc = 0x5F48A8u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5f48a8:
    // 0x5f48a8: 0x0  nop
    ctx->pc = 0x5f48a8u;
    // NOP
label_5f48ac:
    // 0x5f48ac: 0x0  nop
    ctx->pc = 0x5f48acu;
    // NOP
label_5f48b0:
    // 0x5f48b0: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f48b4:
    if (ctx->pc == 0x5F48B4u) {
        ctx->pc = 0x5F48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F48B0u;
        // 0x5f48b4: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F48B8u;
        goto label_5f48b8;
    }
    ctx->pc = 0x5F48B0u;
    {
        const bool branch_taken_0x5f48b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f48b0) {
            ctx->pc = 0x5F48B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F48B0u;
            // 0x5f48b4: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611A44u;
            return;
        }
    }
    ctx->pc = 0x5F48B8u;
label_5f48b8:
    // 0x5f48b8: 0x53656c63  beql        $k1, $a1, . + 4 + (0x6C63 << 2)
label_5f48bc:
    if (ctx->pc == 0x5F48BCu) {
        ctx->pc = 0x5F48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F48B8u;
        // 0x5f48bc: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F48C0u;
        goto label_5f48c0;
    }
    ctx->pc = 0x5F48B8u;
    {
        const bool branch_taken_0x5f48b8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f48b8) {
            ctx->pc = 0x5F48BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F48B8u;
            // 0x5f48bc: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60FA48u;
            return;
        }
    }
    ctx->pc = 0x5F48C0u;
label_5f48c0:
    // 0x5f48c0: 0x70632e6d  .word       0x70632E6D                   # INVALID     $v1, $v1, 0x2E6D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f48c0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5F48C0 raw=0x70632E6D");
label_5f48c4:
    // 0x5f48c4: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5f48c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f48c8:
    // 0x5f48c8: 0x0  nop
    ctx->pc = 0x5f48c8u;
    // NOP
label_5f48cc:
    // 0x5f48cc: 0x0  nop
    ctx->pc = 0x5f48ccu;
    // NOP
label_5f48d0:
    // 0x5f48d0: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f48d0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F48D0 raw=0x4C4C554E");
label_5f48d4:
    // 0x5f48d4: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f48d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f48d8:
    // 0x5f48d8: 0x50705f6d  beql        $v1, $s0, . + 4 + (0x5F6D << 2)
label_5f48dc:
    if (ctx->pc == 0x5F48DCu) {
        ctx->pc = 0x5F48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F48D8u;
        // 0x5f48dc: 0x79737472  lq          $s3, 0x7472($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 11), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F48E0u;
        goto label_5f48e0;
    }
    ctx->pc = 0x5F48D8u;
    {
        const bool branch_taken_0x5f48d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x5f48d8) {
            ctx->pc = 0x5F48DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F48D8u;
            // 0x5f48dc: 0x79737472  lq          $s3, 0x7472($t3) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 11), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x60C690u;
            return;
        }
    }
    ctx->pc = 0x5F48E0u;
label_5f48e0:
    // 0x5f48e0: 0x6e6f4373  ldr         $t7, 0x4373($s3)
    ctx->pc = 0x5f48e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17267); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5f48e4:
    // 0x5f48e4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x5f48e4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f48e8:
    // 0x5f48e8: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f48e8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F48E8 raw=0x4C4C554E");
label_5f48ec:
    // 0x5f48ec: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5f48ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5f48f0:
    // 0x5f48f0: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f48f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F48F0 raw=0x7265746E");
label_5f48f4:
    // 0x5f48f4: 0x0  nop
    ctx->pc = 0x5f48f4u;
    // NOP
label_5f48f8:
    // 0x5f48f8: 0x0  nop
    ctx->pc = 0x5f48f8u;
    // NOP
label_5f48fc:
    // 0x5f48fc: 0x0  nop
    ctx->pc = 0x5f48fcu;
    // NOP
label_5f4900:
    // 0x5f4900: 0x6c694675  ldr         $t1, 0x4675($v1)
    ctx->pc = 0x5f4900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 18037); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4904:
    // 0x5f4904: 0x6d614e65  ldr         $at, 0x4E65($t3)
    ctx->pc = 0x5f4904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20069); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4908:
    // 0x5f4908: 0x6e654c65  ldr         $a1, 0x4C65($s3)
    ctx->pc = 0x5f4908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f490c:
    // 0x5f490c: 0x30203e20  andi        $zero, $at, 0x3E20
    ctx->pc = 0x5f490cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15904);
label_5f4910:
    // 0x5f4910: 0x0  nop
    ctx->pc = 0x5f4910u;
    // NOP
label_5f4914:
    // 0x5f4914: 0x0  nop
    ctx->pc = 0x5f4914u;
    // NOP
label_5f4918:
    // 0x5f4918: 0x0  nop
    ctx->pc = 0x5f4918u;
    // NOP
label_5f491c:
    // 0x5f491c: 0x0  nop
    ctx->pc = 0x5f491cu;
    // NOP
label_5f4920:
    // 0x5f4920: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4924:
    if (ctx->pc == 0x5F4924u) {
        ctx->pc = 0x5F4924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4920u;
        // 0x5f4924: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4928u;
        goto label_5f4928;
    }
    ctx->pc = 0x5F4920u;
    {
        const bool branch_taken_0x5f4920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4920) {
            ctx->pc = 0x5F4924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4920u;
            // 0x5f4924: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611AB4u;
            return;
        }
    }
    ctx->pc = 0x5F4928u;
label_5f4928:
    // 0x5f4928: 0x53656c63  beql        $k1, $a1, . + 4 + (0x6C63 << 2)
label_5f492c:
    if (ctx->pc == 0x5F492Cu) {
        ctx->pc = 0x5F492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4928u;
        // 0x5f492c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4930u;
        goto label_5f4930;
    }
    ctx->pc = 0x5F4928u;
    {
        const bool branch_taken_0x5f4928 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f4928) {
            ctx->pc = 0x5F492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4928u;
            // 0x5f492c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60FAB8u;
            return;
        }
    }
    ctx->pc = 0x5F4930u;
label_5f4930:
    // 0x5f4930: 0x493a3a6d  .word       0x493A3A6D                   # INVALID     $t1, $k0, 0x3A6D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f4930u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F4930 raw=0x493A3A6D");
label_5f4934:
    // 0x5f4934: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5f4934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f4938:
    // 0x5f4938: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4938u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5f493c:
    // 0x5f493c: 0x2d2d2065  sltiu       $t5, $t1, 0x2065
    ctx->pc = 0x5f493cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8293) ? 1 : 0);
label_5f4940:
    // 0x5f4940: 0x6966203e  ldl         $a2, 0x203E($t3)
    ctx->pc = 0x5f4940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_5f4944:
    // 0x5f4944: 0x616e656c  daddi       $t6, $t3, 0x656C
    ctx->pc = 0x5f4944u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5f4948:
    // 0x5f4948: 0x6920656d  ldl         $zero, 0x656D($t1)
    ctx->pc = 0x5f4948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5f494c:
    // 0x5f494c: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f494cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4950:
    // 0x5f4950: 0x6469  .word       0x00006469                   # mtsa        $zero # 00006440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f4950u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_5f4954:
    // 0x5f4954: 0x0  nop
    ctx->pc = 0x5f4954u;
    // NOP
label_5f4958:
    // 0x5f4958: 0x0  nop
    ctx->pc = 0x5f4958u;
    // NOP
label_5f495c:
    // 0x5f495c: 0x0  nop
    ctx->pc = 0x5f495cu;
    // NOP
label_5f4960:
    // 0x5f4960: 0x72745370  .word       0x72745370                   # INVALID     $s3, $s4, 0x5370 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5f4960u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0xD at 0x5F4960 raw=0x72745370");
label_5f4964:
    // 0x5f4964: 0x206d6165  addi        $t5, $v1, 0x6165
    ctx->pc = 0x5f4964u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24933, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_5f4968:
    // 0x5f4968: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4968u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4968 raw=0x4E203D21");
label_5f496c:
    // 0x5f496c: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f496cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F496C raw=0x004C4C55");
label_5f4970:
    // 0x5f4970: 0x656c6946  daddiu      $t4, $t3, 0x6946
    ctx->pc = 0x5f4970u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26950);
label_5f4974:
    // 0x5f4974: 0x73253c20  .word       0x73253C20                   # madd1       $a3, $t9, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4974u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_5f4978:
    // 0x5f4978: 0x6f6e203e  ldr         $t6, 0x203E($k1)
    ctx->pc = 0x5f4978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8254); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_5f497c:
    // 0x5f497c: 0x6f662074  ldr         $a2, 0x2074($k1)
    ctx->pc = 0x5f497cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_5f4980:
    // 0x5f4980: 0x646e75  .word       0x00646E75                   # INVALID     $v1, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4980u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x5F4980 raw=0x00646E75");
label_5f4984:
    // 0x5f4984: 0x0  nop
    ctx->pc = 0x5f4984u;
    // NOP
label_5f4988:
    // 0x5f4988: 0x0  nop
    ctx->pc = 0x5f4988u;
    // NOP
label_5f498c:
    // 0x5f498c: 0x0  nop
    ctx->pc = 0x5f498cu;
    // NOP
label_5f4990:
    // 0x5f4990: 0x43705f6d  .word       0x43705F6D                   # INVALID     $k1, $s0, 0x5F6D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f4990u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5F4990 raw=0x43705F6D");
label_5f4994:
    // 0x5f4994: 0x706d756c  .word       0x706D756C                   # INVALID     $v1, $t5, 0x756C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4994u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5F4994 raw=0x706D756C");
label_5f4998:
    // 0x5f4998: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4998u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f499c:
    // 0x5f499c: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f499cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F499C raw=0x4C4C554E");
label_5f49a0:
    // 0x5f49a0: 0x0  nop
    ctx->pc = 0x5f49a0u;
    // NOP
label_5f49a4:
    // 0x5f49a4: 0x0  nop
    ctx->pc = 0x5f49a4u;
    // NOP
label_5f49a8:
    // 0x5f49a8: 0x0  nop
    ctx->pc = 0x5f49a8u;
    // NOP
label_5f49ac:
    // 0x5f49ac: 0x0  nop
    ctx->pc = 0x5f49acu;
    // NOP
label_5f49b0:
    // 0x5f49b0: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f49b4:
    if (ctx->pc == 0x5F49B4u) {
        ctx->pc = 0x5F49B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F49B0u;
        // 0x5f49b4: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F49B8u;
        goto label_5f49b8;
    }
    ctx->pc = 0x5F49B0u;
    {
        const bool branch_taken_0x5f49b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f49b0) {
            ctx->pc = 0x5F49B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F49B0u;
            // 0x5f49b4: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611B44u;
            return;
        }
    }
    ctx->pc = 0x5F49B8u;
label_5f49b8:
    // 0x5f49b8: 0x53656c63  beql        $k1, $a1, . + 4 + (0x6C63 << 2)
label_5f49bc:
    if (ctx->pc == 0x5F49BCu) {
        ctx->pc = 0x5F49BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F49B8u;
        // 0x5f49bc: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F49C0u;
        goto label_5f49c0;
    }
    ctx->pc = 0x5F49B8u;
    {
        const bool branch_taken_0x5f49b8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f49b8) {
            ctx->pc = 0x5F49BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F49B8u;
            // 0x5f49bc: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60FB48u;
            return;
        }
    }
    ctx->pc = 0x5F49C0u;
label_5f49c0:
    // 0x5f49c0: 0x433a3a6d  .word       0x433A3A6D                   # INVALID     $t9, $k0, 0x3A6D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f49c0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x5F49C0 raw=0x433A3A6D");
label_5f49c4:
    // 0x5f49c4: 0x656e6f6c  daddiu      $t6, $t3, 0x6F6C
    ctx->pc = 0x5f49c4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28524);
label_5f49c8:
    // 0x5f49c8: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f49c8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5f49cc:
    // 0x5f49cc: 0x766e4920  .word       0x766E4920                   # INVALID     $s3, $t6, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f49ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F49CC raw=0x766E4920");
label_5f49d0:
    // 0x5f49d0: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x5f49d0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_5f49d4:
    // 0x5f49d4: 0x554e2820  bnel        $t2, $t6, . + 4 + (0x2820 << 2)
label_5f49d8:
    if (ctx->pc == 0x5F49D8u) {
        ctx->pc = 0x5F49D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F49D4u;
        // 0x5f49d8: 0x20294c4c  addi        $t1, $at, 0x4C4C (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F49DCu;
        goto label_5f49dc;
    }
    ctx->pc = 0x5F49D4u;
    {
        const bool branch_taken_0x5f49d4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5f49d4) {
            ctx->pc = 0x5F49D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F49D4u;
            // 0x5f49d8: 0x20294c4c  addi        $t1, $at, 0x4C4C (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FEA58u;
            return;
        }
    }
    ctx->pc = 0x5F49DCu;
label_5f49dc:
    // 0x5f49dc: 0x626d656d  daddi       $t5, $s3, 0x656D
    ctx->pc = 0x5f49dcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)25965; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_5f49e0:
    // 0x5f49e0: 0x70207265  .word       0x70207265                   # INVALID     $at, $zero, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f49e0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F49E0 raw=0x70207265");
label_5f49e4:
    // 0x5f49e4: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f49e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F49E4 raw=0x746E696F");
label_5f49e8:
    // 0x5f49e8: 0x72207265  .word       0x72207265                   # INVALID     $s1, $zero, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f49e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F49E8 raw=0x72207265");
label_5f49ec:
    // 0x5f49ec: 0x72656665  .word       0x72656665                   # INVALID     $s3, $a1, 0x6665 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f49ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F49EC raw=0x72656665");
label_5f49f0:
    // 0x5f49f0: 0x65636e65  daddiu      $v1, $t3, 0x6E65
    ctx->pc = 0x5f49f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_5f49f4:
    // 0x5f49f4: 0x0  nop
    ctx->pc = 0x5f49f4u;
    // NOP
label_5f49f8:
    // 0x5f49f8: 0x0  nop
    ctx->pc = 0x5f49f8u;
    // NOP
label_5f49fc:
    // 0x5f49fc: 0x0  nop
    ctx->pc = 0x5f49fcu;
    // NOP
label_5f4a00:
    // 0x5f4a00: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4a00u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4A00 raw=0x4C4C554E");
label_5f4a04:
    // 0x5f4a04: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4a04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4a08:
    // 0x5f4a08: 0x6f6c4370  ldr         $t4, 0x4370($k1)
    ctx->pc = 0x5f4a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5f4a0c:
    // 0x5f4a0c: 0x5064656e  beql        $v1, $a0, . + 4 + (0x656E << 2)
label_5f4a10:
    if (ctx->pc == 0x5F4A10u) {
        ctx->pc = 0x5F4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4A0Cu;
        // 0x5f4a10: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4A14u;
        goto label_5f4a14;
    }
    ctx->pc = 0x5F4A0Cu;
    {
        const bool branch_taken_0x5f4a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x5f4a0c) {
            ctx->pc = 0x5F4A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4A0Cu;
            // 0x5f4a10: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x60DFC8u;
            return;
        }
    }
    ctx->pc = 0x5F4A14u;
label_5f4a14:
    // 0x5f4a14: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x5f4a14u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f4a18:
    // 0x5f4a18: 0x0  nop
    ctx->pc = 0x5f4a18u;
    // NOP
label_5f4a1c:
    // 0x5f4a1c: 0x0  nop
    ctx->pc = 0x5f4a1cu;
    // NOP
label_5f4a20:
    // 0x5f4a20: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4a24:
    if (ctx->pc == 0x5F4A24u) {
        ctx->pc = 0x5F4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4A20u;
        // 0x5f4a24: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4A28u;
        goto label_5f4a28;
    }
    ctx->pc = 0x5F4A20u;
    {
        const bool branch_taken_0x5f4a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4a20) {
            ctx->pc = 0x5F4A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4A20u;
            // 0x5f4a24: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611BB4u;
            return;
        }
    }
    ctx->pc = 0x5F4A28u;
label_5f4a28:
    // 0x5f4a28: 0x53656c63  beql        $k1, $a1, . + 4 + (0x6C63 << 2)
label_5f4a2c:
    if (ctx->pc == 0x5F4A2Cu) {
        ctx->pc = 0x5F4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4A28u;
        // 0x5f4a2c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4A30u;
        goto label_5f4a30;
    }
    ctx->pc = 0x5F4A28u;
    {
        const bool branch_taken_0x5f4a28 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f4a28) {
            ctx->pc = 0x5F4A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4A28u;
            // 0x5f4a2c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60FBB8u;
            return;
        }
    }
    ctx->pc = 0x5F4A30u;
label_5f4a30:
    // 0x5f4a30: 0x433a3a6d  .word       0x433A3A6D                   # INVALID     $t9, $k0, 0x3A6D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f4a30u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x5F4A30 raw=0x433A3A6D");
label_5f4a34:
    // 0x5f4a34: 0x656e6f6c  daddiu      $t6, $t3, 0x6F6C
    ctx->pc = 0x5f4a34u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28524);
label_5f4a38:
    // 0x5f4a38: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4a38u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5f4a3c:
    // 0x5f4a3c: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4a3cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4A3C raw=0x4C554E20");
label_5f4a40:
    // 0x5f4a40: 0x6f70204c  ldr         $s0, 0x204C($k1)
    ctx->pc = 0x5f4a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f4a44:
    // 0x5f4a44: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5f4a44u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5f4a48:
    // 0x5f4a48: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5f4a48u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f4a4c:
    // 0x5f4a4c: 0x0  nop
    ctx->pc = 0x5f4a4cu;
    // NOP
label_5f4a50:
    // 0x5f4a50: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4a50u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4A50 raw=0x4C4C554E");
label_5f4a54:
    // 0x5f4a54: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4a54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4a58:
    // 0x5f4a58: 0x43705f6d  .word       0x43705F6D                   # INVALID     $k1, $s0, 0x5F6D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f4a58u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x5F4A58 raw=0x43705F6D");
label_5f4a5c:
    // 0x5f4a5c: 0x706d756c  .word       0x706D756C                   # INVALID     $v1, $t5, 0x756C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4a5cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5F4A5C raw=0x706D756C");
label_5f4a60:
    // 0x5f4a60: 0x0  nop
    ctx->pc = 0x5f4a60u;
    // NOP
label_5f4a64:
    // 0x5f4a64: 0x0  nop
    ctx->pc = 0x5f4a64u;
    // NOP
label_5f4a68:
    // 0x5f4a68: 0x0  nop
    ctx->pc = 0x5f4a68u;
    // NOP
label_5f4a6c:
    // 0x5f4a6c: 0x0  nop
    ctx->pc = 0x5f4a6cu;
    // NOP
label_5f4a70:
    // 0x5f4a70: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4a74:
    if (ctx->pc == 0x5F4A74u) {
        ctx->pc = 0x5F4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4A70u;
        // 0x5f4a74: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4A78u;
        goto label_5f4a78;
    }
    ctx->pc = 0x5F4A70u;
    {
        const bool branch_taken_0x5f4a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4a70) {
            ctx->pc = 0x5F4A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4A70u;
            // 0x5f4a74: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611C04u;
            return;
        }
    }
    ctx->pc = 0x5F4A78u;
label_5f4a78:
    // 0x5f4a78: 0x53656c63  beql        $k1, $a1, . + 4 + (0x6C63 << 2)
label_5f4a7c:
    if (ctx->pc == 0x5F4A7Cu) {
        ctx->pc = 0x5F4A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4A78u;
        // 0x5f4a7c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4A80u;
        goto label_5f4a80;
    }
    ctx->pc = 0x5F4A78u;
    {
        const bool branch_taken_0x5f4a78 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f4a78) {
            ctx->pc = 0x5F4A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4A78u;
            // 0x5f4a7c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60FC08u;
            return;
        }
    }
    ctx->pc = 0x5F4A80u;
label_5f4a80:
    // 0x5f4a80: 0x553a3a6d  bnel        $t1, $k0, . + 4 + (0x3A6D << 2)
label_5f4a84:
    if (ctx->pc == 0x5F4A84u) {
        ctx->pc = 0x5F4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4A80u;
        // 0x5f4a84: 0x74616470  .word       0x74616470                   # INVALID     $v1, $at, 0x6470 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4A84 raw=0x74616470");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4A88u;
        goto label_5f4a88;
    }
    ctx->pc = 0x5F4A80u;
    {
        const bool branch_taken_0x5f4a80 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 26));
        if (branch_taken_0x5f4a80) {
            ctx->pc = 0x5F4A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4A80u;
            // 0x5f4a84: 0x74616470  .word       0x74616470                   # INVALID     $v1, $at, 0x6470 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4A84 raw=0x74616470");
            ctx->in_delay_slot = false;
            ctx->pc = 0x603438u;
            return;
        }
    }
    ctx->pc = 0x5F4A88u;
label_5f4a88:
    // 0x5f4a88: 0x203a2065  addi        $k0, $at, 0x2065
    ctx->pc = 0x5f4a88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5f4a8c:
    // 0x5f4a8c: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5f4a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4a90:
    // 0x5f4a90: 0x20657275  addi        $a1, $v1, 0x7275
    ctx->pc = 0x5f4a90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29301, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f4a94:
    // 0x5f4a94: 0x6620666f  daddiu      $zero, $s1, 0x666F
    ctx->pc = 0x5f4a94u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)26223);
label_5f4a98:
    // 0x5f4a98: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4a98u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4A98 raw=0x74636E75");
label_5f4a9c:
    // 0x5f4a9c: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5f4a9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5f4aa0:
    // 0x5f4aa0: 0x61647055  daddi       $a0, $t3, 0x7055
    ctx->pc = 0x5f4aa0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28757; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_5f4aa4:
    // 0x5f4aa4: 0x29286574  slti        $t0, $t1, 0x6574
    ctx->pc = 0x5f4aa4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25972) ? 1 : 0);
label_5f4aa8:
    // 0x5f4aa8: 0x6164202c  daddi       $a0, $t3, 0x202C
    ctx->pc = 0x5f4aa8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8236; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_5f4aac:
    // 0x5f4aac: 0x6e206174  ldr         $zero, 0x6174($s1)
    ctx->pc = 0x5f4aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4ab0:
    // 0x5f4ab0: 0x6c20746f  ldr         $zero, 0x746F($at)
    ctx->pc = 0x5f4ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4ab4:
    // 0x5f4ab4: 0x6564616f  daddiu      $a0, $t3, 0x616F
    ctx->pc = 0x5f4ab4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24943);
label_5f4ab8:
    // 0x5f4ab8: 0x72702064  .word       0x72702064                   # INVALID     $s3, $s0, 0x2064 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4ab8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5F4AB8 raw=0x72702064");
label_5f4abc:
    // 0x5f4abc: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4abcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5F4ABC raw=0x7265706F");
label_5f4ac0:
    // 0x5f4ac0: 0x6f20796c  ldr         $zero, 0x796C($t9)
    ctx->pc = 0x5f4ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 31084); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4ac4:
    // 0x5f4ac4: 0x6f632072  ldr         $v1, 0x2072($k1)
    ctx->pc = 0x5f4ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f4ac8:
    // 0x5f4ac8: 0x70757272  .word       0x70757272                   # INVALID     $v1, $s5, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4ac8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F4AC8 raw=0x70757272");
label_5f4acc:
    // 0x5f4acc: 0x6d282074  ldr         $t0, 0x2074($t1)
    ctx->pc = 0x5f4accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_5f4ad0:
    // 0x5f4ad0: 0x6c43705f  ldr         $v1, 0x705F($v0)
    ctx->pc = 0x5f4ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f4ad4:
    // 0x5f4ad4: 0x20706d75  addi        $s0, $v1, 0x6D75
    ctx->pc = 0x5f4ad4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28021, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_5f4ad8:
    // 0x5f4ad8: 0x4e203d3d  .word       0x4E203D3D                   # INVALID     $s1, $zero, 0x3D3D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4ad8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4AD8 raw=0x4E203D3D");
label_5f4adc:
    // 0x5f4adc: 0x294c4c55  slti        $t4, $t2, 0x4C55
    ctx->pc = 0x5f4adcu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19541) ? 1 : 0);
label_5f4ae0:
    // 0x5f4ae0: 0x0  nop
    ctx->pc = 0x5f4ae0u;
    // NOP
label_5f4ae4:
    // 0x5f4ae4: 0x0  nop
    ctx->pc = 0x5f4ae4u;
    // NOP
label_5f4ae8:
    // 0x5f4ae8: 0x0  nop
    ctx->pc = 0x5f4ae8u;
    // NOP
label_5f4aec:
    // 0x5f4aec: 0x0  nop
    ctx->pc = 0x5f4aecu;
    // NOP
label_5f4af0:
    // 0x5f4af0: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4af4:
    if (ctx->pc == 0x5F4AF4u) {
        ctx->pc = 0x5F4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4AF0u;
        // 0x5f4af4: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4AF8u;
        goto label_5f4af8;
    }
    ctx->pc = 0x5F4AF0u;
    {
        const bool branch_taken_0x5f4af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4af0) {
            ctx->pc = 0x5F4AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4AF0u;
            // 0x5f4af4: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611C84u;
            return;
        }
    }
    ctx->pc = 0x5F4AF8u;
label_5f4af8:
    // 0x5f4af8: 0x53656c63  beql        $k1, $a1, . + 4 + (0x6C63 << 2)
label_5f4afc:
    if (ctx->pc == 0x5F4AFCu) {
        ctx->pc = 0x5F4AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4AF8u;
        // 0x5f4afc: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4B00u;
        goto label_5f4b00;
    }
    ctx->pc = 0x5F4AF8u;
    {
        const bool branch_taken_0x5f4af8 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f4af8) {
            ctx->pc = 0x5F4AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4AF8u;
            // 0x5f4afc: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60FC88u;
            return;
        }
    }
    ctx->pc = 0x5F4B00u;
label_5f4b00:
    // 0x5f4b00: 0x523a3a6d  beql        $s1, $k0, . + 4 + (0x3A6D << 2)
label_5f4b04:
    if (ctx->pc == 0x5F4B04u) {
        ctx->pc = 0x5F4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4B00u;
        // 0x5f4b04: 0x65646e65  daddiu      $a0, $t3, 0x6E65 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4B08u;
        goto label_5f4b08;
    }
    ctx->pc = 0x5F4B00u;
    {
        const bool branch_taken_0x5f4b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 26));
        if (branch_taken_0x5f4b00) {
            ctx->pc = 0x5F4B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4B00u;
            // 0x5f4b04: 0x65646e65  daddiu      $a0, $t3, 0x6E65 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
            ctx->in_delay_slot = false;
            ctx->pc = 0x6034B8u;
            return;
        }
    }
    ctx->pc = 0x5F4B08u;
label_5f4b08:
    // 0x5f4b08: 0x203a2072  addi        $k0, $at, 0x2072
    ctx->pc = 0x5f4b08u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8306, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5f4b0c:
    // 0x5f4b0c: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5f4b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4b10:
    // 0x5f4b10: 0x20657275  addi        $a1, $v1, 0x7275
    ctx->pc = 0x5f4b10u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29301, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f4b14:
    // 0x5f4b14: 0x6620666f  daddiu      $zero, $s1, 0x666F
    ctx->pc = 0x5f4b14u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)26223);
label_5f4b18:
    // 0x5f4b18: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4b18u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4B18 raw=0x74636E75");
label_5f4b1c:
    // 0x5f4b1c: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5f4b1cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5f4b20:
    // 0x5f4b20: 0x61647055  daddi       $a0, $t3, 0x7055
    ctx->pc = 0x5f4b20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28757; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_5f4b24:
    // 0x5f4b24: 0x29286574  slti        $t0, $t1, 0x6574
    ctx->pc = 0x5f4b24u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)25972) ? 1 : 0);
label_5f4b28:
    // 0x5f4b28: 0x6164202c  daddi       $a0, $t3, 0x202C
    ctx->pc = 0x5f4b28u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8236; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_5f4b2c:
    // 0x5f4b2c: 0x6e206174  ldr         $zero, 0x6174($s1)
    ctx->pc = 0x5f4b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4b30:
    // 0x5f4b30: 0x6c20746f  ldr         $zero, 0x746F($at)
    ctx->pc = 0x5f4b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4b34:
    // 0x5f4b34: 0x6564616f  daddiu      $a0, $t3, 0x616F
    ctx->pc = 0x5f4b34u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24943);
label_5f4b38:
    // 0x5f4b38: 0x72702064  .word       0x72702064                   # INVALID     $s3, $s0, 0x2064 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4b38u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5F4B38 raw=0x72702064");
label_5f4b3c:
    // 0x5f4b3c: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4b3cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5F4B3C raw=0x7265706F");
label_5f4b40:
    // 0x5f4b40: 0x6f20796c  ldr         $zero, 0x796C($t9)
    ctx->pc = 0x5f4b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 31084); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4b44:
    // 0x5f4b44: 0x6f632072  ldr         $v1, 0x2072($k1)
    ctx->pc = 0x5f4b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f4b48:
    // 0x5f4b48: 0x70757272  .word       0x70757272                   # INVALID     $v1, $s5, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4b48u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F4B48 raw=0x70757272");
label_5f4b4c:
    // 0x5f4b4c: 0x6d282074  ldr         $t0, 0x2074($t1)
    ctx->pc = 0x5f4b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_5f4b50:
    // 0x5f4b50: 0x6c43705f  ldr         $v1, 0x705F($v0)
    ctx->pc = 0x5f4b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f4b54:
    // 0x5f4b54: 0x20706d75  addi        $s0, $v1, 0x6D75
    ctx->pc = 0x5f4b54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28021, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_5f4b58:
    // 0x5f4b58: 0x4e203d3d  .word       0x4E203D3D                   # INVALID     $s1, $zero, 0x3D3D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4b58u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4B58 raw=0x4E203D3D");
label_5f4b5c:
    // 0x5f4b5c: 0x294c4c55  slti        $t4, $t2, 0x4C55
    ctx->pc = 0x5f4b5cu;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19541) ? 1 : 0);
label_5f4b60:
    // 0x5f4b60: 0x0  nop
    ctx->pc = 0x5f4b60u;
    // NOP
label_5f4b64:
    // 0x5f4b64: 0x0  nop
    ctx->pc = 0x5f4b64u;
    // NOP
label_5f4b68:
    // 0x5f4b68: 0x0  nop
    ctx->pc = 0x5f4b68u;
    // NOP
label_5f4b6c:
    // 0x5f4b6c: 0x0  nop
    ctx->pc = 0x5f4b6cu;
    // NOP
label_5f4b70:
    // 0x5f4b70: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4b74:
    if (ctx->pc == 0x5F4B74u) {
        ctx->pc = 0x5F4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4B70u;
        // 0x5f4b74: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4B78u;
        goto label_5f4b78;
    }
    ctx->pc = 0x5F4B70u;
    {
        const bool branch_taken_0x5f4b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4b70) {
            ctx->pc = 0x5F4B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4B70u;
            // 0x5f4b74: 0x69747261  ldl         $s4, 0x7261($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611D04u;
            return;
        }
    }
    ctx->pc = 0x5F4B78u;
label_5f4b78:
    // 0x5f4b78: 0x53656c63  beql        $k1, $a1, . + 4 + (0x6C63 << 2)
label_5f4b7c:
    if (ctx->pc == 0x5F4B7Cu) {
        ctx->pc = 0x5F4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4B78u;
        // 0x5f4b7c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4B80u;
        goto label_5f4b80;
    }
    ctx->pc = 0x5F4B78u;
    {
        const bool branch_taken_0x5f4b78 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f4b78) {
            ctx->pc = 0x5F4B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4B78u;
            // 0x5f4b7c: 0x65747379  daddiu      $s4, $t3, 0x7379 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29561);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60FD08u;
            return;
        }
    }
    ctx->pc = 0x5F4B80u;
label_5f4b80:
    // 0x5f4b80: 0x473a3a6d  .word       0x473A3A6D                   # INVALID     $t9, $k0, 0x3A6D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4b80u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x2D at 0x5F4B80 raw=0x473A3A6D");
label_5f4b84:
    // 0x5f4b84: 0x72467465  .word       0x72467465                   # INVALID     $s2, $a2, 0x7465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4b84u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F4B84 raw=0x72467465");
label_5f4b88:
    // 0x5f4b88: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x5f4b88u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f4b8c:
    // 0x5f4b8c: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5f4b8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5f4b90:
    // 0x5f4b90: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5f4b90u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f4b94:
    // 0x5f4b94: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f4b94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f4b98:
    // 0x5f4b98: 0x4c554e28  .word       0x4C554E28                   # INVALID     $v0, $s5, 0x4E28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4b98u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4B98 raw=0x4C554E28");
label_5f4b9c:
    // 0x5f4b9c: 0x6d20294c  ldr         $zero, 0x294C($t1)
    ctx->pc = 0x5f4b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10572); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4ba0:
    // 0x5f4ba0: 0x65626d65  daddiu      $v0, $t3, 0x6D65
    ctx->pc = 0x5f4ba0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28005);
label_5f4ba4:
    // 0x5f4ba4: 0x6f702072  ldr         $s0, 0x2072($k1)
    ctx->pc = 0x5f4ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f4ba8:
    // 0x5f4ba8: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5f4ba8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5f4bac:
    // 0x5f4bac: 0x65722072  daddiu      $s2, $t3, 0x2072
    ctx->pc = 0x5f4bacu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8306);
label_5f4bb0:
    // 0x5f4bb0: 0x65726566  daddiu      $s2, $t3, 0x6566
    ctx->pc = 0x5f4bb0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25958);
label_5f4bb4:
    // 0x5f4bb4: 0x2c65636e  sltiu       $a1, $v1, 0x636E
    ctx->pc = 0x5f4bb4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25454) ? 1 : 0);
label_5f4bb8:
    // 0x5f4bb8: 0x6968740a  ldl         $t0, 0x740A($t3)
    ctx->pc = 0x5f4bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29706); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_5f4bbc:
    // 0x5f4bbc: 0x626f2073  daddi       $t7, $s3, 0x2073
    ctx->pc = 0x5f4bbcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)8307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5f4bc0:
    // 0x5f4bc0: 0x7463656a  .word       0x7463656A                   # INVALID     $v1, $v1, 0x656A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4bc0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4BC0 raw=0x7463656A");
label_5f4bc4:
    // 0x5f4bc4: 0x73616820  madd1       $t5, $k1, $at
    ctx->pc = 0x5f4bc4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5f4bc8:
    // 0x5f4bc8: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4bc8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4BC8 raw=0x746F6E20");
label_5f4bcc:
    // 0x5f4bcc: 0x65656220  daddiu      $a1, $t3, 0x6220
    ctx->pc = 0x5f4bccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_5f4bd0:
    // 0x5f4bd0: 0x6f63206e  ldr         $v1, 0x206E($k1)
    ctx->pc = 0x5f4bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f4bd4:
    // 0x5f4bd4: 0x7274736e  .word       0x7274736E                   # INVALID     $s3, $s4, 0x736E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4bd4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F4BD4 raw=0x7274736E");
label_5f4bd8:
    // 0x5f4bd8: 0x65746375  daddiu      $s4, $t3, 0x6375
    ctx->pc = 0x5f4bd8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25461);
label_5f4bdc:
    // 0x5f4bdc: 0x72702064  .word       0x72702064                   # INVALID     $s3, $s0, 0x2064 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4bdcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5F4BDC raw=0x72702064");
label_5f4be0:
    // 0x5f4be0: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4be0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5F4BE0 raw=0x7265706F");
label_5f4be4:
    // 0x5f4be4: 0x796c  .word       0x0000796C                   # dadd        $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4be4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_5f4be8:
    // 0x5f4be8: 0x0  nop
    ctx->pc = 0x5f4be8u;
    // NOP
label_5f4bec:
    // 0x5f4bec: 0x0  nop
    ctx->pc = 0x5f4becu;
    // NOP
label_5f4bf0:
    // 0x5f4bf0: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4bf0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4BF0 raw=0x4C4C554E");
label_5f4bf4:
    // 0x5f4bf4: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4bf4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4bf8:
    // 0x5f4bf8: 0x4476705f  .word       0x4476705F                   # INVALID     $v1, $s6, 0x705F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4bf8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x1F at 0x5F4BF8 raw=0x4476705F");
label_5f4bfc:
    // 0x5f4bfc: 0x617461  .word       0x00617461                   # addu        $t6, $v1, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4bfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_5f4c00:
    // 0x5f4c00: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4c00u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4C00 raw=0x4C4C554E");
label_5f4c04:
    // 0x5f4c04: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4c04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4c08:
    // 0x5f4c08: 0x4f464e50  .word       0x4F464E50                   # INVALID     $k0, $a2, 0x4E50 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4c08u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4C08 raw=0x4F464E50");
label_5f4c0c:
    // 0x5f4c0c: 0x705f6d2e  .word       0x705F6D2E                   # INVALID     $v0, $ra, 0x6D2E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4c0cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F4C0C raw=0x705F6D2E");
label_5f4c10:
    // 0x5f4c10: 0x74696d45  .word       0x74696D45                   # INVALID     $v1, $t1, 0x6D45 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4c10u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4C10 raw=0x74696D45");
label_5f4c14:
    // 0x5f4c14: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5f4c14u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_5f4c18:
    // 0x5f4c18: 0x0  nop
    ctx->pc = 0x5f4c18u;
    // NOP
label_5f4c1c:
    // 0x5f4c1c: 0x0  nop
    ctx->pc = 0x5f4c1cu;
    // NOP
label_5f4c20:
    // 0x5f4c20: 0x6774645b  daddiu      $s4, $k1, 0x645B
    ctx->pc = 0x5f4c20u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25691);
label_5f4c24:
    // 0x5f4c24: 0x74726150  .word       0x74726150                   # INVALID     $v1, $s2, 0x6150 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4c24u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4C24 raw=0x74726150");
label_5f4c28:
    // 0x5f4c28: 0x656c6369  daddiu      $t4, $t3, 0x6369
    ctx->pc = 0x5f4c28u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25449);
label_5f4c2c:
    // 0x5f4c2c: 0x74737953  .word       0x74737953                   # INVALID     $v1, $s3, 0x7953 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4c2cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4C2C raw=0x74737953");
label_5f4c30:
    // 0x5f4c30: 0x205d6d65  addi        $sp, $v0, 0x6D65
    ctx->pc = 0x5f4c30u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)28005, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4c34:
    // 0x5f4c34: 0x6f4c3a3a  ldr         $t4, 0x3A3A($k0)
    ctx->pc = 0x5f4c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5f4c38:
    // 0x5f4c38: 0x2d206461  sltiu       $zero, $t1, 0x6461
    ctx->pc = 0x5f4c38u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_5f4c3c:
    // 0x5f4c3c: 0x66203e2d  daddiu      $zero, $s1, 0x3E2D
    ctx->pc = 0x5f4c3cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)15917);
label_5f4c40:
    // 0x5f4c40: 0x646e756f  daddiu      $t6, $v1, 0x756F
    ctx->pc = 0x5f4c40u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30063);
label_5f4c44:
    // 0x5f4c44: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5f4c44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5f4c48:
    // 0x5f4c48: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x5f4c48u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f4c4c:
    // 0x5f4c4c: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f4c4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f4c50:
    // 0x5f4c50: 0x4c554e28  .word       0x4C554E28                   # INVALID     $v0, $s5, 0x4E28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4c50u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4C50 raw=0x4C554E28");
label_5f4c54:
    // 0x5f4c54: 0x6f70204c  ldr         $s0, 0x204C($k1)
    ctx->pc = 0x5f4c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8268); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f4c58:
    // 0x5f4c58: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5f4c58u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5f4c5c:
    // 0x5f4c5c: 0x50202972  beql        $at, $zero, . + 4 + (0x2972 << 2)
label_5f4c60:
    if (ctx->pc == 0x5F4C60u) {
        ctx->pc = 0x5F4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4C5Cu;
        // 0x5f4c60: 0x74537472  .word       0x74537472                   # INVALID     $v0, $s3, 0x7472 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4C60 raw=0x74537472");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4C64u;
        goto label_5f4c64;
    }
    ctx->pc = 0x5F4C5Cu;
    {
        const bool branch_taken_0x5f4c5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5f4c5c) {
            ctx->pc = 0x5F4C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4C5Cu;
            // 0x5f4c60: 0x74537472  .word       0x74537472                   # INVALID     $v0, $s3, 0x7472 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4C60 raw=0x74537472");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FF228u;
            return;
        }
    }
    ctx->pc = 0x5F4C64u;
label_5f4c64:
    // 0x5f4c64: 0x6d652064  ldr         $a1, 0x2064($t3)
    ctx->pc = 0x5f4c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f4c68:
    // 0x5f4c68: 0x65747469  daddiu      $s4, $t3, 0x7469
    ctx->pc = 0x5f4c68u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29801);
label_5f4c6c:
    // 0x5f4c6c: 0x6e692072  ldr         $t1, 0x2072($s3)
    ctx->pc = 0x5f4c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4c70:
    // 0x5f4c70: 0x616f6c20  daddi       $t7, $t3, 0x6C20
    ctx->pc = 0x5f4c70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5f4c74:
    // 0x5f4c74: 0x20646564  addi        $a0, $v1, 0x6564
    ctx->pc = 0x5f4c74u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f4c78:
    // 0x5f4c78: 0x6d756c63  ldr         $s5, 0x6C63($t3)
    ctx->pc = 0x5f4c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27747); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5f4c7c:
    // 0x5f4c7c: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5f4c7cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f4c80:
    // 0x5f4c80: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4c80u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4C80 raw=0x4C4C554E");
label_5f4c84:
    // 0x5f4c84: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4c84u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4c88:
    // 0x5f4c88: 0x65527670  daddiu      $s2, $t2, 0x7670
    ctx->pc = 0x5f4c88u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)30320);
label_5f4c8c:
    // 0x5f4c8c: 0x646f4374  daddiu      $t7, $v1, 0x4374
    ctx->pc = 0x5f4c8cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17268);
label_5f4c90:
    // 0x5f4c90: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4c90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5f4c94:
    // 0x5f4c94: 0x0  nop
    ctx->pc = 0x5f4c94u;
    // NOP
label_5f4c98:
    // 0x5f4c98: 0x0  nop
    ctx->pc = 0x5f4c98u;
    // NOP
label_5f4c9c:
    // 0x5f4c9c: 0x0  nop
    ctx->pc = 0x5f4c9cu;
    // NOP
label_5f4ca0:
    // 0x5f4ca0: 0x6774645b  daddiu      $s4, $k1, 0x645B
    ctx->pc = 0x5f4ca0u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25691);
label_5f4ca4:
    // 0x5f4ca4: 0x74726150  .word       0x74726150                   # INVALID     $v1, $s2, 0x6150 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4ca4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4CA4 raw=0x74726150");
label_5f4ca8:
    // 0x5f4ca8: 0x656c6369  daddiu      $t4, $t3, 0x6369
    ctx->pc = 0x5f4ca8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25449);
label_5f4cac:
    // 0x5f4cac: 0x74737953  .word       0x74737953                   # INVALID     $v1, $s3, 0x7953 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4cacu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4CAC raw=0x74737953");
label_5f4cb0:
    // 0x5f4cb0: 0x205d6d65  addi        $sp, $v0, 0x6D65
    ctx->pc = 0x5f4cb0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)28005, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4cb4:
    // 0x5f4cb4: 0x6f4c3a3a  ldr         $t4, 0x3A3A($k0)
    ctx->pc = 0x5f4cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5f4cb8:
    // 0x5f4cb8: 0x2d206461  sltiu       $zero, $t1, 0x6461
    ctx->pc = 0x5f4cb8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_5f4cbc:
    // 0x5f4cbc: 0x52203e2d  beql        $s1, $zero, . + 4 + (0x3E2D << 2)
label_5f4cc0:
    if (ctx->pc == 0x5F4CC0u) {
        ctx->pc = 0x5F4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4CBCu;
        // 0x5f4cc0: 0x74725070  .word       0x74725070                   # INVALID     $v1, $s2, 0x5070 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4CC0 raw=0x74725070");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4CC4u;
        goto label_5f4cc4;
    }
    ctx->pc = 0x5F4CBCu;
    {
        const bool branch_taken_0x5f4cbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5f4cbc) {
            ctx->pc = 0x5F4CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4CBCu;
            // 0x5f4cc0: 0x74725070  .word       0x74725070                   # INVALID     $v1, $s2, 0x5070 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4CC0 raw=0x74725070");
            ctx->in_delay_slot = false;
            ctx->pc = 0x604574u;
            return;
        }
    }
    ctx->pc = 0x5F4CC4u;
label_5f4cc4:
    // 0x5f4cc4: 0x45647453  .word       0x45647453                   # INVALID     $t3, $a0, 0x7453 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4cc4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x13 at 0x5F4CC4 raw=0x45647453");
label_5f4cc8:
    // 0x5f4cc8: 0x7474696d  .word       0x7474696D                   # INVALID     $v1, $s4, 0x696D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4cc8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4CC8 raw=0x7474696D");
label_5f4ccc:
    // 0x5f4ccc: 0x65477265  daddiu      $a3, $t2, 0x7265
    ctx->pc = 0x5f4cccu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)29285);
label_5f4cd0:
    // 0x5f4cd0: 0x6c435074  ldr         $v1, 0x5074($v0)
    ctx->pc = 0x5f4cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 20596); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f4cd4:
    // 0x5f4cd4: 0x20737361  addi        $s3, $v1, 0x7361
    ctx->pc = 0x5f4cd4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f4cd8:
    // 0x5f4cd8: 0x6c696166  ldr         $t1, 0x6166($v1)
    ctx->pc = 0x5f4cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24934); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4cdc:
    // 0x5f4cdc: 0x202c6465  addi        $t4, $at, 0x6465
    ctx->pc = 0x5f4cdcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25701, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_5f4ce0:
    // 0x5f4ce0: 0x75746572  .word       0x75746572                   # INVALID     $t3, $s4, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4ce0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4CE0 raw=0x75746572");
label_5f4ce4:
    // 0x5f4ce4: 0x64656e72  daddiu      $a1, $v1, 0x6E72
    ctx->pc = 0x5f4ce4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28274);
label_5f4ce8:
    // 0x5f4ce8: 0x206e6120  addi        $t6, $v1, 0x6120
    ctx->pc = 0x5f4ce8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24864, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5f4cec:
    // 0x5f4cec: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5f4cecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f4cf0:
    // 0x5f4cf0: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f4cf0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f4cf4:
    // 0x5f4cf4: 0x4c554e28  .word       0x4C554E28                   # INVALID     $v0, $s5, 0x4E28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4cf4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4CF4 raw=0x4C554E28");
label_5f4cf8:
    // 0x5f4cf8: 0x7020294c  .word       0x7020294C                   # INVALID     $at, $zero, 0x294C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4cf8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x5F4CF8 raw=0x7020294C");
label_5f4cfc:
    // 0x5f4cfc: 0x746e696f  .word       0x746E696F                   # INVALID     $v1, $t6, 0x696F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4cfcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4CFC raw=0x746E696F");
label_5f4d00:
    // 0x5f4d00: 0x72207265  .word       0x72207265                   # INVALID     $s1, $zero, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4d00u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F4D00 raw=0x72207265");
label_5f4d04:
    // 0x5f4d04: 0x72656665  .word       0x72656665                   # INVALID     $s3, $a1, 0x6665 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4d04u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F4D04 raw=0x72656665");
label_5f4d08:
    // 0x5f4d08: 0x65636e65  daddiu      $v1, $t3, 0x6E65
    ctx->pc = 0x5f4d08u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_5f4d0c:
    // 0x5f4d0c: 0x0  nop
    ctx->pc = 0x5f4d0cu;
    // NOP
label_5f4d10:
    // 0x5f4d10: 0x6774645b  daddiu      $s4, $k1, 0x645B
    ctx->pc = 0x5f4d10u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25691);
label_5f4d14:
    // 0x5f4d14: 0x74726150  .word       0x74726150                   # INVALID     $v1, $s2, 0x6150 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4d14u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4D14 raw=0x74726150");
label_5f4d18:
    // 0x5f4d18: 0x656c6369  daddiu      $t4, $t3, 0x6369
    ctx->pc = 0x5f4d18u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25449);
label_5f4d1c:
    // 0x5f4d1c: 0x74737953  .word       0x74737953                   # INVALID     $v1, $s3, 0x7953 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4d1cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4D1C raw=0x74737953");
label_5f4d20:
    // 0x5f4d20: 0x205d6d65  addi        $sp, $v0, 0x6D65
    ctx->pc = 0x5f4d20u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)28005, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4d24:
    // 0x5f4d24: 0x6f4c3a3a  ldr         $t4, 0x3A3A($k0)
    ctx->pc = 0x5f4d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5f4d28:
    // 0x5f4d28: 0x2d206461  sltiu       $zero, $t1, 0x6461
    ctx->pc = 0x5f4d28u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25697) ? 1 : 0);
label_5f4d2c:
    // 0x5f4d2c: 0x52203e2d  beql        $s1, $zero, . + 4 + (0x3E2D << 2)
label_5f4d30:
    if (ctx->pc == 0x5F4D30u) {
        ctx->pc = 0x5F4D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4D2Cu;
        // 0x5f4d30: 0x74725070  .word       0x74725070                   # INVALID     $v1, $s2, 0x5070 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4D30 raw=0x74725070");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4D34u;
        goto label_5f4d34;
    }
    ctx->pc = 0x5F4D2Cu;
    {
        const bool branch_taken_0x5f4d2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5f4d2c) {
            ctx->pc = 0x5F4D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4D2Cu;
            // 0x5f4d30: 0x74725070  .word       0x74725070                   # INVALID     $v1, $s2, 0x5070 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4D30 raw=0x74725070");
            ctx->in_delay_slot = false;
            ctx->pc = 0x6045E4u;
            return;
        }
    }
    ctx->pc = 0x5F4D34u;
label_5f4d34:
    // 0x5f4d34: 0x45647453  .word       0x45647453                   # INVALID     $t3, $a0, 0x7453 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f4d34u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x13 at 0x5F4D34 raw=0x45647453");
label_5f4d38:
    // 0x5f4d38: 0x7474696d  .word       0x7474696D                   # INVALID     $v1, $s4, 0x696D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4d38u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4D38 raw=0x7474696D");
label_5f4d3c:
    // 0x5f4d3c: 0x72437265  .word       0x72437265                   # INVALID     $s2, $v1, 0x7265 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4d3cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F4D3C raw=0x72437265");
label_5f4d40:
    // 0x5f4d40: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x5f4d40u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_5f4d44:
    // 0x5f4d44: 0x6e615450  ldr         $at, 0x5450($s3)
    ctx->pc = 0x5f4d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4d48:
    // 0x5f4d48: 0x6166206b  daddi       $a2, $t3, 0x206B
    ctx->pc = 0x5f4d48u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8299; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
label_5f4d4c:
    // 0x5f4d4c: 0x64656c69  daddiu      $a1, $v1, 0x6C69
    ctx->pc = 0x5f4d4cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27753);
label_5f4d50:
    // 0x5f4d50: 0x6572202c  daddiu      $s2, $t3, 0x202C
    ctx->pc = 0x5f4d50u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8236);
label_5f4d54:
    // 0x5f4d54: 0x6e727574  ldr         $s2, 0x7574($s3)
    ctx->pc = 0x5f4d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30068); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_5f4d58:
    // 0x5f4d58: 0x61206465  daddi       $zero, $t1, 0x6465
    ctx->pc = 0x5f4d58u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)25701; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5f4d5c:
    // 0x5f4d5c: 0x6e49206e  ldr         $t1, 0x206E($s2)
    ctx->pc = 0x5f4d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4d60:
    // 0x5f4d60: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x5f4d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5f4d64:
    // 0x5f4d64: 0x4e282064  .word       0x4E282064                   # INVALID     $s1, $t0, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4d64u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4D64 raw=0x4E282064");
label_5f4d68:
    // 0x5f4d68: 0x294c4c55  slti        $t4, $t2, 0x4C55
    ctx->pc = 0x5f4d68u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19541) ? 1 : 0);
label_5f4d6c:
    // 0x5f4d6c: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5f4d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5f4d70:
    // 0x5f4d70: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4d70u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F4D70 raw=0x7265746E");
label_5f4d74:
    // 0x5f4d74: 0x66657220  daddiu      $a1, $s3, 0x7220
    ctx->pc = 0x5f4d74u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29216);
label_5f4d78:
    // 0x5f4d78: 0x6e657265  ldr         $a1, 0x7265($s3)
    ctx->pc = 0x5f4d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f4d7c:
    // 0x5f4d7c: 0x6563  .word       0x00006563                   # negu        $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4d7cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_5f4d80:
    // 0x5f4d80: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4d84:
    if (ctx->pc == 0x5F4D84u) {
        ctx->pc = 0x5F4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4D80u;
        // 0x5f4d84: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4D88u;
        goto label_5f4d88;
    }
    ctx->pc = 0x5F4D80u;
    {
        const bool branch_taken_0x5f4d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4d80) {
            ctx->pc = 0x5F4D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4D80u;
            // 0x5f4d84: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x611F14u;
            return;
        }
    }
    ctx->pc = 0x5F4D88u;
label_5f4d88:
    // 0x5f4d88: 0x6e614d73  ldr         $at, 0x4D73($s3)
    ctx->pc = 0x5f4d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19827); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4d8c:
    // 0x5f4d8c: 0x72656761  .word       0x72656761                   # maddu1      $t4, $s3, $a1 # 00000740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4d8cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f4d90:
    // 0x5f4d90: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4d90u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F4D90 raw=0x7070632E");
label_5f4d94:
    // 0x5f4d94: 0x0  nop
    ctx->pc = 0x5f4d94u;
    // NOP
label_5f4d98:
    // 0x5f4d98: 0x0  nop
    ctx->pc = 0x5f4d98u;
    // NOP
label_5f4d9c:
    // 0x5f4d9c: 0x0  nop
    ctx->pc = 0x5f4d9cu;
    // NOP
label_5f4da0:
    // 0x5f4da0: 0x5474735f  bnel        $v1, $s4, . + 4 + (0x735F << 2)
label_5f4da4:
    if (ctx->pc == 0x5F4DA4u) {
        ctx->pc = 0x5F4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4DA0u;
        // 0x5f4da4: 0x61507865  daddi       $s0, $t2, 0x7865 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)30821; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4DA8u;
        goto label_5f4da8;
    }
    ctx->pc = 0x5F4DA0u;
    {
        const bool branch_taken_0x5f4da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x5f4da0) {
            ctx->pc = 0x5F4DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4DA0u;
            // 0x5f4da4: 0x61507865  daddi       $s0, $t2, 0x7865 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)30821; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611B20u;
            return;
        }
    }
    ctx->pc = 0x5F4DA8u;
label_5f4da8:
    // 0x5f4da8: 0x70536874  .word       0x70536874                   # psllh       $t5, $s3, 1 # 00400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4da8u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 19), 1));
label_5f4dac:
    // 0x5f4dac: 0x6c2e6365  ldr         $t6, 0x6365($at)
    ctx->pc = 0x5f4dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 25445); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_5f4db0:
    // 0x5f4db0: 0x74676e65  .word       0x74676E65                   # INVALID     $v1, $a3, 0x6E65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4db0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4DB0 raw=0x74676E65");
label_5f4db4:
    // 0x5f4db4: 0x20292868  addi        $t1, $at, 0x2868
    ctx->pc = 0x5f4db4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10344, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_5f4db8:
    // 0x5f4db8: 0x30203e  .word       0x0030203E                   # dsrl32      $a0, $s0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 0));
label_5f4dbc:
    // 0x5f4dbc: 0x0  nop
    ctx->pc = 0x5f4dbcu;
    // NOP
label_5f4dc0:
    // 0x5f4dc0: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4dc4:
    if (ctx->pc == 0x5F4DC4u) {
        ctx->pc = 0x5F4DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4DC0u;
        // 0x5f4dc4: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4DC8u;
        goto label_5f4dc8;
    }
    ctx->pc = 0x5F4DC0u;
    {
        const bool branch_taken_0x5f4dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4dc0) {
            ctx->pc = 0x5F4DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4DC0u;
            // 0x5f4dc4: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x611F54u;
            return;
        }
    }
    ctx->pc = 0x5F4DC8u;
label_5f4dc8:
    // 0x5f4dc8: 0x6e614d73  ldr         $at, 0x4D73($s3)
    ctx->pc = 0x5f4dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19827); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4dcc:
    // 0x5f4dcc: 0x72656761  .word       0x72656761                   # maddu1      $t4, $s3, $a1 # 00000740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4dccu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f4dd0:
    // 0x5f4dd0: 0x65533a3a  daddiu      $s3, $t2, 0x3A3A
    ctx->pc = 0x5f4dd0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f4dd4:
    // 0x5f4dd4: 0x78655474  lq          $a1, 0x5474($v1)
    ctx->pc = 0x5f4dd4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 21620)));
label_5f4dd8:
    // 0x5f4dd8: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x5f4dd8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
label_5f4ddc:
    // 0x5f4ddc: 0x68746150  ldl         $s4, 0x6150($v1)
    ctx->pc = 0x5f4ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f4de0:
    // 0x5f4de0: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4de0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5f4de4:
    // 0x5f4de4: 0x766e4920  .word       0x766E4920                   # INVALID     $s3, $t6, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4de4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4DE4 raw=0x766E4920");
label_5f4de8:
    // 0x5f4de8: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x5f4de8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
label_5f4dec:
    // 0x5f4dec: 0x4d452820  .word       0x4D452820                   # INVALID     $t2, $a1, 0x2820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4decu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4DEC raw=0x4D452820");
label_5f4df0:
    // 0x5f4df0: 0x29595450  slti        $t9, $t2, 0x5450
    ctx->pc = 0x5f4df0u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)21584) ? 1 : 0);
label_5f4df4:
    // 0x5f4df4: 0x72696420  .word       0x72696420                   # madd1       $t4, $s3, $t1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4df4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 9); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f4df8:
    // 0x5f4df8: 0x6f746365  ldr         $s4, 0x6365($k1)
    ctx->pc = 0x5f4df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25445); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_5f4dfc:
    // 0x5f4dfc: 0x70207972  .word       0x70207972                   # INVALID     $at, $zero, 0x7972 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4dfcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F4DFC raw=0x70207972");
label_5f4e00:
    // 0x5f4e00: 0x687461  .word       0x00687461                   # addu        $t6, $v1, $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4e00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_5f4e04:
    // 0x5f4e04: 0x0  nop
    ctx->pc = 0x5f4e04u;
    // NOP
label_5f4e08:
    // 0x5f4e08: 0x0  nop
    ctx->pc = 0x5f4e08u;
    // NOP
label_5f4e0c:
    // 0x5f4e0c: 0x0  nop
    ctx->pc = 0x5f4e0cu;
    // NOP
label_5f4e10:
    // 0x5f4e10: 0x5452505b  bnel        $v0, $s2, . + 4 + (0x505B << 2)
label_5f4e14:
    if (ctx->pc == 0x5F4E14u) {
        ctx->pc = 0x5F4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4E10u;
        // 0x5f4e14: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x5F4E14 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4E18u;
        goto label_5f4e18;
    }
    ctx->pc = 0x5F4E10u;
    {
        const bool branch_taken_0x5f4e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f4e10) {
            ctx->pc = 0x5F4E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4E10u;
            // 0x5f4e14: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x5F4E14 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x608F80u;
            return;
        }
    }
    ctx->pc = 0x5F4E18u;
label_5f4e18:
    // 0x5f4e18: 0x73252220  .word       0x73252220                   # madd1       $a0, $t9, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4e18u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5f4e1c:
    // 0x5f4e1c: 0x6e692022  ldr         $t1, 0x2022($s3)
    ctx->pc = 0x5f4e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4e20:
    // 0x5f4e20: 0x63616320  daddi       $at, $k1, 0x6320
    ctx->pc = 0x5f4e20u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25376; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5f4e24:
    // 0x5f4e24: 0x28206568  slti        $zero, $at, 0x6568
    ctx->pc = 0x5f4e24u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25960) ? 1 : 0);
label_5f4e28:
    // 0x5f4e28: 0x68636163  ldl         $v1, 0x6163($v1)
    ctx->pc = 0x5f4e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24931); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5f4e2c:
    // 0x5f4e2c: 0x6e6f2d65  ldr         $t7, 0x2D65($s3)
    ctx->pc = 0x5f4e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 11621); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5f4e30:
    // 0x5f4e30: 0x29796c  .word       0x0029796C                   # dadd        $t7, $at, $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4e30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 9); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_5f4e34:
    // 0x5f4e34: 0x0  nop
    ctx->pc = 0x5f4e34u;
    // NOP
label_5f4e38:
    // 0x5f4e38: 0x0  nop
    ctx->pc = 0x5f4e38u;
    // NOP
label_5f4e3c:
    // 0x5f4e3c: 0x0  nop
    ctx->pc = 0x5f4e3cu;
    // NOP
label_5f4e40:
    // 0x5f4e40: 0x5452505b  bnel        $v0, $s2, . + 4 + (0x505B << 2)
label_5f4e44:
    if (ctx->pc == 0x5F4E44u) {
        ctx->pc = 0x5F4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4E40u;
        // 0x5f4e44: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x5F4E44 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4E48u;
        goto label_5f4e48;
    }
    ctx->pc = 0x5F4E40u;
    {
        const bool branch_taken_0x5f4e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f4e40) {
            ctx->pc = 0x5F4E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4E40u;
            // 0x5f4e44: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x5F4E44 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x608FB0u;
            return;
        }
    }
    ctx->pc = 0x5F4E48u;
label_5f4e48:
    // 0x5f4e48: 0x73252220  .word       0x73252220                   # madd1       $a0, $t9, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4e48u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5f4e4c:
    // 0x5f4e4c: 0x6e692022  ldr         $t1, 0x2022($s3)
    ctx->pc = 0x5f4e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8226); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4e50:
    // 0x5f4e50: 0x63616320  daddi       $at, $k1, 0x6320
    ctx->pc = 0x5f4e50u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25376; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_5f4e54:
    // 0x5f4e54: 0x28206568  slti        $zero, $at, 0x6568
    ctx->pc = 0x5f4e54u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25960) ? 1 : 0);
label_5f4e58:
    // 0x5f4e58: 0x6e6f6c63  ldr         $t7, 0x6C63($s3)
    ctx->pc = 0x5f4e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27747); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5f4e5c:
    // 0x5f4e5c: 0x2965  .word       0x00002965                   # move        $a1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5f4e60:
    // 0x5f4e60: 0x5452505b  bnel        $v0, $s2, . + 4 + (0x505B << 2)
label_5f4e64:
    if (ctx->pc == 0x5F4E64u) {
        ctx->pc = 0x5F4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4E60u;
        // 0x5f4e64: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x5F4E64 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4E68u;
        goto label_5f4e68;
    }
    ctx->pc = 0x5F4E60u;
    {
        const bool branch_taken_0x5f4e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f4e60) {
            ctx->pc = 0x5F4E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4E60u;
            // 0x5f4e64: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x5F4E64 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x608FD0u;
            return;
        }
    }
    ctx->pc = 0x5F4E68u;
label_5f4e68:
    // 0x5f4e68: 0x73252220  .word       0x73252220                   # madd1       $a0, $t9, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4e68u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5f4e6c:
    // 0x5f4e6c: 0x756a2022  .word       0x756A2022                   # INVALID     $t3, $t2, 0x2022 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4e6cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4E6C raw=0x756A2022");
label_5f4e70:
    // 0x5f4e70: 0x63207473  daddi       $zero, $t9, 0x7473
    ctx->pc = 0x5f4e70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29811; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5f4e74:
    // 0x5f4e74: 0x65686361  daddiu      $t0, $t3, 0x6361
    ctx->pc = 0x5f4e74u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
label_5f4e78:
    // 0x5f4e78: 0x63282064  daddi       $t0, $t9, 0x2064
    ctx->pc = 0x5f4e78u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_5f4e7c:
    // 0x5f4e7c: 0x65686361  daddiu      $t0, $t3, 0x6361
    ctx->pc = 0x5f4e7cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
label_5f4e80:
    // 0x5f4e80: 0x6c6e6f2d  ldr         $t6, 0x6F2D($v1)
    ctx->pc = 0x5f4e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28461); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_5f4e84:
    // 0x5f4e84: 0x2979  .word       0x00002979                   # INVALID     $zero, $zero, 0x2979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4e84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x5F4E84 raw=0x00002979");
label_5f4e88:
    // 0x5f4e88: 0x0  nop
    ctx->pc = 0x5f4e88u;
    // NOP
label_5f4e8c:
    // 0x5f4e8c: 0x0  nop
    ctx->pc = 0x5f4e8cu;
    // NOP
label_5f4e90:
    // 0x5f4e90: 0x5452505b  bnel        $v0, $s2, . + 4 + (0x505B << 2)
label_5f4e94:
    if (ctx->pc == 0x5F4E94u) {
        ctx->pc = 0x5F4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4E90u;
        // 0x5f4e94: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x5F4E94 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4E98u;
        goto label_5f4e98;
    }
    ctx->pc = 0x5F4E90u;
    {
        const bool branch_taken_0x5f4e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f4e90) {
            ctx->pc = 0x5F4E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4E90u;
            // 0x5f4e94: 0x5d535953  .word       0x5D535953                   # bgtzl       $t2, . + 4 + (0x5953 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x5F4E94 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x609000u;
            return;
        }
    }
    ctx->pc = 0x5F4E98u;
label_5f4e98:
    // 0x5f4e98: 0x73252220  .word       0x73252220                   # madd1       $a0, $t9, $a1 # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4e98u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5f4e9c:
    // 0x5f4e9c: 0x756a2022  .word       0x756A2022                   # INVALID     $t3, $t2, 0x2022 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4e9cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4E9C raw=0x756A2022");
label_5f4ea0:
    // 0x5f4ea0: 0x63207473  daddi       $zero, $t9, 0x7473
    ctx->pc = 0x5f4ea0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29811; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5f4ea4:
    // 0x5f4ea4: 0x65686361  daddiu      $t0, $t3, 0x6361
    ctx->pc = 0x5f4ea4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25441);
label_5f4ea8:
    // 0x5f4ea8: 0x74282064  .word       0x74282064                   # INVALID     $at, $t0, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4ea8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4EA8 raw=0x74282064");
label_5f4eac:
    // 0x5f4eac: 0x6562206f  daddiu      $v0, $t3, 0x206F
    ctx->pc = 0x5f4eacu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
label_5f4eb0:
    // 0x5f4eb0: 0x6f6c6320  ldr         $t4, 0x6320($k1)
    ctx->pc = 0x5f4eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_5f4eb4:
    // 0x5f4eb4: 0x2964656e  slti        $a0, $t3, 0x656E
    ctx->pc = 0x5f4eb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)25966) ? 1 : 0);
label_5f4eb8:
    // 0x5f4eb8: 0x0  nop
    ctx->pc = 0x5f4eb8u;
    // NOP
label_5f4ebc:
    // 0x5f4ebc: 0x0  nop
    ctx->pc = 0x5f4ebcu;
    // NOP
label_5f4ec0:
    // 0x5f4ec0: 0x73652763  .word       0x73652763                   # INVALID     $k1, $a1, 0x2763 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4ec0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x5F4EC0 raw=0x73652763");
label_5f4ec4:
    // 0x5f4ec4: 0x65632074  daddiu      $v1, $t3, 0x2074
    ctx->pc = 0x5f4ec4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
label_5f4ec8:
    // 0x5f4ec8: 0x20e9736e  addi        $t1, $a3, 0x736E
    ctx->pc = 0x5f4ec8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)29550, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_5f4ecc:
    // 0x5f4ecc: 0x72696166  .word       0x72696166                   # INVALID     $s3, $t1, 0x6166 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4eccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x5F4ECC raw=0x72696166");
label_5f4ed0:
    // 0x5f4ed0: 0x75712065  .word       0x75712065                   # INVALID     $t3, $s1, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4ed0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4ED0 raw=0x75712065");
label_5f4ed4:
    // 0x5f4ed4: 0x6320696f  daddi       $zero, $t9, 0x696F
    ctx->pc = 0x5f4ed4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)26991; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5f4ed8:
    // 0x5f4ed8: 0x65747465  daddiu      $s4, $t3, 0x7465
    ctx->pc = 0x5f4ed8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29797);
label_5f4edc:
    // 0x5f4edc: 0x74e96d20  .word       0x74E96D20                   # INVALID     $a3, $t1, 0x6D20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4edcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4EDC raw=0x74E96D20");
label_5f4ee0:
    // 0x5f4ee0: 0x65646f68  daddiu      $a0, $t3, 0x6F68
    ctx->pc = 0x5f4ee0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28520);
label_5f4ee4:
    // 0x5f4ee4: 0x203f3f20  addi        $ra, $at, 0x3F20
    ctx->pc = 0x5f4ee4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)16160, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_5f4ee8:
    // 0x5f4ee8: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4ee8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4EE8 raw=0x746E6F63");
label_5f4eec:
    // 0x5f4eec: 0x65756e69  daddiu      $s5, $t3, 0x6E69
    ctx->pc = 0x5f4eecu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5f4ef0:
    // 0x5f4ef0: 0x20e0207a  addi        $zero, $a3, 0x207A
    ctx->pc = 0x5f4ef0u;
    // NOP (addi to $zero)
label_5f4ef4:
    // 0x5f4ef4: 0x20736f76  addi        $s3, $v1, 0x6F76
    ctx->pc = 0x5f4ef4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28534, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f4ef8:
    // 0x5f4ef8: 0x71736972  .word       0x71736972                   # INVALID     $t3, $s3, 0x6972 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4ef8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5F4EF8 raw=0x71736972");
label_5f4efc:
    // 0x5f4efc: 0x20736575  addi        $s3, $v1, 0x6575
    ctx->pc = 0x5f4efcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25973, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f4f00:
    // 0x5f4f00: 0x70207465  .word       0x70207465                   # INVALID     $at, $zero, 0x7465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4f00u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F4F00 raw=0x70207465");
label_5f4f04:
    // 0x5f4f04: 0x6c6972e9  ldr         $t1, 0x72E9($v1)
    ctx->pc = 0x5f4f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29417); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4f08:
    // 0x5f4f08: 0x2e2e2e73  sltiu       $t6, $s1, 0x2E73
    ctx->pc = 0x5f4f08u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11891) ? 1 : 0);
label_5f4f0c:
    // 0x5f4f0c: 0x0  nop
    ctx->pc = 0x5f4f0cu;
    // NOP
label_5f4f10:
    // 0x5f4f10: 0x5074735f  beql        $v1, $s4, . + 4 + (0x735F << 2)
label_5f4f14:
    if (ctx->pc == 0x5F4F14u) {
        ctx->pc = 0x5F4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4F10u;
        // 0x5f4f14: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4F18u;
        goto label_5f4f18;
    }
    ctx->pc = 0x5F4F10u;
    {
        const bool branch_taken_0x5f4f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x5f4f10) {
            ctx->pc = 0x5F4F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4F10u;
            // 0x5f4f14: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x611C90u;
            return;
        }
    }
    ctx->pc = 0x5F4F18u;
label_5f4f18:
    // 0x5f4f18: 0x6d614e73  ldr         $at, 0x4E73($t3)
    ctx->pc = 0x5f4f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 20083); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4f1c:
    // 0x5f4f1c: 0x26262065  addiu       $a2, $s1, 0x2065
    ctx->pc = 0x5f4f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8293));
label_5f4f20:
    // 0x5f4f20: 0x735f2a20  .word       0x735F2A20                   # madd1       $a1, $k0, $ra # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4f20u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 26) * (int64_t)GPR_S32(ctx, 31); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_5f4f24:
    // 0x5f4f24: 0x74725074  .word       0x74725074                   # INVALID     $v1, $s2, 0x5074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4f24u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4F24 raw=0x74725074");
label_5f4f28:
    // 0x5f4f28: 0x4e737953  .word       0x4E737953                   # INVALID     $s3, $s3, 0x7953 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4f28u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4F28 raw=0x4E737953");
label_5f4f2c:
    // 0x5f4f2c: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4f2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5f4f30:
    // 0x5f4f30: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4f34:
    if (ctx->pc == 0x5F4F34u) {
        ctx->pc = 0x5F4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4F30u;
        // 0x5f4f34: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4F38u;
        goto label_5f4f38;
    }
    ctx->pc = 0x5F4F30u;
    {
        const bool branch_taken_0x5f4f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4f30) {
            ctx->pc = 0x5F4F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4F30u;
            // 0x5f4f34: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6120C4u;
            return;
        }
    }
    ctx->pc = 0x5F4F38u;
label_5f4f38:
    // 0x5f4f38: 0x6e614d73  ldr         $at, 0x4D73($s3)
    ctx->pc = 0x5f4f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19827); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4f3c:
    // 0x5f4f3c: 0x72656761  .word       0x72656761                   # maddu1      $t4, $s3, $a1 # 00000740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4f3cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f4f40:
    // 0x5f4f40: 0x65523a3a  daddiu      $s2, $t2, 0x3A3A
    ctx->pc = 0x5f4f40u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f4f44:
    // 0x5f4f44: 0x74736967  .word       0x74736967                   # INVALID     $v1, $s3, 0x6967 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4f44u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4F44 raw=0x74736967");
label_5f4f48:
    // 0x5f4f48: 0x2d207265  sltiu       $zero, $t1, 0x7265
    ctx->pc = 0x5f4f48u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29285) ? 1 : 0);
label_5f4f4c:
    // 0x5f4f4c: 0x49203e2d  .word       0x49203E2D                   # INVALID     $t1, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f4f4cu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F4F4C raw=0x49203E2D");
label_5f4f50:
    // 0x5f4f50: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f4f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4f54:
    // 0x5f4f54: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5f4f54u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5f4f58:
    // 0x5f4f58: 0x54504d45  bnel        $v0, $s0, . + 4 + (0x4D45 << 2)
label_5f4f5c:
    if (ctx->pc == 0x5F4F5Cu) {
        ctx->pc = 0x5F4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4F58u;
        // 0x5f4f5c: 0x70202959  .word       0x70202959                   # multu1      $a1, $at, $zero # 00000140 <InstrIdType: R5900_MMI> (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 1) * (uint64_t)GPR_U32(ctx, 0); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4F60u;
        goto label_5f4f60;
    }
    ctx->pc = 0x5F4F58u;
    {
        const bool branch_taken_0x5f4f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x5f4f58) {
            ctx->pc = 0x5F4F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4F58u;
            // 0x5f4f5c: 0x70202959  .word       0x70202959                   # multu1      $a1, $at, $zero # 00000140 <InstrIdType: R5900_MMI> (Delay Slot)
            { uint64_t result = (uint64_t)GPR_U32(ctx, 1) * (uint64_t)GPR_U32(ctx, 0); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x608470u;
            return;
        }
    }
    ctx->pc = 0x5F4F60u;
label_5f4f60:
    // 0x5f4f60: 0x69747261  ldl         $s4, 0x7261($t3)
    ctx->pc = 0x5f4f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f4f64:
    // 0x5f4f64: 0x20656c63  addi        $a1, $v1, 0x6C63
    ctx->pc = 0x5f4f64u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27747, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f4f68:
    // 0x5f4f68: 0x74737973  .word       0x74737973                   # INVALID     $v1, $s3, 0x7973 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4f68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4F68 raw=0x74737973");
label_5f4f6c:
    // 0x5f4f6c: 0x6e206d65  ldr         $zero, 0x6D65($s1)
    ctx->pc = 0x5f4f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f4f70:
    // 0x5f4f70: 0x656d61  .word       0x00656D61                   # addu        $t5, $v1, $a1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4f70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5f4f74:
    // 0x5f4f74: 0x0  nop
    ctx->pc = 0x5f4f74u;
    // NOP
label_5f4f78:
    // 0x5f4f78: 0x7250705f  .word       0x7250705F                   # INVALID     $s2, $s0, 0x705F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4f78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x5F4F78 raw=0x7250705F");
label_5f4f7c:
    // 0x5f4f7c: 0x73795374  .word       0x73795374                   # psllh       $t2, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4f7cu;
    SET_GPR_VEC(ctx, 10, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
label_5f4f80:
    // 0x5f4f80: 0x0  nop
    ctx->pc = 0x5f4f80u;
    // NOP
label_5f4f84:
    // 0x5f4f84: 0x0  nop
    ctx->pc = 0x5f4f84u;
    // NOP
label_5f4f88:
    // 0x5f4f88: 0x0  nop
    ctx->pc = 0x5f4f88u;
    // NOP
label_5f4f8c:
    // 0x5f4f8c: 0x0  nop
    ctx->pc = 0x5f4f8cu;
    // NOP
label_5f4f90:
    // 0x5f4f90: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f4f94:
    if (ctx->pc == 0x5F4F94u) {
        ctx->pc = 0x5F4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F4F90u;
        // 0x5f4f94: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F4F98u;
        goto label_5f4f98;
    }
    ctx->pc = 0x5F4F90u;
    {
        const bool branch_taken_0x5f4f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f4f90) {
            ctx->pc = 0x5F4F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F4F90u;
            // 0x5f4f94: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x612124u;
            return;
        }
    }
    ctx->pc = 0x5F4F98u;
label_5f4f98:
    // 0x5f4f98: 0x6e614d73  ldr         $at, 0x4D73($s3)
    ctx->pc = 0x5f4f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19827); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4f9c:
    // 0x5f4f9c: 0x72656761  .word       0x72656761                   # maddu1      $t4, $s3, $a1 # 00000740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4f9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f4fa0:
    // 0x5f4fa0: 0x65523a3a  daddiu      $s2, $t2, 0x3A3A
    ctx->pc = 0x5f4fa0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f4fa4:
    // 0x5f4fa4: 0x74736967  .word       0x74736967                   # INVALID     $v1, $s3, 0x6967 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4fa4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F4FA4 raw=0x74736967");
label_5f4fa8:
    // 0x5f4fa8: 0x2d207265  sltiu       $zero, $t1, 0x7265
    ctx->pc = 0x5f4fa8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)29285) ? 1 : 0);
label_5f4fac:
    // 0x5f4fac: 0x49203e2d  .word       0x49203E2D                   # INVALID     $t1, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f4facu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F4FAC raw=0x49203E2D");
label_5f4fb0:
    // 0x5f4fb0: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f4fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f4fb4:
    // 0x5f4fb4: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5f4fb4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5f4fb8:
    // 0x5f4fb8: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4fb8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4FB8 raw=0x4C4C554E");
label_5f4fbc:
    // 0x5f4fbc: 0x61702029  daddi       $s0, $t3, 0x2029
    ctx->pc = 0x5f4fbcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5f4fc0:
    // 0x5f4fc0: 0x206d6172  addi        $t5, $v1, 0x6172
    ctx->pc = 0x5f4fc0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24946, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_5f4fc4:
    // 0x5f4fc4: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x5f4fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f4fc8:
    // 0x5f4fc8: 0x20726574  addi        $s2, $v1, 0x6574
    ctx->pc = 0x5f4fc8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_5f4fcc:
    // 0x5f4fcc: 0x65666572  daddiu      $a2, $t3, 0x6572
    ctx->pc = 0x5f4fccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_5f4fd0:
    // 0x5f4fd0: 0x636e6572  daddi       $t6, $k1, 0x6572
    ctx->pc = 0x5f4fd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25970; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5f4fd4:
    // 0x5f4fd4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f4fd4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5f4fd8:
    // 0x5f4fd8: 0x0  nop
    ctx->pc = 0x5f4fd8u;
    // NOP
label_5f4fdc:
    // 0x5f4fdc: 0x0  nop
    ctx->pc = 0x5f4fdcu;
    // NOP
label_5f4fe0:
    // 0x5f4fe0: 0x7250705f  .word       0x7250705F                   # INVALID     $s2, $s0, 0x705F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4fe0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x5F4FE0 raw=0x7250705F");
label_5f4fe4:
    // 0x5f4fe4: 0x73795374  .word       0x73795374                   # psllh       $t2, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f4fe4u;
    SET_GPR_VEC(ctx, 10, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
label_5f4fe8:
    // 0x5f4fe8: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f4fe8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f4fec:
    // 0x5f4fec: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f4fecu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F4FEC raw=0x4C4C554E");
label_5f4ff0:
    // 0x5f4ff0: 0x0  nop
    ctx->pc = 0x5f4ff0u;
    // NOP
label_5f4ff4:
    // 0x5f4ff4: 0x0  nop
    ctx->pc = 0x5f4ff4u;
    // NOP
label_5f4ff8:
    // 0x5f4ff8: 0x0  nop
    ctx->pc = 0x5f4ff8u;
    // NOP
label_5f4ffc:
    // 0x5f4ffc: 0x0  nop
    ctx->pc = 0x5f4ffcu;
    // NOP
label_5f5000:
    // 0x5f5000: 0x50677464  beql        $v1, $a3, . + 4 + (0x7464 << 2)
label_5f5004:
    if (ctx->pc == 0x5F5004u) {
        ctx->pc = 0x5F5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5000u;
        // 0x5f5004: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5008u;
        goto label_5f5008;
    }
    ctx->pc = 0x5F5000u;
    {
        const bool branch_taken_0x5f5000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f5000) {
            ctx->pc = 0x5F5004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5000u;
            // 0x5f5004: 0x79537472  lq          $s3, 0x7472($t2) (Delay Slot)
            SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 10), 29810)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x612194u;
            return;
        }
    }
    ctx->pc = 0x5F5008u;
label_5f5008:
    // 0x5f5008: 0x6e614d73  ldr         $at, 0x4D73($s3)
    ctx->pc = 0x5f5008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 19827); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f500c:
    // 0x5f500c: 0x72656761  .word       0x72656761                   # maddu1      $t4, $s3, $a1 # 00000740 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f500cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f5010:
    // 0x5f5010: 0x65533a3a  daddiu      $s3, $t2, 0x3A3A
    ctx->pc = 0x5f5010u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f5014:
    // 0x5f5014: 0x61735574  daddi       $s3, $t3, 0x5574
    ctx->pc = 0x5f5014u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21876; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5018:
    // 0x5f5018: 0x74536567  .word       0x74536567                   # INVALID     $v0, $s3, 0x6567 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5018u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5018 raw=0x74536567");
label_5f501c:
    // 0x5f501c: 0x20657461  addi        $a1, $v1, 0x7461
    ctx->pc = 0x5f501cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f5020:
    // 0x5f5020: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5f5020u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5f5024:
    // 0x5f5024: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5f5024u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f5028:
    // 0x5f5028: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f5028u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f502c:
    // 0x5f502c: 0x4c554e28  .word       0x4C554E28                   # INVALID     $v0, $s5, 0x4E28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f502cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F502C raw=0x4C554E28");
label_5f5030:
    // 0x5f5030: 0x7020294c  .word       0x7020294C                   # INVALID     $at, $zero, 0x294C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5030u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x5F5030 raw=0x7020294C");
label_5f5034:
    // 0x5f5034: 0x6d617261  ldr         $at, 0x7261($t3)
    ctx->pc = 0x5f5034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f5038:
    // 0x5f5038: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x5f5038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_5f503c:
    // 0x5f503c: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f503cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F503C raw=0x7265746E");
label_5f5040:
    // 0x5f5040: 0x66657220  daddiu      $a1, $s3, 0x7220
    ctx->pc = 0x5f5040u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)29216);
label_5f5044:
    // 0x5f5044: 0x6e657265  ldr         $a1, 0x7265($s3)
    ctx->pc = 0x5f5044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f5048:
    // 0x5f5048: 0x6563  .word       0x00006563                   # negu        $t4, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5048u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_5f504c:
    // 0x5f504c: 0x0  nop
    ctx->pc = 0x5f504cu;
    // NOP
label_5f5050:
    // 0x5f5050: 0x52677464  beql        $s3, $a3, . + 4 + (0x7464 << 2)
label_5f5054:
    if (ctx->pc == 0x5F5054u) {
        ctx->pc = 0x5F5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5050u;
        // 0x5f5054: 0x756c5077  .word       0x756C5077                   # INVALID     $t3, $t4, 0x5077 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5054 raw=0x756C5077");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5058u;
        goto label_5f5058;
    }
    ctx->pc = 0x5F5050u;
    {
        const bool branch_taken_0x5f5050 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 7));
        if (branch_taken_0x5f5050) {
            ctx->pc = 0x5F5054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5050u;
            // 0x5f5054: 0x756c5077  .word       0x756C5077                   # INVALID     $t3, $t4, 0x5077 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5054 raw=0x756C5077");
            ctx->in_delay_slot = false;
            ctx->pc = 0x6121E4u;
            return;
        }
    }
    ctx->pc = 0x5F5058u;
label_5f5058:
    // 0x5f5058: 0x736e6967  .word       0x736E6967                   # INVALID     $k1, $t6, 0x6967 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5058u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x5F5058 raw=0x736E6967");
label_5f505c:
    // 0x5f505c: 0x616e614d  daddi       $t6, $t3, 0x614D
    ctx->pc = 0x5f505cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24909; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5f5060:
    // 0x5f5060: 0x2e726567  sltiu       $s2, $s3, 0x6567
    ctx->pc = 0x5f5060u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25959) ? 1 : 0);
label_5f5064:
    // 0x5f5064: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5064u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_5f5068:
    // 0x5f5068: 0x0  nop
    ctx->pc = 0x5f5068u;
    // NOP
label_5f506c:
    // 0x5f506c: 0x0  nop
    ctx->pc = 0x5f506cu;
    // NOP
label_5f5070:
    // 0x5f5070: 0x6f625f6d  ldr         $v0, 0x5F6D($k1)
    ctx->pc = 0x5f5070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24429); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_5f5074:
    // 0x5f5074: 0x74696e49  .word       0x74696E49                   # INVALID     $v1, $t1, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5074u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5074 raw=0x74696E49");
label_5f5078:
    // 0x5f5078: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x5f5078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5f507c:
    // 0x5f507c: 0x646573  tltu        $v1, $a0, 405
    ctx->pc = 0x5f507cu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_5f5080:
    // 0x5f5080: 0x55677464  bnel        $t3, $a3, . + 4 + (0x7464 << 2)
label_5f5084:
    if (ctx->pc == 0x5F5084u) {
        ctx->pc = 0x5F5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5080u;
        // 0x5f5084: 0x736c6974  .word       0x736C6974                   # psllh       $t5, $t4, 5 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
        SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 12), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5088u;
        goto label_5f5088;
    }
    ctx->pc = 0x5F5080u;
    {
        const bool branch_taken_0x5f5080 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 7));
        if (branch_taken_0x5f5080) {
            ctx->pc = 0x5F5084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5080u;
            // 0x5f5084: 0x736c6974  .word       0x736C6974                   # psllh       $t5, $t4, 5 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 12), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x612214u;
            return;
        }
    }
    ctx->pc = 0x5F5088u;
label_5f5088:
    // 0x5f5088: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5088u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F5088 raw=0x7070632E");
label_5f508c:
    // 0x5f508c: 0x0  nop
    ctx->pc = 0x5f508cu;
    // NOP
label_5f5090:
    // 0x5f5090: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5f5090u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f5094:
    // 0x5f5094: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f5094u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f5098:
    // 0x5f5098: 0x75677261  .word       0x75677261                   # INVALID     $t3, $a3, 0x7261 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5098u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5098 raw=0x75677261");
label_5f509c:
    // 0x5f509c: 0x746e656d  .word       0x746E656D                   # INVALID     $v1, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f509cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F509C raw=0x746E656D");
label_5f50a0:
    // 0x5f50a0: 0x5f203a20  bgtzl       $t9, . + 4 + (0x3A20 << 2)
label_5f50a4:
    if (ctx->pc == 0x5F50A4u) {
        ctx->pc = 0x5F50A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F50A0u;
        // 0x5f50a4: 0x756c4370  .word       0x756C4370                   # INVALID     $t3, $t4, 0x4370 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F50A4 raw=0x756C4370");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F50A8u;
        goto label_5f50a8;
    }
    ctx->pc = 0x5F50A0u;
    {
        const bool branch_taken_0x5f50a0 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x5f50a0) {
            ctx->pc = 0x5F50A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F50A0u;
            // 0x5f50a4: 0x756c4370  .word       0x756C4370                   # INVALID     $t3, $t4, 0x4370 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F50A4 raw=0x756C4370");
            ctx->in_delay_slot = false;
            ctx->pc = 0x603924u;
            return;
        }
    }
    ctx->pc = 0x5F50A8u;
label_5f50a8:
    // 0x5f50a8: 0x6920706d  ldl         $zero, 0x706D($t1)
    ctx->pc = 0x5f50a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28781); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5f50ac:
    // 0x5f50ac: 0x20612073  addi        $at, $v1, 0x2073
    ctx->pc = 0x5f50acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8307, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5f50b0:
    // 0x5f50b0: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f50b0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F50B0 raw=0x4C4C554E");
label_5f50b4:
    // 0x5f50b4: 0x72747020  madd1       $t6, $s3, $s4
    ctx->pc = 0x5f50b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 20); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_5f50b8:
    // 0x5f50b8: 0x0  nop
    ctx->pc = 0x5f50b8u;
    // NOP
label_5f50bc:
    // 0x5f50bc: 0x0  nop
    ctx->pc = 0x5f50bcu;
    // NOP
label_5f50c0:
    // 0x5f50c0: 0x646e495f  daddiu      $t6, $v1, 0x495F
    ctx->pc = 0x5f50c0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18783);
label_5f50c4:
    // 0x5f50c4: 0x3c207865  .word       0x3C207865                   # lui         $zero, 0x7865 # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f50c4u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)30821 << 16));
label_5f50c8:
    // 0x5f50c8: 0x32335520  andi        $s3, $s1, 0x5520
    ctx->pc = 0x5f50c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)21792);
label_5f50cc:
    // 0x5f50cc: 0x70522028  .word       0x70522028                   # INVALID     $v0, $s2, 0x2028 # 00000000 <InstrIdType: R5900_MMI_1>
    ctx->pc = 0x5f50ccu;
    throw std::runtime_error("Unhandled MMI1 instruction: function 0x0 at 0x5F50CC raw=0x70522028");
label_5f50d0:
    // 0x5f50d0: 0x6d756c43  ldr         $s5, 0x6C43($t3)
    ctx->pc = 0x5f50d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27715); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5f50d4:
    // 0x5f50d4: 0x74654770  .word       0x74654770                   # INVALID     $v1, $a1, 0x4770 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f50d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F50D4 raw=0x74654770");
label_5f50d8:
    // 0x5f50d8: 0x416d754e  .word       0x416D754E                   # INVALID     $t3, $t5, 0x754E # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f50d8u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x5F50D8 raw=0x416D754E");
label_5f50dc:
    // 0x5f50dc: 0x696d6f74  ldl         $t5, 0x6F74($t3)
    ctx->pc = 0x5f50dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28532); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_5f50e0:
    // 0x5f50e0: 0x5f287363  .word       0x5F287363                   # bgtzl       $t9, . + 4 + (0x7363 << 2) # 00080000 <InstrIdType: CPU_NORMAL>
label_5f50e4:
    if (ctx->pc == 0x5F50E4u) {
        ctx->pc = 0x5F50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F50E0u;
        // 0x5f50e4: 0x756c4370  .word       0x756C4370                   # INVALID     $t3, $t4, 0x4370 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F50E4 raw=0x756C4370");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F50E8u;
        goto label_5f50e8;
    }
    ctx->pc = 0x5F50E0u;
    {
        const bool branch_taken_0x5f50e0 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x5f50e0) {
            ctx->pc = 0x5F50E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F50E0u;
            // 0x5f50e4: 0x756c4370  .word       0x756C4370                   # INVALID     $t3, $t4, 0x4370 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F50E4 raw=0x756C4370");
            ctx->in_delay_slot = false;
            ctx->pc = 0x611E70u;
            return;
        }
    }
    ctx->pc = 0x5F50E8u;
label_5f50e8:
    // 0x5f50e8: 0x2029706d  addi        $t1, $at, 0x706D
    ctx->pc = 0x5f50e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)28781, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_5f50ec:
    // 0x5f50ec: 0x29  mtsa        $zero
    ctx->pc = 0x5f50ecu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_5f50f0:
    // 0x5f50f0: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5f50f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f50f4:
    // 0x5f50f4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f50f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f50f8:
    // 0x5f50f8: 0x646e495f  daddiu      $t6, $v1, 0x495F
    ctx->pc = 0x5f50f8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18783);
label_5f50fc:
    // 0x5f50fc: 0x3d207865  .word       0x3D207865                   # lui         $zero, 0x7865 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f50fcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)30821 << 16));
label_5f5100:
    // 0x5f5100: 0x642520  .word       0x00642520                   # add         $a0, $v1, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5100u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 4);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_5f5104:
    // 0x5f5104: 0x0  nop
    ctx->pc = 0x5f5104u;
    // NOP
label_5f5108:
    // 0x5f5108: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5108u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_5f510c:
    // 0x5f510c: 0x0  nop
    ctx->pc = 0x5f510cu;
    // NOP
label_5f5110:
    // 0x5f5110: 0x0  nop
    ctx->pc = 0x5f5110u;
    // NOP
label_5f5114:
    // 0x5f5114: 0x0  nop
    ctx->pc = 0x5f5114u;
    // NOP
label_5f5118:
    // 0x5f5118: 0x0  nop
    ctx->pc = 0x5f5118u;
    // NOP
label_5f511c:
    // 0x5f511c: 0x0  nop
    ctx->pc = 0x5f511cu;
    // NOP
label_5f5120:
    // 0x5f5120: 0x7246705f  .word       0x7246705F                   # INVALID     $s2, $a2, 0x705F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5120u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x5F5120 raw=0x7246705F");
label_5f5124:
    // 0x5f5124: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x5f5124u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f5128:
    // 0x5f5128: 0x4e203d21  .word       0x4E203D21                   # INVALID     $s1, $zero, 0x3D21 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5128u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5128 raw=0x4E203D21");
label_5f512c:
    // 0x5f512c: 0x4c4c55  .word       0x004C4C55                   # INVALID     $v0, $t4, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f512cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F512C raw=0x004C4C55");
label_5f5130:
    // 0x5f5130: 0x55677464  bnel        $t3, $a3, . + 4 + (0x7464 << 2)
label_5f5134:
    if (ctx->pc == 0x5F5134u) {
        ctx->pc = 0x5F5134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5130u;
        // 0x5f5134: 0x736c6974  .word       0x736C6974                   # psllh       $t5, $t4, 5 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
        SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 12), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5138u;
        goto label_5f5138;
    }
    ctx->pc = 0x5F5130u;
    {
        const bool branch_taken_0x5f5130 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 7));
        if (branch_taken_0x5f5130) {
            ctx->pc = 0x5F5134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5130u;
            // 0x5f5134: 0x736c6974  .word       0x736C6974                   # psllh       $t5, $t4, 5 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 12), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6122C4u;
            return;
        }
    }
    ctx->pc = 0x5F5138u;
label_5f5138:
    // 0x5f5138: 0x65473a3a  daddiu      $a3, $t2, 0x3A3A
    ctx->pc = 0x5f5138u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f513c:
    // 0x5f513c: 0x61724674  daddi       $s2, $t3, 0x4674
    ctx->pc = 0x5f513cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18036; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5140:
    // 0x5f5140: 0x6957656d  ldl         $s7, 0x656D($t2)
    ctx->pc = 0x5f5140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
label_5f5144:
    // 0x5f5144: 0x73556874  .word       0x73556874                   # psllh       $t5, $s5, 1 # 03400000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5144u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 21), 1));
label_5f5148:
    // 0x5f5148: 0x61447265  daddi       $a0, $t2, 0x7265
    ctx->pc = 0x5f5148u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29285; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, res); }
label_5f514c:
    // 0x5f514c: 0x74536174  .word       0x74536174                   # INVALID     $v0, $s3, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f514cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F514C raw=0x74536174");
label_5f5150:
    // 0x5f5150: 0x676e6972  daddiu      $t6, $k1, 0x6972
    ctx->pc = 0x5f5150u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26994);
label_5f5154:
    // 0x5f5154: 0x67203a20  daddiu      $zero, $t9, 0x3A20
    ctx->pc = 0x5f5154u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)14880);
label_5f5158:
    // 0x5f5158: 0x6120746f  daddi       $zero, $t1, 0x746F
    ctx->pc = 0x5f5158u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29807; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5f515c:
    // 0x5f515c: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f515cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F515C raw=0x4C554E20");
label_5f5160:
    // 0x5f5160: 0x6170204c  daddi       $s0, $t3, 0x204C
    ctx->pc = 0x5f5160u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8268; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5f5164:
    // 0x5f5164: 0x206d6172  addi        $t5, $v1, 0x6172
    ctx->pc = 0x5f5164u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24946, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_5f5168:
    // 0x5f5168: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x5f5168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f516c:
    // 0x5f516c: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x5f516cu;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_5f5170:
    // 0x5f5170: 0x557a735f  bnel        $t3, $k0, . + 4 + (0x735F << 2)
label_5f5174:
    if (ctx->pc == 0x5F5174u) {
        ctx->pc = 0x5F5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5170u;
        // 0x5f5174: 0x44726573  .word       0x44726573                   # INVALID     $v1, $s2, 0x6573 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F5174 raw=0x44726573");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5178u;
        goto label_5f5178;
    }
    ctx->pc = 0x5F5170u;
    {
        const bool branch_taken_0x5f5170 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 26));
        if (branch_taken_0x5f5170) {
            ctx->pc = 0x5F5174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5170u;
            // 0x5f5174: 0x44726573  .word       0x44726573                   # INVALID     $v1, $s2, 0x6573 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0x33 at 0x5F5174 raw=0x44726573");
            ctx->in_delay_slot = false;
            ctx->pc = 0x611EF0u;
            return;
        }
    }
    ctx->pc = 0x5F5178u;
label_5f5178:
    // 0x5f5178: 0x53617461  beql        $k1, $at, . + 4 + (0x7461 << 2)
label_5f517c:
    if (ctx->pc == 0x5F517Cu) {
        ctx->pc = 0x5F517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5178u;
        // 0x5f517c: 0x6e697274  ldr         $t1, 0x7274($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5180u;
        goto label_5f5180;
    }
    ctx->pc = 0x5F5178u;
    {
        const bool branch_taken_0x5f5178 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 1));
        if (branch_taken_0x5f5178) {
            ctx->pc = 0x5F517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5178u;
            // 0x5f517c: 0x6e697274  ldr         $t1, 0x7274($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x612300u;
            return;
        }
    }
    ctx->pc = 0x5F5180u;
label_5f5180:
    // 0x5f5180: 0x3d212067  .word       0x3D212067                   # lui         $at, 0x2067 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8295 << 16));
label_5f5184:
    // 0x5f5184: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5184u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5184 raw=0x4C554E20");
label_5f5188:
    // 0x5f5188: 0x4c  syscall     1
    ctx->pc = 0x5f5188u;
    ctx->pc = 0x5F518Cu;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5f518c:
    // 0x5f518c: 0x0  nop
    ctx->pc = 0x5f518cu;
    // NOP
label_5f5190:
    // 0x5f5190: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5190u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5190 raw=0x746E6144");
label_5f5194:
    // 0x5f5194: 0x41207365  .word       0x41207365                   # INVALID     $t1, $zero, 0x7365 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5194u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x9 at 0x5F5194 raw=0x41207365");
label_5f5198:
    // 0x5f5198: 0x72657373  .word       0x72657373                   # INVALID     $s3, $a1, 0x7373 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5198u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5F5198 raw=0x72657373");
label_5f519c:
    // 0x5f519c: 0x656d2074  daddiu      $t5, $t3, 0x2074
    ctx->pc = 0x5f519cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
label_5f51a0:
    // 0x5f51a0: 0x67617373  daddiu      $at, $k1, 0x7373
    ctx->pc = 0x5f51a0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29555);
label_5f51a4:
    // 0x5f51a4: 0x203a2065  addi        $k0, $at, 0x2065
    ctx->pc = 0x5f51a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_5f51a8:
    // 0x5f51a8: 0x0  nop
    ctx->pc = 0x5f51a8u;
    // NOP
label_5f51ac:
    // 0x5f51ac: 0x0  nop
    ctx->pc = 0x5f51acu;
    // NOP
label_5f51b0:
    // 0x5f51b0: 0x73657270  .word       0x73657270                   # INVALID     $k1, $a1, 0x7270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5f51b0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x5F51B0 raw=0x73657270");
label_5f51b4:
    // 0x5f51b4: 0x585b2073  .word       0x585B2073                   # blezl       $v0, . + 4 + (0x2073 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_5f51b8:
    if (ctx->pc == 0x5F51B8u) {
        ctx->pc = 0x5F51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F51B4u;
        // 0x5f51b8: 0x6f74205d  ldr         $s4, 0x205D($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F51BCu;
        goto label_5f51bc;
    }
    ctx->pc = 0x5F51B4u;
    {
        const bool branch_taken_0x5f51b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5f51b4) {
            ctx->pc = 0x5F51B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F51B4u;
            // 0x5f51b8: 0x6f74205d  ldr         $s4, 0x205D($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD384u;
            return;
        }
    }
    ctx->pc = 0x5F51BCu;
label_5f51bc:
    // 0x5f51bc: 0x494b5320  .word       0x494B5320                   # INVALID     $t2, $t3, 0x5320 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f51bcu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F51BC raw=0x494B5320");
label_5f51c0:
    // 0x5f51c0: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f51c0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5f51c4:
    // 0x5f51c4: 0x0  nop
    ctx->pc = 0x5f51c4u;
    // NOP
label_5f51c8:
    // 0x5f51c8: 0x0  nop
    ctx->pc = 0x5f51c8u;
    // NOP
label_5f51cc:
    // 0x5f51cc: 0x0  nop
    ctx->pc = 0x5f51ccu;
    // NOP
label_5f51d0:
    // 0x5f51d0: 0x73657270  .word       0x73657270                   # INVALID     $k1, $a1, 0x7270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5f51d0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x5F51D0 raw=0x73657270");
label_5f51d4:
    // 0x5f51d4: 0x535b2073  beql        $k0, $k1, . + 4 + (0x2073 << 2)
label_5f51d8:
    if (ctx->pc == 0x5F51D8u) {
        ctx->pc = 0x5F51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F51D4u;
        // 0x5f51d8: 0x54524154  bnel        $v0, $s2, . + 4 + (0x4154 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F51D8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F51DCu;
        goto label_5f51dc;
    }
    ctx->pc = 0x5F51D4u;
    {
        const bool branch_taken_0x5f51d4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 27));
        if (branch_taken_0x5f51d4) {
            ctx->pc = 0x5F51D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F51D4u;
            // 0x5f51d8: 0x54524154  bnel        $v0, $s2, . + 4 + (0x4154 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F51D8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD3A4u;
            return;
        }
    }
    ctx->pc = 0x5F51DCu;
label_5f51dc:
    // 0x5f51dc: 0x6f74205d  ldr         $s4, 0x205D($k1)
    ctx->pc = 0x5f51dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_5f51e0:
    // 0x5f51e0: 0x42454420  .word       0x42454420                   # INVALID     $s2, $a1, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f51e0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x5F51E0 raw=0x42454420");
label_5f51e4:
    // 0x5f51e4: 0x4755  .word       0x00004755                   # INVALID     $zero, $zero, 0x4755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f51e4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F51E4 raw=0x00004755");
label_5f51e8:
    // 0x5f51e8: 0x0  nop
    ctx->pc = 0x5f51e8u;
    // NOP
label_5f51ec:
    // 0x5f51ec: 0x0  nop
    ctx->pc = 0x5f51ecu;
    // NOP
label_5f51f0:
    // 0x5f51f0: 0x73657270  .word       0x73657270                   # INVALID     $k1, $a1, 0x7270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x5f51f0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x5F51F0 raw=0x73657270");
label_5f51f4:
    // 0x5f51f4: 0x535b2073  beql        $k0, $k1, . + 4 + (0x2073 << 2)
label_5f51f8:
    if (ctx->pc == 0x5F51F8u) {
        ctx->pc = 0x5F51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F51F4u;
        // 0x5f51f8: 0x43454c45  .word       0x43454C45                   # INVALID     $k0, $a1, 0x4C45 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F51F8 raw=0x43454C45");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F51FCu;
        goto label_5f51fc;
    }
    ctx->pc = 0x5F51F4u;
    {
        const bool branch_taken_0x5f51f4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 27));
        if (branch_taken_0x5f51f4) {
            ctx->pc = 0x5F51F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F51F4u;
            // 0x5f51f8: 0x43454c45  .word       0x43454C45                   # INVALID     $k0, $a1, 0x4C45 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F51F8 raw=0x43454C45");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FD3C4u;
            return;
        }
    }
    ctx->pc = 0x5F51FCu;
label_5f51fc:
    // 0x5f51fc: 0x74205d54  .word       0x74205D54                   # INVALID     $at, $zero, 0x5D54 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f51fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F51FC raw=0x74205D54");
label_5f5200:
    // 0x5f5200: 0x4143206f  .word       0x4143206F                   # INVALID     $t2, $v1, 0x206F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5200u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F5200 raw=0x4143206F");
label_5f5204:
    // 0x5f5204: 0x4c45434e  .word       0x4C45434E                   # INVALID     $v0, $a1, 0x434E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5204u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5204 raw=0x4C45434E");
label_5f5208:
    // 0x5f5208: 0x0  nop
    ctx->pc = 0x5f5208u;
    // NOP
label_5f520c:
    // 0x5f520c: 0x0  nop
    ctx->pc = 0x5f520cu;
    // NOP
label_5f5210:
    // 0x5f5210: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5210u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5214:
    // 0x5f5214: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5214u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5218:
    // 0x5f5218: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5218u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F5218 raw=0x7070632E");
label_5f521c:
    // 0x5f521c: 0x0  nop
    ctx->pc = 0x5f521cu;
    // NOP
label_5f5220:
    // 0x5f5220: 0x4d637464  .word       0x4D637464                   # INVALID     $t3, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5220u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5220 raw=0x4D637464");
label_5f5224:
    // 0x5f5224: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5224u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F5224 raw=0x726F6D65");
label_5f5228:
    // 0x5f5228: 0x72614379  .word       0x72614379                   # INVALID     $s3, $at, 0x4379 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5228u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x5F5228 raw=0x72614379");
label_5f522c:
    // 0x5f522c: 0x493a3a64  .word       0x493A3A64                   # INVALID     $t1, $k0, 0x3A64 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f522cu;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F522C raw=0x493A3A64");
label_5f5230:
    // 0x5f5230: 0x696e4973  ldl         $t6, 0x4973($t3)
    ctx->pc = 0x5f5230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 18803); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5f5234:
    // 0x5f5234: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5f5234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f5238:
    // 0x5f5238: 0x64657369  daddiu      $a1, $v1, 0x7369
    ctx->pc = 0x5f5238u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29545);
label_5f523c:
    // 0x5f523c: 0x2928  .word       0x00002928                   # mfsa        $a1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f523cu;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_5f5240:
    // 0x5f5240: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5240u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5244:
    // 0x5f5244: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5244u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5248:
    // 0x5f5248: 0x6e493a3a  ldr         $t1, 0x3A3A($s2)
    ctx->pc = 0x5f5248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f524c:
    // 0x5f524c: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5f524cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f5250:
    // 0x5f5250: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5f5250u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
label_5f5254:
    // 0x5f5254: 0x72203a20  .word       0x72203A20                   # madd1       $a3, $s1, $zero # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5254u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_5f5258:
    // 0x5f5258: 0x69757165  ldl         $s5, 0x7165($t3)
    ctx->pc = 0x5f5258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
label_5f525c:
    // 0x5f525c: 0x20736572  addi        $s3, $v1, 0x6572
    ctx->pc = 0x5f525cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25970, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f5260:
    // 0x5f5260: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5260u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5260 raw=0x75646F6D");
label_5f5264:
    // 0x5f5264: 0x6420656c  daddiu      $zero, $at, 0x656C
    ctx->pc = 0x5f5264u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25964);
label_5f5268:
    // 0x5f5268: 0x654d6374  daddiu      $t5, $t2, 0x6374
    ctx->pc = 0x5f5268u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25460);
label_5f526c:
    // 0x5f526c: 0x79726f6d  lq          $s2, 0x6F6D($t3)
    ctx->pc = 0x5f526cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 28525)));
label_5f5270:
    // 0x5f5270: 0x64726143  daddiu      $s2, $v1, 0x6143
    ctx->pc = 0x5f5270u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24899);
label_5f5274:
    // 0x5f5274: 0x206f7420  addi        $t7, $v1, 0x7420
    ctx->pc = 0x5f5274u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29728, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_5f5278:
    // 0x5f5278: 0x69206562  ldl         $zero, 0x6562($t1)
    ctx->pc = 0x5f5278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5f527c:
    // 0x5f527c: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5f527cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f5280:
    // 0x5f5280: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5280u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5f5284:
    // 0x5f5284: 0x2e6465  .word       0x002E6465                   # or          $t4, $at, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5284u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_5f5288:
    // 0x5f5288: 0x0  nop
    ctx->pc = 0x5f5288u;
    // NOP
label_5f528c:
    // 0x5f528c: 0x0  nop
    ctx->pc = 0x5f528cu;
    // NOP
label_5f5290:
    // 0x5f5290: 0x6e49705f  ldr         $t1, 0x705F($s2)
    ctx->pc = 0x5f5290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f5294:
    // 0x5f5294: 0x74537469  .word       0x74537469                   # INVALID     $v0, $s3, 0x7469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5294u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5294 raw=0x74537469");
label_5f5298:
    // 0x5f5298: 0x74637572  .word       0x74637572                   # INVALID     $v1, $v1, 0x7572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5298u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5298 raw=0x74637572");
label_5f529c:
    // 0x5f529c: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f529cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f52a0:
    // 0x5f52a0: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f52a0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F52A0 raw=0x4C4C554E");
label_5f52a4:
    // 0x5f52a4: 0x0  nop
    ctx->pc = 0x5f52a4u;
    // NOP
label_5f52a8:
    // 0x5f52a8: 0x0  nop
    ctx->pc = 0x5f52a8u;
    // NOP
label_5f52ac:
    // 0x5f52ac: 0x0  nop
    ctx->pc = 0x5f52acu;
    // NOP
label_5f52b0:
    // 0x5f52b0: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f52b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f52b4:
    // 0x5f52b4: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f52b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f52b8:
    // 0x5f52b8: 0x6e493a3a  ldr         $t1, 0x3A3A($s2)
    ctx->pc = 0x5f52b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f52bc:
    // 0x5f52bc: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5f52bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f52c0:
    // 0x5f52c0: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5f52c0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
label_5f52c4:
    // 0x5f52c4: 0x72203a20  .word       0x72203A20                   # madd1       $a3, $s1, $zero # 00000200 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f52c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_5f52c8:
    // 0x5f52c8: 0x69757165  ldl         $s5, 0x7165($t3)
    ctx->pc = 0x5f52c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem << shift)); }
label_5f52cc:
    // 0x5f52cc: 0x20736572  addi        $s3, $v1, 0x6572
    ctx->pc = 0x5f52ccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25970, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f52d0:
    // 0x5f52d0: 0x61762061  daddi       $s6, $t3, 0x2061
    ctx->pc = 0x5f52d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f52d4:
    // 0x5f52d4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f52d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f52d8:
    // 0x5f52d8: 0x54494e49  bnel        $v0, $t1, . + 4 + (0x4E49 << 2)
label_5f52dc:
    if (ctx->pc == 0x5F52DCu) {
        ctx->pc = 0x5F52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F52D8u;
        // 0x5f52dc: 0x55525453  bnel        $t2, $s2, . + 4 + (0x5453 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F52DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F52E0u;
        goto label_5f52e0;
    }
    ctx->pc = 0x5F52D8u;
    {
        const bool branch_taken_0x5f52d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x5f52d8) {
            ctx->pc = 0x5F52DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F52D8u;
            // 0x5f52dc: 0x55525453  bnel        $t2, $s2, . + 4 + (0x5453 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F52DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x608C00u;
            return;
        }
    }
    ctx->pc = 0x5F52E0u;
label_5f52e0:
    // 0x5f52e0: 0x202e5443  addi        $t6, $at, 0x5443
    ctx->pc = 0x5f52e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)21571, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5f52e4:
    // 0x5f52e4: 0x20656553  addi        $a1, $v1, 0x6553
    ctx->pc = 0x5f52e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25939, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f52e8:
    // 0x5f52e8: 0x64616568  daddiu      $at, $v1, 0x6568
    ctx->pc = 0x5f52e8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25960);
label_5f52ec:
    // 0x5f52ec: 0x64207265  daddiu      $zero, $at, 0x7265
    ctx->pc = 0x5f52ecu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29285);
label_5f52f0:
    // 0x5f52f0: 0x65635374  daddiu      $v1, $t3, 0x5374
    ctx->pc = 0x5f52f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)21364);
label_5f52f4:
    // 0x5f52f4: 0x2e637254  sltiu       $v1, $s3, 0x7254
    ctx->pc = 0x5f52f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29268) ? 1 : 0);
label_5f52f8:
    // 0x5f52f8: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f52f8u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_5f52fc:
    // 0x5f52fc: 0x0  nop
    ctx->pc = 0x5f52fcu;
    // NOP
label_5f5300:
    // 0x5f5300: 0x72506f62  .word       0x72506F62                   # INVALID     $s2, $s0, 0x6F62 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5300u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x5F5300 raw=0x72506F62");
label_5f5304:
    // 0x5f5304: 0x6e6f6365  ldr         $t7, 0x6365($s3)
    ctx->pc = 0x5f5304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25445); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5f5308:
    // 0x5f5308: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5308u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_5f530c:
    // 0x5f530c: 0x0  nop
    ctx->pc = 0x5f530cu;
    // NOP
label_5f5310:
    // 0x5f5310: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5310u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5314:
    // 0x5f5314: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5314u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5318:
    // 0x5f5318: 0x70553a3a  .word       0x70553A3A                   # INVALID     $v0, $s5, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5318u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5F5318 raw=0x70553A3A");
label_5f531c:
    // 0x5f531c: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x5f531cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_5f5320:
    // 0x5f5320: 0x3a202928  xori        $zero, $s1, 0x2928
    ctx->pc = 0x5f5320u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)10536);
label_5f5324:
    // 0x5f5324: 0x66656220  daddiu      $a1, $s3, 0x6220
    ctx->pc = 0x5f5324u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25120);
label_5f5328:
    // 0x5f5328: 0x2065726f  addi        $a1, $v1, 0x726F
    ctx->pc = 0x5f5328u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f532c:
    // 0x5f532c: 0x6e697375  ldr         $t1, 0x7375($s3)
    ctx->pc = 0x5f532cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29557); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f5330:
    // 0x5f5330: 0x75662067  .word       0x75662067                   # INVALID     $t3, $a2, 0x2067 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5330u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5330 raw=0x75662067");
label_5f5334:
    // 0x5f5334: 0x6974636e  ldl         $s4, 0x636E($t3)
    ctx->pc = 0x5f5334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25454); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f5338:
    // 0x5f5338: 0x65206e6f  daddiu      $zero, $t1, 0x6E6F
    ctx->pc = 0x5f5338u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)28271);
label_5f533c:
    // 0x5f533c: 0x7275736e  .word       0x7275736E                   # INVALID     $s3, $s5, 0x736E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f533cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F533C raw=0x7275736E");
label_5f5340:
    // 0x5f5340: 0x68742065  ldl         $s4, 0x2065($v1)
    ctx->pc = 0x5f5340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f5344:
    // 0x5f5344: 0x74207461  .word       0x74207461                   # INVALID     $at, $zero, 0x7461 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5344u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5344 raw=0x74207461");
label_5f5348:
    // 0x5f5348: 0x6d206568  ldr         $zero, 0x6568($t1)
    ctx->pc = 0x5f5348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_5f534c:
    // 0x5f534c: 0x6c75646f  ldr         $s5, 0x646F($v1)
    ctx->pc = 0x5f534cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25711); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_5f5350:
    // 0x5f5350: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5350u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x5F5350 raw=0x73692065");
label_5f5354:
    // 0x5f5354: 0x696e6920  ldl         $t6, 0x6920($t3)
    ctx->pc = 0x5f5354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_5f5358:
    // 0x5f5358: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5f5358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f535c:
    // 0x5f535c: 0x64657369  daddiu      $a1, $v1, 0x7369
    ctx->pc = 0x5f535cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29545);
label_5f5360:
    // 0x5f5360: 0x2120  .word       0x00002120                   # add         $a0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5360u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_5f5364:
    // 0x5f5364: 0x0  nop
    ctx->pc = 0x5f5364u;
    // NOP
label_5f5368:
    // 0x5f5368: 0x0  nop
    ctx->pc = 0x5f5368u;
    // NOP
label_5f536c:
    // 0x5f536c: 0x0  nop
    ctx->pc = 0x5f536cu;
    // NOP
label_5f5370:
    // 0x5f5370: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5370u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5374:
    // 0x5f5374: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5374u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5378:
    // 0x5f5378: 0x74533a3a  .word       0x74533A3A                   # INVALID     $v0, $s3, 0x3A3A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5378u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5378 raw=0x74533A3A");
label_5f537c:
    // 0x5f537c: 0x54747261  bnel        $v1, $s4, . + 4 + (0x7261 << 2)
label_5f5380:
    if (ctx->pc == 0x5F5380u) {
        ctx->pc = 0x5F5380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F537Cu;
        // 0x5f5380: 0x206b7361  addi        $t3, $v1, 0x7361 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5384u;
        goto label_5f5384;
    }
    ctx->pc = 0x5F537Cu;
    {
        const bool branch_taken_0x5f537c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x5f537c) {
            ctx->pc = 0x5F5380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F537Cu;
            // 0x5f5380: 0x206b7361  addi        $t3, $v1, 0x7361 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611D04u;
            return;
        }
    }
    ctx->pc = 0x5F5384u;
label_5f5384:
    // 0x5f5384: 0x6562203a  daddiu      $v0, $t3, 0x203A
    ctx->pc = 0x5f5384u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8250);
label_5f5388:
    // 0x5f5388: 0x65726f66  daddiu      $s2, $t3, 0x6F66
    ctx->pc = 0x5f5388u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28518);
label_5f538c:
    // 0x5f538c: 0x69737520  ldl         $s3, 0x7520($t3)
    ctx->pc = 0x5f538cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29984); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_5f5390:
    // 0x5f5390: 0x6620676e  daddiu      $zero, $s1, 0x676E
    ctx->pc = 0x5f5390u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)26478);
label_5f5394:
    // 0x5f5394: 0x74636e75  .word       0x74636E75                   # INVALID     $v1, $v1, 0x6E75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5394u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5394 raw=0x74636E75");
label_5f5398:
    // 0x5f5398: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5f5398u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5f539c:
    // 0x5f539c: 0x75736e65  .word       0x75736E65                   # INVALID     $t3, $s3, 0x6E65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f539cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F539C raw=0x75736E65");
label_5f53a0:
    // 0x5f53a0: 0x74206572  .word       0x74206572                   # INVALID     $at, $zero, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f53a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F53A0 raw=0x74206572");
label_5f53a4:
    // 0x5f53a4: 0x20746168  addi        $s4, $v1, 0x6168
    ctx->pc = 0x5f53a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24936, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5f53a8:
    // 0x5f53a8: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x5f53a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f53ac:
    // 0x5f53ac: 0x75646f6d  .word       0x75646F6D                   # INVALID     $t3, $a0, 0x6F6D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f53acu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F53AC raw=0x75646F6D");
label_5f53b0:
    // 0x5f53b0: 0x6920656c  ldl         $zero, 0x656C($t1)
    ctx->pc = 0x5f53b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5f53b4:
    // 0x5f53b4: 0x6e692073  ldr         $t1, 0x2073($s3)
    ctx->pc = 0x5f53b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f53b8:
    // 0x5f53b8: 0x61697469  daddi       $t1, $t3, 0x7469
    ctx->pc = 0x5f53b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_5f53bc:
    // 0x5f53bc: 0x6573696c  daddiu      $s3, $t3, 0x696C
    ctx->pc = 0x5f53bcu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
label_5f53c0:
    // 0x5f53c0: 0x212064  .word       0x00212064                   # and         $a0, $at, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f53c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) & GPR_U64(ctx, 1));
label_5f53c4:
    // 0x5f53c4: 0x0  nop
    ctx->pc = 0x5f53c4u;
    // NOP
label_5f53c8:
    // 0x5f53c8: 0x0  nop
    ctx->pc = 0x5f53c8u;
    // NOP
label_5f53cc:
    // 0x5f53cc: 0x0  nop
    ctx->pc = 0x5f53ccu;
    // NOP
label_5f53d0:
    // 0x5f53d0: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f53d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f53d4:
    // 0x5f53d4: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f53d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f53d8:
    // 0x5f53d8: 0x74533a3a  .word       0x74533A3A                   # INVALID     $v0, $s3, 0x3A3A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f53d8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F53D8 raw=0x74533A3A");
label_5f53dc:
    // 0x5f53dc: 0x54747261  bnel        $v1, $s4, . + 4 + (0x7261 << 2)
label_5f53e0:
    if (ctx->pc == 0x5F53E0u) {
        ctx->pc = 0x5F53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F53DCu;
        // 0x5f53e0: 0x206b7361  addi        $t3, $v1, 0x7361 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F53E4u;
        goto label_5f53e4;
    }
    ctx->pc = 0x5F53DCu;
    {
        const bool branch_taken_0x5f53dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x5f53dc) {
            ctx->pc = 0x5F53E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F53DCu;
            // 0x5f53e0: 0x206b7361  addi        $t3, $v1, 0x7361 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611D64u;
            return;
        }
    }
    ctx->pc = 0x5F53E4u;
label_5f53e4:
    // 0x5f53e4: 0x6e49203a  ldr         $t1, 0x203A($s2)
    ctx->pc = 0x5f53e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_5f53e8:
    // 0x5f53e8: 0x696c6176  ldl         $t4, 0x6176($t3)
    ctx->pc = 0x5f53e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24950); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_5f53ec:
    // 0x5f53ec: 0x61702064  daddi       $s0, $t3, 0x2064
    ctx->pc = 0x5f53ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8292; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_5f53f0:
    // 0x5f53f0: 0x206d6172  addi        $t5, $v1, 0x6172
    ctx->pc = 0x5f53f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24946, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_5f53f4:
    // 0x5f53f4: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f53f4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F53F4 raw=0x4C4C554E");
label_5f53f8:
    // 0x5f53f8: 0x20726f20  addi        $s2, $v1, 0x6F20
    ctx->pc = 0x5f53f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_5f53fc:
    // 0x5f53fc: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x5f53fcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5f5400:
    // 0x5f5400: 0x72702061  .word       0x72702061                   # maddu1      $a0, $s3, $s0 # 00000040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5400u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 16); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5f5404:
    // 0x5f5404: 0x7265706f  .word       0x7265706F                   # INVALID     $s3, $a1, 0x706F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5404u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5F5404 raw=0x7265706F");
label_5f5408:
    // 0x5f5408: 0x4c20796c  .word       0x4C20796C                   # INVALID     $at, $zero, 0x796C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5408u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5408 raw=0x4C20796C");
label_5f540c:
    // 0x5f540c: 0x2044414f  addi        $a0, $v0, 0x414F
    ctx->pc = 0x5f540cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)16719, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f5410:
    // 0x5f5410: 0x5320726f  beql        $t9, $zero, . + 4 + (0x726F << 2)
label_5f5414:
    if (ctx->pc == 0x5F5414u) {
        ctx->pc = 0x5F5414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5410u;
        // 0x5f5414: 0x20455641  addi        $a1, $v0, 0x5641 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)22081, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5418u;
        goto label_5f5418;
    }
    ctx->pc = 0x5F5410u;
    {
        const bool branch_taken_0x5f5410 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        if (branch_taken_0x5f5410) {
            ctx->pc = 0x5F5414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5410u;
            // 0x5f5414: 0x20455641  addi        $a1, $v0, 0x5641 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)22081, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x611DD0u;
            return;
        }
    }
    ctx->pc = 0x5F5418u;
label_5f5418:
    // 0x5f5418: 0x666e6f63  daddiu      $t6, $s3, 0x6F63
    ctx->pc = 0x5f5418u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28515);
label_5f541c:
    // 0x5f541c: 0x72756769  .word       0x72756769                   # INVALID     $s3, $s5, 0x6769 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x5f541cu;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x5F541C raw=0x72756769");
label_5f5420:
    // 0x5f5420: 0x74206465  .word       0x74206465                   # INVALID     $at, $zero, 0x6465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5420u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5420 raw=0x74206465");
label_5f5424:
    // 0x5f5424: 0x6b7361  .word       0x006B7361                   # addu        $t6, $v1, $t3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5424u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_5f5428:
    // 0x5f5428: 0x0  nop
    ctx->pc = 0x5f5428u;
    // NOP
label_5f542c:
    // 0x5f542c: 0x0  nop
    ctx->pc = 0x5f542cu;
    // NOP
label_5f5430:
    // 0x5f5430: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5430u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5434:
    // 0x5f5434: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5434u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5438:
    // 0x5f5438: 0x6f4e3a3a  ldr         $t6, 0x3A3A($k0)
    ctx->pc = 0x5f5438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_5f543c:
    // 0x5f543c: 0x79666974  lq          $a2, 0x6974($t3)
    ctx->pc = 0x5f543cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 26996)));
label_5f5440:
    // 0x5f5440: 0x72657355  .word       0x72657355                   # INVALID     $s3, $a1, 0x7355 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5440u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x5F5440 raw=0x72657355");
label_5f5444:
    // 0x5f5444: 0x75706e49  .word       0x75706E49                   # INVALID     $t3, $s0, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5444u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5444 raw=0x75706E49");
label_5f5448:
    // 0x5f5448: 0x2d2d2074  sltiu       $t5, $t1, 0x2074
    ctx->pc = 0x5f5448u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)8308) ? 1 : 0);
label_5f544c:
    // 0x5f544c: 0x7365203e  .word       0x7365203E                   # psrlw       $a0, $a1, 0 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f544cu;
    SET_GPR_VEC(ctx, 4, _mm_srli_epi32(GPR_VEC(ctx, 5), 0));
label_5f5450:
    // 0x5f5450: 0x65632d74  daddiu      $v1, $t3, 0x2D74
    ctx->pc = 0x5f5450u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11636);
label_5f5454:
    // 0x5f5454: 0x65757120  daddiu      $s5, $t3, 0x7120
    ctx->pc = 0x5f5454u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28960);
label_5f5458:
    // 0x5f5458: 0x6f276c20  ldr         $a3, 0x6C20($t9)
    ctx->pc = 0x5f5458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 27680); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_5f545c:
    // 0x5f545c: 0x6f63206e  ldr         $v1, 0x206E($k1)
    ctx->pc = 0x5f545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f5460:
    // 0x5f5460: 0x20657075  addi        $a1, $v1, 0x7075
    ctx->pc = 0x5f5460u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28789, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f5464:
    // 0x5f5464: 0x706f276c  .word       0x706F276C                   # INVALID     $v1, $t7, 0x276C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5464u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5F5464 raw=0x706F276C");
label_5f5468:
    // 0x5f5468: 0x746172e9  .word       0x746172E9                   # INVALID     $v1, $at, 0x72E9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5468u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5468 raw=0x746172E9");
label_5f546c:
    // 0x5f546c: 0x2c6e6f69  sltiu       $t6, $v1, 0x6F69
    ctx->pc = 0x5f546cu;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28521) ? 1 : 0);
label_5f5470:
    // 0x5f5470: 0x6d656420  ldr         $a1, 0x6420($t3)
    ctx->pc = 0x5f5470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25632); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f5474:
    // 0x5f5474: 0x65646e61  daddiu      $a0, $t3, 0x6E61
    ctx->pc = 0x5f5474u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
label_5f5478:
    // 0x5f5478: 0x20697320  addi        $t1, $v1, 0x7320
    ctx->pc = 0x5f5478u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29472, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_5f547c:
    // 0x5f547c: 0x76206e6f  .word       0x76206E6F                   # INVALID     $s1, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f547cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F547C raw=0x76206E6F");
label_5f5480:
    // 0x5f5480: 0x20747565  addi        $s4, $v1, 0x7565
    ctx->pc = 0x5f5480u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30053, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5f5484:
    // 0x5f5484: 0x746e6f63  .word       0x746E6F63                   # INVALID     $v1, $t6, 0x6F63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5484u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5484 raw=0x746E6F63");
label_5f5488:
    // 0x5f5488: 0x65756e69  daddiu      $s5, $t3, 0x6E69
    ctx->pc = 0x5f5488u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5f548c:
    // 0x5f548c: 0x61732072  daddi       $s3, $t3, 0x2072
    ctx->pc = 0x5f548cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5490:
    // 0x5f5490: 0x7320736e  .word       0x7320736E                   # INVALID     $t9, $zero, 0x736E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5490u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F5490 raw=0x7320736E");
label_5f5494:
    // 0x5f5494: 0x65767561  daddiu      $s6, $t3, 0x7561
    ctx->pc = 0x5f5494u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30049);
label_5f5498:
    // 0x5f5498: 0x3f2072  tlt         $at, $ra, 129
    ctx->pc = 0x5f5498u;
    if (GPR_S64(ctx, 1) < GPR_S64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
label_5f549c:
    // 0x5f549c: 0x0  nop
    ctx->pc = 0x5f549cu;
    // NOP
label_5f54a0:
    // 0x5f54a0: 0x657220e0  daddiu      $s2, $t3, 0x20E0
    ctx->pc = 0x5f54a0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8416);
label_5f54a4:
    // 0x5f54a4: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x5f54a4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
label_5f54a8:
    // 0x5f54a8: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5f54a8u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f54ac:
    // 0x5f54ac: 0x0  nop
    ctx->pc = 0x5f54acu;
    // NOP
label_5f54b0:
    // 0x5f54b0: 0x7355655f  .word       0x7355655F                   # INVALID     $k0, $s5, 0x655F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f54b0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x5F54B0 raw=0x7355655F");
label_5f54b4:
    // 0x5f54b4: 0x68437265  ldl         $v1, 0x7265($v0)
    ctx->pc = 0x5f54b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_5f54b8:
    // 0x5f54b8: 0x6563696f  daddiu      $v1, $t3, 0x696F
    ctx->pc = 0x5f54b8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26991);
label_5f54bc:
    // 0x5f54bc: 0x54443d3d  bnel        $v0, $a0, . + 4 + (0x3D3D << 2)
label_5f54c0:
    if (ctx->pc == 0x5F54C0u) {
        ctx->pc = 0x5F54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F54BCu;
        // 0x5f54c0: 0x54454353  bnel        $v0, $a1, . + 4 + (0x4353 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F54C0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F54C4u;
        goto label_5f54c4;
    }
    ctx->pc = 0x5F54BCu;
    {
        const bool branch_taken_0x5f54bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x5f54bc) {
            ctx->pc = 0x5F54C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F54BCu;
            // 0x5f54c0: 0x54454353  bnel        $v0, $a1, . + 4 + (0x4353 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F54C0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x6049B4u;
            return;
        }
    }
    ctx->pc = 0x5F54C4u;
label_5f54c4:
    // 0x5f54c4: 0x53554352  beql        $k0, $s5, . + 4 + (0x4352 << 2)
label_5f54c8:
    if (ctx->pc == 0x5F54C8u) {
        ctx->pc = 0x5F54C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F54C4u;
        // 0x5f54c8: 0x4f484352  .word       0x4F484352                   # INVALID     $k0, $t0, 0x4352 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F54C8 raw=0x4F484352");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F54CCu;
        goto label_5f54cc;
    }
    ctx->pc = 0x5F54C4u;
    {
        const bool branch_taken_0x5f54c4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 21));
        if (branch_taken_0x5f54c4) {
            ctx->pc = 0x5F54C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F54C4u;
            // 0x5f54c8: 0x4f484352  .word       0x4F484352                   # INVALID     $k0, $t0, 0x4352 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F54C8 raw=0x4F484352");
            ctx->in_delay_slot = false;
            ctx->pc = 0x606210u;
            return;
        }
    }
    ctx->pc = 0x5F54CCu;
label_5f54cc:
    // 0x5f54cc: 0x5f454349  .word       0x5F454349                   # bgtzl       $k0, . + 4 + (0x4349 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_5f54d0:
    if (ctx->pc == 0x5F54D0u) {
        ctx->pc = 0x5F54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F54CCu;
        // 0x5f54d0: 0x534559  .word       0x00534559                   # multu       $v0, $s3 # 00004540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F54D4u;
        goto label_5f54d4;
    }
    ctx->pc = 0x5F54CCu;
    {
        const bool branch_taken_0x5f54cc = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f54cc) {
            ctx->pc = 0x5F54D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F54CCu;
            // 0x5f54d0: 0x534559  .word       0x00534559                   # multu       $v0, $s3 # 00004540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x6061F4u;
            return;
        }
    }
    ctx->pc = 0x5F54D4u;
label_5f54d4:
    // 0x5f54d4: 0x0  nop
    ctx->pc = 0x5f54d4u;
    // NOP
label_5f54d8:
    // 0x5f54d8: 0x0  nop
    ctx->pc = 0x5f54d8u;
    // NOP
label_5f54dc:
    // 0x5f54dc: 0x0  nop
    ctx->pc = 0x5f54dcu;
    // NOP
label_5f54e0:
    // 0x5f54e0: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f54e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f54e4:
    // 0x5f54e4: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f54e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f54e8:
    // 0x5f54e8: 0x6f4e3a3a  ldr         $t6, 0x3A3A($k0)
    ctx->pc = 0x5f54e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_5f54ec:
    // 0x5f54ec: 0x79666974  lq          $a2, 0x6974($t3)
    ctx->pc = 0x5f54ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 11), 26996)));
label_5f54f0:
    // 0x5f54f0: 0x72657355  .word       0x72657355                   # INVALID     $s3, $a1, 0x7355 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f54f0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x5F54F0 raw=0x72657355");
label_5f54f4:
    // 0x5f54f4: 0x75706e49  .word       0x75706E49                   # INVALID     $t3, $s0, 0x6E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f54f4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F54F4 raw=0x75706E49");
label_5f54f8:
    // 0x5f54f8: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x5f54f8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f54fc:
    // 0x5f54fc: 0x0  nop
    ctx->pc = 0x5f54fcu;
    // NOP
label_5f5500:
    // 0x5f5500: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5500u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5504:
    // 0x5f5504: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5504u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5508:
    // 0x5f5508: 0x65523a3a  daddiu      $s2, $t2, 0x3A3A
    ctx->pc = 0x5f5508u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f550c:
    // 0x5f550c: 0x73657571  .word       0x73657571                   # INVALID     $k1, $a1, 0x7571 # 00000000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x5f550cu;
    throw std::runtime_error("Unhandled PMTHL instruction: function 0x15 at 0x5F550C raw=0x73657571");
label_5f5510:
    // 0x5f5510: 0x73654d74  .word       0x73654D74                   # psllh       $t1, $a1, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5510u;
    SET_GPR_VEC(ctx, 9, _mm_slli_epi16(GPR_VEC(ctx, 5), 21));
label_5f5514:
    // 0x5f5514: 0x65676173  daddiu      $a3, $t3, 0x6173
    ctx->pc = 0x5f5514u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_5f5518:
    // 0x5f5518: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5518u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
label_5f551c:
    // 0x5f551c: 0x2079616c  addi        $t9, $v1, 0x616C
    ctx->pc = 0x5f551cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24940, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_5f5520:
    // 0x5f5520: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5f5520u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5f5524:
    // 0x5f5524: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5524u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5528:
    // 0x5f5528: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5528u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f552c:
    // 0x5f552c: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5f552cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_5f5530:
    // 0x5f5530: 0x20646c75  addi        $a0, $v1, 0x6C75
    ctx->pc = 0x5f5530u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27765, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f5534:
    // 0x5f5534: 0x69206562  ldl         $zero, 0x6562($t1)
    ctx->pc = 0x5f5534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5f5538:
    // 0x5f5538: 0x6974696e  ldl         $s4, 0x696E($t3)
    ctx->pc = 0x5f5538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26990); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_5f553c:
    // 0x5f553c: 0x73696c61  .word       0x73696C61                   # maddu1      $t5, $k1, $t1 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f553cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 9); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_5f5540:
    // 0x5f5540: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5540u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5f5544:
    // 0x5f5544: 0x0  nop
    ctx->pc = 0x5f5544u;
    // NOP
label_5f5548:
    // 0x5f5548: 0x0  nop
    ctx->pc = 0x5f5548u;
    // NOP
label_5f554c:
    // 0x5f554c: 0x0  nop
    ctx->pc = 0x5f554cu;
    // NOP
label_5f5550:
    // 0x5f5550: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5550u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5554:
    // 0x5f5554: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5554u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5558:
    // 0x5f5558: 0x65523a3a  daddiu      $s2, $t2, 0x3A3A
    ctx->pc = 0x5f5558u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f555c:
    // 0x5f555c: 0x73657571  .word       0x73657571                   # INVALID     $k1, $a1, 0x7571 # 00000000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x5f555cu;
    throw std::runtime_error("Unhandled PMTHL instruction: function 0x15 at 0x5F555C raw=0x73657571");
label_5f5560:
    // 0x5f5560: 0x73654d74  .word       0x73654D74                   # psllh       $t1, $a1, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5560u;
    SET_GPR_VEC(ctx, 9, _mm_slli_epi16(GPR_VEC(ctx, 5), 21));
label_5f5564:
    // 0x5f5564: 0x65676173  daddiu      $a3, $t3, 0x6173
    ctx->pc = 0x5f5564u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_5f5568:
    // 0x5f5568: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5568u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
label_5f556c:
    // 0x5f556c: 0x2079616c  addi        $t9, $v1, 0x616C
    ctx->pc = 0x5f556cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24940, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_5f5570:
    // 0x5f5570: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5f5570u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5f5574:
    // 0x5f5574: 0x72657355  .word       0x72657355                   # INVALID     $s3, $a1, 0x7355 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5574u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x15 at 0x5F5574 raw=0x72657355");
label_5f5578:
    // 0x5f5578: 0x646f6320  daddiu      $t7, $v1, 0x6320
    ctx->pc = 0x5f5578u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25376);
label_5f557c:
    // 0x5f557c: 0x61632065  daddi       $v1, $t3, 0x2065
    ctx->pc = 0x5f557cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_5f5580:
    // 0x5f5580: 0x61626c6c  daddi       $v0, $t3, 0x6C6C
    ctx->pc = 0x5f5580u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27756; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_5f5584:
    // 0x5f5584: 0x69206b63  ldl         $zero, 0x6B63($t1)
    ctx->pc = 0x5f5584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 27491); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_5f5588:
    // 0x5f5588: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f5588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f558c:
    // 0x5f558c: 0x28206469  slti        $zero, $at, 0x6469
    ctx->pc = 0x5f558cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25705) ? 1 : 0);
label_5f5590:
    // 0x5f5590: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5590u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5590 raw=0x4C4C554E");
label_5f5594:
    // 0x5f5594: 0x6f702029  ldr         $s0, 0x2029($k1)
    ctx->pc = 0x5f5594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f5598:
    // 0x5f5598: 0x65746e69  daddiu      $s4, $t3, 0x6E69
    ctx->pc = 0x5f5598u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_5f559c:
    // 0x5f559c: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5f559cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f55a0:
    // 0x5f55a0: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f55a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f55a4:
    // 0x5f55a4: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f55a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f55a8:
    // 0x5f55a8: 0x65523a3a  daddiu      $s2, $t2, 0x3A3A
    ctx->pc = 0x5f55a8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f55ac:
    // 0x5f55ac: 0x73657571  .word       0x73657571                   # INVALID     $k1, $a1, 0x7571 # 00000000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x5f55acu;
    throw std::runtime_error("Unhandled PMTHL instruction: function 0x15 at 0x5F55AC raw=0x73657571");
label_5f55b0:
    // 0x5f55b0: 0x73654d74  .word       0x73654D74                   # psllh       $t1, $a1, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f55b0u;
    SET_GPR_VEC(ctx, 9, _mm_slli_epi16(GPR_VEC(ctx, 5), 21));
label_5f55b4:
    // 0x5f55b4: 0x65676173  daddiu      $a3, $t3, 0x6173
    ctx->pc = 0x5f55b4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
label_5f55b8:
    // 0x5f55b8: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f55b8u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
label_5f55bc:
    // 0x5f55bc: 0x2079616c  addi        $t9, $v1, 0x616C
    ctx->pc = 0x5f55bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24940, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_5f55c0:
    // 0x5f55c0: 0x203e2d2d  addi        $fp, $at, 0x2D2D
    ctx->pc = 0x5f55c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11565, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_5f55c4:
    // 0x5f55c4: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5f55c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_5f55c8:
    // 0x5f55c8: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5f55c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f55cc:
    // 0x5f55cc: 0x4c554e28  .word       0x4C554E28                   # INVALID     $v0, $s5, 0x4E28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f55ccu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F55CC raw=0x4C554E28");
label_5f55d0:
    // 0x5f55d0: 0x7020294c  .word       0x7020294C                   # INVALID     $at, $zero, 0x294C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f55d0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x5F55D0 raw=0x7020294C");
label_5f55d4:
    // 0x5f55d4: 0x6d617261  ldr         $at, 0x7261($t3)
    ctx->pc = 0x5f55d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f55d8:
    // 0x5f55d8: 0x5f203a20  bgtzl       $t9, . + 4 + (0x3A20 << 2)
label_5f55dc:
    if (ctx->pc == 0x5F55DCu) {
        ctx->pc = 0x5F55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F55D8u;
        // 0x5f55dc: 0x734d7a73  .word       0x734D7A73                   # INVALID     $k0, $t5, 0x7A73 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
        throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5F55DC raw=0x734D7A73");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F55E0u;
        goto label_5f55e0;
    }
    ctx->pc = 0x5F55D8u;
    {
        const bool branch_taken_0x5f55d8 = (GPR_S32(ctx, 25) > 0);
        if (branch_taken_0x5f55d8) {
            ctx->pc = 0x5F55DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F55D8u;
            // 0x5f55dc: 0x734d7a73  .word       0x734D7A73                   # INVALID     $k0, $t5, 0x7A73 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5F55DC raw=0x734D7A73");
            ctx->in_delay_slot = false;
            ctx->pc = 0x603E5Cu;
            return;
        }
    }
    ctx->pc = 0x5F55E0u;
label_5f55e0:
    // 0x5f55e0: 0x636f4c67  daddi       $t7, $k1, 0x4C67
    ctx->pc = 0x5f55e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)19559; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_5f55e4:
    // 0x5f55e4: 0x6449  .word       0x00006449                   # jalr        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
label_5f55e8:
    if (ctx->pc == 0x5F55E8u) {
        ctx->pc = 0x5F55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F55E4u;
        // 0x5f55e8: 0x6772415f  daddiu      $s2, $k1, 0x415F (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)16735);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F55ECu;
        goto label_5f55ec;
    }
    ctx->pc = 0x5F55E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 12, 0x5F55ECu);
        ctx->pc = 0x5F55E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F55E4u;
        // 0x5f55e8: 0x6772415f  daddiu      $s2, $k1, 0x415F (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)16735);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F55E4u, 0x5F55ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5F55ECu;
label_5f55ec:
    // 0x5f55ec: 0x746f6c53  .word       0x746F6C53                   # INVALID     $v1, $t7, 0x6C53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f55ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F55EC raw=0x746F6C53");
label_5f55f0:
    // 0x5f55f0: 0x6f4e  .word       0x00006F4E                   # INVALID     $zero, $zero, 0x6F4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f55f0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5F55F0 raw=0x00006F4E");
label_5f55f4:
    // 0x5f55f4: 0x0  nop
    ctx->pc = 0x5f55f4u;
    // NOP
label_5f55f8:
    // 0x5f55f8: 0x0  nop
    ctx->pc = 0x5f55f8u;
    // NOP
label_5f55fc:
    // 0x5f55fc: 0x0  nop
    ctx->pc = 0x5f55fcu;
    // NOP
label_5f5600:
    // 0x5f5600: 0x7245634d  .word       0x7245634D                   # INVALID     $s2, $a1, 0x634D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5600u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xD at 0x5F5600 raw=0x7245634D");
label_5f5604:
    // 0x5f5604: 0x646f4372  daddiu      $t7, $v1, 0x4372
    ctx->pc = 0x5f5604u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17266);
label_5f5608:
    // 0x5f5608: 0x3d3d2065  .word       0x3D3D2065                   # lui         $sp, 0x2065 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5608u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8293 << 16));
label_5f560c:
    // 0x5f560c: 0x5f434d20  .word       0x5F434D20                   # bgtzl       $k0, . + 4 + (0x4D20 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_5f5610:
    if (ctx->pc == 0x5F5610u) {
        ctx->pc = 0x5F5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F560Cu;
        // 0x5f5610: 0x43435553  .word       0x43435553                   # INVALID     $k0, $v1, 0x5553 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5610 raw=0x43435553");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5614u;
        goto label_5f5614;
    }
    ctx->pc = 0x5F560Cu;
    {
        const bool branch_taken_0x5f560c = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f560c) {
            ctx->pc = 0x5F5610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F560Cu;
            // 0x5f5610: 0x43435553  .word       0x43435553                   # INVALID     $k0, $v1, 0x5553 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5610 raw=0x43435553");
            ctx->in_delay_slot = false;
            ctx->pc = 0x608A90u;
            return;
        }
    }
    ctx->pc = 0x5F5614u;
label_5f5614:
    // 0x5f5614: 0x535345  .word       0x00535345                   # INVALID     $v0, $s3, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5614u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5F5614 raw=0x00535345");
label_5f5618:
    // 0x5f5618: 0x0  nop
    ctx->pc = 0x5f5618u;
    // NOP
label_5f561c:
    // 0x5f561c: 0x0  nop
    ctx->pc = 0x5f561cu;
    // NOP
label_5f5620:
    // 0x5f5620: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5620u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5624:
    // 0x5f5624: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5624u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5628:
    // 0x5f5628: 0x6e453a3a  ldr         $a1, 0x3A3A($s2)
    ctx->pc = 0x5f5628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 14906); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f562c:
    // 0x5f562c: 0x53726574  beql        $k1, $s2, . + 4 + (0x6574 << 2)
label_5f5630:
    if (ctx->pc == 0x5F5630u) {
        ctx->pc = 0x5F5630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F562Cu;
        // 0x5f5630: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5634u;
        goto label_5f5634;
    }
    ctx->pc = 0x5F562Cu;
    {
        const bool branch_taken_0x5f562c = (GPR_U64(ctx, 27) == GPR_U64(ctx, 18));
        if (branch_taken_0x5f562c) {
            ctx->pc = 0x5F5630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F562Cu;
            // 0x5f5630: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
            ctx->in_delay_slot = false;
            ctx->pc = 0x60EC00u;
            return;
        }
    }
    ctx->pc = 0x5F5634u;
label_5f5634:
    // 0x5f5634: 0x3e2d2d20  .word       0x3E2D2D20                   # lui         $t5, 0x2D20 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5634u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)11552 << 16));
label_5f5638:
    // 0x5f5638: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x5f5638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_5f563c:
    // 0x5f563c: 0x2064656c  addi        $a0, $v1, 0x656C
    ctx->pc = 0x5f563cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25964, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f5640:
    // 0x5f5640: 0x64206f74  daddiu      $zero, $at, 0x6F74
    ctx->pc = 0x5f5640u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)28532);
label_5f5644:
    // 0x5f5644: 0x2061206f  addi        $at, $v1, 0x206F
    ctx->pc = 0x5f5644u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8303, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_5f5648:
    // 0x5f5648: 0x49746547  .word       0x49746547                   # INVALID     $t3, $s4, 0x6547 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5648u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x5F5648 raw=0x49746547");
label_5f564c:
    // 0x5f564c: 0x206f666e  addi        $t7, $v1, 0x666E
    ctx->pc = 0x5f564cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26222, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_5f5650:
    // 0x5f5650: 0x63206e6f  daddi       $zero, $t9, 0x6E6F
    ctx->pc = 0x5f5650u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28271; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_5f5654:
    // 0x5f5654: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x5f5654u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_5f5658:
    // 0x5f5658: 0x7525  .word       0x00007525                   # move        $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5658u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5f565c:
    // 0x5f565c: 0x0  nop
    ctx->pc = 0x5f565cu;
    // NOP
label_5f5660:
    // 0x5f5660: 0x636d654d  daddi       $t5, $k1, 0x654D
    ctx->pc = 0x5f5660u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25933; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_5f5664:
    // 0x5f5664: 0x53647261  beql        $k1, $a0, . + 4 + (0x7261 << 2)
label_5f5668:
    if (ctx->pc == 0x5F5668u) {
        ctx->pc = 0x5F5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5664u;
        // 0x5f5668: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F566Cu;
        goto label_5f566c;
    }
    ctx->pc = 0x5F5664u;
    {
        const bool branch_taken_0x5f5664 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 4));
        if (branch_taken_0x5f5664) {
            ctx->pc = 0x5F5668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5664u;
            // 0x5f5668: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
            ctx->in_delay_slot = false;
            ctx->pc = 0x611FECu;
            return;
        }
    }
    ctx->pc = 0x5F566Cu;
label_5f566c:
    // 0x5f566c: 0x203d2120  addi        $sp, $at, 0x2120
    ctx->pc = 0x5f566cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8480, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
label_5f5670:
    // 0x5f5670: 0x4d435444  .word       0x4D435444                   # INVALID     $t2, $v1, 0x5444 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5670u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5670 raw=0x4D435444");
label_5f5674:
    // 0x5f5674: 0x41434d45  .word       0x41434D45                   # INVALID     $t2, $v1, 0x4D45 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5674u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F5674 raw=0x41434D45");
label_5f5678:
    // 0x5f5678: 0x54534452  bnel        $v0, $s3, . + 4 + (0x4452 << 2)
label_5f567c:
    if (ctx->pc == 0x5F567Cu) {
        ctx->pc = 0x5F567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5678u;
        // 0x5f567c: 0x5f455441  .word       0x5F455441                   # bgtzl       $k0, . + 4 + (0x5441 << 2) # 00050000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x5F567C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5680u;
        goto label_5f5680;
    }
    ctx->pc = 0x5F5678u;
    {
        const bool branch_taken_0x5f5678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x5f5678) {
            ctx->pc = 0x5F567Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5678u;
            // 0x5f567c: 0x5f455441  .word       0x5F455441                   # bgtzl       $k0, . + 4 + (0x5441 << 2) # 00050000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x5F567C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x6067C4u;
            return;
        }
    }
    ctx->pc = 0x5F5680u;
label_5f5680:
    // 0x5f5680: 0x4c4c554e  .word       0x4C4C554E                   # INVALID     $v0, $t4, 0x554E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5680u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5680 raw=0x4C4C554E");
label_5f5684:
    // 0x5f5684: 0x0  nop
    ctx->pc = 0x5f5684u;
    // NOP
label_5f5688:
    // 0x5f5688: 0x0  nop
    ctx->pc = 0x5f5688u;
    // NOP
label_5f568c:
    // 0x5f568c: 0x0  nop
    ctx->pc = 0x5f568cu;
    // NOP
label_5f5690:
    // 0x5f5690: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5690u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5694:
    // 0x5f5694: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5694u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5698:
    // 0x5f5698: 0x70553a3a  .word       0x70553A3A                   # INVALID     $v0, $s5, 0x3A3A # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5698u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x3A at 0x5F5698 raw=0x70553A3A");
label_5f569c:
    // 0x5f569c: 0x65746164  daddiu      $s4, $t3, 0x6164
    ctx->pc = 0x5f569cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24932);
label_5f56a0:
    // 0x5f56a0: 0x6f6d654d  ldr         $t5, 0x654D($k1)
    ctx->pc = 0x5f56a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_5f56a4:
    // 0x5f56a4: 0x61437972  daddi       $v1, $t2, 0x7972
    ctx->pc = 0x5f56a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_5f56a8:
    // 0x5f56a8: 0x61546472  daddi       $s4, $t2, 0x6472
    ctx->pc = 0x5f56a8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)25714; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_5f56ac:
    // 0x5f56ac: 0x2d206b73  sltiu       $zero, $t1, 0x6B73
    ctx->pc = 0x5f56acu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)27507) ? 1 : 0);
label_5f56b0:
    // 0x5f56b0: 0x45203e2d  .word       0x45203E2D                   # INVALID     $t1, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f56b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x2D at 0x5F56B0 raw=0x45203E2D");
label_5f56b4:
    // 0x5f56b4: 0x20746174  addi        $s4, $v1, 0x6174
    ctx->pc = 0x5f56b4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24948, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5f56b8:
    // 0x5f56b8: 0x6f636e69  ldr         $v1, 0x6E69($k1)
    ctx->pc = 0x5f56b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_5f56bc:
    // 0x5f56bc: 0x7369736e  .word       0x7369736E                   # INVALID     $k1, $t1, 0x736E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f56bcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5F56BC raw=0x7369736E");
label_5f56c0:
    // 0x5f56c0: 0x746e6174  .word       0x746E6174                   # INVALID     $v1, $t6, 0x6174 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f56c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F56C0 raw=0x746E6174");
label_5f56c4:
    // 0x5f56c4: 0x72757320  .word       0x72757320                   # madd1       $t6, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f56c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_5f56c8:
    // 0x5f56c8: 0x20434d20  addi        $v1, $v0, 0x4D20
    ctx->pc = 0x5f56c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19744, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_5f56cc:
    // 0x5f56cc: 0x7525  .word       0x00007525                   # move        $t6, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f56ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_5f56d0:
    // 0x5f56d0: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f56d0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F56D0 raw=0x74726F70");
label_5f56d4:
    // 0x5f56d4: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5f56d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_5f56d8:
    // 0x5f56d8: 0x657220e0  daddiu      $s2, $t3, 0x20E0
    ctx->pc = 0x5f56d8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8416);
label_5f56dc:
    // 0x5f56dc: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x5f56dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
label_5f56e0:
    // 0x5f56e0: 0x72  tlt         $zero, $zero, 1
    ctx->pc = 0x5f56e0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f56e4:
    // 0x5f56e4: 0x0  nop
    ctx->pc = 0x5f56e4u;
    // NOP
label_5f56e8:
    // 0x5f56e8: 0x0  nop
    ctx->pc = 0x5f56e8u;
    // NOP
label_5f56ec:
    // 0x5f56ec: 0x0  nop
    ctx->pc = 0x5f56ecu;
    // NOP
label_5f56f0:
    // 0x5f56f0: 0x74535f28  .word       0x74535F28                   # INVALID     $v0, $s3, 0x5F28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f56f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F56F0 raw=0x74535F28");
label_5f56f4:
    // 0x5f56f4: 0x20657461  addi        $a1, $v1, 0x7461
    ctx->pc = 0x5f56f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f56f8:
    // 0x5f56f8: 0x54203d3e  bnel        $at, $zero, . + 4 + (0x3D3E << 2)
label_5f56fc:
    if (ctx->pc == 0x5F56FCu) {
        ctx->pc = 0x5F56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F56F8u;
        // 0x5f56fc: 0x54534352  bnel        $v0, $s3, . + 4 + (0x4352 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F56FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5700u;
        goto label_5f5700;
    }
    ctx->pc = 0x5F56F8u;
    {
        const bool branch_taken_0x5f56f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x5f56f8) {
            ctx->pc = 0x5F56FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F56F8u;
            // 0x5f56fc: 0x54534352  bnel        $v0, $s3, . + 4 + (0x4352 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F56FC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x604BF4u;
            return;
        }
    }
    ctx->pc = 0x5F5700u;
label_5f5700:
    // 0x5f5700: 0x5f455441  .word       0x5F455441                   # bgtzl       $k0, . + 4 + (0x5441 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
label_5f5704:
    if (ctx->pc == 0x5F5704u) {
        ctx->pc = 0x5F5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5700u;
        // 0x5f5704: 0x454e4f4e  .word       0x454E4F4E                   # INVALID     $t2, $t6, 0x4F4E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x5F5704 raw=0x454E4F4E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5708u;
        goto label_5f5708;
    }
    ctx->pc = 0x5F5700u;
    {
        const bool branch_taken_0x5f5700 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5700) {
            ctx->pc = 0x5F5704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5700u;
            // 0x5f5704: 0x454e4f4e  .word       0x454E4F4E                   # INVALID     $t2, $t6, 0x4F4E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0xE at 0x5F5704 raw=0x454E4F4E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A808u;
            return;
        }
    }
    ctx->pc = 0x5F5708u;
label_5f5708:
    // 0x5f5708: 0x26262029  addiu       $a2, $s1, 0x2029
    ctx->pc = 0x5f5708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8233));
label_5f570c:
    // 0x5f570c: 0x535f2820  beql        $k0, $ra, . + 4 + (0x2820 << 2)
label_5f5710:
    if (ctx->pc == 0x5F5710u) {
        ctx->pc = 0x5F5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F570Cu;
        // 0x5f5710: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5714u;
        goto label_5f5714;
    }
    ctx->pc = 0x5F570Cu;
    {
        const bool branch_taken_0x5f570c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 31));
        if (branch_taken_0x5f570c) {
            ctx->pc = 0x5F5710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F570Cu;
            // 0x5f5710: 0x65746174  daddiu      $s4, $t3, 0x6174 (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FF790u;
            return;
        }
    }
    ctx->pc = 0x5F5714u;
label_5f5714:
    // 0x5f5714: 0x4e203c20  .word       0x4E203C20                   # INVALID     $s1, $zero, 0x3C20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5714u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5714 raw=0x4E203C20");
label_5f5718:
    // 0x5f5718: 0x445f4d55  .word       0x445F4D55                   # cfc1        $ra, $9 # 00000555 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5718u;
    SET_GPR_U32(ctx, 31, 0); // Unimplemented FCR9
label_5f571c:
    // 0x5f571c: 0x45435354  .word       0x45435354                   # INVALID     $t2, $v1, 0x5354 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f571cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x5F571C raw=0x45435354");
label_5f5720:
    // 0x5f5720: 0x4149445f  .word       0x4149445F                   # INVALID     $t2, $t1, 0x445F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5720u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F5720 raw=0x4149445F");
label_5f5724:
    // 0x5f5724: 0x55474f4c  bnel        $t2, $a3, . + 4 + (0x4F4C << 2)
label_5f5728:
    if (ctx->pc == 0x5F5728u) {
        ctx->pc = 0x5F5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5724u;
        // 0x5f5728: 0x444f4d45  .word       0x444F4D45                   # cfc1        $t7, $9 # 00000545 <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F572Cu;
        goto label_5f572c;
    }
    ctx->pc = 0x5F5724u;
    {
        const bool branch_taken_0x5f5724 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        if (branch_taken_0x5f5724) {
            ctx->pc = 0x5F5728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5724u;
            // 0x5f5728: 0x444f4d45  .word       0x444F4D45                   # cfc1        $t7, $9 # 00000545 <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x609458u;
            return;
        }
    }
    ctx->pc = 0x5F572Cu;
label_5f572c:
    // 0x5f572c: 0x295345  .word       0x00295345                   # INVALID     $at, $t1, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f572cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5F572C raw=0x00295345");
label_5f5730:
    // 0x5f5730: 0x63537464  daddi       $s3, $k0, 0x7464
    ctx->pc = 0x5f5730u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)29796; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_5f5734:
    // 0x5f5734: 0x63725465  daddi       $s2, $k1, 0x5465
    ctx->pc = 0x5f5734u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21605; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5738:
    // 0x5f5738: 0x65473a3a  daddiu      $a3, $t2, 0x3A3A
    ctx->pc = 0x5f5738u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)14906);
label_5f573c:
    // 0x5f573c: 0x63725474  daddi       $s2, $k1, 0x5474
    ctx->pc = 0x5f573cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21620; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_5f5740:
    // 0x5f5740: 0x7373654d  .word       0x7373654D                   # INVALID     $k1, $s3, 0x654D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5740u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xD at 0x5F5740 raw=0x7373654D");
label_5f5744:
    // 0x5f5744: 0x46656761  .word       0x46656761                   # INVALID     $s3, $a1, 0x6761 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5744u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x21 at 0x5F5744 raw=0x46656761");
label_5f5748:
    // 0x5f5748: 0x7453726f  .word       0x7453726F                   # INVALID     $v0, $s3, 0x726F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5748u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5748 raw=0x7453726F");
label_5f574c:
    // 0x5f574c: 0x20657461  addi        $a1, $v1, 0x7461
    ctx->pc = 0x5f574cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_5f5750:
    // 0x5f5750: 0x49203e2d  .word       0x49203E2D                   # INVALID     $t1, $zero, 0x3E2D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5750u;
    throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x5F5750 raw=0x49203E2D");
label_5f5754:
    // 0x5f5754: 0x6c61766e  ldr         $at, 0x766E($v1)
    ctx->pc = 0x5f5754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30318); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_5f5758:
    // 0x5f5758: 0x76206469  .word       0x76206469                   # INVALID     $s1, $zero, 0x6469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5758u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5758 raw=0x76206469");
label_5f575c:
    // 0x5f575c: 0x65756c61  daddiu      $s5, $t3, 0x6C61
    ctx->pc = 0x5f575cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27745);
label_5f5760:
    // 0x5f5760: 0x726f6620  .word       0x726F6620                   # madd1       $t4, $s3, $t7 # 00000600 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5f5760u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f5764:
    // 0x5f5764: 0x53544420  beql        $k0, $s4, . + 4 + (0x4420 << 2)
label_5f5768:
    if (ctx->pc == 0x5F5768u) {
        ctx->pc = 0x5F5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5764u;
        // 0x5f5768: 0x52544543  beql        $s2, $s4, . + 4 + (0x4543 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F5768 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F576Cu;
        goto label_5f576c;
    }
    ctx->pc = 0x5F5764u;
    {
        const bool branch_taken_0x5f5764 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 20));
        if (branch_taken_0x5f5764) {
            ctx->pc = 0x5F5768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5764u;
            // 0x5f5768: 0x52544543  beql        $s2, $s4, . + 4 + (0x4543 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F5768 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x6067E8u;
            return;
        }
    }
    ctx->pc = 0x5F576Cu;
label_5f576c:
    // 0x5f576c: 0x4f4d5f43  .word       0x4F4D5F43                   # INVALID     $k0, $t5, 0x5F43 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f576cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F576C raw=0x4F4D5F43");
label_5f5770:
    // 0x5f5770: 0x454c5544  .word       0x454C5544                   # INVALID     $t2, $t4, 0x5544 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5770u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x4 at 0x5F5770 raw=0x454C5544");
label_5f5774:
    // 0x5f5774: 0x54415453  bnel        $v0, $at, . + 4 + (0x5453 << 2)
label_5f5778:
    if (ctx->pc == 0x5F5778u) {
        ctx->pc = 0x5F5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5774u;
        // 0x5f5778: 0x6e652045  ldr         $a1, 0x2045($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F577Cu;
        goto label_5f577c;
    }
    ctx->pc = 0x5F5774u;
    {
        const bool branch_taken_0x5f5774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 1));
        if (branch_taken_0x5f5774) {
            ctx->pc = 0x5F5778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5774u;
            // 0x5f5778: 0x6e652045  ldr         $a1, 0x2045($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A8C4u;
            return;
        }
    }
    ctx->pc = 0x5F577Cu;
label_5f577c:
    // 0x5f577c: 0x74206d75  .word       0x74206D75                   # INVALID     $at, $zero, 0x6D75 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f577cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F577C raw=0x74206D75");
label_5f5780:
    // 0x5f5780: 0x657079  .word       0x00657079                   # INVALID     $v1, $a1, 0x7079 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5780u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x5F5780 raw=0x00657079");
label_5f5784:
    // 0x5f5784: 0x0  nop
    ctx->pc = 0x5f5784u;
    // NOP
label_5f5788:
    // 0x5f5788: 0x0  nop
    ctx->pc = 0x5f5788u;
    // NOP
label_5f578c:
    // 0x5f578c: 0x0  nop
    ctx->pc = 0x5f578cu;
    // NOP
label_5f5790:
    // 0x5f5790: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5790u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5790 raw=0x45435326");
label_5f5794:
    // 0x5f5794: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5794u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5794 raw=0x4352545F");
label_5f5798:
    // 0x5f5798: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f579c:
    if (ctx->pc == 0x5F579Cu) {
        ctx->pc = 0x5F579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5798u;
        // 0x5f579c: 0x544e4f43  bnel        $v0, $t6, . + 4 + (0x4F43 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F579C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F57A0u;
        goto label_5f57a0;
    }
    ctx->pc = 0x5F5798u;
    {
        const bool branch_taken_0x5f5798 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5798) {
            ctx->pc = 0x5F579Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5798u;
            // 0x5f579c: 0x544e4f43  bnel        $v0, $t6, . + 4 + (0x4F43 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F579C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A4D0u;
            return;
        }
    }
    ctx->pc = 0x5F57A0u;
label_5f57a0:
    // 0x5f57a0: 0x4c4c4f52  .word       0x4C4C4F52                   # INVALID     $v0, $t4, 0x4F52 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f57a0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F57A0 raw=0x4C4C4F52");
label_5f57a4:
    // 0x5f57a4: 0x4d5f5245  .word       0x4D5F5245                   # INVALID     $t2, $ra, 0x5245 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f57a4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F57A4 raw=0x4D5F5245");
label_5f57a8:
    // 0x5f57a8: 0x49535349  .word       0x49535349                   # INVALID     $t2, $s3, 0x5349 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f57a8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F57A8 raw=0x49535349");
label_5f57ac:
    // 0x5f57ac: 0x474e  .word       0x0000474E                   # INVALID     $zero, $zero, 0x474E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f57acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5F57AC raw=0x0000474E");
label_5f57b0:
    // 0x5f57b0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f57b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F57B0 raw=0x45435326");
label_5f57b4:
    // 0x5f57b4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f57b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F57B4 raw=0x4352545F");
label_5f57b8:
    // 0x5f57b8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f57bc:
    if (ctx->pc == 0x5F57BCu) {
        ctx->pc = 0x5F57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F57B8u;
        // 0x5f57bc: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F57BC raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F57C0u;
        goto label_5f57c0;
    }
    ctx->pc = 0x5F57B8u;
    {
        const bool branch_taken_0x5f57b8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f57b8) {
            ctx->pc = 0x5F57BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F57B8u;
            // 0x5f57bc: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F57BC raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A4F0u;
            return;
        }
    }
    ctx->pc = 0x5F57C0u;
label_5f57c0:
    // 0x5f57c0: 0x4b434548  vmaddx.xz   $vf21, $vf8, $vf3x
    ctx->pc = 0x5f57c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_5f57c4:
    // 0x5f57c4: 0x4d474e49  .word       0x4D474E49                   # INVALID     $t2, $a3, 0x4E49 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f57c4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F57C4 raw=0x4D474E49");
label_5f57c8:
    // 0x5f57c8: 0x524f4d45  beql        $s2, $t7, . + 4 + (0x4D45 << 2)
label_5f57cc:
    if (ctx->pc == 0x5F57CCu) {
        ctx->pc = 0x5F57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F57C8u;
        // 0x5f57cc: 0x52414359  beql        $s2, $at, . + 4 + (0x4359 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F57CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F57D0u;
        goto label_5f57d0;
    }
    ctx->pc = 0x5F57C8u;
    {
        const bool branch_taken_0x5f57c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        if (branch_taken_0x5f57c8) {
            ctx->pc = 0x5F57CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F57C8u;
            // 0x5f57cc: 0x52414359  beql        $s2, $at, . + 4 + (0x4359 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F57CC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x608CE0u;
            return;
        }
    }
    ctx->pc = 0x5F57D0u;
label_5f57d0:
    // 0x5f57d0: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f57d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f57d4:
    // 0x5f57d4: 0x0  nop
    ctx->pc = 0x5f57d4u;
    // NOP
label_5f57d8:
    // 0x5f57d8: 0x0  nop
    ctx->pc = 0x5f57d8u;
    // NOP
label_5f57dc:
    // 0x5f57dc: 0x0  nop
    ctx->pc = 0x5f57dcu;
    // NOP
label_5f57e0:
    // 0x5f57e0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f57e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F57E0 raw=0x45435326");
label_5f57e4:
    // 0x5f57e4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f57e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F57E4 raw=0x4352545F");
label_5f57e8:
    // 0x5f57e8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f57ec:
    if (ctx->pc == 0x5F57ECu) {
        ctx->pc = 0x5F57ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F57E8u;
        // 0x5f57ec: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F57EC raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F57F0u;
        goto label_5f57f0;
    }
    ctx->pc = 0x5F57E8u;
    {
        const bool branch_taken_0x5f57e8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f57e8) {
            ctx->pc = 0x5F57ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F57E8u;
            // 0x5f57ec: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F57EC raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A520u;
            return;
        }
    }
    ctx->pc = 0x5F57F0u;
label_5f57f0:
    // 0x5f57f0: 0x52445241  beql        $s2, $a0, . + 4 + (0x5241 << 2)
label_5f57f4:
    if (ctx->pc == 0x5F57F4u) {
        ctx->pc = 0x5F57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F57F0u;
        // 0x5f57f4: 0x49555145  .word       0x49555145                   # INVALID     $t2, $s5, 0x5145 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F57F4 raw=0x49555145");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F57F8u;
        goto label_5f57f8;
    }
    ctx->pc = 0x5F57F0u;
    {
        const bool branch_taken_0x5f57f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        if (branch_taken_0x5f57f0) {
            ctx->pc = 0x5F57F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F57F0u;
            // 0x5f57f4: 0x49555145  .word       0x49555145                   # INVALID     $t2, $s5, 0x5145 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F57F4 raw=0x49555145");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A0F8u;
            return;
        }
    }
    ctx->pc = 0x5F57F8u;
label_5f57f8:
    // 0x5f57f8: 0x444552  .word       0x00444552                   # mflo        $t0 # 00440540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f57f8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_5f57fc:
    // 0x5f57fc: 0x0  nop
    ctx->pc = 0x5f57fcu;
    // NOP
label_5f5800:
    // 0x5f5800: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5800u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5800 raw=0x45435326");
label_5f5804:
    // 0x5f5804: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5804u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5804 raw=0x4352545F");
label_5f5808:
    // 0x5f5808: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f580c:
    if (ctx->pc == 0x5F580Cu) {
        ctx->pc = 0x5F580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5808u;
        // 0x5f580c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F580C raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5810u;
        goto label_5f5810;
    }
    ctx->pc = 0x5F5808u;
    {
        const bool branch_taken_0x5f5808 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5808) {
            ctx->pc = 0x5F580Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5808u;
            // 0x5f580c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F580C raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A540u;
            return;
        }
    }
    ctx->pc = 0x5F5810u;
label_5f5810:
    // 0x5f5810: 0x49544e4f  .word       0x49544E4F                   # INVALID     $t2, $s4, 0x4E4F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5810u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5810 raw=0x49544E4F");
label_5f5814:
    // 0x5f5814: 0x5745554e  bnel        $k0, $a1, . + 4 + (0x554E << 2)
label_5f5818:
    if (ctx->pc == 0x5F5818u) {
        ctx->pc = 0x5F5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5814u;
        // 0x5f5818: 0x4f485449  .word       0x4F485449                   # INVALID     $k0, $t0, 0x5449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5818 raw=0x4F485449");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F581Cu;
        goto label_5f581c;
    }
    ctx->pc = 0x5F5814u;
    {
        const bool branch_taken_0x5f5814 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 5));
        if (branch_taken_0x5f5814) {
            ctx->pc = 0x5F5818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5814u;
            // 0x5f5818: 0x4f485449  .word       0x4F485449                   # INVALID     $k0, $t0, 0x5449 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5818 raw=0x4F485449");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60AD50u;
            return;
        }
    }
    ctx->pc = 0x5F581Cu;
label_5f581c:
    // 0x5f581c: 0x41535455  .word       0x41535455                   # INVALID     $t2, $s3, 0x5455 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f581cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F581C raw=0x41535455");
label_5f5820:
    // 0x5f5820: 0x474e4956  .word       0x474E4956                   # INVALID     $k0, $t6, 0x4956 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5820u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x16 at 0x5F5820 raw=0x474E4956");
label_5f5824:
    // 0x5f5824: 0x0  nop
    ctx->pc = 0x5f5824u;
    // NOP
label_5f5828:
    // 0x5f5828: 0x0  nop
    ctx->pc = 0x5f5828u;
    // NOP
label_5f582c:
    // 0x5f582c: 0x0  nop
    ctx->pc = 0x5f582cu;
    // NOP
label_5f5830:
    // 0x5f5830: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5830u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5830 raw=0x45435326");
label_5f5834:
    // 0x5f5834: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5834u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5834 raw=0x4352545F");
label_5f5838:
    // 0x5f5838: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f583c:
    if (ctx->pc == 0x5F583Cu) {
        ctx->pc = 0x5F583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5838u;
        // 0x5f583c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F583C raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5840u;
        goto label_5f5840;
    }
    ctx->pc = 0x5F5838u;
    {
        const bool branch_taken_0x5f5838 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5838) {
            ctx->pc = 0x5F583Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5838u;
            // 0x5f583c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F583C raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A570u;
            return;
        }
    }
    ctx->pc = 0x5F5840u;
label_5f5840:
    // 0x5f5840: 0x49464e4f  .word       0x49464E4F                   # INVALID     $t2, $a2, 0x4E4F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5840u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5840 raw=0x49464E4F");
label_5f5844:
    // 0x5f5844: 0x4f464d52  .word       0x4F464D52                   # INVALID     $k0, $a2, 0x4D52 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5844u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5844 raw=0x4F464D52");
label_5f5848:
    // 0x5f5848: 0x54414d52  bnel        $v0, $at, . + 4 + (0x4D52 << 2)
label_5f584c:
    if (ctx->pc == 0x5F584Cu) {
        ctx->pc = 0x5F5850u;
        goto label_5f5850;
    }
    ctx->pc = 0x5F5848u;
    {
        const bool branch_taken_0x5f5848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 1));
        if (branch_taken_0x5f5848) {
            ctx->pc = 0x608D94u;
            return;
        }
    }
    ctx->pc = 0x5F5850u;
label_5f5850:
    // 0x5f5850: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5850u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5850 raw=0x45435326");
label_5f5854:
    // 0x5f5854: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5854u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5854 raw=0x4352545F");
label_5f5858:
    // 0x5f5858: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f585c:
    if (ctx->pc == 0x5F585Cu) {
        ctx->pc = 0x5F585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5858u;
        // 0x5f585c: 0x495f434d  .word       0x495F434D                   # INVALID     $t2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F585C raw=0x495F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5860u;
        goto label_5f5860;
    }
    ctx->pc = 0x5F5858u;
    {
        const bool branch_taken_0x5f5858 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5858) {
            ctx->pc = 0x5F585Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5858u;
            // 0x5f585c: 0x495f434d  .word       0x495F434D                   # INVALID     $t2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F585C raw=0x495F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A590u;
            return;
        }
    }
    ctx->pc = 0x5F5860u;
label_5f5860:
    // 0x5f5860: 0x4655534e  .word       0x4655534E                   # INVALID     $s2, $s5, 0x534E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5860u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xE at 0x5F5860 raw=0x4655534E");
label_5f5864:
    // 0x5f5864: 0x49434946  .word       0x49434946                   # INVALID     $t2, $v1, 0x4946 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5864u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5864 raw=0x49434946");
label_5f5868:
    // 0x5f5868: 0x53544e45  beql        $k0, $s4, . + 4 + (0x4E45 << 2)
label_5f586c:
    if (ctx->pc == 0x5F586Cu) {
        ctx->pc = 0x5F586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5868u;
        // 0x5f586c: 0x45434150  .word       0x45434150                   # INVALID     $t2, $v1, 0x4150 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x10 at 0x5F586C raw=0x45434150");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5870u;
        goto label_5f5870;
    }
    ctx->pc = 0x5F5868u;
    {
        const bool branch_taken_0x5f5868 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 20));
        if (branch_taken_0x5f5868) {
            ctx->pc = 0x5F586Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5868u;
            // 0x5f586c: 0x45434150  .word       0x45434150                   # INVALID     $t2, $v1, 0x4150 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x10 at 0x5F586C raw=0x45434150");
            ctx->in_delay_slot = false;
            ctx->pc = 0x609180u;
            return;
        }
    }
    ctx->pc = 0x5F5870u;
label_5f5870:
    // 0x5f5870: 0x0  nop
    ctx->pc = 0x5f5870u;
    // NOP
label_5f5874:
    // 0x5f5874: 0x0  nop
    ctx->pc = 0x5f5874u;
    // NOP
label_5f5878:
    // 0x5f5878: 0x0  nop
    ctx->pc = 0x5f5878u;
    // NOP
label_5f587c:
    // 0x5f587c: 0x0  nop
    ctx->pc = 0x5f587cu;
    // NOP
label_5f5880:
    // 0x5f5880: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5880u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5880 raw=0x45435326");
label_5f5884:
    // 0x5f5884: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5884u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5884 raw=0x4352545F");
label_5f5888:
    // 0x5f5888: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f588c:
    if (ctx->pc == 0x5F588Cu) {
        ctx->pc = 0x5F588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5888u;
        // 0x5f588c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F588C raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5890u;
        goto label_5f5890;
    }
    ctx->pc = 0x5F5888u;
    {
        const bool branch_taken_0x5f5888 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5888) {
            ctx->pc = 0x5F588Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5888u;
            // 0x5f588c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F588C raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A5C0u;
            return;
        }
    }
    ctx->pc = 0x5F5890u;
label_5f5890:
    // 0x5f5890: 0x49464e4f  .word       0x49464E4F                   # INVALID     $t2, $a2, 0x4E4F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5890u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5890 raw=0x49464E4F");
label_5f5894:
    // 0x5f5894: 0x41534d52  .word       0x41534D52                   # INVALID     $t2, $s3, 0x4D52 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5894u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F5894 raw=0x41534D52");
label_5f5898:
    // 0x5f5898: 0x49464556  .word       0x49464556                   # INVALID     $t2, $a2, 0x4556 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5898u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5898 raw=0x49464556");
label_5f589c:
    // 0x5f589c: 0x53454c  .word       0x0053454C                   # syscall     277 # 00530000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f589cu;
    ctx->pc = 0x5F58A0u;
runtime->handleSyscall(rdram, ctx, 0x14D15u);
label_5f58a0:
    // 0x5f58a0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f58a0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F58A0 raw=0x45435326");
label_5f58a4:
    // 0x5f58a4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f58a4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58A4 raw=0x4352545F");
label_5f58a8:
    // 0x5f58a8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f58ac:
    if (ctx->pc == 0x5F58ACu) {
        ctx->pc = 0x5F58ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F58A8u;
        // 0x5f58ac: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58AC raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F58B0u;
        goto label_5f58b0;
    }
    ctx->pc = 0x5F58A8u;
    {
        const bool branch_taken_0x5f58a8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f58a8) {
            ctx->pc = 0x5F58ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F58A8u;
            // 0x5f58ac: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58AC raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A5E0u;
            return;
        }
    }
    ctx->pc = 0x5F58B0u;
label_5f58b0:
    // 0x5f58b0: 0x49464e4f  .word       0x49464E4F                   # INVALID     $t2, $a2, 0x4E4F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f58b0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F58B0 raw=0x49464E4F");
label_5f58b4:
    // 0x5f58b4: 0x564f4d52  bnel        $s2, $t7, . + 4 + (0x4D52 << 2)
label_5f58b8:
    if (ctx->pc == 0x5F58B8u) {
        ctx->pc = 0x5F58B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F58B4u;
        // 0x5f58b8: 0x52575245  beql        $s2, $s7, . + 4 + (0x5245 << 2) (Delay Slot)
        // Likely branch instruction at 0x5F58B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F58BCu;
        goto label_5f58bc;
    }
    ctx->pc = 0x5F58B4u;
    {
        const bool branch_taken_0x5f58b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 15));
        if (branch_taken_0x5f58b4) {
            ctx->pc = 0x5F58B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F58B4u;
            // 0x5f58b8: 0x52575245  beql        $s2, $s7, . + 4 + (0x5245 << 2) (Delay Slot)
            // Likely branch instruction at 0x5F58B8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x608E00u;
            return;
        }
    }
    ctx->pc = 0x5F58BCu;
label_5f58bc:
    // 0x5f58bc: 0x455449  .word       0x00455449                   # jalr        $t2, $v0 # 00050440 <InstrIdType: CPU_SPECIAL>
label_5f58c0:
    if (ctx->pc == 0x5F58C0u) {
        ctx->pc = 0x5F58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F58BCu;
        // 0x5f58c0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F58C0 raw=0x45435326");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F58C4u;
        goto label_5f58c4;
    }
    ctx->pc = 0x5F58BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 10, 0x5F58C4u);
        ctx->pc = 0x5F58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F58BCu;
        // 0x5f58c0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F58C0 raw=0x45435326");
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F58BCu, 0x5F58C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x5F58C4u;
label_5f58c4:
    // 0x5f58c4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f58c4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58C4 raw=0x4352545F");
label_5f58c8:
    // 0x5f58c8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f58cc:
    if (ctx->pc == 0x5F58CCu) {
        ctx->pc = 0x5F58CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F58C8u;
        // 0x5f58cc: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58CC raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F58D0u;
        goto label_5f58d0;
    }
    ctx->pc = 0x5F58C8u;
    {
        const bool branch_taken_0x5f58c8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f58c8) {
            ctx->pc = 0x5F58CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F58C8u;
            // 0x5f58cc: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58CC raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A600u;
            return;
        }
    }
    ctx->pc = 0x5F58D0u;
label_5f58d0:
    // 0x5f58d0: 0x49464e4f  .word       0x49464E4F                   # INVALID     $t2, $a2, 0x4E4F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f58d0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F58D0 raw=0x49464E4F");
label_5f58d4:
    // 0x5f58d4: 0x4f4c4d52  .word       0x4F4C4D52                   # INVALID     $k0, $t4, 0x4D52 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f58d4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F58D4 raw=0x4F4C4D52");
label_5f58d8:
    // 0x5f58d8: 0x49464441  .word       0x49464441                   # INVALID     $t2, $a2, 0x4441 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f58d8u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F58D8 raw=0x49464441");
label_5f58dc:
    // 0x5f58dc: 0x53454c  .word       0x0053454C                   # syscall     277 # 00530000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f58dcu;
    ctx->pc = 0x5F58E0u;
runtime->handleSyscall(rdram, ctx, 0x14D15u);
label_5f58e0:
    // 0x5f58e0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f58e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F58E0 raw=0x45435326");
label_5f58e4:
    // 0x5f58e4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f58e4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58E4 raw=0x4352545F");
label_5f58e8:
    // 0x5f58e8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f58ec:
    if (ctx->pc == 0x5F58ECu) {
        ctx->pc = 0x5F58ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F58E8u;
        // 0x5f58ec: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58EC raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F58F0u;
        goto label_5f58f0;
    }
    ctx->pc = 0x5F58E8u;
    {
        const bool branch_taken_0x5f58e8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f58e8) {
            ctx->pc = 0x5F58ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F58E8u;
            // 0x5f58ec: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F58EC raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A620u;
            return;
        }
    }
    ctx->pc = 0x5F58F0u;
label_5f58f0:
    // 0x5f58f0: 0x42445241  .word       0x42445241                   # INVALID     $s2, $a0, 0x5241 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f58f0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x5F58F0 raw=0x42445241");
label_5f58f4:
    // 0x5f58f4: 0x474e4945  .word       0x474E4945                   # INVALID     $k0, $t6, 0x4945 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f58f4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x5 at 0x5F58F4 raw=0x474E4945");
label_5f58f8:
    // 0x5f58f8: 0x4d524f46  .word       0x4D524F46                   # INVALID     $t2, $s2, 0x4F46 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f58f8u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F58F8 raw=0x4D524F46");
label_5f58fc:
    // 0x5f58fc: 0x45545441  .word       0x45545441                   # INVALID     $t2, $s4, 0x5441 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f58fcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x5F58FC raw=0x45545441");
label_5f5900:
    // 0x5f5900: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5900u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f5904:
    // 0x5f5904: 0x0  nop
    ctx->pc = 0x5f5904u;
    // NOP
label_5f5908:
    // 0x5f5908: 0x0  nop
    ctx->pc = 0x5f5908u;
    // NOP
label_5f590c:
    // 0x5f590c: 0x0  nop
    ctx->pc = 0x5f590cu;
    // NOP
label_5f5910:
    // 0x5f5910: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5910u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5910 raw=0x45435326");
label_5f5914:
    // 0x5f5914: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5914u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5914 raw=0x4352545F");
label_5f5918:
    // 0x5f5918: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f591c:
    if (ctx->pc == 0x5F591Cu) {
        ctx->pc = 0x5F591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5918u;
        // 0x5f591c: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F591C raw=0x4C5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5920u;
        goto label_5f5920;
    }
    ctx->pc = 0x5F5918u;
    {
        const bool branch_taken_0x5f5918 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5918) {
            ctx->pc = 0x5F591Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5918u;
            // 0x5f591c: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F591C raw=0x4C5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A650u;
            return;
        }
    }
    ctx->pc = 0x5F5920u;
label_5f5920:
    // 0x5f5920: 0x4944414f  .word       0x4944414F                   # INVALID     $t2, $a0, 0x414F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5920u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5920 raw=0x4944414F");
label_5f5924:
    // 0x5f5924: 0x4946474e  .word       0x4946474E                   # INVALID     $t2, $a2, 0x474E # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5924u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5924 raw=0x4946474E");
label_5f5928:
    // 0x5f5928: 0x53454c  .word       0x0053454C                   # syscall     277 # 00530000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5928u;
    ctx->pc = 0x5F592Cu;
runtime->handleSyscall(rdram, ctx, 0x14D15u);
label_5f592c:
    // 0x5f592c: 0x0  nop
    ctx->pc = 0x5f592cu;
    // NOP
label_5f5930:
    // 0x5f5930: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5930u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5930 raw=0x45435326");
label_5f5934:
    // 0x5f5934: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5934u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5934 raw=0x4352545F");
label_5f5938:
    // 0x5f5938: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f593c:
    if (ctx->pc == 0x5F593Cu) {
        ctx->pc = 0x5F593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5938u;
        // 0x5f593c: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
        // Likely branch instruction at 0x5F593C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5940u;
        goto label_5f5940;
    }
    ctx->pc = 0x5F5938u;
    {
        const bool branch_taken_0x5f5938 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5938) {
            ctx->pc = 0x5F593Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5938u;
            // 0x5f593c: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
            // Likely branch instruction at 0x5F593C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A670u;
            return;
        }
    }
    ctx->pc = 0x5F5940u;
label_5f5940:
    // 0x5f5940: 0x4e495641  .word       0x4E495641                   # INVALID     $s2, $t1, 0x5641 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5940u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5940 raw=0x4E495641");
label_5f5944:
    // 0x5f5944: 0x4c494647  .word       0x4C494647                   # INVALID     $v0, $t1, 0x4647 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5944u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5944 raw=0x4C494647");
label_5f5948:
    // 0x5f5948: 0x5345  .word       0x00005345                   # INVALID     $zero, $zero, 0x5345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5948u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5F5948 raw=0x00005345");
label_5f594c:
    // 0x5f594c: 0x0  nop
    ctx->pc = 0x5f594cu;
    // NOP
label_5f5950:
    // 0x5f5950: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5950u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5950 raw=0x45435326");
label_5f5954:
    // 0x5f5954: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5954u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5954 raw=0x4352545F");
label_5f5958:
    // 0x5f5958: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f595c:
    if (ctx->pc == 0x5F595Cu) {
        ctx->pc = 0x5F595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5958u;
        // 0x5f595c: 0x4f5f434d  .word       0x4F5F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F595C raw=0x4F5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5960u;
        goto label_5f5960;
    }
    ctx->pc = 0x5F5958u;
    {
        const bool branch_taken_0x5f5958 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5958) {
            ctx->pc = 0x5F595Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5958u;
            // 0x5f595c: 0x4f5f434d  .word       0x4F5F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F595C raw=0x4F5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A690u;
            return;
        }
    }
    ctx->pc = 0x5F5960u;
label_5f5960:
    // 0x5f5960: 0x57524556  bnel        $k0, $s2, . + 4 + (0x4556 << 2)
label_5f5964:
    if (ctx->pc == 0x5F5964u) {
        ctx->pc = 0x5F5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5960u;
        // 0x5f5964: 0x49544952  .word       0x49544952                   # INVALID     $t2, $s4, 0x4952 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
        throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5964 raw=0x49544952");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5968u;
        goto label_5f5968;
    }
    ctx->pc = 0x5F5960u;
    {
        const bool branch_taken_0x5f5960 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f5960) {
            ctx->pc = 0x5F5964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5960u;
            // 0x5f5964: 0x49544952  .word       0x49544952                   # INVALID     $t2, $s4, 0x4952 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5964 raw=0x49544952");
            ctx->in_delay_slot = false;
            ctx->pc = 0x606EBCu;
            return;
        }
    }
    ctx->pc = 0x5F5968u;
label_5f5968:
    // 0x5f5968: 0x474e  .word       0x0000474E                   # INVALID     $zero, $zero, 0x474E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5968u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5F5968 raw=0x0000474E");
label_5f596c:
    // 0x5f596c: 0x0  nop
    ctx->pc = 0x5f596cu;
    // NOP
label_5f5970:
    // 0x5f5970: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5970u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5970 raw=0x45435326");
label_5f5974:
    // 0x5f5974: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5974u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5974 raw=0x4352545F");
label_5f5978:
    // 0x5f5978: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f597c:
    if (ctx->pc == 0x5F597Cu) {
        ctx->pc = 0x5F597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5978u;
        // 0x5f597c: 0x465f434d  .word       0x465F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x5F597C raw=0x465F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5980u;
        goto label_5f5980;
    }
    ctx->pc = 0x5F5978u;
    {
        const bool branch_taken_0x5f5978 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5978) {
            ctx->pc = 0x5F597Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5978u;
            // 0x5f597c: 0x465f434d  .word       0x465F434D                   # INVALID     $s2, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x5F597C raw=0x465F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A6B0u;
            return;
        }
    }
    ctx->pc = 0x5F5980u;
label_5f5980:
    // 0x5f5980: 0x414d524f  .word       0x414D524F                   # INVALID     $t2, $t5, 0x524F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5980u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5F5980 raw=0x414D524F");
label_5f5984:
    // 0x5f5984: 0x49414654  .word       0x49414654                   # INVALID     $t2, $at, 0x4654 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f5984u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F5984 raw=0x49414654");
label_5f5988:
    // 0x5f5988: 0x44454c  .word       0x0044454C                   # syscall     277 # 00440000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5988u;
    ctx->pc = 0x5F598Cu;
runtime->handleSyscall(rdram, ctx, 0x11115u);
label_5f598c:
    // 0x5f598c: 0x0  nop
    ctx->pc = 0x5f598cu;
    // NOP
label_5f5990:
    // 0x5f5990: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5990u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5990 raw=0x45435326");
label_5f5994:
    // 0x5f5994: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5994u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5994 raw=0x4352545F");
label_5f5998:
    // 0x5f5998: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f599c:
    if (ctx->pc == 0x5F599Cu) {
        ctx->pc = 0x5F599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5998u;
        // 0x5f599c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
        throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F599C raw=0x435F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F59A0u;
        goto label_5f59a0;
    }
    ctx->pc = 0x5F5998u;
    {
        const bool branch_taken_0x5f5998 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5998) {
            ctx->pc = 0x5F599Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5998u;
            // 0x5f599c: 0x435f434d  .word       0x435F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F599C raw=0x435F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A6D0u;
            return;
        }
    }
    ctx->pc = 0x5F59A0u;
label_5f59a0:
    // 0x5f59a0: 0x4d445241  .word       0x4D445241                   # INVALID     $t2, $a0, 0x5241 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f59a0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F59A0 raw=0x4D445241");
label_5f59a4:
    // 0x5f59a4: 0x49535349  .word       0x49535349                   # INVALID     $t2, $s3, 0x5349 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5f59a4u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5F59A4 raw=0x49535349");
label_5f59a8:
    // 0x5f59a8: 0x474e  .word       0x0000474E                   # INVALID     $zero, $zero, 0x474E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f59a8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x5F59A8 raw=0x0000474E");
label_5f59ac:
    // 0x5f59ac: 0x0  nop
    ctx->pc = 0x5f59acu;
    // NOP
label_5f59b0:
    // 0x5f59b0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f59b0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F59B0 raw=0x45435326");
label_5f59b4:
    // 0x5f59b4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f59b4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F59B4 raw=0x4352545F");
label_5f59b8:
    // 0x5f59b8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f59bc:
    if (ctx->pc == 0x5F59BCu) {
        ctx->pc = 0x5F59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F59B8u;
        // 0x5f59bc: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F59BC raw=0x4C5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F59C0u;
        goto label_5f59c0;
    }
    ctx->pc = 0x5F59B8u;
    {
        const bool branch_taken_0x5f59b8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f59b8) {
            ctx->pc = 0x5F59BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F59B8u;
            // 0x5f59bc: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F59BC raw=0x4C5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A6F0u;
            return;
        }
    }
    ctx->pc = 0x5F59C0u;
label_5f59c0:
    // 0x5f59c0: 0x4644414f  .word       0x4644414F                   # INVALID     $s2, $a0, 0x414F # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f59c0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xF at 0x5F59C0 raw=0x4644414F");
label_5f59c4:
    // 0x5f59c4: 0x454c4941  .word       0x454C4941                   # INVALID     $t2, $t4, 0x4941 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f59c4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x5F59C4 raw=0x454C4941");
label_5f59c8:
    // 0x5f59c8: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f59c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f59cc:
    // 0x5f59cc: 0x0  nop
    ctx->pc = 0x5f59ccu;
    // NOP
label_5f59d0:
    // 0x5f59d0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f59d0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F59D0 raw=0x45435326");
label_5f59d4:
    // 0x5f59d4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f59d4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F59D4 raw=0x4352545F");
label_5f59d8:
    // 0x5f59d8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f59dc:
    if (ctx->pc == 0x5F59DCu) {
        ctx->pc = 0x5F59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F59D8u;
        // 0x5f59dc: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
        // Likely branch instruction at 0x5F59DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F59E0u;
        goto label_5f59e0;
    }
    ctx->pc = 0x5F59D8u;
    {
        const bool branch_taken_0x5f59d8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f59d8) {
            ctx->pc = 0x5F59DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F59D8u;
            // 0x5f59dc: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
            // Likely branch instruction at 0x5F59DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A710u;
            return;
        }
    }
    ctx->pc = 0x5F59E0u;
label_5f59e0:
    // 0x5f59e0: 0x46455641  .word       0x46455641                   # INVALID     $s2, $a1, 0x5641 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f59e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x1 at 0x5F59E0 raw=0x46455641");
label_5f59e4:
    // 0x5f59e4: 0x454c4941  .word       0x454C4941                   # INVALID     $t2, $t4, 0x4941 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f59e4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x5F59E4 raw=0x454C4941");
label_5f59e8:
    // 0x5f59e8: 0x44  .word       0x00000044                   # sllv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f59e8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f59ec:
    // 0x5f59ec: 0x0  nop
    ctx->pc = 0x5f59ecu;
    // NOP
label_5f59f0:
    // 0x5f59f0: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f59f0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F59F0 raw=0x45435326");
label_5f59f4:
    // 0x5f59f4: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f59f4u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F59F4 raw=0x4352545F");
label_5f59f8:
    // 0x5f59f8: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f59fc:
    if (ctx->pc == 0x5F59FCu) {
        ctx->pc = 0x5F59FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F59F8u;
        // 0x5f59fc: 0x4f5f434d  .word       0x4F5F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F59FC raw=0x4F5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A00u;
        goto label_5f5a00;
    }
    ctx->pc = 0x5F59F8u;
    {
        const bool branch_taken_0x5f59f8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f59f8) {
            ctx->pc = 0x5F59FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F59F8u;
            // 0x5f59fc: 0x4f5f434d  .word       0x4F5F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F59FC raw=0x4F5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A730u;
            return;
        }
    }
    ctx->pc = 0x5F5A00u;
label_5f5a00:
    // 0x5f5a00: 0x57524556  bnel        $k0, $s2, . + 4 + (0x4556 << 2)
label_5f5a04:
    if (ctx->pc == 0x5F5A04u) {
        ctx->pc = 0x5F5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A00u;
        // 0x5f5a04: 0x45544952  .word       0x45544952                   # INVALID     $t2, $s4, 0x4952 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x5F5A04 raw=0x45544952");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A08u;
        goto label_5f5a08;
    }
    ctx->pc = 0x5F5A00u;
    {
        const bool branch_taken_0x5f5a00 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f5a00) {
            ctx->pc = 0x5F5A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A00u;
            // 0x5f5a04: 0x45544952  .word       0x45544952                   # INVALID     $t2, $s4, 0x4952 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x5F5A04 raw=0x45544952");
            ctx->in_delay_slot = false;
            ctx->pc = 0x606F5Cu;
            return;
        }
    }
    ctx->pc = 0x5F5A08u;
label_5f5a08:
    // 0x5f5a08: 0x4c494146  .word       0x4C494146                   # INVALID     $v0, $t1, 0x4146 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f5a08u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5A08 raw=0x4C494146");
label_5f5a0c:
    // 0x5f5a0c: 0x4445  .word       0x00004445                   # INVALID     $zero, $zero, 0x4445 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5a0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x5F5A0C raw=0x00004445");
label_5f5a10:
    // 0x5f5a10: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5a10u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5A10 raw=0x45435326");
label_5f5a14:
    // 0x5f5a14: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5a14u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5A14 raw=0x4352545F");
label_5f5a18:
    // 0x5f5a18: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f5a1c:
    if (ctx->pc == 0x5F5A1Cu) {
        ctx->pc = 0x5F5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A18u;
        // 0x5f5a1c: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5A1C raw=0x4C5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A20u;
        goto label_5f5a20;
    }
    ctx->pc = 0x5F5A18u;
    {
        const bool branch_taken_0x5f5a18 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5a18) {
            ctx->pc = 0x5F5A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A18u;
            // 0x5f5a1c: 0x4c5f434d  .word       0x4C5F434D                   # INVALID     $v0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5A1C raw=0x4C5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A750u;
            return;
        }
    }
    ctx->pc = 0x5F5A20u;
label_5f5a20:
    // 0x5f5a20: 0x5344414f  beql        $k0, $a0, . + 4 + (0x414F << 2)
label_5f5a24:
    if (ctx->pc == 0x5F5A24u) {
        ctx->pc = 0x5F5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A20u;
        // 0x5f5a24: 0x45434355  .word       0x45434355                   # INVALID     $t2, $v1, 0x4355 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x15 at 0x5F5A24 raw=0x45434355");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A28u;
        goto label_5f5a28;
    }
    ctx->pc = 0x5F5A20u;
    {
        const bool branch_taken_0x5f5a20 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 4));
        if (branch_taken_0x5f5a20) {
            ctx->pc = 0x5F5A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A20u;
            // 0x5f5a24: 0x45434355  .word       0x45434355                   # INVALID     $t2, $v1, 0x4355 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x15 at 0x5F5A24 raw=0x45434355");
            ctx->in_delay_slot = false;
            ctx->pc = 0x605F60u;
            return;
        }
    }
    ctx->pc = 0x5F5A28u;
label_5f5a28:
    // 0x5f5a28: 0x44454445  .word       0x44454445                   # cfc1        $a1, $8 # 00000445 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5a28u;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR8
label_5f5a2c:
    // 0x5f5a2c: 0x0  nop
    ctx->pc = 0x5f5a2cu;
    // NOP
label_5f5a30:
    // 0x5f5a30: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5a30u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5A30 raw=0x45435326");
label_5f5a34:
    // 0x5f5a34: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5a34u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5A34 raw=0x4352545F");
label_5f5a38:
    // 0x5f5a38: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f5a3c:
    if (ctx->pc == 0x5F5A3Cu) {
        ctx->pc = 0x5F5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A38u;
        // 0x5f5a3c: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
        // Likely branch instruction at 0x5F5A3C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A40u;
        goto label_5f5a40;
    }
    ctx->pc = 0x5F5A38u;
    {
        const bool branch_taken_0x5f5a38 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5a38) {
            ctx->pc = 0x5F5A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A38u;
            // 0x5f5a3c: 0x535f434d  beql        $k0, $ra, . + 4 + (0x434D << 2) (Delay Slot)
            // Likely branch instruction at 0x5F5A3C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A770u;
            return;
        }
    }
    ctx->pc = 0x5F5A40u;
label_5f5a40:
    // 0x5f5a40: 0x53455641  beql        $k0, $a1, . + 4 + (0x5641 << 2)
label_5f5a44:
    if (ctx->pc == 0x5F5A44u) {
        ctx->pc = 0x5F5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A40u;
        // 0x5f5a44: 0x45434355  .word       0x45434355                   # INVALID     $t2, $v1, 0x4355 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x15 at 0x5F5A44 raw=0x45434355");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A48u;
        goto label_5f5a48;
    }
    ctx->pc = 0x5F5A40u;
    {
        const bool branch_taken_0x5f5a40 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x5f5a40) {
            ctx->pc = 0x5F5A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A40u;
            // 0x5f5a44: 0x45434355  .word       0x45434355                   # INVALID     $t2, $v1, 0x4355 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x15 at 0x5F5A44 raw=0x45434355");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60B348u;
            return;
        }
    }
    ctx->pc = 0x5F5A48u;
label_5f5a48:
    // 0x5f5a48: 0x44454445  .word       0x44454445                   # cfc1        $a1, $8 # 00000445 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5a48u;
    SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR8
label_5f5a4c:
    // 0x5f5a4c: 0x0  nop
    ctx->pc = 0x5f5a4cu;
    // NOP
label_5f5a50:
    // 0x5f5a50: 0x45435326  .word       0x45435326                   # INVALID     $t2, $v1, 0x5326 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5a50u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x5F5A50 raw=0x45435326");
label_5f5a54:
    // 0x5f5a54: 0x4352545f  .word       0x4352545F                   # INVALID     $k0, $s2, 0x545F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5a54u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5A54 raw=0x4352545F");
label_5f5a58:
    // 0x5f5a58: 0x5f47534d  .word       0x5F47534D                   # bgtzl       $k0, . + 4 + (0x534D << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_5f5a5c:
    if (ctx->pc == 0x5F5A5Cu) {
        ctx->pc = 0x5F5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A58u;
        // 0x5f5a5c: 0x4f5f434d  .word       0x4F5F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5A5C raw=0x4F5F434D");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A60u;
        goto label_5f5a60;
    }
    ctx->pc = 0x5F5A58u;
    {
        const bool branch_taken_0x5f5a58 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5f5a58) {
            ctx->pc = 0x5F5A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A58u;
            // 0x5f5a5c: 0x4f5f434d  .word       0x4F5F434D                   # INVALID     $k0, $ra, 0x434D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5F5A5C raw=0x4F5F434D");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60A790u;
            return;
        }
    }
    ctx->pc = 0x5F5A60u;
label_5f5a60:
    // 0x5f5a60: 0x57524556  bnel        $k0, $s2, . + 4 + (0x4556 << 2)
label_5f5a64:
    if (ctx->pc == 0x5F5A64u) {
        ctx->pc = 0x5F5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A60u;
        // 0x5f5a64: 0x45544952  .word       0x45544952                   # INVALID     $t2, $s4, 0x4952 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x5F5A64 raw=0x45544952");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A68u;
        goto label_5f5a68;
    }
    ctx->pc = 0x5F5A60u;
    {
        const bool branch_taken_0x5f5a60 = (GPR_U64(ctx, 26) != GPR_U64(ctx, 18));
        if (branch_taken_0x5f5a60) {
            ctx->pc = 0x5F5A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A60u;
            // 0x5f5a64: 0x45544952  .word       0x45544952                   # INVALID     $t2, $s4, 0x4952 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x12 at 0x5F5A64 raw=0x45544952");
            ctx->in_delay_slot = false;
            ctx->pc = 0x606FBCu;
            return;
        }
    }
    ctx->pc = 0x5F5A68u;
label_5f5a68:
    // 0x5f5a68: 0x43435553  .word       0x43435553                   # INVALID     $k0, $v1, 0x5553 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5f5a68u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5F5A68 raw=0x43435553");
label_5f5a6c:
    // 0x5f5a6c: 0x46535345  .word       0x46535345                   # INVALID     $s2, $s3, 0x5345 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5f5a6cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x5 at 0x5F5A6C raw=0x46535345");
label_5f5a70:
    // 0x5f5a70: 0x4c55  .word       0x00004C55                   # INVALID     $zero, $zero, 0x4C55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5a70u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x5F5A70 raw=0x00004C55");
label_5f5a74:
    // 0x5f5a74: 0x0  nop
    ctx->pc = 0x5f5a74u;
    // NOP
label_5f5a78:
    // 0x5f5a78: 0x0  nop
    ctx->pc = 0x5f5a78u;
    // NOP
label_5f5a7c:
    // 0x5f5a7c: 0x0  nop
    ctx->pc = 0x5f5a7cu;
    // NOP
label_5f5a80:
    // 0x5f5a80: 0x61686e55  daddi       $t0, $t3, 0x6E55
    ctx->pc = 0x5f5a80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28245; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_5f5a84:
    // 0x5f5a84: 0x656c646e  daddiu      $t4, $t3, 0x646E
    ctx->pc = 0x5f5a84u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25710);
label_5f5a88:
    // 0x5f5a88: 0x52542064  beql        $s2, $s4, . + 4 + (0x2064 << 2)
label_5f5a8c:
    if (ctx->pc == 0x5F5A8Cu) {
        ctx->pc = 0x5F5A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5A88u;
        // 0x5f5a8c: 0x74732043  .word       0x74732043                   # INVALID     $v1, $s3, 0x2043 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5A8C raw=0x74732043");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5A90u;
        goto label_5f5a90;
    }
    ctx->pc = 0x5F5A88u;
    {
        const bool branch_taken_0x5f5a88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x5f5a88) {
            ctx->pc = 0x5F5A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5A88u;
            // 0x5f5a8c: 0x74732043  .word       0x74732043                   # INVALID     $v1, $s3, 0x2043 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F5A8C raw=0x74732043");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FDC1Cu;
            return;
        }
    }
    ctx->pc = 0x5F5A90u;
label_5f5a90:
    // 0x5f5a90: 0x657461  .word       0x00657461                   # addu        $t6, $v1, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5a90u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5f5a94:
    // 0x5f5a94: 0x0  nop
    ctx->pc = 0x5f5a94u;
    // NOP
label_5f5a98:
    // 0x5f5a98: 0x636e7546  daddi       $t6, $k1, 0x7546
    ctx->pc = 0x5f5a98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30022; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_5f5a9c:
    // 0x5f5a9c: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x5f5a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_5f5aa0:
    // 0x5f5aa0: 0x20732520  addi        $s3, $v1, 0x2520
    ctx->pc = 0x5f5aa0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)9504, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_5f5aa4:
    // 0x5f5aa4: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x5f5aa4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_5f5aa8:
    // 0x5f5aa8: 0x6c706d69  ldr         $s0, 0x6D69($v1)
    ctx->pc = 0x5f5aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_5f5aac:
    // 0x5f5aac: 0x6e656d65  ldr         $a1, 0x6D65($s3)
    ctx->pc = 0x5f5aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_5f5ab0:
    // 0x5f5ab0: 0x646574  teq         $v1, $a0, 405
    ctx->pc = 0x5f5ab0u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_5f5ab4:
    // 0x5f5ab4: 0x0  nop
    ctx->pc = 0x5f5ab4u;
    // NOP
label_5f5ab8:
    // 0x5f5ab8: 0x55ad338c  bnel        $t5, $t5, . + 4 + (0x338C << 2)
label_5f5abc:
    if (ctx->pc == 0x5F5ABCu) {
        ctx->pc = 0x5F5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5AB8u;
        // 0x5f5abc: 0x457e145e  .word       0x457E145E                   # INVALID     $t3, $fp, 0x145E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
        throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x1E at 0x5F5ABC raw=0x457E145E");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5AC0u;
        goto label_5f5ac0;
    }
    ctx->pc = 0x5F5AB8u;
    {
        const bool branch_taken_0x5f5ab8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 13));
        if (branch_taken_0x5f5ab8) {
            ctx->pc = 0x5F5ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5AB8u;
            // 0x5f5abc: 0x457e145e  .word       0x457E145E                   # INVALID     $t3, $fp, 0x145E # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x1E at 0x5F5ABC raw=0x457E145E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x6028ECu;
            return;
        }
    }
    ctx->pc = 0x5F5AC0u;
label_5f5ac0:
    // 0x5f5ac0: 0x551f5ba7  bnel        $t0, $ra, . + 4 + (0x5BA7 << 2)
label_5f5ac4:
    if (ctx->pc == 0x5F5AC4u) {
        ctx->pc = 0x5F5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5AC0u;
        // 0x5f5ac4: 0xefb797dd  .word       0xEFB797DD                   # INVALID     $sp, $s7, -0x6823 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x3B at 0x5F5AC4 raw=0xEFB797DD");
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5AC8u;
        goto label_5f5ac8;
    }
    ctx->pc = 0x5F5AC0u;
    {
        const bool branch_taken_0x5f5ac0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 31));
        if (branch_taken_0x5f5ac0) {
            ctx->pc = 0x5F5AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5F5AC0u;
            // 0x5f5ac4: 0xefb797dd  .word       0xEFB797DD                   # INVALID     $sp, $s7, -0x6823 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x3B at 0x5F5AC4 raw=0xEFB797DD");
            ctx->in_delay_slot = false;
            ctx->pc = 0x60C960u;
            return;
        }
    }
    ctx->pc = 0x5F5AC8u;
label_5f5ac8:
    // 0x5f5ac8: 0x0  nop
    ctx->pc = 0x5f5ac8u;
    // NOP
label_5f5acc:
    // 0x5f5acc: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x5f5accu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_5f5ad0:
    // 0x5f5ad0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5f5ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5f5ad4:
    // 0x5f5ad4: 0x7fffffff  sq          $ra, -0x1($ra)
    ctx->pc = 0x5f5ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_VEC(ctx, 31));
label_5f5ad8:
    // 0x5f5ad8: 0x0  nop
    ctx->pc = 0x5f5ad8u;
    // NOP
label_5f5adc:
    // 0x5f5adc: 0x0  nop
    ctx->pc = 0x5f5adcu;
    // NOP
label_5f5ae0:
    // 0x5f5ae0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5f5ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5f5ae4:
    // 0x5f5ae4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x5f5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_5f5ae8:
    // 0x5f5ae8: 0x658368  .word       0x00658368                   # mfsa        $s0 # 00650340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5ae8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_5f5aec:
    // 0x5f5aec: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5aecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F5AEC raw=0x00000001");
label_5f5af0:
    // 0x5f5af0: 0x658390  .word       0x00658390                   # mfhi        $s0 # 00650380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5af0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_5f5af4:
    // 0x5f5af4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x5f5af4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_5f5af8:
    // 0x5f5af8: 0x6583b8  .word       0x006583B8                   # dsll        $s0, $a1, 14 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5af8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << 14);
label_5f5afc:
    // 0x5f5afc: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x5f5afcu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f5b00:
    // 0x5f5b00: 0x6583e0  .word       0x006583E0                   # add         $s0, $v1, $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b00u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_5f5b04:
    // 0x5f5b04: 0x8  jr          $zero
label_5f5b08:
    if (ctx->pc == 0x5F5B08u) {
        ctx->pc = 0x5F5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5B04u;
        // 0x5f5b08: 0x658408  .word       0x00658408                   # jr          $v1 # 00058400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $3 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5B0Cu;
        goto label_5f5b0c;
    }
    ctx->pc = 0x5F5B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5F5B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5B04u;
        // 0x5f5b08: 0x658408  .word       0x00658408                   # jr          $v1 # 00058400 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $3 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5B04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5B0Cu;
label_5f5b0c:
    // 0x5f5b0c: 0x10  mfhi        $zero
    ctx->pc = 0x5f5b0cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5f5b10:
    // 0x5f5b10: 0x0  nop
    ctx->pc = 0x5f5b10u;
    // NOP
label_5f5b14:
    // 0x5f5b14: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x5f5b14u;
    
label_5f5b18:
    // 0x5f5b18: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x5f5b18u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f5b1c:
    // 0x5f5b1c: 0x60a740  .word       0x0060A740                   # sll         $s4, $zero, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b1cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_5f5b20:
    // 0x5f5b20: 0x601fa8  .word       0x00601FA8                   # mfsa        $v1 # 00600780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b20u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_5f5b24:
    // 0x5f5b24: 0x0  nop
    ctx->pc = 0x5f5b24u;
    // NOP
label_5f5b28:
    // 0x5f5b28: 0x658430  tge         $v1, $a1, 528
    ctx->pc = 0x5f5b28u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_5f5b2c:
    // 0x5f5b2c: 0x60a740  .word       0x0060A740                   # sll         $s4, $zero, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_5f5b30:
    // 0x5f5b30: 0x0  nop
    ctx->pc = 0x5f5b30u;
    // NOP
label_5f5b34:
    // 0x5f5b34: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x5f5b34u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_5f5b38:
    // 0x5f5b38: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F5B38 raw=0x00000001");
label_5f5b3c:
    // 0x5f5b3c: 0x60a750  .word       0x0060A750                   # mfhi        $s4 # 00600740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b3cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_5f5b40:
    // 0x5f5b40: 0x601f38  .word       0x00601F38                   # dsll        $v1, $zero, 28 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 28);
label_5f5b44:
    // 0x5f5b44: 0x0  nop
    ctx->pc = 0x5f5b44u;
    // NOP
label_5f5b48:
    // 0x5f5b48: 0x658458  .word       0x00658458                   # mult        $s0, $v1, $a1 # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_5f5b4c:
    // 0x5f5b4c: 0x60a750  .word       0x0060A750                   # mfhi        $s4 # 00600740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b4cu;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_5f5b50:
    // 0x5f5b50: 0x0  nop
    ctx->pc = 0x5f5b50u;
    // NOP
label_5f5b54:
    // 0x5f5b54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b54u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F5B54 raw=0x00000001");
label_5f5b58:
    // 0x5f5b58: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b58u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F5B58 raw=0x00000001");
label_5f5b5c:
    // 0x5f5b5c: 0x60a758  .word       0x0060A758                   # mult        $s4, $v1, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_5f5b60:
    // 0x5f5b60: 0x601f28  .word       0x00601F28                   # mfsa        $v1 # 00600700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b60u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_5f5b64:
    // 0x5f5b64: 0x0  nop
    ctx->pc = 0x5f5b64u;
    // NOP
label_5f5b68:
    // 0x5f5b68: 0x658480  .word       0x00658480                   # sll         $s0, $a1, 18 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 18));
label_5f5b6c:
    // 0x5f5b6c: 0x60a758  .word       0x0060A758                   # mult        $s4, $v1, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_5f5b70:
    // 0x5f5b70: 0x0  nop
    ctx->pc = 0x5f5b70u;
    // NOP
label_5f5b74:
    // 0x5f5b74: 0x8  jr          $zero
label_5f5b78:
    if (ctx->pc == 0x5F5B78u) {
        ctx->pc = 0x5F5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5B74u;
        // 0x5f5b78: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5B7Cu;
        goto label_5f5b7c;
    }
    ctx->pc = 0x5F5B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5F5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5B74u;
        // 0x5f5b78: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5B74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5B7Cu;
label_5f5b7c:
    // 0x5f5b7c: 0x60a760  .word       0x0060A760                   # add         $s4, $v1, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b7cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_5f5b80:
    // 0x5f5b80: 0x601f58  .word       0x00601F58                   # mult        $v1, $v1, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_5f5b84:
    // 0x5f5b84: 0x0  nop
    ctx->pc = 0x5f5b84u;
    // NOP
label_5f5b88:
    // 0x5f5b88: 0x6584a8  .word       0x006584A8                   # mfsa        $s0 # 00650480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b88u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_5f5b8c:
    // 0x5f5b8c: 0x60a760  .word       0x0060A760                   # add         $s4, $v1, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5b8cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_5f5b90:
    // 0x5f5b90: 0x0  nop
    ctx->pc = 0x5f5b90u;
    // NOP
label_5f5b94:
    // 0x5f5b94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x5f5b94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f5b98:
    // 0x5f5b98: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x5f5b98u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_5f5b9c:
    // 0x5f5b9c: 0x60a768  .word       0x0060A768                   # mfsa        $s4 # 00600740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5b9cu;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_5f5ba0:
    // 0x5f5ba0: 0x601f48  .word       0x00601F48                   # jr          $v1 # 00001F40 <InstrIdType: CPU_SPECIAL>
label_5f5ba4:
    if (ctx->pc == 0x5F5BA4u) {
        ctx->pc = 0x5F5BA8u;
        goto label_5f5ba8;
    }
    ctx->pc = 0x5F5BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5BA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5BA8u;
label_5f5ba8:
    // 0x5f5ba8: 0x6584d0  .word       0x006584D0                   # mfhi        $s0 # 006504C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5ba8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_5f5bac:
    // 0x5f5bac: 0x60a768  .word       0x0060A768                   # mfsa        $s4 # 00600740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5bacu;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_5f5bb0:
    // 0x5f5bb0: 0x0  nop
    ctx->pc = 0x5f5bb0u;
    // NOP
label_5f5bb4:
    // 0x5f5bb4: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x5f5bb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_5f5bb8:
    // 0x5f5bb8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x5f5bb8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f5bbc:
    // 0x5f5bbc: 0x60a770  tge         $v1, $zero, 669
    ctx->pc = 0x5f5bbcu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f5bc0:
    // 0x5f5bc0: 0x601f78  .word       0x00601F78                   # dsll        $v1, $zero, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 29);
label_5f5bc4:
    // 0x5f5bc4: 0x0  nop
    ctx->pc = 0x5f5bc4u;
    // NOP
label_5f5bc8:
    // 0x5f5bc8: 0x6584f8  .word       0x006584F8                   # dsll        $s0, $a1, 19 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5bc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << 19);
label_5f5bcc:
    // 0x5f5bcc: 0x60a770  tge         $v1, $zero, 669
    ctx->pc = 0x5f5bccu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f5bd0:
    // 0x5f5bd0: 0x0  nop
    ctx->pc = 0x5f5bd0u;
    // NOP
label_5f5bd4:
    // 0x5f5bd4: 0x10  mfhi        $zero
    ctx->pc = 0x5f5bd4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_5f5bd8:
    // 0x5f5bd8: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x5f5bd8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_5f5bdc:
    // 0x5f5bdc: 0x60a778  .word       0x0060A778                   # dsll        $s4, $zero, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5bdcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 29);
label_5f5be0:
    // 0x5f5be0: 0x601f68  .word       0x00601F68                   # mfsa        $v1 # 00600740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5be0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_5f5be4:
    // 0x5f5be4: 0x0  nop
    ctx->pc = 0x5f5be4u;
    // NOP
label_5f5be8:
    // 0x5f5be8: 0x658520  .word       0x00658520                   # add         $s0, $v1, $a1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5be8u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_5f5bec:
    // 0x5f5bec: 0x60a778  .word       0x0060A778                   # dsll        $s4, $zero, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5becu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) << 29);
label_5f5bf0:
    // 0x5f5bf0: 0x0  nop
    ctx->pc = 0x5f5bf0u;
    // NOP
label_5f5bf4:
    // 0x5f5bf4: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x5f5bf4u;
    
label_5f5bf8:
    // 0x5f5bf8: 0x8  jr          $zero
label_5f5bfc:
    if (ctx->pc == 0x5F5BFCu) {
        ctx->pc = 0x5F5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5BF8u;
        // 0x5f5bfc: 0x5f5ac8  .word       0x005F5AC8                   # jr          $v0 # 001F5AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5C00u;
        goto label_5f5c00;
    }
    ctx->pc = 0x5F5BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5F5BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5BF8u;
        // 0x5f5bfc: 0x5f5ac8  .word       0x005F5AC8                   # jr          $v0 # 001F5AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5BF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5C00u;
label_5f5c00:
    // 0x5f5c00: 0x601f98  .word       0x00601F98                   # mult        $v1, $v1, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5c00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_5f5c04:
    // 0x5f5c04: 0x0  nop
    ctx->pc = 0x5f5c04u;
    // NOP
label_5f5c08:
    // 0x5f5c08: 0x658548  .word       0x00658548                   # jr          $v1 # 00058540 <InstrIdType: CPU_SPECIAL>
label_5f5c0c:
    if (ctx->pc == 0x5F5C0Cu) {
        ctx->pc = 0x5F5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C08u;
        // 0x5f5c0c: 0x5f5ac8  .word       0x005F5AC8                   # jr          $v0 # 001F5AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5C10u;
        goto label_5f5c10;
    }
    ctx->pc = 0x5F5C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x5F5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C08u;
        // 0x5f5c0c: 0x5f5ac8  .word       0x005F5AC8                   # jr          $v0 # 001F5AC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5C08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5C10u;
label_5f5c10:
    // 0x5f5c10: 0x0  nop
    ctx->pc = 0x5f5c10u;
    // NOP
label_5f5c14:
    // 0x5f5c14: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x5f5c14u;
    
label_5f5c18:
    // 0x5f5c18: 0x8  jr          $zero
label_5f5c1c:
    if (ctx->pc == 0x5F5C1Cu) {
        ctx->pc = 0x5F5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C18u;
        // 0x5f5c1c: 0x5f5ad8  .word       0x005F5AD8                   # mult        $t3, $v0, $ra # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 31); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5C20u;
        goto label_5f5c20;
    }
    ctx->pc = 0x5F5C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x5F5C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C18u;
        // 0x5f5c1c: 0x5f5ad8  .word       0x005F5AD8                   # mult        $t3, $v0, $ra # 000002C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 31); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5C18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5C20u;
label_5f5c20:
    // 0x5f5c20: 0x601f88  .word       0x00601F88                   # jr          $v1 # 00001F80 <InstrIdType: CPU_SPECIAL>
label_5f5c24:
    if (ctx->pc == 0x5F5C24u) {
        ctx->pc = 0x5F5C28u;
        goto label_5f5c28;
    }
    ctx->pc = 0x5F5C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5C20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5C28u;
label_5f5c28:
    // 0x5f5c28: 0x658570  tge         $v1, $a1, 533
    ctx->pc = 0x5f5c28u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_5f5c2c:
    // 0x5f5c2c: 0x5f5ad8  .word       0x005F5AD8                   # mult        $t3, $v0, $ra # 000002C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5c2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 31); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
label_5f5c30:
    // 0x5f5c30: 0x0  nop
    ctx->pc = 0x5f5c30u;
    // NOP
label_5f5c34:
    // 0x5f5c34: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x5f5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_5f5c38:
    // 0x5f5c38: 0x8  jr          $zero
label_5f5c3c:
    if (ctx->pc == 0x5F5C3Cu) {
        ctx->pc = 0x5F5C40u;
        goto label_5f5c40;
    }
    ctx->pc = 0x5F5C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5C38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5C40u;
label_5f5c40:
    // 0x5f5c40: 0x601fb8  .word       0x00601FB8                   # dsll        $v1, $zero, 30 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 30);
label_5f5c44:
    // 0x5f5c44: 0x601f28  .word       0x00601F28                   # mfsa        $v1 # 00600700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5c44u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_5f5c48:
    // 0x5f5c48: 0x658598  .word       0x00658598                   # mult        $s0, $v1, $a1 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5c48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_5f5c4c:
    // 0x5f5c4c: 0x60b128  .word       0x0060B128                   # mfsa        $s6 # 00600100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5c4cu;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_5f5c50:
    // 0x5f5c50: 0x0  nop
    ctx->pc = 0x5f5c50u;
    // NOP
label_5f5c54:
    // 0x5f5c54: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x5f5c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_5f5c58:
    // 0x5f5c58: 0xc  syscall     0
    ctx->pc = 0x5f5c58u;
    ctx->pc = 0x5F5C5Cu;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_5f5c5c:
    // 0x5f5c5c: 0x0  nop
    ctx->pc = 0x5f5c5cu;
    // NOP
label_5f5c60:
    // 0x5f5c60: 0x601fc8  .word       0x00601FC8                   # jr          $v1 # 00001FC0 <InstrIdType: CPU_SPECIAL>
label_5f5c64:
    if (ctx->pc == 0x5F5C64u) {
        ctx->pc = 0x5F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C60u;
        // 0x5f5c64: 0x601f28  .word       0x00601F28                   # mfsa        $v1 # 00600700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 3, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5C68u;
        goto label_5f5c68;
    }
    ctx->pc = 0x5F5C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x5F5C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C60u;
        // 0x5f5c64: 0x601f28  .word       0x00601F28                   # mfsa        $v1 # 00600700 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 3, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5C60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5C68u;
label_5f5c68:
    // 0x5f5c68: 0x6585c0  .word       0x006585C0                   # sll         $s0, $a1, 23 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5c68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 23));
label_5f5c6c:
    // 0x5f5c6c: 0x60b130  tge         $v1, $zero, 708
    ctx->pc = 0x5f5c6cu;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_5f5c70:
    // 0x5f5c70: 0x0  nop
    ctx->pc = 0x5f5c70u;
    // NOP
label_5f5c74:
    // 0x5f5c74: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x5f5c74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_5f5c78:
    // 0x5f5c78: 0x0  nop
    ctx->pc = 0x5f5c78u;
    // NOP
label_5f5c7c:
    // 0x5f5c7c: 0x60a748  .word       0x0060A748                   # jr          $v1 # 0000A740 <InstrIdType: CPU_SPECIAL>
label_5f5c80:
    if (ctx->pc == 0x5F5C80u) {
        ctx->pc = 0x5F5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C7Cu;
        // 0x5f5c80: 0x601fd8  .word       0x00601FD8                   # mult        $v1, $v1, $zero # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5C84u;
        goto label_5f5c84;
    }
    ctx->pc = 0x5F5C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x5F5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5C7Cu;
        // 0x5f5c80: 0x601fd8  .word       0x00601FD8                   # mult        $v1, $v1, $zero # 000007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5C7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5C84u;
label_5f5c84:
    // 0x5f5c84: 0x601f78  .word       0x00601F78                   # dsll        $v1, $zero, 29 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 29);
label_5f5c88:
    // 0x5f5c88: 0x6585e8  .word       0x006585E8                   # mfsa        $s0 # 006505C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5c88u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_5f5c8c:
    // 0x5f5c8c: 0x60b138  .word       0x0060B138                   # dsll        $s6, $zero, 4 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5c8cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) << 4);
label_5f5c90:
    // 0x5f5c90: 0x0  nop
    ctx->pc = 0x5f5c90u;
    // NOP
label_5f5c94:
    // 0x5f5c94: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x5f5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_5f5c98:
    // 0x5f5c98: 0x0  nop
    ctx->pc = 0x5f5c98u;
    // NOP
label_5f5c9c:
    // 0x5f5c9c: 0x0  nop
    ctx->pc = 0x5f5c9cu;
    // NOP
label_5f5ca0:
    // 0x5f5ca0: 0x601fe8  .word       0x00601FE8                   # mfsa        $v1 # 006007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5ca0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_5f5ca4:
    // 0x5f5ca4: 0x0  nop
    ctx->pc = 0x5f5ca4u;
    // NOP
label_5f5ca8:
    // 0x5f5ca8: 0x658610  .word       0x00658610                   # mfhi        $s0 # 00650600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5ca8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_5f5cac:
    // 0x5f5cac: 0x60b140  .word       0x0060B140                   # sll         $s6, $zero, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5cacu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_5f5cb0:
    // 0x5f5cb0: 0x0  nop
    ctx->pc = 0x5f5cb0u;
    // NOP
label_5f5cb4:
    // 0x5f5cb4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x5f5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_5f5cb8:
    // 0x5f5cb8: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x5f5cb8u;
    
label_5f5cbc:
    // 0x5f5cbc: 0x0  nop
    ctx->pc = 0x5f5cbcu;
    // NOP
label_5f5cc0:
    // 0x5f5cc0: 0x601ff8  .word       0x00601FF8                   # dsll        $v1, $zero, 31 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << 31);
label_5f5cc4:
    // 0x5f5cc4: 0x601fe8  .word       0x00601FE8                   # mfsa        $v1 # 006007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5cc4u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_5f5cc8:
    // 0x5f5cc8: 0x658638  .word       0x00658638                   # dsll        $s0, $a1, 24 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5cc8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) << 24);
label_5f5ccc:
    // 0x5f5ccc: 0x60b148  .word       0x0060B148                   # jr          $v1 # 0000B140 <InstrIdType: CPU_SPECIAL>
label_5f5cd0:
    if (ctx->pc == 0x5F5CD0u) {
        ctx->pc = 0x5F5CD4u;
        goto label_5f5cd4;
    }
    ctx->pc = 0x5F5CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5CCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5CD4u;
label_5f5cd4:
    // 0x5f5cd4: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x5f5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_5f5cd8:
    // 0x5f5cd8: 0x5c  .word       0x0000005C                   # dmult       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5cd8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x5F5CD8 raw=0x0000005C");
label_5f5cdc:
    // 0x5f5cdc: 0x0  nop
    ctx->pc = 0x5f5cdcu;
    // NOP
label_5f5ce0:
    // 0x5f5ce0: 0x602008  .word       0x00602008                   # jr          $v1 # 00002000 <InstrIdType: CPU_SPECIAL>
label_5f5ce4:
    if (ctx->pc == 0x5F5CE4u) {
        ctx->pc = 0x5F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5CE0u;
        // 0x5f5ce4: 0x601fe8  .word       0x00601FE8                   # mfsa        $v1 # 006007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 3, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5CE8u;
        goto label_5f5ce8;
    }
    ctx->pc = 0x5F5CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = 0x5F5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5CE0u;
        // 0x5f5ce4: 0x601fe8  .word       0x00601FE8                   # mfsa        $v1 # 006007C0 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        SET_GPR_U32(ctx, 3, ctx->sa);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5CE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5CE8u;
label_5f5ce8:
    // 0x5f5ce8: 0x658660  .word       0x00658660                   # add         $s0, $v1, $a1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5ce8u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_5f5cec:
    // 0x5f5cec: 0x60b150  .word       0x0060B150                   # mfhi        $s6 # 00600140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5cecu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_5f5cf0:
    // 0x5f5cf0: 0x49f920  .word       0x0049F920                   # add         $ra, $v0, $t1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5cf0u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_5f5cf4:
    // 0x5f5cf4: 0x49f9a0  .word       0x0049F9A0                   # add         $ra, $v0, $t1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5cf4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_5f5cf8:
    // 0x5f5cf8: 0x4aa7c8  .word       0x004AA7C8                   # jr          $v0 # 000AA7C0 <InstrIdType: CPU_SPECIAL>
label_5f5cfc:
    if (ctx->pc == 0x5F5CFCu) {
        ctx->pc = 0x5F5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5CF8u;
        // 0x5f5cfc: 0x4aa848  .word       0x004AA848                   # jr          $v0 # 000AA840 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5D00u;
        goto label_5f5d00;
    }
    ctx->pc = 0x5F5CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x5F5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5CF8u;
        // 0x5f5cfc: 0x4aa848  .word       0x004AA848                   # jr          $v0 # 000AA840 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $2 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5CF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5D00u;
label_5f5d00:
    // 0x5f5d00: 0x4ab9d0  .word       0x004AB9D0                   # mfhi        $s7 # 004A01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d00u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_5f5d04:
    // 0x5f5d04: 0x4aba30  tge         $v0, $t2, 744
    ctx->pc = 0x5f5d04u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_5f5d08:
    // 0x5f5d08: 0x4a9018  mult        $s2, $v0, $t2
    ctx->pc = 0x5f5d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_5f5d0c:
    // 0x5f5d0c: 0x4a9068  .word       0x004A9068                   # mfsa        $s2 # 004A0040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d0cu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_5f5d10:
    // 0x5f5d10: 0x4aaf68  .word       0x004AAF68                   # mfsa        $s5 # 004A0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d10u;
    SET_GPR_U32(ctx, 21, ctx->sa);
label_5f5d14:
    // 0x5f5d14: 0x4aafb8  .word       0x004AAFB8                   # dsll        $s5, $t2, 30 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 10) << 30);
label_5f5d18:
    // 0x5f5d18: 0x49e318  .word       0x0049E318                   # mult        $gp, $v0, $t1 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_5f5d1c:
    // 0x5f5d1c: 0x49ed98  .word       0x0049ED98                   # mult        $sp, $v0, $t1 # 00000580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 29, (int32_t)result); }
label_5f5d20:
    // 0x5f5d20: 0x499610  .word       0x00499610                   # mfhi        $s2 # 00490600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d20u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_5f5d24:
    // 0x5f5d24: 0x49a5e8  .word       0x0049A5E8                   # mfsa        $s4 # 004905C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d24u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_5f5d28:
    // 0x5f5d28: 0x49bf60  .word       0x0049BF60                   # add         $s7, $v0, $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d28u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_5f5d2c:
    // 0x5f5d2c: 0x49c000  .word       0x0049C000                   # sll         $t8, $t1, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d2cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 9), 0));
label_5f5d30:
    // 0x5f5d30: 0x49d4e0  .word       0x0049D4E0                   # add         $k0, $v0, $t1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d30u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_5f5d34:
    // 0x5f5d34: 0x49d540  .word       0x0049D540                   # sll         $k0, $t1, 21 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d34u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 9), 21));
label_5f5d38:
    // 0x5f5d38: 0x4a6718  .word       0x004A6718                   # mult        $t4, $v0, $t2 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_5f5d3c:
    // 0x5f5d3c: 0x4a6768  .word       0x004A6768                   # mfsa        $t4 # 004A0740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5f5d3cu;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_5f5d40:
    // 0x5f5d40: 0x4a0588  .word       0x004A0588                   # jr          $v0 # 000A0580 <InstrIdType: CPU_SPECIAL>
label_5f5d44:
    if (ctx->pc == 0x5F5D44u) {
        ctx->pc = 0x5F5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5D40u;
        // 0x5f5d44: 0x4a8958  .word       0x004A8958                   # mult        $s1, $v0, $t2 # 00000140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5D48u;
        goto label_5f5d48;
    }
    ctx->pc = 0x5F5D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x5F5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5D40u;
        // 0x5f5d44: 0x4a8958  .word       0x004A8958                   # mult        $s1, $v0, $t2 # 00000140 <InstrIdType: R5900_SPECIAL> (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5D40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5D48u;
label_5f5d48:
    // 0x5f5d48: 0x4a8908  .word       0x004A8908                   # jr          $v0 # 000A8900 <InstrIdType: CPU_SPECIAL>
label_5f5d4c:
    if (ctx->pc == 0x5F5D4Cu) {
        ctx->pc = 0x5F5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5D48u;
        // 0x5f5d4c: 0x4a0638  .word       0x004A0638                   # dsll        $zero, $t2, 24 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 10) << 24);
        ctx->in_delay_slot = false;
        ctx->pc = 0x5F5D50u;
        goto label_5f5d50;
    }
    ctx->pc = 0x5F5D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = 0x5F5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F5D48u;
        // 0x5f5d4c: 0x4a0638  .word       0x004A0638                   # dsll        $zero, $t2, 24 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 10) << 24);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5F5D48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x5F5D50u;
label_5f5d50:
    // 0x5f5d50: 0x4aa100  .word       0x004AA100                   # sll         $s4, $t2, 4 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d50u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_5f5d54:
    // 0x5f5d54: 0x4aa140  .word       0x004AA140                   # sll         $s4, $t2, 5 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d54u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_5f5d58:
    // 0x5f5d58: 0x4985e0  .word       0x004985E0                   # add         $s0, $v0, $t1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d58u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_5f5d5c:
    // 0x5f5d5c: 0x498640  .word       0x00498640                   # sll         $s0, $t1, 25 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 25));
label_5f5d60:
    // 0x5f5d60: 0x4ae6b0  tge         $v0, $t2, 922
    ctx->pc = 0x5f5d60u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_5f5d64:
    // 0x5f5d64: 0x4ae6d0  .word       0x004AE6D0                   # mfhi        $gp # 004A06C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d64u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    ctx->pc = 0x5f5d68u;
}
