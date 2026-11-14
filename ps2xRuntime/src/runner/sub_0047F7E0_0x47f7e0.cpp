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

// Function: sub_0047F7E0
// Address: 0x47f7e0 - 0x47fba0
void sub_0047F7E0_0x47f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F7E0_0x47f7e0");
#endif

    switch (ctx->pc) {
        case 0x47f7e0u: goto label_47f7e0;
        case 0x47f7e4u: goto label_47f7e4;
        case 0x47f7e8u: goto label_47f7e8;
        case 0x47f7ecu: goto label_47f7ec;
        case 0x47f7f0u: goto label_47f7f0;
        case 0x47f7f4u: goto label_47f7f4;
        case 0x47f7f8u: goto label_47f7f8;
        case 0x47f7fcu: goto label_47f7fc;
        case 0x47f800u: goto label_47f800;
        case 0x47f804u: goto label_47f804;
        case 0x47f808u: goto label_47f808;
        case 0x47f80cu: goto label_47f80c;
        case 0x47f810u: goto label_47f810;
        case 0x47f814u: goto label_47f814;
        case 0x47f818u: goto label_47f818;
        case 0x47f81cu: goto label_47f81c;
        case 0x47f820u: goto label_47f820;
        case 0x47f824u: goto label_47f824;
        case 0x47f828u: goto label_47f828;
        case 0x47f82cu: goto label_47f82c;
        case 0x47f830u: goto label_47f830;
        case 0x47f834u: goto label_47f834;
        case 0x47f838u: goto label_47f838;
        case 0x47f83cu: goto label_47f83c;
        case 0x47f840u: goto label_47f840;
        case 0x47f844u: goto label_47f844;
        case 0x47f848u: goto label_47f848;
        case 0x47f84cu: goto label_47f84c;
        case 0x47f850u: goto label_47f850;
        case 0x47f854u: goto label_47f854;
        case 0x47f858u: goto label_47f858;
        case 0x47f85cu: goto label_47f85c;
        case 0x47f860u: goto label_47f860;
        case 0x47f864u: goto label_47f864;
        case 0x47f868u: goto label_47f868;
        case 0x47f86cu: goto label_47f86c;
        case 0x47f870u: goto label_47f870;
        case 0x47f874u: goto label_47f874;
        case 0x47f878u: goto label_47f878;
        case 0x47f87cu: goto label_47f87c;
        case 0x47f880u: goto label_47f880;
        case 0x47f884u: goto label_47f884;
        case 0x47f888u: goto label_47f888;
        case 0x47f88cu: goto label_47f88c;
        case 0x47f890u: goto label_47f890;
        case 0x47f894u: goto label_47f894;
        case 0x47f898u: goto label_47f898;
        case 0x47f89cu: goto label_47f89c;
        case 0x47f8a0u: goto label_47f8a0;
        case 0x47f8a4u: goto label_47f8a4;
        case 0x47f8a8u: goto label_47f8a8;
        case 0x47f8acu: goto label_47f8ac;
        case 0x47f8b0u: goto label_47f8b0;
        case 0x47f8b4u: goto label_47f8b4;
        case 0x47f8b8u: goto label_47f8b8;
        case 0x47f8bcu: goto label_47f8bc;
        case 0x47f8c0u: goto label_47f8c0;
        case 0x47f8c4u: goto label_47f8c4;
        case 0x47f8c8u: goto label_47f8c8;
        case 0x47f8ccu: goto label_47f8cc;
        case 0x47f8d0u: goto label_47f8d0;
        case 0x47f8d4u: goto label_47f8d4;
        case 0x47f8d8u: goto label_47f8d8;
        case 0x47f8dcu: goto label_47f8dc;
        case 0x47f8e0u: goto label_47f8e0;
        case 0x47f8e4u: goto label_47f8e4;
        case 0x47f8e8u: goto label_47f8e8;
        case 0x47f8ecu: goto label_47f8ec;
        case 0x47f8f0u: goto label_47f8f0;
        case 0x47f8f4u: goto label_47f8f4;
        case 0x47f8f8u: goto label_47f8f8;
        case 0x47f8fcu: goto label_47f8fc;
        case 0x47f900u: goto label_47f900;
        case 0x47f904u: goto label_47f904;
        case 0x47f908u: goto label_47f908;
        case 0x47f90cu: goto label_47f90c;
        case 0x47f910u: goto label_47f910;
        case 0x47f914u: goto label_47f914;
        case 0x47f918u: goto label_47f918;
        case 0x47f91cu: goto label_47f91c;
        case 0x47f920u: goto label_47f920;
        case 0x47f924u: goto label_47f924;
        case 0x47f928u: goto label_47f928;
        case 0x47f92cu: goto label_47f92c;
        case 0x47f930u: goto label_47f930;
        case 0x47f934u: goto label_47f934;
        case 0x47f938u: goto label_47f938;
        case 0x47f93cu: goto label_47f93c;
        case 0x47f940u: goto label_47f940;
        case 0x47f944u: goto label_47f944;
        case 0x47f948u: goto label_47f948;
        case 0x47f94cu: goto label_47f94c;
        case 0x47f950u: goto label_47f950;
        case 0x47f954u: goto label_47f954;
        case 0x47f958u: goto label_47f958;
        case 0x47f95cu: goto label_47f95c;
        case 0x47f960u: goto label_47f960;
        case 0x47f964u: goto label_47f964;
        case 0x47f968u: goto label_47f968;
        case 0x47f96cu: goto label_47f96c;
        case 0x47f970u: goto label_47f970;
        case 0x47f974u: goto label_47f974;
        case 0x47f978u: goto label_47f978;
        case 0x47f97cu: goto label_47f97c;
        case 0x47f980u: goto label_47f980;
        case 0x47f984u: goto label_47f984;
        case 0x47f988u: goto label_47f988;
        case 0x47f98cu: goto label_47f98c;
        case 0x47f990u: goto label_47f990;
        case 0x47f994u: goto label_47f994;
        case 0x47f998u: goto label_47f998;
        case 0x47f99cu: goto label_47f99c;
        case 0x47f9a0u: goto label_47f9a0;
        case 0x47f9a4u: goto label_47f9a4;
        case 0x47f9a8u: goto label_47f9a8;
        case 0x47f9acu: goto label_47f9ac;
        case 0x47f9b0u: goto label_47f9b0;
        case 0x47f9b4u: goto label_47f9b4;
        case 0x47f9b8u: goto label_47f9b8;
        case 0x47f9bcu: goto label_47f9bc;
        case 0x47f9c0u: goto label_47f9c0;
        case 0x47f9c4u: goto label_47f9c4;
        case 0x47f9c8u: goto label_47f9c8;
        case 0x47f9ccu: goto label_47f9cc;
        case 0x47f9d0u: goto label_47f9d0;
        case 0x47f9d4u: goto label_47f9d4;
        case 0x47f9d8u: goto label_47f9d8;
        case 0x47f9dcu: goto label_47f9dc;
        case 0x47f9e0u: goto label_47f9e0;
        case 0x47f9e4u: goto label_47f9e4;
        case 0x47f9e8u: goto label_47f9e8;
        case 0x47f9ecu: goto label_47f9ec;
        case 0x47f9f0u: goto label_47f9f0;
        case 0x47f9f4u: goto label_47f9f4;
        case 0x47f9f8u: goto label_47f9f8;
        case 0x47f9fcu: goto label_47f9fc;
        case 0x47fa00u: goto label_47fa00;
        case 0x47fa04u: goto label_47fa04;
        case 0x47fa08u: goto label_47fa08;
        case 0x47fa0cu: goto label_47fa0c;
        case 0x47fa10u: goto label_47fa10;
        case 0x47fa14u: goto label_47fa14;
        case 0x47fa18u: goto label_47fa18;
        case 0x47fa1cu: goto label_47fa1c;
        case 0x47fa20u: goto label_47fa20;
        case 0x47fa24u: goto label_47fa24;
        case 0x47fa28u: goto label_47fa28;
        case 0x47fa2cu: goto label_47fa2c;
        case 0x47fa30u: goto label_47fa30;
        case 0x47fa34u: goto label_47fa34;
        case 0x47fa38u: goto label_47fa38;
        case 0x47fa3cu: goto label_47fa3c;
        case 0x47fa40u: goto label_47fa40;
        case 0x47fa44u: goto label_47fa44;
        case 0x47fa48u: goto label_47fa48;
        case 0x47fa4cu: goto label_47fa4c;
        case 0x47fa50u: goto label_47fa50;
        case 0x47fa54u: goto label_47fa54;
        case 0x47fa58u: goto label_47fa58;
        case 0x47fa5cu: goto label_47fa5c;
        case 0x47fa60u: goto label_47fa60;
        case 0x47fa64u: goto label_47fa64;
        case 0x47fa68u: goto label_47fa68;
        case 0x47fa6cu: goto label_47fa6c;
        case 0x47fa70u: goto label_47fa70;
        case 0x47fa74u: goto label_47fa74;
        case 0x47fa78u: goto label_47fa78;
        case 0x47fa7cu: goto label_47fa7c;
        case 0x47fa80u: goto label_47fa80;
        case 0x47fa84u: goto label_47fa84;
        case 0x47fa88u: goto label_47fa88;
        case 0x47fa8cu: goto label_47fa8c;
        case 0x47fa90u: goto label_47fa90;
        case 0x47fa94u: goto label_47fa94;
        case 0x47fa98u: goto label_47fa98;
        case 0x47fa9cu: goto label_47fa9c;
        case 0x47faa0u: goto label_47faa0;
        case 0x47faa4u: goto label_47faa4;
        case 0x47faa8u: goto label_47faa8;
        case 0x47faacu: goto label_47faac;
        case 0x47fab0u: goto label_47fab0;
        case 0x47fab4u: goto label_47fab4;
        case 0x47fab8u: goto label_47fab8;
        case 0x47fabcu: goto label_47fabc;
        case 0x47fac0u: goto label_47fac0;
        case 0x47fac4u: goto label_47fac4;
        case 0x47fac8u: goto label_47fac8;
        case 0x47faccu: goto label_47facc;
        case 0x47fad0u: goto label_47fad0;
        case 0x47fad4u: goto label_47fad4;
        case 0x47fad8u: goto label_47fad8;
        case 0x47fadcu: goto label_47fadc;
        case 0x47fae0u: goto label_47fae0;
        case 0x47fae4u: goto label_47fae4;
        case 0x47fae8u: goto label_47fae8;
        case 0x47faecu: goto label_47faec;
        case 0x47faf0u: goto label_47faf0;
        case 0x47faf4u: goto label_47faf4;
        case 0x47faf8u: goto label_47faf8;
        case 0x47fafcu: goto label_47fafc;
        case 0x47fb00u: goto label_47fb00;
        case 0x47fb04u: goto label_47fb04;
        case 0x47fb08u: goto label_47fb08;
        case 0x47fb0cu: goto label_47fb0c;
        case 0x47fb10u: goto label_47fb10;
        case 0x47fb14u: goto label_47fb14;
        case 0x47fb18u: goto label_47fb18;
        case 0x47fb1cu: goto label_47fb1c;
        case 0x47fb20u: goto label_47fb20;
        case 0x47fb24u: goto label_47fb24;
        case 0x47fb28u: goto label_47fb28;
        case 0x47fb2cu: goto label_47fb2c;
        case 0x47fb30u: goto label_47fb30;
        case 0x47fb34u: goto label_47fb34;
        case 0x47fb38u: goto label_47fb38;
        case 0x47fb3cu: goto label_47fb3c;
        case 0x47fb40u: goto label_47fb40;
        case 0x47fb44u: goto label_47fb44;
        case 0x47fb48u: goto label_47fb48;
        case 0x47fb4cu: goto label_47fb4c;
        case 0x47fb50u: goto label_47fb50;
        case 0x47fb54u: goto label_47fb54;
        case 0x47fb58u: goto label_47fb58;
        case 0x47fb5cu: goto label_47fb5c;
        case 0x47fb60u: goto label_47fb60;
        case 0x47fb64u: goto label_47fb64;
        case 0x47fb68u: goto label_47fb68;
        case 0x47fb6cu: goto label_47fb6c;
        case 0x47fb70u: goto label_47fb70;
        case 0x47fb74u: goto label_47fb74;
        case 0x47fb78u: goto label_47fb78;
        case 0x47fb7cu: goto label_47fb7c;
        case 0x47fb80u: goto label_47fb80;
        case 0x47fb84u: goto label_47fb84;
        case 0x47fb88u: goto label_47fb88;
        case 0x47fb8cu: goto label_47fb8c;
        case 0x47fb90u: goto label_47fb90;
        case 0x47fb94u: goto label_47fb94;
        case 0x47fb98u: goto label_47fb98;
        case 0x47fb9cu: goto label_47fb9c;
        default: break;
    }

    ctx->pc = 0x47f7e0u;

label_47f7e0:
    // 0x47f7e0: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x47f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
label_47f7e4:
    // 0x47f7e4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x47f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_47f7e8:
    // 0x47f7e8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x47f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_47f7ec:
    // 0x47f7ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x47f7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_47f7f0:
    // 0x47f7f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x47f7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47f7f4:
    // 0x47f7f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47f7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47f7f8:
    // 0x47f7f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47f7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47f7fc:
    // 0x47f7fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47f7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47f800:
    // 0x47f800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47f800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47f804:
    // 0x47f804: 0xafa40540  sw          $a0, 0x540($sp)
    ctx->pc = 0x47f804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 4));
label_47f808:
    // 0x47f808: 0xafa50550  sw          $a1, 0x550($sp)
    ctx->pc = 0x47f808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 5));
label_47f80c:
    // 0x47f80c: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x47f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_47f810:
    // 0x47f810: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x47f810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_47f814:
    // 0x47f814: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47f814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f818:
    // 0x47f818: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_47f81c:
    if (ctx->pc == 0x47F81Cu) {
        ctx->pc = 0x47F820u;
        goto label_47f820;
    }
    ctx->pc = 0x47F818u;
    {
        const bool branch_taken_0x47f818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f818) {
            ctx->pc = 0x47F838u;
            goto label_47f838;
        }
    }
    ctx->pc = 0x47F820u;
label_47f820:
    // 0x47f820: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x47f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_47f824:
    // 0x47f824: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x47f824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_47f828:
    // 0x47f828: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_47f82c:
    if (ctx->pc == 0x47F82Cu) {
        ctx->pc = 0x47F830u;
        goto label_47f830;
    }
    ctx->pc = 0x47F828u;
    {
        const bool branch_taken_0x47f828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f828) {
            ctx->pc = 0x47F838u;
            goto label_47f838;
        }
    }
    ctx->pc = 0x47F830u;
label_47f830:
    // 0x47f830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f834:
    // 0x47f834: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x47f834u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47f838:
    // 0x47f838: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x47f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_47f83c:
    // 0x47f83c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_47f840:
    if (ctx->pc == 0x47F840u) {
        ctx->pc = 0x47F844u;
        goto label_47f844;
    }
    ctx->pc = 0x47F83Cu;
    {
        const bool branch_taken_0x47f83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f83c) {
            ctx->pc = 0x47F8ECu;
            goto label_47f8ec;
        }
    }
    ctx->pc = 0x47F844u;
label_47f844:
    // 0x47f844: 0x8f82b550  lw          $v0, -0x4AB0($gp)
    ctx->pc = 0x47f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948176)));
label_47f848:
    // 0x47f848: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47f84c:
    if (ctx->pc == 0x47F84Cu) {
        ctx->pc = 0x47F850u;
        goto label_47f850;
    }
    ctx->pc = 0x47F848u;
    {
        const bool branch_taken_0x47f848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f848) {
            ctx->pc = 0x47F8ECu;
            goto label_47f8ec;
        }
    }
    ctx->pc = 0x47F850u;
label_47f850:
    // 0x47f850: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f854:
    // 0x47f854: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f858:
    // 0x47f858: 0x27a60530  addiu       $a2, $sp, 0x530
    ctx->pc = 0x47f858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_47f85c:
    // 0x47f85c: 0xc115ee8  jal         func_457BA0
label_47f860:
    if (ctx->pc == 0x47F860u) {
        ctx->pc = 0x47F864u;
        goto label_47f864;
    }
    ctx->pc = 0x47F85Cu;
    SET_GPR_U32(ctx, 31, 0x47F864u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F85Cu, 0x47F864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F864u;
label_47f864:
    // 0x47f864: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f868:
    if (ctx->pc == 0x47F868u) {
        ctx->pc = 0x47F86Cu;
        goto label_47f86c;
    }
    ctx->pc = 0x47F864u;
    {
        const bool branch_taken_0x47f864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f864) {
            ctx->pc = 0x47F8ECu;
            goto label_47f8ec;
        }
    }
    ctx->pc = 0x47F86Cu;
label_47f86c:
    // 0x47f86c: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x47f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_47f870:
    // 0x47f870: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47f874:
    if (ctx->pc == 0x47F874u) {
        ctx->pc = 0x47F878u;
        goto label_47f878;
    }
    ctx->pc = 0x47F870u;
    {
        const bool branch_taken_0x47f870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f870) {
            ctx->pc = 0x47F8ECu;
            goto label_47f8ec;
        }
    }
    ctx->pc = 0x47F878u;
label_47f878:
    // 0x47f878: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x47f878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_47f87c:
    // 0x47f87c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f880:
    // 0x47f880: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x47f880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_47f884:
    // 0x47f884: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f884u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f888:
    // 0x47f888: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47f88c:
    // 0x47f88c: 0x240800b9  addiu       $t0, $zero, 0xB9
    ctx->pc = 0x47f88cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_47f890:
    // 0x47f890: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f890u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f894:
    // 0x47f894: 0x25291930  addiu       $t1, $t1, 0x1930
    ctx->pc = 0x47f894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6448));
label_47f898:
    // 0x47f898: 0xc113940  jal         func_44E500
label_47f89c:
    if (ctx->pc == 0x47F89Cu) {
        ctx->pc = 0x47F8A0u;
        goto label_47f8a0;
    }
    ctx->pc = 0x47F898u;
    SET_GPR_U32(ctx, 31, 0x47F8A0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F898u, 0x47F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F8A0u;
label_47f8a0:
    // 0x47f8a0: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x47f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_47f8a4:
    // 0x47f8a4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f8a8:
    // 0x47f8a8: 0x24a51970  addiu       $a1, $a1, 0x1970
    ctx->pc = 0x47f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6512));
label_47f8ac:
    // 0x47f8ac: 0xc115c24  jal         func_457090
label_47f8b0:
    if (ctx->pc == 0x47F8B0u) {
        ctx->pc = 0x47F8B4u;
        goto label_47f8b4;
    }
    ctx->pc = 0x47F8ACu;
    SET_GPR_U32(ctx, 31, 0x47F8B4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F8ACu, 0x47F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F8B4u;
label_47f8b4:
    // 0x47f8b4: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x47f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_47f8b8:
    // 0x47f8b8: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x47f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_47f8bc:
    // 0x47f8bc: 0x40f809  jalr        $v0
label_47f8c0:
    if (ctx->pc == 0x47F8C0u) {
        ctx->pc = 0x47F8C4u;
        goto label_47f8c4;
    }
    ctx->pc = 0x47F8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F8C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F8BCu, 0x47F8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F8C4u;
label_47f8c4:
    // 0x47f8c4: 0xaf82b550  sw          $v0, -0x4AB0($gp)
    ctx->pc = 0x47f8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948176), GPR_U32(ctx, 2));
label_47f8c8:
    // 0x47f8c8: 0x8fa203e0  lw          $v0, 0x3E0($sp)
    ctx->pc = 0x47f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
label_47f8cc:
    // 0x47f8cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47f8d0:
    if (ctx->pc == 0x47F8D0u) {
        ctx->pc = 0x47F8D4u;
        goto label_47f8d4;
    }
    ctx->pc = 0x47F8CCu;
    {
        const bool branch_taken_0x47f8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f8cc) {
            ctx->pc = 0x47F8DCu;
            goto label_47f8dc;
        }
    }
    ctx->pc = 0x47F8D4u;
label_47f8d4:
    // 0x47f8d4: 0xd  break       0
    ctx->pc = 0x47f8d4u;
    runtime->handleBreak(rdram, ctx);
label_47f8d8:
    // 0x47f8d8: 0x0  nop
    ctx->pc = 0x47f8d8u;
    // NOP
label_47f8dc:
    // 0x47f8dc: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x47f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_47f8e0:
    // 0x47f8e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f8e4:
    // 0x47f8e4: 0xc11392c  jal         func_44E4B0
label_47f8e8:
    if (ctx->pc == 0x47F8E8u) {
        ctx->pc = 0x47F8ECu;
        goto label_47f8ec;
    }
    ctx->pc = 0x47F8E4u;
    SET_GPR_U32(ctx, 31, 0x47F8ECu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F8E4u, 0x47F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F8ECu;
label_47f8ec:
    // 0x47f8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47f8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47f8f0:
    // 0x47f8f0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x47f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_47f8f4:
    // 0x47f8f4: 0xc0e33ee  jal         func_38CFB8
label_47f8f8:
    if (ctx->pc == 0x47F8F8u) {
        ctx->pc = 0x47F8FCu;
        goto label_47f8fc;
    }
    ctx->pc = 0x47F8F4u;
    SET_GPR_U32(ctx, 31, 0x47F8FCu);
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x47F8F4u, 0x47F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F8FCu;
label_47f8fc:
    // 0x47f8fc: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_47f900:
    if (ctx->pc == 0x47F900u) {
        ctx->pc = 0x47F904u;
        goto label_47f904;
    }
    ctx->pc = 0x47F8FCu;
    {
        const bool branch_taken_0x47f8fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f8fc) {
            ctx->pc = 0x47F9ACu;
            goto label_47f9ac;
        }
    }
    ctx->pc = 0x47F904u;
label_47f904:
    // 0x47f904: 0x8f82b554  lw          $v0, -0x4AAC($gp)
    ctx->pc = 0x47f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948180)));
label_47f908:
    // 0x47f908: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47f90c:
    if (ctx->pc == 0x47F90Cu) {
        ctx->pc = 0x47F910u;
        goto label_47f910;
    }
    ctx->pc = 0x47F908u;
    {
        const bool branch_taken_0x47f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f908) {
            ctx->pc = 0x47F9ACu;
            goto label_47f9ac;
        }
    }
    ctx->pc = 0x47F910u;
label_47f910:
    // 0x47f910: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f914:
    // 0x47f914: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f918:
    // 0x47f918: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x47f918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_47f91c:
    // 0x47f91c: 0xc115ee8  jal         func_457BA0
label_47f920:
    if (ctx->pc == 0x47F920u) {
        ctx->pc = 0x47F924u;
        goto label_47f924;
    }
    ctx->pc = 0x47F91Cu;
    SET_GPR_U32(ctx, 31, 0x47F924u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F91Cu, 0x47F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F924u;
label_47f924:
    // 0x47f924: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f928:
    if (ctx->pc == 0x47F928u) {
        ctx->pc = 0x47F92Cu;
        goto label_47f92c;
    }
    ctx->pc = 0x47F924u;
    {
        const bool branch_taken_0x47f924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f924) {
            ctx->pc = 0x47F9ACu;
            goto label_47f9ac;
        }
    }
    ctx->pc = 0x47F92Cu;
label_47f92c:
    // 0x47f92c: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x47f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_47f930:
    // 0x47f930: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47f934:
    if (ctx->pc == 0x47F934u) {
        ctx->pc = 0x47F938u;
        goto label_47f938;
    }
    ctx->pc = 0x47F930u;
    {
        const bool branch_taken_0x47f930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f930) {
            ctx->pc = 0x47F9ACu;
            goto label_47f9ac;
        }
    }
    ctx->pc = 0x47F938u;
label_47f938:
    // 0x47f938: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x47f938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_47f93c:
    // 0x47f93c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f940:
    // 0x47f940: 0x8fa60524  lw          $a2, 0x524($sp)
    ctx->pc = 0x47f940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_47f944:
    // 0x47f944: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f948:
    // 0x47f948: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47f94c:
    // 0x47f94c: 0x240800bc  addiu       $t0, $zero, 0xBC
    ctx->pc = 0x47f94cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_47f950:
    // 0x47f950: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47f950u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47f954:
    // 0x47f954: 0x252919b0  addiu       $t1, $t1, 0x19B0
    ctx->pc = 0x47f954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6576));
label_47f958:
    // 0x47f958: 0xc113940  jal         func_44E500
label_47f95c:
    if (ctx->pc == 0x47F95Cu) {
        ctx->pc = 0x47F960u;
        goto label_47f960;
    }
    ctx->pc = 0x47F958u;
    SET_GPR_U32(ctx, 31, 0x47F960u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47F958u, 0x47F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F960u;
label_47f960:
    // 0x47f960: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x47f960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_47f964:
    // 0x47f964: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47f964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47f968:
    // 0x47f968: 0x24a519c0  addiu       $a1, $a1, 0x19C0
    ctx->pc = 0x47f968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6592));
label_47f96c:
    // 0x47f96c: 0xc115c24  jal         func_457090
label_47f970:
    if (ctx->pc == 0x47F970u) {
        ctx->pc = 0x47F974u;
        goto label_47f974;
    }
    ctx->pc = 0x47F96Cu;
    SET_GPR_U32(ctx, 31, 0x47F974u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47F96Cu, 0x47F974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F974u;
label_47f974:
    // 0x47f974: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x47f974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_47f978:
    // 0x47f978: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x47f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_47f97c:
    // 0x47f97c: 0x40f809  jalr        $v0
label_47f980:
    if (ctx->pc == 0x47F980u) {
        ctx->pc = 0x47F984u;
        goto label_47f984;
    }
    ctx->pc = 0x47F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F97Cu, 0x47F984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F984u;
label_47f984:
    // 0x47f984: 0xaf82b554  sw          $v0, -0x4AAC($gp)
    ctx->pc = 0x47f984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948180), GPR_U32(ctx, 2));
label_47f988:
    // 0x47f988: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x47f988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_47f98c:
    // 0x47f98c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47f990:
    if (ctx->pc == 0x47F990u) {
        ctx->pc = 0x47F994u;
        goto label_47f994;
    }
    ctx->pc = 0x47F98Cu;
    {
        const bool branch_taken_0x47f98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f98c) {
            ctx->pc = 0x47F99Cu;
            goto label_47f99c;
        }
    }
    ctx->pc = 0x47F994u;
label_47f994:
    // 0x47f994: 0xd  break       0
    ctx->pc = 0x47f994u;
    runtime->handleBreak(rdram, ctx);
label_47f998:
    // 0x47f998: 0x0  nop
    ctx->pc = 0x47f998u;
    // NOP
label_47f99c:
    // 0x47f99c: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x47f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_47f9a0:
    // 0x47f9a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47f9a4:
    // 0x47f9a4: 0xc11392c  jal         func_44E4B0
label_47f9a8:
    if (ctx->pc == 0x47F9A8u) {
        ctx->pc = 0x47F9ACu;
        goto label_47f9ac;
    }
    ctx->pc = 0x47F9A4u;
    SET_GPR_U32(ctx, 31, 0x47F9ACu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47F9A4u, 0x47F9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F9ACu;
label_47f9ac:
    // 0x47f9ac: 0x8e16005c  lw          $s6, 0x5C($s0)
    ctx->pc = 0x47f9acu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_47f9b0:
    // 0x47f9b0: 0x16c0002b  bnez        $s6, . + 4 + (0x2B << 2)
label_47f9b4:
    if (ctx->pc == 0x47F9B4u) {
        ctx->pc = 0x47F9B8u;
        goto label_47f9b8;
    }
    ctx->pc = 0x47F9B0u;
    {
        const bool branch_taken_0x47f9b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f9b0) {
            ctx->pc = 0x47FA60u;
            goto label_47fa60;
        }
    }
    ctx->pc = 0x47F9B8u;
label_47f9b8:
    // 0x47f9b8: 0x8f82b558  lw          $v0, -0x4AA8($gp)
    ctx->pc = 0x47f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948184)));
label_47f9bc:
    // 0x47f9bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47f9c0:
    if (ctx->pc == 0x47F9C0u) {
        ctx->pc = 0x47F9C4u;
        goto label_47f9c4;
    }
    ctx->pc = 0x47F9BCu;
    {
        const bool branch_taken_0x47f9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f9bc) {
            ctx->pc = 0x47FA60u;
            goto label_47fa60;
        }
    }
    ctx->pc = 0x47F9C4u;
label_47f9c4:
    // 0x47f9c4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47f9c8:
    // 0x47f9c8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f9cc:
    // 0x47f9cc: 0x27a60510  addiu       $a2, $sp, 0x510
    ctx->pc = 0x47f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_47f9d0:
    // 0x47f9d0: 0xc115ee8  jal         func_457BA0
label_47f9d4:
    if (ctx->pc == 0x47F9D4u) {
        ctx->pc = 0x47F9D8u;
        goto label_47f9d8;
    }
    ctx->pc = 0x47F9D0u;
    SET_GPR_U32(ctx, 31, 0x47F9D8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47F9D0u, 0x47F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F9D8u;
label_47f9d8:
    // 0x47f9d8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47f9dc:
    if (ctx->pc == 0x47F9DCu) {
        ctx->pc = 0x47F9E0u;
        goto label_47f9e0;
    }
    ctx->pc = 0x47F9D8u;
    {
        const bool branch_taken_0x47f9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f9d8) {
            ctx->pc = 0x47FA60u;
            goto label_47fa60;
        }
    }
    ctx->pc = 0x47F9E0u;
label_47f9e0:
    // 0x47f9e0: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x47f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_47f9e4:
    // 0x47f9e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47f9e8:
    if (ctx->pc == 0x47F9E8u) {
        ctx->pc = 0x47F9ECu;
        goto label_47f9ec;
    }
    ctx->pc = 0x47F9E4u;
    {
        const bool branch_taken_0x47f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f9e4) {
            ctx->pc = 0x47FA60u;
            goto label_47fa60;
        }
    }
    ctx->pc = 0x47F9ECu;
label_47f9ec:
    // 0x47f9ec: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x47f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_47f9f0:
    // 0x47f9f0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47f9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47f9f4:
    // 0x47f9f4: 0x8fa60514  lw          $a2, 0x514($sp)
    ctx->pc = 0x47f9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_47f9f8:
    // 0x47f9f8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47f9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47f9fc:
    // 0x47f9fc: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47f9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47fa00:
    // 0x47fa00: 0x240800bf  addiu       $t0, $zero, 0xBF
    ctx->pc = 0x47fa00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
label_47fa04:
    // 0x47fa04: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47fa04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47fa08:
    // 0x47fa08: 0x252919d0  addiu       $t1, $t1, 0x19D0
    ctx->pc = 0x47fa08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6608));
label_47fa0c:
    // 0x47fa0c: 0xc113940  jal         func_44E500
label_47fa10:
    if (ctx->pc == 0x47FA10u) {
        ctx->pc = 0x47FA14u;
        goto label_47fa14;
    }
    ctx->pc = 0x47FA0Cu;
    SET_GPR_U32(ctx, 31, 0x47FA14u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47FA0Cu, 0x47FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FA14u;
label_47fa14:
    // 0x47fa14: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x47fa14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_47fa18:
    // 0x47fa18: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47fa1c:
    // 0x47fa1c: 0x24a519e0  addiu       $a1, $a1, 0x19E0
    ctx->pc = 0x47fa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6624));
label_47fa20:
    // 0x47fa20: 0xc115c24  jal         func_457090
label_47fa24:
    if (ctx->pc == 0x47FA24u) {
        ctx->pc = 0x47FA28u;
        goto label_47fa28;
    }
    ctx->pc = 0x47FA20u;
    SET_GPR_U32(ctx, 31, 0x47FA28u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47FA20u, 0x47FA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FA28u;
label_47fa28:
    // 0x47fa28: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x47fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_47fa2c:
    // 0x47fa2c: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x47fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_47fa30:
    // 0x47fa30: 0x40f809  jalr        $v0
label_47fa34:
    if (ctx->pc == 0x47FA34u) {
        ctx->pc = 0x47FA38u;
        goto label_47fa38;
    }
    ctx->pc = 0x47FA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FA38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FA30u, 0x47FA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FA38u;
label_47fa38:
    // 0x47fa38: 0xaf82b558  sw          $v0, -0x4AA8($gp)
    ctx->pc = 0x47fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948184), GPR_U32(ctx, 2));
label_47fa3c:
    // 0x47fa3c: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x47fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_47fa40:
    // 0x47fa40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47fa44:
    if (ctx->pc == 0x47FA44u) {
        ctx->pc = 0x47FA48u;
        goto label_47fa48;
    }
    ctx->pc = 0x47FA40u;
    {
        const bool branch_taken_0x47fa40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fa40) {
            ctx->pc = 0x47FA50u;
            goto label_47fa50;
        }
    }
    ctx->pc = 0x47FA48u;
label_47fa48:
    // 0x47fa48: 0xd  break       0
    ctx->pc = 0x47fa48u;
    runtime->handleBreak(rdram, ctx);
label_47fa4c:
    // 0x47fa4c: 0x0  nop
    ctx->pc = 0x47fa4cu;
    // NOP
label_47fa50:
    // 0x47fa50: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x47fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_47fa54:
    // 0x47fa54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47fa58:
    // 0x47fa58: 0xc11392c  jal         func_44E4B0
label_47fa5c:
    if (ctx->pc == 0x47FA5Cu) {
        ctx->pc = 0x47FA60u;
        goto label_47fa60;
    }
    ctx->pc = 0x47FA58u;
    SET_GPR_U32(ctx, 31, 0x47FA60u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47FA58u, 0x47FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FA60u;
label_47fa60:
    // 0x47fa60: 0x8fb40550  lw          $s4, 0x550($sp)
    ctx->pc = 0x47fa60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_47fa64:
    // 0x47fa64: 0x8e130038  lw          $s3, 0x38($s0)
    ctx->pc = 0x47fa64u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_47fa68:
    // 0x47fa68: 0x8e150014  lw          $s5, 0x14($s0)
    ctx->pc = 0x47fa68u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47fa6c:
    // 0x47fa6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47fa6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47fa70:
    // 0x47fa70: 0x1000000d  b           . + 4 + (0xD << 2)
label_47fa74:
    if (ctx->pc == 0x47FA74u) {
        ctx->pc = 0x47FA78u;
        goto label_47fa78;
    }
    ctx->pc = 0x47FA70u;
    {
        const bool branch_taken_0x47fa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fa70) {
            ctx->pc = 0x47FAA8u;
            goto label_47faa8;
        }
    }
    ctx->pc = 0x47FA78u;
label_47fa78:
    // 0x47fa78: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x47fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_47fa7c:
    // 0x47fa7c: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x47fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47fa80:
    // 0x47fa80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x47fa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47fa84:
    // 0x47fa84: 0xc08cf20  jal         func_233C80
label_47fa88:
    if (ctx->pc == 0x47FA88u) {
        ctx->pc = 0x47FA8Cu;
        goto label_47fa8c;
    }
    ctx->pc = 0x47FA84u;
    SET_GPR_U32(ctx, 31, 0x47FA8Cu);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x47FA84u, 0x47FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FA8Cu;
label_47fa8c:
    // 0x47fa8c: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x47fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_47fa90:
    // 0x47fa90: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x47fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_47fa94:
    // 0x47fa94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x47fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47fa98:
    // 0x47fa98: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x47fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_47fa9c:
    // 0x47fa9c: 0xc08cf20  jal         func_233C80
label_47faa0:
    if (ctx->pc == 0x47FAA0u) {
        ctx->pc = 0x47FAA4u;
        goto label_47faa4;
    }
    ctx->pc = 0x47FA9Cu;
    SET_GPR_U32(ctx, 31, 0x47FAA4u);
    ctx->pc = 0x233C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233C80u, 0x47FA9Cu, 0x47FAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FAA4u;
label_47faa4:
    // 0x47faa4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x47faa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_47faa8:
    // 0x47faa8: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x47faa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_47faac:
    // 0x47faac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_47fab0:
    if (ctx->pc == 0x47FAB0u) {
        ctx->pc = 0x47FAB4u;
        goto label_47fab4;
    }
    ctx->pc = 0x47FAACu;
    {
        const bool branch_taken_0x47faac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47faac) {
            ctx->pc = 0x47FA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47fa78;
        }
    }
    ctx->pc = 0x47FAB4u;
label_47fab4:
    // 0x47fab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47fab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47fab8:
    // 0x47fab8: 0xc0e2d08  jal         func_38B420
label_47fabc:
    if (ctx->pc == 0x47FABCu) {
        ctx->pc = 0x47FAC0u;
        goto label_47fac0;
    }
    ctx->pc = 0x47FAB8u;
    SET_GPR_U32(ctx, 31, 0x47FAC0u);
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x47FAB8u, 0x47FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FAC0u;
label_47fac0:
    // 0x47fac0: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_47fac4:
    if (ctx->pc == 0x47FAC4u) {
        ctx->pc = 0x47FAC8u;
        goto label_47fac8;
    }
    ctx->pc = 0x47FAC0u;
    {
        const bool branch_taken_0x47fac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47fac0) {
            ctx->pc = 0x47FB70u;
            goto label_47fb70;
        }
    }
    ctx->pc = 0x47FAC8u;
label_47fac8:
    // 0x47fac8: 0x8f82b55c  lw          $v0, -0x4AA4($gp)
    ctx->pc = 0x47fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948188)));
label_47facc:
    // 0x47facc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_47fad0:
    if (ctx->pc == 0x47FAD0u) {
        ctx->pc = 0x47FAD4u;
        goto label_47fad4;
    }
    ctx->pc = 0x47FACCu;
    {
        const bool branch_taken_0x47facc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47facc) {
            ctx->pc = 0x47FB70u;
            goto label_47fb70;
        }
    }
    ctx->pc = 0x47FAD4u;
label_47fad4:
    // 0x47fad4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47fad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47fad8:
    // 0x47fad8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47fad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47fadc:
    // 0x47fadc: 0x27a60500  addiu       $a2, $sp, 0x500
    ctx->pc = 0x47fadcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
label_47fae0:
    // 0x47fae0: 0xc115ee8  jal         func_457BA0
label_47fae4:
    if (ctx->pc == 0x47FAE4u) {
        ctx->pc = 0x47FAE8u;
        goto label_47fae8;
    }
    ctx->pc = 0x47FAE0u;
    SET_GPR_U32(ctx, 31, 0x47FAE8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47FAE0u, 0x47FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FAE8u;
label_47fae8:
    // 0x47fae8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_47faec:
    if (ctx->pc == 0x47FAECu) {
        ctx->pc = 0x47FAF0u;
        goto label_47faf0;
    }
    ctx->pc = 0x47FAE8u;
    {
        const bool branch_taken_0x47fae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fae8) {
            ctx->pc = 0x47FB70u;
            goto label_47fb70;
        }
    }
    ctx->pc = 0x47FAF0u;
label_47faf0:
    // 0x47faf0: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x47faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_47faf4:
    // 0x47faf4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_47faf8:
    if (ctx->pc == 0x47FAF8u) {
        ctx->pc = 0x47FAFCu;
        goto label_47fafc;
    }
    ctx->pc = 0x47FAF4u;
    {
        const bool branch_taken_0x47faf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47faf4) {
            ctx->pc = 0x47FB70u;
            goto label_47fb70;
        }
    }
    ctx->pc = 0x47FAFCu;
label_47fafc:
    // 0x47fafc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x47fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47fb00:
    // 0x47fb00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47fb04:
    // 0x47fb04: 0x8fa60504  lw          $a2, 0x504($sp)
    ctx->pc = 0x47fb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1284)));
label_47fb08:
    // 0x47fb08: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47fb08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47fb0c:
    // 0x47fb0c: 0x24e71920  addiu       $a3, $a3, 0x1920
    ctx->pc = 0x47fb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6432));
label_47fb10:
    // 0x47fb10: 0x240800cf  addiu       $t0, $zero, 0xCF
    ctx->pc = 0x47fb10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
label_47fb14:
    // 0x47fb14: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47fb14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47fb18:
    // 0x47fb18: 0x252919b0  addiu       $t1, $t1, 0x19B0
    ctx->pc = 0x47fb18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6576));
label_47fb1c:
    // 0x47fb1c: 0xc113940  jal         func_44E500
label_47fb20:
    if (ctx->pc == 0x47FB20u) {
        ctx->pc = 0x47FB24u;
        goto label_47fb24;
    }
    ctx->pc = 0x47FB1Cu;
    SET_GPR_U32(ctx, 31, 0x47FB24u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47FB1Cu, 0x47FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FB24u;
label_47fb24:
    // 0x47fb24: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x47fb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47fb28:
    // 0x47fb28: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x47fb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_47fb2c:
    // 0x47fb2c: 0x24a51b38  addiu       $a1, $a1, 0x1B38
    ctx->pc = 0x47fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6968));
label_47fb30:
    // 0x47fb30: 0xc115c24  jal         func_457090
label_47fb34:
    if (ctx->pc == 0x47FB34u) {
        ctx->pc = 0x47FB38u;
        goto label_47fb38;
    }
    ctx->pc = 0x47FB30u;
    SET_GPR_U32(ctx, 31, 0x47FB38u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47FB30u, 0x47FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FB38u;
label_47fb38:
    // 0x47fb38: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x47fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47fb3c:
    // 0x47fb3c: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x47fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_47fb40:
    // 0x47fb40: 0x40f809  jalr        $v0
label_47fb44:
    if (ctx->pc == 0x47FB44u) {
        ctx->pc = 0x47FB48u;
        goto label_47fb48;
    }
    ctx->pc = 0x47FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47FB48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FB40u, 0x47FB48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47FB48u;
label_47fb48:
    // 0x47fb48: 0xaf82b55c  sw          $v0, -0x4AA4($gp)
    ctx->pc = 0x47fb48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948188), GPR_U32(ctx, 2));
label_47fb4c:
    // 0x47fb4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x47fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_47fb50:
    // 0x47fb50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47fb54:
    if (ctx->pc == 0x47FB54u) {
        ctx->pc = 0x47FB58u;
        goto label_47fb58;
    }
    ctx->pc = 0x47FB50u;
    {
        const bool branch_taken_0x47fb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47fb50) {
            ctx->pc = 0x47FB60u;
            goto label_47fb60;
        }
    }
    ctx->pc = 0x47FB58u;
label_47fb58:
    // 0x47fb58: 0xd  break       0
    ctx->pc = 0x47fb58u;
    runtime->handleBreak(rdram, ctx);
label_47fb5c:
    // 0x47fb5c: 0x0  nop
    ctx->pc = 0x47fb5cu;
    // NOP
label_47fb60:
    // 0x47fb60: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x47fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_47fb64:
    // 0x47fb64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47fb68:
    // 0x47fb68: 0xc11392c  jal         func_44E4B0
label_47fb6c:
    if (ctx->pc == 0x47FB6Cu) {
        ctx->pc = 0x47FB70u;
        goto label_47fb70;
    }
    ctx->pc = 0x47FB68u;
    SET_GPR_U32(ctx, 31, 0x47FB70u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47FB68u, 0x47FB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47FB70u;
label_47fb70:
    // 0x47fb70: 0x8fa20540  lw          $v0, 0x540($sp)
    ctx->pc = 0x47fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
label_47fb74:
    // 0x47fb74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x47fb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_47fb78:
    // 0x47fb78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x47fb78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47fb7c:
    // 0x47fb7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x47fb7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47fb80:
    // 0x47fb80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x47fb80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47fb84:
    // 0x47fb84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47fb84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47fb88:
    // 0x47fb88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47fb88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47fb8c:
    // 0x47fb8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47fb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47fb90:
    // 0x47fb90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47fb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47fb94:
    // 0x47fb94: 0x27bd0560  addiu       $sp, $sp, 0x560
    ctx->pc = 0x47fb94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
label_47fb98:
    // 0x47fb98: 0x3e00008  jr          $ra
label_47fb9c:
    if (ctx->pc == 0x47FB9Cu) {
        ctx->pc = 0x47FBA0u;
        goto label_fallthrough_0x47fb98;
    }
    ctx->pc = 0x47FB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47FB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47fb98:
    ctx->pc = 0x47FBA0u;
}
