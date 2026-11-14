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

// Function: sub_003C41B0
// Address: 0x3c41b0 - 0x3c4638
void sub_003C41B0_0x3c41b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C41B0_0x3c41b0");
#endif

    switch (ctx->pc) {
        case 0x3c41b0u: goto label_3c41b0;
        case 0x3c41b4u: goto label_3c41b4;
        case 0x3c41b8u: goto label_3c41b8;
        case 0x3c41bcu: goto label_3c41bc;
        case 0x3c41c0u: goto label_3c41c0;
        case 0x3c41c4u: goto label_3c41c4;
        case 0x3c41c8u: goto label_3c41c8;
        case 0x3c41ccu: goto label_3c41cc;
        case 0x3c41d0u: goto label_3c41d0;
        case 0x3c41d4u: goto label_3c41d4;
        case 0x3c41d8u: goto label_3c41d8;
        case 0x3c41dcu: goto label_3c41dc;
        case 0x3c41e0u: goto label_3c41e0;
        case 0x3c41e4u: goto label_3c41e4;
        case 0x3c41e8u: goto label_3c41e8;
        case 0x3c41ecu: goto label_3c41ec;
        case 0x3c41f0u: goto label_3c41f0;
        case 0x3c41f4u: goto label_3c41f4;
        case 0x3c41f8u: goto label_3c41f8;
        case 0x3c41fcu: goto label_3c41fc;
        case 0x3c4200u: goto label_3c4200;
        case 0x3c4204u: goto label_3c4204;
        case 0x3c4208u: goto label_3c4208;
        case 0x3c420cu: goto label_3c420c;
        case 0x3c4210u: goto label_3c4210;
        case 0x3c4214u: goto label_3c4214;
        case 0x3c4218u: goto label_3c4218;
        case 0x3c421cu: goto label_3c421c;
        case 0x3c4220u: goto label_3c4220;
        case 0x3c4224u: goto label_3c4224;
        case 0x3c4228u: goto label_3c4228;
        case 0x3c422cu: goto label_3c422c;
        case 0x3c4230u: goto label_3c4230;
        case 0x3c4234u: goto label_3c4234;
        case 0x3c4238u: goto label_3c4238;
        case 0x3c423cu: goto label_3c423c;
        case 0x3c4240u: goto label_3c4240;
        case 0x3c4244u: goto label_3c4244;
        case 0x3c4248u: goto label_3c4248;
        case 0x3c424cu: goto label_3c424c;
        case 0x3c4250u: goto label_3c4250;
        case 0x3c4254u: goto label_3c4254;
        case 0x3c4258u: goto label_3c4258;
        case 0x3c425cu: goto label_3c425c;
        case 0x3c4260u: goto label_3c4260;
        case 0x3c4264u: goto label_3c4264;
        case 0x3c4268u: goto label_3c4268;
        case 0x3c426cu: goto label_3c426c;
        case 0x3c4270u: goto label_3c4270;
        case 0x3c4274u: goto label_3c4274;
        case 0x3c4278u: goto label_3c4278;
        case 0x3c427cu: goto label_3c427c;
        case 0x3c4280u: goto label_3c4280;
        case 0x3c4284u: goto label_3c4284;
        case 0x3c4288u: goto label_3c4288;
        case 0x3c428cu: goto label_3c428c;
        case 0x3c4290u: goto label_3c4290;
        case 0x3c4294u: goto label_3c4294;
        case 0x3c4298u: goto label_3c4298;
        case 0x3c429cu: goto label_3c429c;
        case 0x3c42a0u: goto label_3c42a0;
        case 0x3c42a4u: goto label_3c42a4;
        case 0x3c42a8u: goto label_3c42a8;
        case 0x3c42acu: goto label_3c42ac;
        case 0x3c42b0u: goto label_3c42b0;
        case 0x3c42b4u: goto label_3c42b4;
        case 0x3c42b8u: goto label_3c42b8;
        case 0x3c42bcu: goto label_3c42bc;
        case 0x3c42c0u: goto label_3c42c0;
        case 0x3c42c4u: goto label_3c42c4;
        case 0x3c42c8u: goto label_3c42c8;
        case 0x3c42ccu: goto label_3c42cc;
        case 0x3c42d0u: goto label_3c42d0;
        case 0x3c42d4u: goto label_3c42d4;
        case 0x3c42d8u: goto label_3c42d8;
        case 0x3c42dcu: goto label_3c42dc;
        case 0x3c42e0u: goto label_3c42e0;
        case 0x3c42e4u: goto label_3c42e4;
        case 0x3c42e8u: goto label_3c42e8;
        case 0x3c42ecu: goto label_3c42ec;
        case 0x3c42f0u: goto label_3c42f0;
        case 0x3c42f4u: goto label_3c42f4;
        case 0x3c42f8u: goto label_3c42f8;
        case 0x3c42fcu: goto label_3c42fc;
        case 0x3c4300u: goto label_3c4300;
        case 0x3c4304u: goto label_3c4304;
        case 0x3c4308u: goto label_3c4308;
        case 0x3c430cu: goto label_3c430c;
        case 0x3c4310u: goto label_3c4310;
        case 0x3c4314u: goto label_3c4314;
        case 0x3c4318u: goto label_3c4318;
        case 0x3c431cu: goto label_3c431c;
        case 0x3c4320u: goto label_3c4320;
        case 0x3c4324u: goto label_3c4324;
        case 0x3c4328u: goto label_3c4328;
        case 0x3c432cu: goto label_3c432c;
        case 0x3c4330u: goto label_3c4330;
        case 0x3c4334u: goto label_3c4334;
        case 0x3c4338u: goto label_3c4338;
        case 0x3c433cu: goto label_3c433c;
        case 0x3c4340u: goto label_3c4340;
        case 0x3c4344u: goto label_3c4344;
        case 0x3c4348u: goto label_3c4348;
        case 0x3c434cu: goto label_3c434c;
        case 0x3c4350u: goto label_3c4350;
        case 0x3c4354u: goto label_3c4354;
        case 0x3c4358u: goto label_3c4358;
        case 0x3c435cu: goto label_3c435c;
        case 0x3c4360u: goto label_3c4360;
        case 0x3c4364u: goto label_3c4364;
        case 0x3c4368u: goto label_3c4368;
        case 0x3c436cu: goto label_3c436c;
        case 0x3c4370u: goto label_3c4370;
        case 0x3c4374u: goto label_3c4374;
        case 0x3c4378u: goto label_3c4378;
        case 0x3c437cu: goto label_3c437c;
        case 0x3c4380u: goto label_3c4380;
        case 0x3c4384u: goto label_3c4384;
        case 0x3c4388u: goto label_3c4388;
        case 0x3c438cu: goto label_3c438c;
        case 0x3c4390u: goto label_3c4390;
        case 0x3c4394u: goto label_3c4394;
        case 0x3c4398u: goto label_3c4398;
        case 0x3c439cu: goto label_3c439c;
        case 0x3c43a0u: goto label_3c43a0;
        case 0x3c43a4u: goto label_3c43a4;
        case 0x3c43a8u: goto label_3c43a8;
        case 0x3c43acu: goto label_3c43ac;
        case 0x3c43b0u: goto label_3c43b0;
        case 0x3c43b4u: goto label_3c43b4;
        case 0x3c43b8u: goto label_3c43b8;
        case 0x3c43bcu: goto label_3c43bc;
        case 0x3c43c0u: goto label_3c43c0;
        case 0x3c43c4u: goto label_3c43c4;
        case 0x3c43c8u: goto label_3c43c8;
        case 0x3c43ccu: goto label_3c43cc;
        case 0x3c43d0u: goto label_3c43d0;
        case 0x3c43d4u: goto label_3c43d4;
        case 0x3c43d8u: goto label_3c43d8;
        case 0x3c43dcu: goto label_3c43dc;
        case 0x3c43e0u: goto label_3c43e0;
        case 0x3c43e4u: goto label_3c43e4;
        case 0x3c43e8u: goto label_3c43e8;
        case 0x3c43ecu: goto label_3c43ec;
        case 0x3c43f0u: goto label_3c43f0;
        case 0x3c43f4u: goto label_3c43f4;
        case 0x3c43f8u: goto label_3c43f8;
        case 0x3c43fcu: goto label_3c43fc;
        case 0x3c4400u: goto label_3c4400;
        case 0x3c4404u: goto label_3c4404;
        case 0x3c4408u: goto label_3c4408;
        case 0x3c440cu: goto label_3c440c;
        case 0x3c4410u: goto label_3c4410;
        case 0x3c4414u: goto label_3c4414;
        case 0x3c4418u: goto label_3c4418;
        case 0x3c441cu: goto label_3c441c;
        case 0x3c4420u: goto label_3c4420;
        case 0x3c4424u: goto label_3c4424;
        case 0x3c4428u: goto label_3c4428;
        case 0x3c442cu: goto label_3c442c;
        case 0x3c4430u: goto label_3c4430;
        case 0x3c4434u: goto label_3c4434;
        case 0x3c4438u: goto label_3c4438;
        case 0x3c443cu: goto label_3c443c;
        case 0x3c4440u: goto label_3c4440;
        case 0x3c4444u: goto label_3c4444;
        case 0x3c4448u: goto label_3c4448;
        case 0x3c444cu: goto label_3c444c;
        case 0x3c4450u: goto label_3c4450;
        case 0x3c4454u: goto label_3c4454;
        case 0x3c4458u: goto label_3c4458;
        case 0x3c445cu: goto label_3c445c;
        case 0x3c4460u: goto label_3c4460;
        case 0x3c4464u: goto label_3c4464;
        case 0x3c4468u: goto label_3c4468;
        case 0x3c446cu: goto label_3c446c;
        case 0x3c4470u: goto label_3c4470;
        case 0x3c4474u: goto label_3c4474;
        case 0x3c4478u: goto label_3c4478;
        case 0x3c447cu: goto label_3c447c;
        case 0x3c4480u: goto label_3c4480;
        case 0x3c4484u: goto label_3c4484;
        case 0x3c4488u: goto label_3c4488;
        case 0x3c448cu: goto label_3c448c;
        case 0x3c4490u: goto label_3c4490;
        case 0x3c4494u: goto label_3c4494;
        case 0x3c4498u: goto label_3c4498;
        case 0x3c449cu: goto label_3c449c;
        case 0x3c44a0u: goto label_3c44a0;
        case 0x3c44a4u: goto label_3c44a4;
        case 0x3c44a8u: goto label_3c44a8;
        case 0x3c44acu: goto label_3c44ac;
        case 0x3c44b0u: goto label_3c44b0;
        case 0x3c44b4u: goto label_3c44b4;
        case 0x3c44b8u: goto label_3c44b8;
        case 0x3c44bcu: goto label_3c44bc;
        case 0x3c44c0u: goto label_3c44c0;
        case 0x3c44c4u: goto label_3c44c4;
        case 0x3c44c8u: goto label_3c44c8;
        case 0x3c44ccu: goto label_3c44cc;
        case 0x3c44d0u: goto label_3c44d0;
        case 0x3c44d4u: goto label_3c44d4;
        case 0x3c44d8u: goto label_3c44d8;
        case 0x3c44dcu: goto label_3c44dc;
        case 0x3c44e0u: goto label_3c44e0;
        case 0x3c44e4u: goto label_3c44e4;
        case 0x3c44e8u: goto label_3c44e8;
        case 0x3c44ecu: goto label_3c44ec;
        case 0x3c44f0u: goto label_3c44f0;
        case 0x3c44f4u: goto label_3c44f4;
        case 0x3c44f8u: goto label_3c44f8;
        case 0x3c44fcu: goto label_3c44fc;
        case 0x3c4500u: goto label_3c4500;
        case 0x3c4504u: goto label_3c4504;
        case 0x3c4508u: goto label_3c4508;
        case 0x3c450cu: goto label_3c450c;
        case 0x3c4510u: goto label_3c4510;
        case 0x3c4514u: goto label_3c4514;
        case 0x3c4518u: goto label_3c4518;
        case 0x3c451cu: goto label_3c451c;
        case 0x3c4520u: goto label_3c4520;
        case 0x3c4524u: goto label_3c4524;
        case 0x3c4528u: goto label_3c4528;
        case 0x3c452cu: goto label_3c452c;
        case 0x3c4530u: goto label_3c4530;
        case 0x3c4534u: goto label_3c4534;
        case 0x3c4538u: goto label_3c4538;
        case 0x3c453cu: goto label_3c453c;
        case 0x3c4540u: goto label_3c4540;
        case 0x3c4544u: goto label_3c4544;
        case 0x3c4548u: goto label_3c4548;
        case 0x3c454cu: goto label_3c454c;
        case 0x3c4550u: goto label_3c4550;
        case 0x3c4554u: goto label_3c4554;
        case 0x3c4558u: goto label_3c4558;
        case 0x3c455cu: goto label_3c455c;
        case 0x3c4560u: goto label_3c4560;
        case 0x3c4564u: goto label_3c4564;
        case 0x3c4568u: goto label_3c4568;
        case 0x3c456cu: goto label_3c456c;
        case 0x3c4570u: goto label_3c4570;
        case 0x3c4574u: goto label_3c4574;
        case 0x3c4578u: goto label_3c4578;
        case 0x3c457cu: goto label_3c457c;
        case 0x3c4580u: goto label_3c4580;
        case 0x3c4584u: goto label_3c4584;
        case 0x3c4588u: goto label_3c4588;
        case 0x3c458cu: goto label_3c458c;
        case 0x3c4590u: goto label_3c4590;
        case 0x3c4594u: goto label_3c4594;
        case 0x3c4598u: goto label_3c4598;
        case 0x3c459cu: goto label_3c459c;
        case 0x3c45a0u: goto label_3c45a0;
        case 0x3c45a4u: goto label_3c45a4;
        case 0x3c45a8u: goto label_3c45a8;
        case 0x3c45acu: goto label_3c45ac;
        case 0x3c45b0u: goto label_3c45b0;
        case 0x3c45b4u: goto label_3c45b4;
        case 0x3c45b8u: goto label_3c45b8;
        case 0x3c45bcu: goto label_3c45bc;
        case 0x3c45c0u: goto label_3c45c0;
        case 0x3c45c4u: goto label_3c45c4;
        case 0x3c45c8u: goto label_3c45c8;
        case 0x3c45ccu: goto label_3c45cc;
        case 0x3c45d0u: goto label_3c45d0;
        case 0x3c45d4u: goto label_3c45d4;
        case 0x3c45d8u: goto label_3c45d8;
        case 0x3c45dcu: goto label_3c45dc;
        case 0x3c45e0u: goto label_3c45e0;
        case 0x3c45e4u: goto label_3c45e4;
        case 0x3c45e8u: goto label_3c45e8;
        case 0x3c45ecu: goto label_3c45ec;
        case 0x3c45f0u: goto label_3c45f0;
        case 0x3c45f4u: goto label_3c45f4;
        case 0x3c45f8u: goto label_3c45f8;
        case 0x3c45fcu: goto label_3c45fc;
        case 0x3c4600u: goto label_3c4600;
        case 0x3c4604u: goto label_3c4604;
        case 0x3c4608u: goto label_3c4608;
        case 0x3c460cu: goto label_3c460c;
        case 0x3c4610u: goto label_3c4610;
        case 0x3c4614u: goto label_3c4614;
        case 0x3c4618u: goto label_3c4618;
        case 0x3c461cu: goto label_3c461c;
        case 0x3c4620u: goto label_3c4620;
        case 0x3c4624u: goto label_3c4624;
        case 0x3c4628u: goto label_3c4628;
        case 0x3c462cu: goto label_3c462c;
        case 0x3c4630u: goto label_3c4630;
        case 0x3c4634u: goto label_3c4634;
        default: break;
    }

    ctx->pc = 0x3c41b0u;

label_3c41b0:
    // 0x3c41b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3c41b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3c41b4:
    // 0x3c41b4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x3c41b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_3c41b8:
    // 0x3c41b8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x3c41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_3c41bc:
    // 0x3c41bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c41bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c41c0:
    // 0x3c41c0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x3c41c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_3c41c4:
    // 0x3c41c4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3c41c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3c41c8:
    // 0x3c41c8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x3c41c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_3c41cc:
    // 0x3c41cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3c41ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c41d0:
    // 0x3c41d0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x3c41d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_3c41d4:
    // 0x3c41d4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x3c41d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_3c41d8:
    // 0x3c41d8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x3c41d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_3c41dc:
    // 0x3c41dc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3c41dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_3c41e0:
    // 0x3c41e0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3c41e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3c41e4:
    // 0x3c41e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3c41e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3c41e8:
    // 0x3c41e8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x3c41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3c41ec:
    // 0x3c41ec: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x3c41ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c41f0:
    // 0x3c41f0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x3c41f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3c41f4:
    // 0x3c41f4: 0x24560028  addiu       $s6, $v0, 0x28
    ctx->pc = 0x3c41f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_3c41f8:
    // 0x3c41f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3c41fc:
    if (ctx->pc == 0x3C41FCu) {
        ctx->pc = 0x3C41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41F8u;
        // 0x3c41fc: 0xfe240020  sd          $a0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4200u;
        goto label_3c4200;
    }
    ctx->pc = 0x3C41F8u;
    {
        const bool branch_taken_0x3c41f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C41F8u;
        // 0x3c41fc: 0xfe240020  sd          $a0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c41f8) {
            ctx->pc = 0x3C4208u;
            goto label_3c4208;
        }
    }
    ctx->pc = 0x3C4200u;
label_3c4200:
    // 0x3c4200: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c4200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c4204:
    // 0x3c4204: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x3c4204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_3c4208:
    // 0x3c4208: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x3c4208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_3c420c:
    // 0x3c420c: 0x40f809  jalr        $v0
label_3c4210:
    if (ctx->pc == 0x3C4210u) {
        ctx->pc = 0x3C4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C420Cu;
        // 0x3c4210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4214u;
        goto label_3c4214;
    }
    ctx->pc = 0x3C420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4214u);
        ctx->pc = 0x3C4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C420Cu;
        // 0x3c4210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C420Cu, 0x3C4214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4214u;
label_3c4214:
    // 0x3c4214: 0x144000fc  bnez        $v0, . + 4 + (0xFC << 2)
label_3c4218:
    if (ctx->pc == 0x3C4218u) {
        ctx->pc = 0x3C4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4214u;
        // 0x3c4218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C421Cu;
        goto label_3c421c;
    }
    ctx->pc = 0x3C4214u;
    {
        const bool branch_taken_0x3c4214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4214u;
        // 0x3c4218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4214) {
            ctx->pc = 0x3C4608u;
            goto label_3c4608;
        }
    }
    ctx->pc = 0x3C421Cu;
label_3c421c:
    // 0x3c421c: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3c421cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c4220:
    // 0x3c4220: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x3c4220u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c4224:
    // 0x3c4224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c4224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4228:
    // 0x3c4228: 0x242102d  daddu       $v0, $s2, $v0
    ctx->pc = 0x3c4228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_3c422c:
    // 0x3c422c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3c422cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c4230:
    // 0x3c4230: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3c4230u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c4234:
    // 0x3c4234: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_3c4238:
    if (ctx->pc == 0x3C4238u) {
        ctx->pc = 0x3C4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4234u;
        // 0x3c4238: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C423Cu;
        goto label_3c423c;
    }
    ctx->pc = 0x3C4234u;
    {
        const bool branch_taken_0x3c4234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4234u;
        // 0x3c4238: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4234) {
            ctx->pc = 0x3C427Cu;
            goto label_3c427c;
        }
    }
    ctx->pc = 0x3C423Cu;
label_3c423c:
    // 0x3c423c: 0x64c407ff  daddiu      $a0, $a2, 0x7FF
    ctx->pc = 0x3c423cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)2047);
label_3c4240:
    // 0x3c4240: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c4240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3c4244:
    // 0x3c4244: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x3c4244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_3c4248:
    // 0x3c4248: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3c4248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3c424c:
    // 0x3c424c: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x3c424cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_3c4250:
    // 0x3c4250: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3c4250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3c4254:
    // 0x3c4254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3c4258:
    if (ctx->pc == 0x3C4258u) {
        ctx->pc = 0x3C4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4254u;
        // 0x3c4258: 0xc5102f  dsubu       $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C425Cu;
        goto label_3c425c;
    }
    ctx->pc = 0x3C4254u;
    {
        const bool branch_taken_0x3c4254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4254u;
        // 0x3c4258: 0xc5102f  dsubu       $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4254) {
            ctx->pc = 0x3C4260u;
            goto label_3c4260;
        }
    }
    ctx->pc = 0x3C425Cu;
label_3c425c:
    // 0x3c425c: 0x85102f  dsubu       $v0, $a0, $a1
    ctx->pc = 0x3c425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_3c4260:
    // 0x3c4260: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3c4260u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_3c4264:
    // 0x3c4264: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3c4264u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_3c4268:
    // 0x3c4268: 0xc5102f  dsubu       $v0, $a2, $a1
    ctx->pc = 0x3c4268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
label_3c426c:
    // 0x3c426c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c4270:
    // 0x3c4270: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c4270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3c4274:
    // 0x3c4274: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c4278:
    if (ctx->pc == 0x3C4278u) {
        ctx->pc = 0x3C4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4274u;
        // 0x3c4278: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C427Cu;
        goto label_3c427c;
    }
    ctx->pc = 0x3C4274u;
    {
        const bool branch_taken_0x3c4274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4274u;
        // 0x3c4278: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4274) {
            ctx->pc = 0x3C4280u;
            goto label_3c4280;
        }
    }
    ctx->pc = 0x3C427Cu;
label_3c427c:
    // 0x3c427c: 0xafb20070  sw          $s2, 0x70($sp)
    ctx->pc = 0x3c427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 18));
label_3c4280:
    // 0x3c4280: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x3c4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_3c4284:
    // 0x3c4284: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_3c4288:
    if (ctx->pc == 0x3C4288u) {
        ctx->pc = 0x3C428Cu;
        goto label_3c428c;
    }
    ctx->pc = 0x3C4284u;
    {
        const bool branch_taken_0x3c4284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c4284) {
            ctx->pc = 0x3C4374u;
            goto label_3c4374;
        }
    }
    ctx->pc = 0x3C428Cu;
label_3c428c:
    // 0x3c428c: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_3c4290:
    if (ctx->pc == 0x3C4290u) {
        ctx->pc = 0x3C4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C428Cu;
        // 0x3c4290: 0x324207ff  andi        $v0, $s2, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4294u;
        goto label_3c4294;
    }
    ctx->pc = 0x3C428Cu;
    {
        const bool branch_taken_0x3c428c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C428Cu;
        // 0x3c4290: 0x324207ff  andi        $v0, $s2, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c428c) {
            ctx->pc = 0x3C4364u;
            goto label_3c4364;
        }
    }
    ctx->pc = 0x3C4294u;
label_3c4294:
    // 0x3c4294: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_3c4298:
    if (ctx->pc == 0x3C4298u) {
        ctx->pc = 0x3C4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4294u;
        // 0x3c4298: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C429Cu;
        goto label_3c429c;
    }
    ctx->pc = 0x3C4294u;
    {
        const bool branch_taken_0x3c4294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4294u;
        // 0x3c4298: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4294) {
            ctx->pc = 0x3C4368u;
            goto label_3c4368;
        }
    }
    ctx->pc = 0x3C429Cu;
label_3c429c:
    // 0x3c429c: 0x3282000f  andi        $v0, $s4, 0xF
    ctx->pc = 0x3c429cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_3c42a0:
    // 0x3c42a0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_3c42a4:
    if (ctx->pc == 0x3C42A4u) {
        ctx->pc = 0x3C42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42A0u;
        // 0x3c42a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C42A8u;
        goto label_3c42a8;
    }
    ctx->pc = 0x3C42A0u;
    {
        const bool branch_taken_0x3c42a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42A0u;
        // 0x3c42a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c42a0) {
            ctx->pc = 0x3C436Cu;
            goto label_3c436c;
        }
    }
    ctx->pc = 0x3C42A8u;
label_3c42a8:
    // 0x3c42a8: 0x2922821  addu        $a1, $s4, $s2
    ctx->pc = 0x3c42a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_3c42ac:
    // 0x3c42ac: 0xc0bf916  jal         func_2FE458
label_3c42b0:
    if (ctx->pc == 0x3C42B0u) {
        ctx->pc = 0x3C42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42ACu;
        // 0x3c42b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C42B4u;
        goto label_3c42b4;
    }
    ctx->pc = 0x3C42ACu;
    SET_GPR_U32(ctx, 31, 0x3C42B4u);
    ctx->pc = 0x3C42B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42ACu;
    // 0x3c42b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3C42ACu, 0x3C42B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42B4u;
label_3c42b4:
    // 0x3c42b4: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x3c42b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
label_3c42b8:
    // 0x3c42b8: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x3c42b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c42bc:
    // 0x3c42bc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3c42bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_3c42c0:
    // 0x3c42c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c42c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_3c42c4:
    // 0x3c42c4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3c42c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3c42c8:
    // 0x3c42c8: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x3c42c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_3c42cc:
    // 0x3c42cc: 0x8e280064  lw          $t0, 0x64($s1)
    ctx->pc = 0x3c42ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3c42d0:
    // 0x3c42d0: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x3c42d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
label_3c42d4:
    // 0x3c42d4: 0x24a6e0c0  addiu       $a2, $a1, -0x1F40
    ctx->pc = 0x3c42d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959296));
label_3c42d8:
    // 0x3c42d8: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c42d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c42dc:
    // 0x3c42dc: 0x123ac2  srl         $a3, $s2, 11
    ctx->pc = 0x3c42dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 11));
label_3c42e0:
    // 0x3c42e0: 0xacd40008  sw          $s4, 0x8($a2)
    ctx->pc = 0x3c42e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 20));
label_3c42e4:
    // 0x3c42e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3c42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c42e8:
    // 0x3c42e8: 0xaca8e0c0  sw          $t0, -0x1F40($a1)
    ctx->pc = 0x3c42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294959296), GPR_U32(ctx, 8));
label_3c42ec:
    // 0x3c42ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3c42ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c42f0:
    // 0x3c42f0: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x3c42f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_3c42f4:
    // 0x3c42f4: 0xc0bf6e8  jal         func_2FDBA0
label_3c42f8:
    if (ctx->pc == 0x3C42F8u) {
        ctx->pc = 0x3C42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C42F4u;
        // 0x3c42f8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C42FCu;
        goto label_3c42fc;
    }
    ctx->pc = 0x3C42F4u;
    SET_GPR_U32(ctx, 31, 0x3C42FCu);
    ctx->pc = 0x3C42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C42F4u;
    // 0x3c42f8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C42F4u, 0x3C42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C42FCu;
label_3c42fc:
    // 0x3c42fc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3c42fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3c4300:
    // 0x3c4300: 0xc0bf6f4  jal         func_2FDBD0
label_3c4304:
    if (ctx->pc == 0x3C4304u) {
        ctx->pc = 0x3C4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4300u;
        // 0x3c4304: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4308u;
        goto label_3c4308;
    }
    ctx->pc = 0x3C4300u;
    SET_GPR_U32(ctx, 31, 0x3C4308u);
    ctx->pc = 0x3C4304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4300u;
    // 0x3c4304: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBD0u, 0x3C4300u, 0x3C4308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4308u;
label_3c4308:
    // 0x3c4308: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c430c:
    if (ctx->pc == 0x3C430Cu) {
        ctx->pc = 0x3C430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4308u;
        // 0x3c430c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4310u;
        goto label_3c4310;
    }
    ctx->pc = 0x3C4308u;
    {
        const bool branch_taken_0x3c4308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4308u;
        // 0x3c430c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4308) {
            ctx->pc = 0x3C431Cu;
            goto label_3c431c;
        }
    }
    ctx->pc = 0x3C4310u;
label_3c4310:
    // 0x3c4310: 0xc0bf6e8  jal         func_2FDBA0
label_3c4314:
    if (ctx->pc == 0x3C4314u) {
        ctx->pc = 0x3C4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4310u;
        // 0x3c4314: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4318u;
        goto label_3c4318;
    }
    ctx->pc = 0x3C4310u;
    SET_GPR_U32(ctx, 31, 0x3C4318u);
    ctx->pc = 0x3C4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4310u;
    // 0x3c4314: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4310u, 0x3C4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4318u;
label_3c4318:
    // 0x3c4318: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3c4318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3c431c:
    // 0x3c431c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c431cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c4320:
    // 0x3c4320: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c4320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3c4324:
    // 0x3c4324: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_3c4328:
    if (ctx->pc == 0x3C4328u) {
        ctx->pc = 0x3C4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4324u;
        // 0x3c4328: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C432Cu;
        goto label_3c432c;
    }
    ctx->pc = 0x3C4324u;
    {
        const bool branch_taken_0x3c4324 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C4328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4324u;
        // 0x3c4328: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4324) {
            ctx->pc = 0x3C4310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4310;
        }
    }
    ctx->pc = 0x3C432Cu;
label_3c432c:
    // 0x3c432c: 0x26e4e088  addiu       $a0, $s7, -0x1F78
    ctx->pc = 0x3c432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959240));
label_3c4330:
    // 0x3c4330: 0x27c7e0c0  addiu       $a3, $fp, -0x1F40
    ctx->pc = 0x3c4330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959296));
label_3c4334:
    // 0x3c4334: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c4334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c4338:
    // 0x3c4338: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c4338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c433c:
    // 0x3c433c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c433cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4340:
    // 0x3c4340: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3c4340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c4344:
    // 0x3c4344: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4344u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c4348:
    // 0x3c4348: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4348u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c434c:
    // 0x3c434c: 0xc0c06aa  jal         func_301AA8
label_3c4350:
    if (ctx->pc == 0x3C4350u) {
        ctx->pc = 0x3C4350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C434Cu;
        // 0x3c4350: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4354u;
        goto label_3c4354;
    }
    ctx->pc = 0x3C434Cu;
    SET_GPR_U32(ctx, 31, 0x3C4354u);
    ctx->pc = 0x3C4350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C434Cu;
    // 0x3c4350: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C434Cu, 0x3C4354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4354u;
label_3c4354:
    // 0x3c4354: 0xc0bf6e0  jal         func_2FDB80
label_3c4358:
    if (ctx->pc == 0x3C4358u) {
        ctx->pc = 0x3C4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4354u;
        // 0x3c4358: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C435Cu;
        goto label_3c435c;
    }
    ctx->pc = 0x3C4354u;
    SET_GPR_U32(ctx, 31, 0x3C435Cu);
    ctx->pc = 0x3C4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4354u;
    // 0x3c4358: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C4354u, 0x3C435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C435Cu;
label_3c435c:
    // 0x3c435c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_3c4360:
    if (ctx->pc == 0x3C4360u) {
        ctx->pc = 0x3C4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C435Cu;
        // 0x3c4360: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4364u;
        goto label_3c4364;
    }
    ctx->pc = 0x3C435Cu;
    {
        const bool branch_taken_0x3c435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C435Cu;
        // 0x3c4360: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c435c) {
            ctx->pc = 0x3C4608u;
            goto label_3c4608;
        }
    }
    ctx->pc = 0x3C4364u;
label_3c4364:
    // 0x3c4364: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c4364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c4368:
    // 0x3c4368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c4368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c436c:
    // 0x3c436c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_3c4370:
    if (ctx->pc == 0x3C4370u) {
        ctx->pc = 0x3C4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C436Cu;
        // 0x3c4370: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4374u;
        goto label_3c4374;
    }
    ctx->pc = 0x3C436Cu;
    {
        const bool branch_taken_0x3c436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C436Cu;
        // 0x3c4370: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c436c) {
            ctx->pc = 0x3C4608u;
            goto label_3c4608;
        }
    }
    ctx->pc = 0x3C4374u;
label_3c4374:
    // 0x3c4374: 0x124000a3  beqz        $s2, . + 4 + (0xA3 << 2)
label_3c4378:
    if (ctx->pc == 0x3C4378u) {
        ctx->pc = 0x3C4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4374u;
        // 0x3c4378: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C437Cu;
        goto label_3c437c;
    }
    ctx->pc = 0x3C4374u;
    {
        const bool branch_taken_0x3c4374 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4374u;
        // 0x3c4378: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4374) {
            ctx->pc = 0x3C4604u;
            goto label_3c4604;
        }
    }
    ctx->pc = 0x3C437Cu;
label_3c437c:
    // 0x3c437c: 0x2455e0c0  addiu       $s5, $v0, -0x1F40
    ctx->pc = 0x3c437cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959296));
label_3c4380:
    // 0x3c4380: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x3c4380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_3c4384:
    // 0x3c4384: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x3c4384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3c4388:
    // 0x3c4388: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3c4388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c438c:
    // 0x3c438c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_3c4390:
    if (ctx->pc == 0x3C4390u) {
        ctx->pc = 0x3C4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C438Cu;
        // 0x3c4390: 0x3c043000  lui         $a0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4394u;
        goto label_3c4394;
    }
    ctx->pc = 0x3C438Cu;
    {
        const bool branch_taken_0x3c438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C438Cu;
        // 0x3c4390: 0x3c043000  lui         $a0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c438c) {
            ctx->pc = 0x3C4430u;
            goto label_3c4430;
        }
    }
    ctx->pc = 0x3C4394u;
label_3c4394:
    // 0x3c4394: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x3c4394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_3c4398:
    // 0x3c4398: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_3c439c:
    if (ctx->pc == 0x3C439Cu) {
        ctx->pc = 0x3C439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4398u;
        // 0x3c439c: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C43A0u;
        goto label_3c43a0;
    }
    ctx->pc = 0x3C4398u;
    {
        const bool branch_taken_0x3c4398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C439Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4398u;
        // 0x3c439c: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4398) {
            ctx->pc = 0x3C43CCu;
            goto label_3c43cc;
        }
    }
    ctx->pc = 0x3C43A0u;
label_3c43a0:
    // 0x3c43a0: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3c43a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c43a4:
    // 0x3c43a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3c43a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c43a8:
    // 0x3c43a8: 0x644307ff  daddiu      $v1, $v0, 0x7FF
    ctx->pc = 0x3c43a8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2047);
label_3c43ac:
    // 0x3c43ac: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x3c43acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c43b0:
    // 0x3c43b0: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x3c43b0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_3c43b4:
    // 0x3c43b4: 0x31afb  dsra        $v1, $v1, 11
    ctx->pc = 0x3c43b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 11);
label_3c43b8:
    // 0x3c43b8: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x3c43b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
label_3c43bc:
    // 0x3c43bc: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3c43bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_3c43c0:
    // 0x3c43c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c43c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3c43c4:
    // 0x3c43c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c43c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3c43c8:
    // 0x3c43c8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x3c43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_3c43cc:
    // 0x3c43cc: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x3c43ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_3c43d0:
    // 0x3c43d0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3c43d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c43d4:
    // 0x3c43d4: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x3c43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3c43d8:
    // 0x3c43d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c43d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c43dc:
    // 0x3c43dc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3c43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3c43e0:
    // 0x3c43e0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3c43e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3c43e4:
    // 0x3c43e4: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x3c43e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3c43e8:
    // 0x3c43e8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3c43e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_3c43ec:
    // 0x3c43ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c43ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c43f0:
    // 0x3c43f0: 0xc0bb778  jal         func_2EDDE0
label_3c43f4:
    if (ctx->pc == 0x3C43F4u) {
        ctx->pc = 0x3C43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C43F0u;
        // 0x3c43f4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C43F8u;
        goto label_3c43f8;
    }
    ctx->pc = 0x3C43F0u;
    SET_GPR_U32(ctx, 31, 0x3C43F8u);
    ctx->pc = 0x3C43F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C43F0u;
    // 0x3c43f4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3C43F0u, 0x3C43F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C43F8u;
label_3c43f8:
    // 0x3c43f8: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x3c43f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c43fc:
    // 0x3c43fc: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x3c43fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3c4400:
    // 0x3c4400: 0x204102d  daddu       $v0, $s0, $a0
    ctx->pc = 0x3c4400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
label_3c4404:
    // 0x3c4404: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3c4404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3c4408:
    // 0x3c4408: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3c440c:
    if (ctx->pc == 0x3C440Cu) {
        ctx->pc = 0x3C440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4408u;
        // 0x3c440c: 0x64102f  dsubu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4410u;
        goto label_3c4410;
    }
    ctx->pc = 0x3C4408u;
    {
        const bool branch_taken_0x3c4408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4408u;
        // 0x3c440c: 0x64102f  dsubu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4408) {
            ctx->pc = 0x3C4418u;
            goto label_3c4418;
        }
    }
    ctx->pc = 0x3C4410u;
label_3c4410:
    // 0x3c4410: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x3c4410u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_3c4414:
    // 0x3c4414: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3c4414u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_3c4418:
    // 0x3c4418: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x3c4418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_3c441c:
    // 0x3c441c: 0x204102d  daddu       $v0, $s0, $a0
    ctx->pc = 0x3c441cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
label_3c4420:
    // 0x3c4420: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3c4420u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_3c4424:
    // 0x3c4424: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x3c4424u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3c4428:
    // 0x3c4428: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3c4428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3c442c:
    // 0x3c442c: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x3c442cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_3c4430:
    // 0x3c4430: 0x2e420800  sltiu       $v0, $s2, 0x800
    ctx->pc = 0x3c4430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_3c4434:
    // 0x3c4434: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_3c4438:
    if (ctx->pc == 0x3C4438u) {
        ctx->pc = 0x3C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4434u;
        // 0x3c4438: 0x3282000f  andi        $v0, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C443Cu;
        goto label_3c443c;
    }
    ctx->pc = 0x3C4434u;
    {
        const bool branch_taken_0x3c4434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4434u;
        // 0x3c4438: 0x3282000f  andi        $v0, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4434) {
            ctx->pc = 0x3C4518u;
            goto label_3c4518;
        }
    }
    ctx->pc = 0x3C443Cu;
label_3c443c:
    // 0x3c443c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_3c4440:
    if (ctx->pc == 0x3C4440u) {
        ctx->pc = 0x3C4444u;
        goto label_3c4444;
    }
    ctx->pc = 0x3C443Cu;
    {
        const bool branch_taken_0x3c443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c443c) {
            ctx->pc = 0x3C4518u;
            goto label_3c4518;
        }
    }
    ctx->pc = 0x3C4444u;
label_3c4444:
    // 0x3c4444: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3c4444u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c4448:
    // 0x3c4448: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x3c4448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_3c444c:
    // 0x3c444c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_3c4450:
    if (ctx->pc == 0x3C4450u) {
        ctx->pc = 0x3C4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C444Cu;
        // 0x3c4450: 0x129ac2  srl         $s3, $s2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4454u;
        goto label_3c4454;
    }
    ctx->pc = 0x3C444Cu;
    {
        const bool branch_taken_0x3c444c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C444Cu;
        // 0x3c4450: 0x129ac2  srl         $s3, $s2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c444c) {
            ctx->pc = 0x3C4518u;
            goto label_3c4518;
        }
    }
    ctx->pc = 0x3C4454u;
label_3c4454:
    // 0x3c4454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c4454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c4458:
    // 0x3c4458: 0x1382c0  sll         $s0, $s3, 11
    ctx->pc = 0x3c4458u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_3c445c:
    // 0x3c445c: 0x3c1e0062  lui         $fp, 0x62
    ctx->pc = 0x3c445cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
label_3c4460:
    // 0x3c4460: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x3c4460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3c4464:
    // 0x3c4464: 0xc0bf916  jal         func_2FE458
label_3c4468:
    if (ctx->pc == 0x3C4468u) {
        ctx->pc = 0x3C4468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4464u;
        // 0x3c4468: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C446Cu;
        goto label_3c446c;
    }
    ctx->pc = 0x3C4464u;
    SET_GPR_U32(ctx, 31, 0x3C446Cu);
    ctx->pc = 0x3C4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4464u;
    // 0x3c4468: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x3C4464u, 0x3C446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C446Cu;
label_3c446c:
    // 0x3c446c: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3c446cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c4470:
    // 0x3c4470: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3c4470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c4474:
    // 0x3c4474: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c4474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c4478:
    // 0x3c4478: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x3c4478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_3c447c:
    // 0x3c447c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x3c447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3c4480:
    // 0x3c4480: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3c4480u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_3c4484:
    // 0x3c4484: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x3c4484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c4488:
    // 0x3c4488: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x3c4488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
label_3c448c:
    // 0x3c448c: 0xac43e0c0  sw          $v1, -0x1F40($v0)
    ctx->pc = 0x3c448cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959296), GPR_U32(ctx, 3));
label_3c4490:
    // 0x3c4490: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x3c4490u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
label_3c4494:
    // 0x3c4494: 0xc0bf6e8  jal         func_2FDBA0
label_3c4498:
    if (ctx->pc == 0x3C4498u) {
        ctx->pc = 0x3C4498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4494u;
        // 0x3c4498: 0xaeb40008  sw          $s4, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C449Cu;
        goto label_3c449c;
    }
    ctx->pc = 0x3C4494u;
    SET_GPR_U32(ctx, 31, 0x3C449Cu);
    ctx->pc = 0x3C4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4494u;
    // 0x3c4498: 0xaeb40008  sw          $s4, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4494u, 0x3C449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C449Cu;
label_3c449c:
    // 0x3c449c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3c449cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3c44a0:
    // 0x3c44a0: 0xc0bf6f4  jal         func_2FDBD0
label_3c44a4:
    if (ctx->pc == 0x3C44A4u) {
        ctx->pc = 0x3C44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44A0u;
        // 0x3c44a4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44A8u;
        goto label_3c44a8;
    }
    ctx->pc = 0x3C44A0u;
    SET_GPR_U32(ctx, 31, 0x3C44A8u);
    ctx->pc = 0x3C44A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C44A0u;
    // 0x3c44a4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBD0u, 0x3C44A0u, 0x3C44A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C44A8u;
label_3c44a8:
    // 0x3c44a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c44ac:
    if (ctx->pc == 0x3C44ACu) {
        ctx->pc = 0x3C44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44A8u;
        // 0x3c44ac: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44B0u;
        goto label_3c44b0;
    }
    ctx->pc = 0x3C44A8u;
    {
        const bool branch_taken_0x3c44a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44A8u;
        // 0x3c44ac: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c44a8) {
            ctx->pc = 0x3C44BCu;
            goto label_3c44bc;
        }
    }
    ctx->pc = 0x3C44B0u;
label_3c44b0:
    // 0x3c44b0: 0xc0bf6e8  jal         func_2FDBA0
label_3c44b4:
    if (ctx->pc == 0x3C44B4u) {
        ctx->pc = 0x3C44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44B0u;
        // 0x3c44b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44B8u;
        goto label_3c44b8;
    }
    ctx->pc = 0x3C44B0u;
    SET_GPR_U32(ctx, 31, 0x3C44B8u);
    ctx->pc = 0x3C44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C44B0u;
    // 0x3c44b4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C44B0u, 0x3C44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C44B8u;
label_3c44b8:
    // 0x3c44b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3c44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3c44bc:
    // 0x3c44bc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c44bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c44c0:
    // 0x3c44c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c44c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3c44c4:
    // 0x3c44c4: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_3c44c8:
    if (ctx->pc == 0x3C44C8u) {
        ctx->pc = 0x3C44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44C4u;
        // 0x3c44c8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44CCu;
        goto label_3c44cc;
    }
    ctx->pc = 0x3C44C4u;
    {
        const bool branch_taken_0x3c44c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44C4u;
        // 0x3c44c8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c44c4) {
            ctx->pc = 0x3C44B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c44b0;
        }
    }
    ctx->pc = 0x3C44CCu;
label_3c44cc:
    // 0x3c44cc: 0x27c7e0c0  addiu       $a3, $fp, -0x1F40
    ctx->pc = 0x3c44ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959296));
label_3c44d0:
    // 0x3c44d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c44d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c44d4:
    // 0x3c44d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c44d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c44d8:
    // 0x3c44d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c44d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c44dc:
    // 0x3c44dc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3c44dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c44e0:
    // 0x3c44e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c44e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c44e4:
    // 0x3c44e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c44e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c44e8:
    // 0x3c44e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c44e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c44ec:
    // 0x3c44ec: 0xc0c06aa  jal         func_301AA8
label_3c44f0:
    if (ctx->pc == 0x3C44F0u) {
        ctx->pc = 0x3C44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44ECu;
        // 0x3c44f0: 0x26e4e088  addiu       $a0, $s7, -0x1F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44F4u;
        goto label_3c44f4;
    }
    ctx->pc = 0x3C44ECu;
    SET_GPR_U32(ctx, 31, 0x3C44F4u);
    ctx->pc = 0x3C44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C44ECu;
    // 0x3c44f0: 0x26e4e088  addiu       $a0, $s7, -0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C44ECu, 0x3C44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C44F4u;
label_3c44f4:
    // 0x3c44f4: 0xc0bf6e0  jal         func_2FDB80
label_3c44f8:
    if (ctx->pc == 0x3C44F8u) {
        ctx->pc = 0x3C44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C44F4u;
        // 0x3c44f8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C44FCu;
        goto label_3c44fc;
    }
    ctx->pc = 0x3C44F4u;
    SET_GPR_U32(ctx, 31, 0x3C44FCu);
    ctx->pc = 0x3C44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C44F4u;
    // 0x3c44f8: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C44F4u, 0x3C44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C44FCu;
label_3c44fc:
    // 0x3c44fc: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x3c44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3c4500:
    // 0x3c4500: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4504:
    // 0x3c4504: 0x40f809  jalr        $v0
label_3c4508:
    if (ctx->pc == 0x3C4508u) {
        ctx->pc = 0x3C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4504u;
        // 0x3c4508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C450Cu;
        goto label_3c450c;
    }
    ctx->pc = 0x3C4504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C450Cu);
        ctx->pc = 0x3C4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4504u;
        // 0x3c4508: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4504u, 0x3C450Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C450Cu;
label_3c450c:
    // 0x3c450c: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x3c450cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_3c4510:
    // 0x3c4510: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x3c4510u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_3c4514:
    // 0x3c4514: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x3c4514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_3c4518:
    // 0x3c4518: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
label_3c451c:
    if (ctx->pc == 0x3C451Cu) {
        ctx->pc = 0x3C451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4518u;
        // 0x3c451c: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4520u;
        goto label_3c4520;
    }
    ctx->pc = 0x3C4518u;
    {
        const bool branch_taken_0x3c4518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4518u;
        // 0x3c451c: 0x3c1e0062  lui         $fp, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4518) {
            ctx->pc = 0x3C4604u;
            goto label_3c4604;
        }
    }
    ctx->pc = 0x3C4520u;
label_3c4520:
    // 0x3c4520: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x3c4520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3c4524:
    // 0x3c4524: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x3c4524u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3c4528:
    // 0x3c4528: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3c4528u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c452c:
    // 0x3c452c: 0xac62e0c0  sw          $v0, -0x1F40($v1)
    ctx->pc = 0x3c452cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959296), GPR_U32(ctx, 2));
label_3c4530:
    // 0x3c4530: 0x3c170062  lui         $s7, 0x62
    ctx->pc = 0x3c4530u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
label_3c4534:
    // 0x3c4534: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x3c4534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
label_3c4538:
    // 0x3c4538: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x3c4538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3c453c:
    // 0x3c453c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3c453cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c4540:
    // 0x3c4540: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x3c4540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_3c4544:
    // 0x3c4544: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x3c4544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3c4548:
    // 0x3c4548: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x3c4548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_3c454c:
    // 0x3c454c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x3c454cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_3c4550:
    // 0x3c4550: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c4550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
label_3c4554:
    // 0x3c4554: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x3c4554u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_3c4558:
    // 0x3c4558: 0xaea60008  sw          $a2, 0x8($s5)
    ctx->pc = 0x3c4558u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 6));
label_3c455c:
    // 0x3c455c: 0xc0bf6e8  jal         func_2FDBA0
label_3c4560:
    if (ctx->pc == 0x3C4560u) {
        ctx->pc = 0x3C4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C455Cu;
        // 0x3c4560: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4564u;
        goto label_3c4564;
    }
    ctx->pc = 0x3C455Cu;
    SET_GPR_U32(ctx, 31, 0x3C4564u);
    ctx->pc = 0x3C4560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C455Cu;
    // 0x3c4560: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C455Cu, 0x3C4564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4564u;
label_3c4564:
    // 0x3c4564: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x3c4564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3c4568:
    // 0x3c4568: 0xc0bf6f4  jal         func_2FDBD0
label_3c456c:
    if (ctx->pc == 0x3C456Cu) {
        ctx->pc = 0x3C456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4568u;
        // 0x3c456c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4570u;
        goto label_3c4570;
    }
    ctx->pc = 0x3C4568u;
    SET_GPR_U32(ctx, 31, 0x3C4570u);
    ctx->pc = 0x3C456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4568u;
    // 0x3c456c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBD0u, 0x3C4568u, 0x3C4570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4570u;
label_3c4570:
    // 0x3c4570: 0x10000004  b           . + 4 + (0x4 << 2)
label_3c4574:
    if (ctx->pc == 0x3C4574u) {
        ctx->pc = 0x3C4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4570u;
        // 0x3c4574: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4578u;
        goto label_3c4578;
    }
    ctx->pc = 0x3C4570u;
    {
        const bool branch_taken_0x3c4570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4570u;
        // 0x3c4574: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4570) {
            ctx->pc = 0x3C4584u;
            goto label_3c4584;
        }
    }
    ctx->pc = 0x3C4578u;
label_3c4578:
    // 0x3c4578: 0xc0bf6e8  jal         func_2FDBA0
label_3c457c:
    if (ctx->pc == 0x3C457Cu) {
        ctx->pc = 0x3C457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4578u;
        // 0x3c457c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4580u;
        goto label_3c4580;
    }
    ctx->pc = 0x3C4578u;
    SET_GPR_U32(ctx, 31, 0x3C4580u);
    ctx->pc = 0x3C457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4578u;
    // 0x3c457c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4578u, 0x3C4580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4580u;
label_3c4580:
    // 0x3c4580: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3c4580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4584:
    // 0x3c4584: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c4584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3c4588:
    // 0x3c4588: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3c458c:
    // 0x3c458c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_3c4590:
    if (ctx->pc == 0x3C4590u) {
        ctx->pc = 0x3C4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C458Cu;
        // 0x3c4590: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4594u;
        goto label_3c4594;
    }
    ctx->pc = 0x3C458Cu;
    {
        const bool branch_taken_0x3c458c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C458Cu;
        // 0x3c4590: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c458c) {
            ctx->pc = 0x3C4578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4578;
        }
    }
    ctx->pc = 0x3C4594u;
label_3c4594:
    // 0x3c4594: 0x27c7e0c0  addiu       $a3, $fp, -0x1F40
    ctx->pc = 0x3c4594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294959296));
label_3c4598:
    // 0x3c4598: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3c4598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3c459c:
    // 0x3c459c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3c459cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3c45a0:
    // 0x3c45a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c45a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c45a4:
    // 0x3c45a4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3c45a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c45a8:
    // 0x3c45a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c45a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c45ac:
    // 0x3c45ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c45acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c45b0:
    // 0x3c45b0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c45b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c45b4:
    // 0x3c45b4: 0xc0c06aa  jal         func_301AA8
label_3c45b8:
    if (ctx->pc == 0x3C45B8u) {
        ctx->pc = 0x3C45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45B4u;
        // 0x3c45b8: 0x26e4e088  addiu       $a0, $s7, -0x1F78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C45BCu;
        goto label_3c45bc;
    }
    ctx->pc = 0x3C45B4u;
    SET_GPR_U32(ctx, 31, 0x3C45BCu);
    ctx->pc = 0x3C45B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45B4u;
    // 0x3c45b8: 0x26e4e088  addiu       $a0, $s7, -0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294959240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C45B4u, 0x3C45BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45BCu;
label_3c45bc:
    // 0x3c45bc: 0xc0bf6e0  jal         func_2FDB80
label_3c45c0:
    if (ctx->pc == 0x3C45C0u) {
        ctx->pc = 0x3C45C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45BCu;
        // 0x3c45c0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C45C4u;
        goto label_3c45c4;
    }
    ctx->pc = 0x3C45BCu;
    SET_GPR_U32(ctx, 31, 0x3C45C4u);
    ctx->pc = 0x3C45C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C45BCu;
    // 0x3c45c0: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C45BCu, 0x3C45C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C45C4u;
label_3c45c4:
    // 0x3c45c4: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x3c45c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_3c45c8:
    // 0x3c45c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c45c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c45cc:
    // 0x3c45cc: 0x40f809  jalr        $v0
label_3c45d0:
    if (ctx->pc == 0x3C45D0u) {
        ctx->pc = 0x3C45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45CCu;
        // 0x3c45d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C45D4u;
        goto label_3c45d4;
    }
    ctx->pc = 0x3C45CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C45D4u);
        ctx->pc = 0x3C45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45CCu;
        // 0x3c45d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C45CCu, 0x3C45D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C45D4u;
label_3c45d4:
    // 0x3c45d4: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x3c45d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_3c45d8:
    // 0x3c45d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3c45d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c45dc:
    // 0x3c45dc: 0x646207ff  daddiu      $v0, $v1, 0x7FF
    ctx->pc = 0x3c45dcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2047);
label_3c45e0:
    // 0x3c45e0: 0xa3202a  slt         $a0, $a1, $v1
    ctx->pc = 0x3c45e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3c45e4:
    // 0x3c45e4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x3c45e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3c45e8:
    // 0x3c45e8: 0x212fb  dsra        $v0, $v0, 11
    ctx->pc = 0x3c45e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 11);
label_3c45ec:
    // 0x3c45ec: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x3c45ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
label_3c45f0:
    // 0x3c45f0: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x3c45f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_3c45f4:
    // 0x3c45f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c45f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3c45f8:
    // 0x3c45f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c45f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3c45fc:
    // 0x3c45fc: 0x1640ff60  bnez        $s2, . + 4 + (-0xA0 << 2)
label_3c4600:
    if (ctx->pc == 0x3C4600u) {
        ctx->pc = 0x3C4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45FCu;
        // 0x3c4600: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4604u;
        goto label_3c4604;
    }
    ctx->pc = 0x3C45FCu;
    {
        const bool branch_taken_0x3c45fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45FCu;
        // 0x3c4600: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c45fc) {
            ctx->pc = 0x3C4380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4380;
        }
    }
    ctx->pc = 0x3C4604u;
label_3c4604:
    // 0x3c4604: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x3c4604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4608:
    // 0x3c4608: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x3c4608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3c460c:
    // 0x3c460c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x3c460cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3c4610:
    // 0x3c4610: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x3c4610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3c4614:
    // 0x3c4614: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x3c4614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3c4618:
    // 0x3c4618: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x3c4618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3c461c:
    // 0x3c461c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x3c461cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c4620:
    // 0x3c4620: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x3c4620u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c4624:
    // 0x3c4624: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3c4624u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c4628:
    // 0x3c4628: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3c4628u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c462c:
    // 0x3c462c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3c462cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3c4630:
    // 0x3c4630: 0x3e00008  jr          $ra
label_3c4634:
    if (ctx->pc == 0x3C4634u) {
        ctx->pc = 0x3C4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4630u;
        // 0x3c4634: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4638u;
        goto label_fallthrough_0x3c4630;
    }
    ctx->pc = 0x3C4630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4630u;
        // 0x3c4634: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c4630:
    ctx->pc = 0x3C4638u;
}
