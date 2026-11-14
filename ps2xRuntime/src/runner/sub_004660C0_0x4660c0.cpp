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

// Function: sub_004660C0
// Address: 0x4660c0 - 0x466450
void sub_004660C0_0x4660c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004660C0_0x4660c0");
#endif

    switch (ctx->pc) {
        case 0x4660c0u: goto label_4660c0;
        case 0x4660c4u: goto label_4660c4;
        case 0x4660c8u: goto label_4660c8;
        case 0x4660ccu: goto label_4660cc;
        case 0x4660d0u: goto label_4660d0;
        case 0x4660d4u: goto label_4660d4;
        case 0x4660d8u: goto label_4660d8;
        case 0x4660dcu: goto label_4660dc;
        case 0x4660e0u: goto label_4660e0;
        case 0x4660e4u: goto label_4660e4;
        case 0x4660e8u: goto label_4660e8;
        case 0x4660ecu: goto label_4660ec;
        case 0x4660f0u: goto label_4660f0;
        case 0x4660f4u: goto label_4660f4;
        case 0x4660f8u: goto label_4660f8;
        case 0x4660fcu: goto label_4660fc;
        case 0x466100u: goto label_466100;
        case 0x466104u: goto label_466104;
        case 0x466108u: goto label_466108;
        case 0x46610cu: goto label_46610c;
        case 0x466110u: goto label_466110;
        case 0x466114u: goto label_466114;
        case 0x466118u: goto label_466118;
        case 0x46611cu: goto label_46611c;
        case 0x466120u: goto label_466120;
        case 0x466124u: goto label_466124;
        case 0x466128u: goto label_466128;
        case 0x46612cu: goto label_46612c;
        case 0x466130u: goto label_466130;
        case 0x466134u: goto label_466134;
        case 0x466138u: goto label_466138;
        case 0x46613cu: goto label_46613c;
        case 0x466140u: goto label_466140;
        case 0x466144u: goto label_466144;
        case 0x466148u: goto label_466148;
        case 0x46614cu: goto label_46614c;
        case 0x466150u: goto label_466150;
        case 0x466154u: goto label_466154;
        case 0x466158u: goto label_466158;
        case 0x46615cu: goto label_46615c;
        case 0x466160u: goto label_466160;
        case 0x466164u: goto label_466164;
        case 0x466168u: goto label_466168;
        case 0x46616cu: goto label_46616c;
        case 0x466170u: goto label_466170;
        case 0x466174u: goto label_466174;
        case 0x466178u: goto label_466178;
        case 0x46617cu: goto label_46617c;
        case 0x466180u: goto label_466180;
        case 0x466184u: goto label_466184;
        case 0x466188u: goto label_466188;
        case 0x46618cu: goto label_46618c;
        case 0x466190u: goto label_466190;
        case 0x466194u: goto label_466194;
        case 0x466198u: goto label_466198;
        case 0x46619cu: goto label_46619c;
        case 0x4661a0u: goto label_4661a0;
        case 0x4661a4u: goto label_4661a4;
        case 0x4661a8u: goto label_4661a8;
        case 0x4661acu: goto label_4661ac;
        case 0x4661b0u: goto label_4661b0;
        case 0x4661b4u: goto label_4661b4;
        case 0x4661b8u: goto label_4661b8;
        case 0x4661bcu: goto label_4661bc;
        case 0x4661c0u: goto label_4661c0;
        case 0x4661c4u: goto label_4661c4;
        case 0x4661c8u: goto label_4661c8;
        case 0x4661ccu: goto label_4661cc;
        case 0x4661d0u: goto label_4661d0;
        case 0x4661d4u: goto label_4661d4;
        case 0x4661d8u: goto label_4661d8;
        case 0x4661dcu: goto label_4661dc;
        case 0x4661e0u: goto label_4661e0;
        case 0x4661e4u: goto label_4661e4;
        case 0x4661e8u: goto label_4661e8;
        case 0x4661ecu: goto label_4661ec;
        case 0x4661f0u: goto label_4661f0;
        case 0x4661f4u: goto label_4661f4;
        case 0x4661f8u: goto label_4661f8;
        case 0x4661fcu: goto label_4661fc;
        case 0x466200u: goto label_466200;
        case 0x466204u: goto label_466204;
        case 0x466208u: goto label_466208;
        case 0x46620cu: goto label_46620c;
        case 0x466210u: goto label_466210;
        case 0x466214u: goto label_466214;
        case 0x466218u: goto label_466218;
        case 0x46621cu: goto label_46621c;
        case 0x466220u: goto label_466220;
        case 0x466224u: goto label_466224;
        case 0x466228u: goto label_466228;
        case 0x46622cu: goto label_46622c;
        case 0x466230u: goto label_466230;
        case 0x466234u: goto label_466234;
        case 0x466238u: goto label_466238;
        case 0x46623cu: goto label_46623c;
        case 0x466240u: goto label_466240;
        case 0x466244u: goto label_466244;
        case 0x466248u: goto label_466248;
        case 0x46624cu: goto label_46624c;
        case 0x466250u: goto label_466250;
        case 0x466254u: goto label_466254;
        case 0x466258u: goto label_466258;
        case 0x46625cu: goto label_46625c;
        case 0x466260u: goto label_466260;
        case 0x466264u: goto label_466264;
        case 0x466268u: goto label_466268;
        case 0x46626cu: goto label_46626c;
        case 0x466270u: goto label_466270;
        case 0x466274u: goto label_466274;
        case 0x466278u: goto label_466278;
        case 0x46627cu: goto label_46627c;
        case 0x466280u: goto label_466280;
        case 0x466284u: goto label_466284;
        case 0x466288u: goto label_466288;
        case 0x46628cu: goto label_46628c;
        case 0x466290u: goto label_466290;
        case 0x466294u: goto label_466294;
        case 0x466298u: goto label_466298;
        case 0x46629cu: goto label_46629c;
        case 0x4662a0u: goto label_4662a0;
        case 0x4662a4u: goto label_4662a4;
        case 0x4662a8u: goto label_4662a8;
        case 0x4662acu: goto label_4662ac;
        case 0x4662b0u: goto label_4662b0;
        case 0x4662b4u: goto label_4662b4;
        case 0x4662b8u: goto label_4662b8;
        case 0x4662bcu: goto label_4662bc;
        case 0x4662c0u: goto label_4662c0;
        case 0x4662c4u: goto label_4662c4;
        case 0x4662c8u: goto label_4662c8;
        case 0x4662ccu: goto label_4662cc;
        case 0x4662d0u: goto label_4662d0;
        case 0x4662d4u: goto label_4662d4;
        case 0x4662d8u: goto label_4662d8;
        case 0x4662dcu: goto label_4662dc;
        case 0x4662e0u: goto label_4662e0;
        case 0x4662e4u: goto label_4662e4;
        case 0x4662e8u: goto label_4662e8;
        case 0x4662ecu: goto label_4662ec;
        case 0x4662f0u: goto label_4662f0;
        case 0x4662f4u: goto label_4662f4;
        case 0x4662f8u: goto label_4662f8;
        case 0x4662fcu: goto label_4662fc;
        case 0x466300u: goto label_466300;
        case 0x466304u: goto label_466304;
        case 0x466308u: goto label_466308;
        case 0x46630cu: goto label_46630c;
        case 0x466310u: goto label_466310;
        case 0x466314u: goto label_466314;
        case 0x466318u: goto label_466318;
        case 0x46631cu: goto label_46631c;
        case 0x466320u: goto label_466320;
        case 0x466324u: goto label_466324;
        case 0x466328u: goto label_466328;
        case 0x46632cu: goto label_46632c;
        case 0x466330u: goto label_466330;
        case 0x466334u: goto label_466334;
        case 0x466338u: goto label_466338;
        case 0x46633cu: goto label_46633c;
        case 0x466340u: goto label_466340;
        case 0x466344u: goto label_466344;
        case 0x466348u: goto label_466348;
        case 0x46634cu: goto label_46634c;
        case 0x466350u: goto label_466350;
        case 0x466354u: goto label_466354;
        case 0x466358u: goto label_466358;
        case 0x46635cu: goto label_46635c;
        case 0x466360u: goto label_466360;
        case 0x466364u: goto label_466364;
        case 0x466368u: goto label_466368;
        case 0x46636cu: goto label_46636c;
        case 0x466370u: goto label_466370;
        case 0x466374u: goto label_466374;
        case 0x466378u: goto label_466378;
        case 0x46637cu: goto label_46637c;
        case 0x466380u: goto label_466380;
        case 0x466384u: goto label_466384;
        case 0x466388u: goto label_466388;
        case 0x46638cu: goto label_46638c;
        case 0x466390u: goto label_466390;
        case 0x466394u: goto label_466394;
        case 0x466398u: goto label_466398;
        case 0x46639cu: goto label_46639c;
        case 0x4663a0u: goto label_4663a0;
        case 0x4663a4u: goto label_4663a4;
        case 0x4663a8u: goto label_4663a8;
        case 0x4663acu: goto label_4663ac;
        case 0x4663b0u: goto label_4663b0;
        case 0x4663b4u: goto label_4663b4;
        case 0x4663b8u: goto label_4663b8;
        case 0x4663bcu: goto label_4663bc;
        case 0x4663c0u: goto label_4663c0;
        case 0x4663c4u: goto label_4663c4;
        case 0x4663c8u: goto label_4663c8;
        case 0x4663ccu: goto label_4663cc;
        case 0x4663d0u: goto label_4663d0;
        case 0x4663d4u: goto label_4663d4;
        case 0x4663d8u: goto label_4663d8;
        case 0x4663dcu: goto label_4663dc;
        case 0x4663e0u: goto label_4663e0;
        case 0x4663e4u: goto label_4663e4;
        case 0x4663e8u: goto label_4663e8;
        case 0x4663ecu: goto label_4663ec;
        case 0x4663f0u: goto label_4663f0;
        case 0x4663f4u: goto label_4663f4;
        case 0x4663f8u: goto label_4663f8;
        case 0x4663fcu: goto label_4663fc;
        case 0x466400u: goto label_466400;
        case 0x466404u: goto label_466404;
        case 0x466408u: goto label_466408;
        case 0x46640cu: goto label_46640c;
        case 0x466410u: goto label_466410;
        case 0x466414u: goto label_466414;
        case 0x466418u: goto label_466418;
        case 0x46641cu: goto label_46641c;
        case 0x466420u: goto label_466420;
        case 0x466424u: goto label_466424;
        case 0x466428u: goto label_466428;
        case 0x46642cu: goto label_46642c;
        case 0x466430u: goto label_466430;
        case 0x466434u: goto label_466434;
        case 0x466438u: goto label_466438;
        case 0x46643cu: goto label_46643c;
        case 0x466440u: goto label_466440;
        case 0x466444u: goto label_466444;
        case 0x466448u: goto label_466448;
        case 0x46644cu: goto label_46644c;
        default: break;
    }

    ctx->pc = 0x4660c0u;

label_4660c0:
    // 0x4660c0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x4660c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_4660c4:
    // 0x4660c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4660c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4660c8:
    // 0x4660c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4660c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4660cc:
    // 0x4660cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4660ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4660d0:
    // 0x4660d0: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x4660d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
label_4660d4:
    // 0x4660d4: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x4660d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
label_4660d8:
    // 0x4660d8: 0xe7ac0190  swc1        $f12, 0x190($sp)
    ctx->pc = 0x4660d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_4660dc:
    // 0x4660dc: 0xafa601a0  sw          $a2, 0x1A0($sp)
    ctx->pc = 0x4660dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
label_4660e0:
    // 0x4660e0: 0xafa701b0  sw          $a3, 0x1B0($sp)
    ctx->pc = 0x4660e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 7));
label_4660e4:
    // 0x4660e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4660e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4660e8:
    // 0x4660e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4660e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4660ec:
    // 0x4660ec: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4660ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4660f0:
    // 0x4660f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4660f4:
    if (ctx->pc == 0x4660F4u) {
        ctx->pc = 0x4660F8u;
        goto label_4660f8;
    }
    ctx->pc = 0x4660F0u;
    {
        const bool branch_taken_0x4660f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4660f0) {
            ctx->pc = 0x46610Cu;
            goto label_46610c;
        }
    }
    ctx->pc = 0x4660F8u;
label_4660f8:
    // 0x4660f8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4660f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4660fc:
    // 0x4660fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_466100:
    if (ctx->pc == 0x466100u) {
        ctx->pc = 0x466104u;
        goto label_466104;
    }
    ctx->pc = 0x4660FCu;
    {
        const bool branch_taken_0x4660fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4660fc) {
            ctx->pc = 0x46610Cu;
            goto label_46610c;
        }
    }
    ctx->pc = 0x466104u;
label_466104:
    // 0x466104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_466108:
    // 0x466108: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x466108u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_46610c:
    // 0x46610c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_466110:
    if (ctx->pc == 0x466110u) {
        ctx->pc = 0x466114u;
        goto label_466114;
    }
    ctx->pc = 0x46610Cu;
    {
        const bool branch_taken_0x46610c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46610c) {
            ctx->pc = 0x466128u;
            goto label_466128;
        }
    }
    ctx->pc = 0x466114u;
label_466114:
    // 0x466114: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x466114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_466118:
    // 0x466118: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_46611c:
    if (ctx->pc == 0x46611Cu) {
        ctx->pc = 0x466120u;
        goto label_466120;
    }
    ctx->pc = 0x466118u;
    {
        const bool branch_taken_0x466118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466118) {
            ctx->pc = 0x466128u;
            goto label_466128;
        }
    }
    ctx->pc = 0x466120u;
label_466120:
    // 0x466120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x466120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_466124:
    // 0x466124: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x466124u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_466128:
    // 0x466128: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x466128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_46612c:
    // 0x46612c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_466130:
    if (ctx->pc == 0x466130u) {
        ctx->pc = 0x466134u;
        goto label_466134;
    }
    ctx->pc = 0x46612Cu;
    {
        const bool branch_taken_0x46612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46612c) {
            ctx->pc = 0x4661DCu;
            goto label_4661dc;
        }
    }
    ctx->pc = 0x466134u;
label_466134:
    // 0x466134: 0x8f82b2b4  lw          $v0, -0x4D4C($gp)
    ctx->pc = 0x466134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947508)));
label_466138:
    // 0x466138: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_46613c:
    if (ctx->pc == 0x46613Cu) {
        ctx->pc = 0x466140u;
        goto label_466140;
    }
    ctx->pc = 0x466138u;
    {
        const bool branch_taken_0x466138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466138) {
            ctx->pc = 0x4661DCu;
            goto label_4661dc;
        }
    }
    ctx->pc = 0x466140u;
label_466140:
    // 0x466140: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x466140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_466144:
    // 0x466144: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x466144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_466148:
    // 0x466148: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x466148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_46614c:
    // 0x46614c: 0xc115ee8  jal         func_457BA0
label_466150:
    if (ctx->pc == 0x466150u) {
        ctx->pc = 0x466154u;
        goto label_466154;
    }
    ctx->pc = 0x46614Cu;
    SET_GPR_U32(ctx, 31, 0x466154u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x46614Cu, 0x466154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466154u;
label_466154:
    // 0x466154: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_466158:
    if (ctx->pc == 0x466158u) {
        ctx->pc = 0x46615Cu;
        goto label_46615c;
    }
    ctx->pc = 0x466154u;
    {
        const bool branch_taken_0x466154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466154) {
            ctx->pc = 0x4661DCu;
            goto label_4661dc;
        }
    }
    ctx->pc = 0x46615Cu;
label_46615c:
    // 0x46615c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x46615cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_466160:
    // 0x466160: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_466164:
    if (ctx->pc == 0x466164u) {
        ctx->pc = 0x466168u;
        goto label_466168;
    }
    ctx->pc = 0x466160u;
    {
        const bool branch_taken_0x466160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466160) {
            ctx->pc = 0x4661DCu;
            goto label_4661dc;
        }
    }
    ctx->pc = 0x466168u;
label_466168:
    // 0x466168: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x466168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_46616c:
    // 0x46616c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x46616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_466170:
    // 0x466170: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x466170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_466174:
    // 0x466174: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x466174u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_466178:
    // 0x466178: 0x24e7f4f8  addiu       $a3, $a3, -0xB08
    ctx->pc = 0x466178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964472));
label_46617c:
    // 0x46617c: 0x240800e4  addiu       $t0, $zero, 0xE4
    ctx->pc = 0x46617cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
label_466180:
    // 0x466180: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x466180u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_466184:
    // 0x466184: 0x2529f5c0  addiu       $t1, $t1, -0xA40
    ctx->pc = 0x466184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294964672));
label_466188:
    // 0x466188: 0xc113940  jal         func_44E500
label_46618c:
    if (ctx->pc == 0x46618Cu) {
        ctx->pc = 0x466190u;
        goto label_466190;
    }
    ctx->pc = 0x466188u;
    SET_GPR_U32(ctx, 31, 0x466190u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x466188u, 0x466190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466190u;
label_466190:
    // 0x466190: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x466190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_466194:
    // 0x466194: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x466194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_466198:
    // 0x466198: 0x24a5f600  addiu       $a1, $a1, -0xA00
    ctx->pc = 0x466198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
label_46619c:
    // 0x46619c: 0xc115c24  jal         func_457090
label_4661a0:
    if (ctx->pc == 0x4661A0u) {
        ctx->pc = 0x4661A4u;
        goto label_4661a4;
    }
    ctx->pc = 0x46619Cu;
    SET_GPR_U32(ctx, 31, 0x4661A4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x46619Cu, 0x4661A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4661A4u;
label_4661a4:
    // 0x4661a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4661a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4661a8:
    // 0x4661a8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4661a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4661ac:
    // 0x4661ac: 0x40f809  jalr        $v0
label_4661b0:
    if (ctx->pc == 0x4661B0u) {
        ctx->pc = 0x4661B4u;
        goto label_4661b4;
    }
    ctx->pc = 0x4661ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4661B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4661ACu, 0x4661B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4661B4u;
label_4661b4:
    // 0x4661b4: 0xaf82b2b4  sw          $v0, -0x4D4C($gp)
    ctx->pc = 0x4661b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947508), GPR_U32(ctx, 2));
label_4661b8:
    // 0x4661b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4661b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4661bc:
    // 0x4661bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4661c0:
    if (ctx->pc == 0x4661C0u) {
        ctx->pc = 0x4661C4u;
        goto label_4661c4;
    }
    ctx->pc = 0x4661BCu;
    {
        const bool branch_taken_0x4661bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4661bc) {
            ctx->pc = 0x4661CCu;
            goto label_4661cc;
        }
    }
    ctx->pc = 0x4661C4u;
label_4661c4:
    // 0x4661c4: 0xd  break       0
    ctx->pc = 0x4661c4u;
    runtime->handleBreak(rdram, ctx);
label_4661c8:
    // 0x4661c8: 0x0  nop
    ctx->pc = 0x4661c8u;
    // NOP
label_4661cc:
    // 0x4661cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4661ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4661d0:
    // 0x4661d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4661d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4661d4:
    // 0x4661d4: 0xc11392c  jal         func_44E4B0
label_4661d8:
    if (ctx->pc == 0x4661D8u) {
        ctx->pc = 0x4661DCu;
        goto label_4661dc;
    }
    ctx->pc = 0x4661D4u;
    SET_GPR_U32(ctx, 31, 0x4661DCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4661D4u, 0x4661DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4661DCu;
label_4661dc:
    // 0x4661dc: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x4661dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4661e0:
    // 0x4661e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4661e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4661e4:
    // 0x4661e4: 0x0  nop
    ctx->pc = 0x4661e4u;
    // NOP
label_4661e8:
    // 0x4661e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4661e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4661ec:
    // 0x4661ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_4661f0:
    if (ctx->pc == 0x4661F0u) {
        ctx->pc = 0x4661F4u;
        goto label_4661f4;
    }
    ctx->pc = 0x4661ECu;
    {
        const bool branch_taken_0x4661ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4661ec) {
            ctx->pc = 0x46620Cu;
            goto label_46620c;
        }
    }
    ctx->pc = 0x4661F4u;
label_4661f4:
    // 0x4661f4: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x4661f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4661f8:
    // 0x4661f8: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x4661f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4661fc:
    // 0x4661fc: 0xc041d58  jal         func_107560
label_466200:
    if (ctx->pc == 0x466200u) {
        ctx->pc = 0x466204u;
        goto label_466204;
    }
    ctx->pc = 0x4661FCu;
    SET_GPR_U32(ctx, 31, 0x466204u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x4661FCu, 0x466204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466204u;
label_466204:
    // 0x466204: 0x1000008a  b           . + 4 + (0x8A << 2)
label_466208:
    if (ctx->pc == 0x466208u) {
        ctx->pc = 0x46620Cu;
        goto label_46620c;
    }
    ctx->pc = 0x466204u;
    {
        const bool branch_taken_0x466204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466204) {
            ctx->pc = 0x466430u;
            goto label_466430;
        }
    }
    ctx->pc = 0x46620Cu;
label_46620c:
    // 0x46620c: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x46620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466210:
    // 0x466210: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x466210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_466214:
    // 0x466214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466218:
    // 0x466218: 0x0  nop
    ctx->pc = 0x466218u;
    // NOP
label_46621c:
    // 0x46621c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x46621cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466220:
    // 0x466220: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_466224:
    if (ctx->pc == 0x466224u) {
        ctx->pc = 0x466228u;
        goto label_466228;
    }
    ctx->pc = 0x466220u;
    {
        const bool branch_taken_0x466220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x466220) {
            ctx->pc = 0x466240u;
            goto label_466240;
        }
    }
    ctx->pc = 0x466228u;
label_466228:
    // 0x466228: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x466228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_46622c:
    // 0x46622c: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x46622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_466230:
    // 0x466230: 0xc041d58  jal         func_107560
label_466234:
    if (ctx->pc == 0x466234u) {
        ctx->pc = 0x466238u;
        goto label_466238;
    }
    ctx->pc = 0x466230u;
    SET_GPR_U32(ctx, 31, 0x466238u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x466230u, 0x466238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466238u;
label_466238:
    // 0x466238: 0x1000007d  b           . + 4 + (0x7D << 2)
label_46623c:
    if (ctx->pc == 0x46623Cu) {
        ctx->pc = 0x466240u;
        goto label_466240;
    }
    ctx->pc = 0x466238u;
    {
        const bool branch_taken_0x466238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466238) {
            ctx->pc = 0x466430u;
            goto label_466430;
        }
    }
    ctx->pc = 0x466240u;
label_466240:
    // 0x466240: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x466240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_466244:
    // 0x466244: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x466244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466248:
    // 0x466248: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x466248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_46624c:
    // 0x46624c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x46624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466250:
    // 0x466250: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x466250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466254:
    // 0x466254: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_466258:
    if (ctx->pc == 0x466258u) {
        ctx->pc = 0x46625Cu;
        goto label_46625c;
    }
    ctx->pc = 0x466254u;
    {
        const bool branch_taken_0x466254 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x466254) {
            ctx->pc = 0x4662ACu;
            goto label_4662ac;
        }
    }
    ctx->pc = 0x46625Cu;
label_46625c:
    // 0x46625c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x46625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_466260:
    // 0x466260: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x466260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466264:
    // 0x466264: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x466264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_466268:
    // 0x466268: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x466268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46626c:
    // 0x46626c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x46626cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466270:
    // 0x466270: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_466274:
    if (ctx->pc == 0x466274u) {
        ctx->pc = 0x466278u;
        goto label_466278;
    }
    ctx->pc = 0x466270u;
    {
        const bool branch_taken_0x466270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x466270) {
            ctx->pc = 0x4662ACu;
            goto label_4662ac;
        }
    }
    ctx->pc = 0x466278u;
label_466278:
    // 0x466278: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x466278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46627c:
    // 0x46627c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x46627cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466280:
    // 0x466280: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x466280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_466284:
    // 0x466284: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x466284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466288:
    // 0x466288: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x466288u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46628c:
    // 0x46628c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_466290:
    if (ctx->pc == 0x466290u) {
        ctx->pc = 0x466294u;
        goto label_466294;
    }
    ctx->pc = 0x46628Cu;
    {
        const bool branch_taken_0x46628c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46628c) {
            ctx->pc = 0x4662ACu;
            goto label_4662ac;
        }
    }
    ctx->pc = 0x466294u;
label_466294:
    // 0x466294: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x466294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_466298:
    // 0x466298: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x466298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46629c:
    // 0x46629c: 0xc041d58  jal         func_107560
label_4662a0:
    if (ctx->pc == 0x4662A0u) {
        ctx->pc = 0x4662A4u;
        goto label_4662a4;
    }
    ctx->pc = 0x46629Cu;
    SET_GPR_U32(ctx, 31, 0x4662A4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x46629Cu, 0x4662A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4662A4u;
label_4662a4:
    // 0x4662a4: 0x10000062  b           . + 4 + (0x62 << 2)
label_4662a8:
    if (ctx->pc == 0x4662A8u) {
        ctx->pc = 0x4662ACu;
        goto label_4662ac;
    }
    ctx->pc = 0x4662A4u;
    {
        const bool branch_taken_0x4662a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4662a4) {
            ctx->pc = 0x466430u;
            goto label_466430;
        }
    }
    ctx->pc = 0x4662ACu;
label_4662ac:
    // 0x4662ac: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x4662acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_4662b0:
    // 0x4662b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4662b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4662b4:
    // 0x4662b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_4662b8:
    if (ctx->pc == 0x4662B8u) {
        ctx->pc = 0x4662BCu;
        goto label_4662bc;
    }
    ctx->pc = 0x4662B4u;
    {
        const bool branch_taken_0x4662b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4662b4) {
            ctx->pc = 0x4662D4u;
            goto label_4662d4;
        }
    }
    ctx->pc = 0x4662BCu;
label_4662bc:
    // 0x4662bc: 0xc7ac0190  lwc1        $f12, 0x190($sp)
    ctx->pc = 0x4662bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4662c0:
    // 0x4662c0: 0xc11976c  jal         func_465DB0
label_4662c4:
    if (ctx->pc == 0x4662C4u) {
        ctx->pc = 0x4662C8u;
        goto label_4662c8;
    }
    ctx->pc = 0x4662C0u;
    SET_GPR_U32(ctx, 31, 0x4662C8u);
    ctx->pc = 0x465DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465DB0u, 0x4662C0u, 0x4662C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4662C8u;
label_4662c8:
    // 0x4662c8: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x4662c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_4662cc:
    // 0x4662cc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4662d0:
    if (ctx->pc == 0x4662D0u) {
        ctx->pc = 0x4662D4u;
        goto label_4662d4;
    }
    ctx->pc = 0x4662CCu;
    {
        const bool branch_taken_0x4662cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4662cc) {
            ctx->pc = 0x466380u;
            goto label_466380;
        }
    }
    ctx->pc = 0x4662D4u;
label_4662d4:
    // 0x4662d4: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x4662d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4662d8:
    // 0x4662d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4662d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4662dc:
    // 0x4662dc: 0x0  nop
    ctx->pc = 0x4662dcu;
    // NOP
label_4662e0:
    // 0x4662e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4662e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4662e4:
    // 0x4662e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4662e8:
    if (ctx->pc == 0x4662E8u) {
        ctx->pc = 0x4662ECu;
        goto label_4662ec;
    }
    ctx->pc = 0x4662E4u;
    {
        const bool branch_taken_0x4662e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4662e4) {
            ctx->pc = 0x4662FCu;
            goto label_4662fc;
        }
    }
    ctx->pc = 0x4662ECu;
label_4662ec:
    // 0x4662ec: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x4662ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4662f0:
    // 0x4662f0: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x4662f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_4662f4:
    // 0x4662f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4662f8:
    if (ctx->pc == 0x4662F8u) {
        ctx->pc = 0x4662FCu;
        goto label_4662fc;
    }
    ctx->pc = 0x4662F4u;
    {
        const bool branch_taken_0x4662f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4662f4) {
            ctx->pc = 0x466308u;
            goto label_466308;
        }
    }
    ctx->pc = 0x4662FCu;
label_4662fc:
    // 0x4662fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4662fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466300:
    // 0x466300: 0x0  nop
    ctx->pc = 0x466300u;
    // NOP
label_466304:
    // 0x466304: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x466304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_466308:
    // 0x466308: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x466308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46630c:
    // 0x46630c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x46630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_466310:
    // 0x466310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x466310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466314:
    // 0x466314: 0x0  nop
    ctx->pc = 0x466314u;
    // NOP
label_466318:
    // 0x466318: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x466318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_46631c:
    // 0x46631c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_466320:
    if (ctx->pc == 0x466320u) {
        ctx->pc = 0x466324u;
        goto label_466324;
    }
    ctx->pc = 0x46631Cu;
    {
        const bool branch_taken_0x46631c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46631c) {
            ctx->pc = 0x466368u;
            goto label_466368;
        }
    }
    ctx->pc = 0x466324u;
label_466324:
    // 0x466324: 0xc7a10190  lwc1        $f1, 0x190($sp)
    ctx->pc = 0x466324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466328:
    // 0x466328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x466328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_46632c:
    // 0x46632c: 0x0  nop
    ctx->pc = 0x46632cu;
    // NOP
label_466330:
    // 0x466330: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x466330u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_466334:
    // 0x466334: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_466338:
    if (ctx->pc == 0x466338u) {
        ctx->pc = 0x46633Cu;
        goto label_46633c;
    }
    ctx->pc = 0x466334u;
    {
        const bool branch_taken_0x466334 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x466334) {
            ctx->pc = 0x46634Cu;
            goto label_46634c;
        }
    }
    ctx->pc = 0x46633Cu;
label_46633c:
    // 0x46633c: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x46633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466340:
    // 0x466340: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x466340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_466344:
    // 0x466344: 0x10000004  b           . + 4 + (0x4 << 2)
label_466348:
    if (ctx->pc == 0x466348u) {
        ctx->pc = 0x46634Cu;
        goto label_46634c;
    }
    ctx->pc = 0x466344u;
    {
        const bool branch_taken_0x466344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466344) {
            ctx->pc = 0x466358u;
            goto label_466358;
        }
    }
    ctx->pc = 0x46634Cu;
label_46634c:
    // 0x46634c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46634cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466350:
    // 0x466350: 0x0  nop
    ctx->pc = 0x466350u;
    // NOP
label_466354:
    // 0x466354: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x466354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_466358:
    // 0x466358: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x466358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46635c:
    // 0x46635c: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x46635cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_466360:
    // 0x466360: 0x10000005  b           . + 4 + (0x5 << 2)
label_466364:
    if (ctx->pc == 0x466364u) {
        ctx->pc = 0x466368u;
        goto label_466368;
    }
    ctx->pc = 0x466360u;
    {
        const bool branch_taken_0x466360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x466360) {
            ctx->pc = 0x466378u;
            goto label_466378;
        }
    }
    ctx->pc = 0x466368u;
label_466368:
    // 0x466368: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x466368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_46636c:
    // 0x46636c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x46636cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466370:
    // 0x466370: 0x0  nop
    ctx->pc = 0x466370u;
    // NOP
label_466374:
    // 0x466374: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x466374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_466378:
    // 0x466378: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x466378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_46637c:
    // 0x46637c: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x46637cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_466380:
    // 0x466380: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x466380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_466384:
    // 0x466384: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x466384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_466388:
    // 0x466388: 0xc041d58  jal         func_107560
label_46638c:
    if (ctx->pc == 0x46638Cu) {
        ctx->pc = 0x466390u;
        goto label_466390;
    }
    ctx->pc = 0x466388u;
    SET_GPR_U32(ctx, 31, 0x466390u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x466388u, 0x466390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466390u;
label_466390:
    // 0x466390: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x466390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_466394:
    // 0x466394: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x466394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_466398:
    // 0x466398: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x466398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_46639c:
    // 0x46639c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x46639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4663a0:
    // 0x4663a0: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x4663a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4663a4:
    // 0x4663a4: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x4663a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4663a8:
    // 0x4663a8: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x4663a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4663ac:
    // 0x4663ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4663acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4663b0:
    // 0x4663b0: 0x0  nop
    ctx->pc = 0x4663b0u;
    // NOP
label_4663b4:
    // 0x4663b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4663b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_4663b8:
    // 0x4663b8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x4663b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4663bc:
    // 0x4663bc: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x4663bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4663c0:
    // 0x4663c0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4663c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4663c4:
    // 0x4663c4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x4663c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4663c8:
    // 0x4663c8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4663c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4663cc:
    // 0x4663cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4663ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4663d0:
    // 0x4663d0: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x4663d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4663d4:
    // 0x4663d4: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x4663d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4663d8:
    // 0x4663d8: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x4663d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4663dc:
    // 0x4663dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4663dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4663e0:
    // 0x4663e0: 0x0  nop
    ctx->pc = 0x4663e0u;
    // NOP
label_4663e4:
    // 0x4663e4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4663e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_4663e8:
    // 0x4663e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x4663e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4663ec:
    // 0x4663ec: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x4663ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4663f0:
    // 0x4663f0: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x4663f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_4663f4:
    // 0x4663f4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x4663f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4663f8:
    // 0x4663f8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x4663f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_4663fc:
    // 0x4663fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4663fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_466400:
    // 0x466400: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x466400u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_466404:
    // 0x466404: 0xc7a20190  lwc1        $f2, 0x190($sp)
    ctx->pc = 0x466404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_466408:
    // 0x466408: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x466408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_46640c:
    // 0x46640c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46640cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_466410:
    // 0x466410: 0x0  nop
    ctx->pc = 0x466410u;
    // NOP
label_466414:
    // 0x466414: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x466414u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_466418:
    // 0x466418: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x466418u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_46641c:
    // 0x46641c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x46641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_466420:
    // 0x466420: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x466420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_466424:
    // 0x466424: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x466424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_466428:
    // 0x466428: 0xc041d58  jal         func_107560
label_46642c:
    if (ctx->pc == 0x46642Cu) {
        ctx->pc = 0x466430u;
        goto label_466430;
    }
    ctx->pc = 0x466428u;
    SET_GPR_U32(ctx, 31, 0x466430u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x466428u, 0x466430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466430u;
label_466430:
    // 0x466430: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x466430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_466434:
    // 0x466434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466438:
    // 0x466438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46643c:
    // 0x46643c: 0x27bd01c0  addiu       $sp, $sp, 0x1C0
    ctx->pc = 0x46643cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_466440:
    // 0x466440: 0x3e00008  jr          $ra
label_466444:
    if (ctx->pc == 0x466444u) {
        ctx->pc = 0x466448u;
        goto label_466448;
    }
    ctx->pc = 0x466440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466448u;
label_466448:
    // 0x466448: 0x0  nop
    ctx->pc = 0x466448u;
    // NOP
label_46644c:
    // 0x46644c: 0x0  nop
    ctx->pc = 0x46644cu;
    // NOP
    ctx->pc = 0x466450u;
}
