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

// Function: sub_00495150
// Address: 0x495150 - 0x495520
void sub_00495150_0x495150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495150_0x495150");
#endif

    switch (ctx->pc) {
        case 0x495150u: goto label_495150;
        case 0x495154u: goto label_495154;
        case 0x495158u: goto label_495158;
        case 0x49515cu: goto label_49515c;
        case 0x495160u: goto label_495160;
        case 0x495164u: goto label_495164;
        case 0x495168u: goto label_495168;
        case 0x49516cu: goto label_49516c;
        case 0x495170u: goto label_495170;
        case 0x495174u: goto label_495174;
        case 0x495178u: goto label_495178;
        case 0x49517cu: goto label_49517c;
        case 0x495180u: goto label_495180;
        case 0x495184u: goto label_495184;
        case 0x495188u: goto label_495188;
        case 0x49518cu: goto label_49518c;
        case 0x495190u: goto label_495190;
        case 0x495194u: goto label_495194;
        case 0x495198u: goto label_495198;
        case 0x49519cu: goto label_49519c;
        case 0x4951a0u: goto label_4951a0;
        case 0x4951a4u: goto label_4951a4;
        case 0x4951a8u: goto label_4951a8;
        case 0x4951acu: goto label_4951ac;
        case 0x4951b0u: goto label_4951b0;
        case 0x4951b4u: goto label_4951b4;
        case 0x4951b8u: goto label_4951b8;
        case 0x4951bcu: goto label_4951bc;
        case 0x4951c0u: goto label_4951c0;
        case 0x4951c4u: goto label_4951c4;
        case 0x4951c8u: goto label_4951c8;
        case 0x4951ccu: goto label_4951cc;
        case 0x4951d0u: goto label_4951d0;
        case 0x4951d4u: goto label_4951d4;
        case 0x4951d8u: goto label_4951d8;
        case 0x4951dcu: goto label_4951dc;
        case 0x4951e0u: goto label_4951e0;
        case 0x4951e4u: goto label_4951e4;
        case 0x4951e8u: goto label_4951e8;
        case 0x4951ecu: goto label_4951ec;
        case 0x4951f0u: goto label_4951f0;
        case 0x4951f4u: goto label_4951f4;
        case 0x4951f8u: goto label_4951f8;
        case 0x4951fcu: goto label_4951fc;
        case 0x495200u: goto label_495200;
        case 0x495204u: goto label_495204;
        case 0x495208u: goto label_495208;
        case 0x49520cu: goto label_49520c;
        case 0x495210u: goto label_495210;
        case 0x495214u: goto label_495214;
        case 0x495218u: goto label_495218;
        case 0x49521cu: goto label_49521c;
        case 0x495220u: goto label_495220;
        case 0x495224u: goto label_495224;
        case 0x495228u: goto label_495228;
        case 0x49522cu: goto label_49522c;
        case 0x495230u: goto label_495230;
        case 0x495234u: goto label_495234;
        case 0x495238u: goto label_495238;
        case 0x49523cu: goto label_49523c;
        case 0x495240u: goto label_495240;
        case 0x495244u: goto label_495244;
        case 0x495248u: goto label_495248;
        case 0x49524cu: goto label_49524c;
        case 0x495250u: goto label_495250;
        case 0x495254u: goto label_495254;
        case 0x495258u: goto label_495258;
        case 0x49525cu: goto label_49525c;
        case 0x495260u: goto label_495260;
        case 0x495264u: goto label_495264;
        case 0x495268u: goto label_495268;
        case 0x49526cu: goto label_49526c;
        case 0x495270u: goto label_495270;
        case 0x495274u: goto label_495274;
        case 0x495278u: goto label_495278;
        case 0x49527cu: goto label_49527c;
        case 0x495280u: goto label_495280;
        case 0x495284u: goto label_495284;
        case 0x495288u: goto label_495288;
        case 0x49528cu: goto label_49528c;
        case 0x495290u: goto label_495290;
        case 0x495294u: goto label_495294;
        case 0x495298u: goto label_495298;
        case 0x49529cu: goto label_49529c;
        case 0x4952a0u: goto label_4952a0;
        case 0x4952a4u: goto label_4952a4;
        case 0x4952a8u: goto label_4952a8;
        case 0x4952acu: goto label_4952ac;
        case 0x4952b0u: goto label_4952b0;
        case 0x4952b4u: goto label_4952b4;
        case 0x4952b8u: goto label_4952b8;
        case 0x4952bcu: goto label_4952bc;
        case 0x4952c0u: goto label_4952c0;
        case 0x4952c4u: goto label_4952c4;
        case 0x4952c8u: goto label_4952c8;
        case 0x4952ccu: goto label_4952cc;
        case 0x4952d0u: goto label_4952d0;
        case 0x4952d4u: goto label_4952d4;
        case 0x4952d8u: goto label_4952d8;
        case 0x4952dcu: goto label_4952dc;
        case 0x4952e0u: goto label_4952e0;
        case 0x4952e4u: goto label_4952e4;
        case 0x4952e8u: goto label_4952e8;
        case 0x4952ecu: goto label_4952ec;
        case 0x4952f0u: goto label_4952f0;
        case 0x4952f4u: goto label_4952f4;
        case 0x4952f8u: goto label_4952f8;
        case 0x4952fcu: goto label_4952fc;
        case 0x495300u: goto label_495300;
        case 0x495304u: goto label_495304;
        case 0x495308u: goto label_495308;
        case 0x49530cu: goto label_49530c;
        case 0x495310u: goto label_495310;
        case 0x495314u: goto label_495314;
        case 0x495318u: goto label_495318;
        case 0x49531cu: goto label_49531c;
        case 0x495320u: goto label_495320;
        case 0x495324u: goto label_495324;
        case 0x495328u: goto label_495328;
        case 0x49532cu: goto label_49532c;
        case 0x495330u: goto label_495330;
        case 0x495334u: goto label_495334;
        case 0x495338u: goto label_495338;
        case 0x49533cu: goto label_49533c;
        case 0x495340u: goto label_495340;
        case 0x495344u: goto label_495344;
        case 0x495348u: goto label_495348;
        case 0x49534cu: goto label_49534c;
        case 0x495350u: goto label_495350;
        case 0x495354u: goto label_495354;
        case 0x495358u: goto label_495358;
        case 0x49535cu: goto label_49535c;
        case 0x495360u: goto label_495360;
        case 0x495364u: goto label_495364;
        case 0x495368u: goto label_495368;
        case 0x49536cu: goto label_49536c;
        case 0x495370u: goto label_495370;
        case 0x495374u: goto label_495374;
        case 0x495378u: goto label_495378;
        case 0x49537cu: goto label_49537c;
        case 0x495380u: goto label_495380;
        case 0x495384u: goto label_495384;
        case 0x495388u: goto label_495388;
        case 0x49538cu: goto label_49538c;
        case 0x495390u: goto label_495390;
        case 0x495394u: goto label_495394;
        case 0x495398u: goto label_495398;
        case 0x49539cu: goto label_49539c;
        case 0x4953a0u: goto label_4953a0;
        case 0x4953a4u: goto label_4953a4;
        case 0x4953a8u: goto label_4953a8;
        case 0x4953acu: goto label_4953ac;
        case 0x4953b0u: goto label_4953b0;
        case 0x4953b4u: goto label_4953b4;
        case 0x4953b8u: goto label_4953b8;
        case 0x4953bcu: goto label_4953bc;
        case 0x4953c0u: goto label_4953c0;
        case 0x4953c4u: goto label_4953c4;
        case 0x4953c8u: goto label_4953c8;
        case 0x4953ccu: goto label_4953cc;
        case 0x4953d0u: goto label_4953d0;
        case 0x4953d4u: goto label_4953d4;
        case 0x4953d8u: goto label_4953d8;
        case 0x4953dcu: goto label_4953dc;
        case 0x4953e0u: goto label_4953e0;
        case 0x4953e4u: goto label_4953e4;
        case 0x4953e8u: goto label_4953e8;
        case 0x4953ecu: goto label_4953ec;
        case 0x4953f0u: goto label_4953f0;
        case 0x4953f4u: goto label_4953f4;
        case 0x4953f8u: goto label_4953f8;
        case 0x4953fcu: goto label_4953fc;
        case 0x495400u: goto label_495400;
        case 0x495404u: goto label_495404;
        case 0x495408u: goto label_495408;
        case 0x49540cu: goto label_49540c;
        case 0x495410u: goto label_495410;
        case 0x495414u: goto label_495414;
        case 0x495418u: goto label_495418;
        case 0x49541cu: goto label_49541c;
        case 0x495420u: goto label_495420;
        case 0x495424u: goto label_495424;
        case 0x495428u: goto label_495428;
        case 0x49542cu: goto label_49542c;
        case 0x495430u: goto label_495430;
        case 0x495434u: goto label_495434;
        case 0x495438u: goto label_495438;
        case 0x49543cu: goto label_49543c;
        case 0x495440u: goto label_495440;
        case 0x495444u: goto label_495444;
        case 0x495448u: goto label_495448;
        case 0x49544cu: goto label_49544c;
        case 0x495450u: goto label_495450;
        case 0x495454u: goto label_495454;
        case 0x495458u: goto label_495458;
        case 0x49545cu: goto label_49545c;
        case 0x495460u: goto label_495460;
        case 0x495464u: goto label_495464;
        case 0x495468u: goto label_495468;
        case 0x49546cu: goto label_49546c;
        case 0x495470u: goto label_495470;
        case 0x495474u: goto label_495474;
        case 0x495478u: goto label_495478;
        case 0x49547cu: goto label_49547c;
        case 0x495480u: goto label_495480;
        case 0x495484u: goto label_495484;
        case 0x495488u: goto label_495488;
        case 0x49548cu: goto label_49548c;
        case 0x495490u: goto label_495490;
        case 0x495494u: goto label_495494;
        case 0x495498u: goto label_495498;
        case 0x49549cu: goto label_49549c;
        case 0x4954a0u: goto label_4954a0;
        case 0x4954a4u: goto label_4954a4;
        case 0x4954a8u: goto label_4954a8;
        case 0x4954acu: goto label_4954ac;
        case 0x4954b0u: goto label_4954b0;
        case 0x4954b4u: goto label_4954b4;
        case 0x4954b8u: goto label_4954b8;
        case 0x4954bcu: goto label_4954bc;
        case 0x4954c0u: goto label_4954c0;
        case 0x4954c4u: goto label_4954c4;
        case 0x4954c8u: goto label_4954c8;
        case 0x4954ccu: goto label_4954cc;
        case 0x4954d0u: goto label_4954d0;
        case 0x4954d4u: goto label_4954d4;
        case 0x4954d8u: goto label_4954d8;
        case 0x4954dcu: goto label_4954dc;
        case 0x4954e0u: goto label_4954e0;
        case 0x4954e4u: goto label_4954e4;
        case 0x4954e8u: goto label_4954e8;
        case 0x4954ecu: goto label_4954ec;
        case 0x4954f0u: goto label_4954f0;
        case 0x4954f4u: goto label_4954f4;
        case 0x4954f8u: goto label_4954f8;
        case 0x4954fcu: goto label_4954fc;
        case 0x495500u: goto label_495500;
        case 0x495504u: goto label_495504;
        case 0x495508u: goto label_495508;
        case 0x49550cu: goto label_49550c;
        case 0x495510u: goto label_495510;
        case 0x495514u: goto label_495514;
        case 0x495518u: goto label_495518;
        case 0x49551cu: goto label_49551c;
        default: break;
    }

    ctx->pc = 0x495150u;

label_495150:
    // 0x495150: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x495150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
label_495154:
    // 0x495154: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x495154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_495158:
    // 0x495158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x495158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49515c:
    // 0x49515c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49515cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_495160:
    // 0x495160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x495160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_495164:
    // 0x495164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x495164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_495168:
    // 0x495168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x495168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49516c:
    // 0x49516c: 0xafa40410  sw          $a0, 0x410($sp)
    ctx->pc = 0x49516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 4));
label_495170:
    // 0x495170: 0xafa50420  sw          $a1, 0x420($sp)
    ctx->pc = 0x495170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 5));
label_495174:
    // 0x495174: 0xafa60430  sw          $a2, 0x430($sp)
    ctx->pc = 0x495174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 6));
label_495178:
    // 0x495178: 0xafa70440  sw          $a3, 0x440($sp)
    ctx->pc = 0x495178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 7));
label_49517c:
    // 0x49517c: 0xafa80450  sw          $t0, 0x450($sp)
    ctx->pc = 0x49517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 8));
label_495180:
    // 0x495180: 0xc125228  jal         func_4948A0
label_495184:
    if (ctx->pc == 0x495184u) {
        ctx->pc = 0x495188u;
        goto label_495188;
    }
    ctx->pc = 0x495180u;
    SET_GPR_U32(ctx, 31, 0x495188u);
    ctx->pc = 0x4948A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4948A0u, 0x495180u, 0x495188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495188u;
label_495188:
    // 0x495188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_49518c:
    if (ctx->pc == 0x49518Cu) {
        ctx->pc = 0x495190u;
        goto label_495190;
    }
    ctx->pc = 0x495188u;
    {
        const bool branch_taken_0x495188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495188) {
            ctx->pc = 0x49519Cu;
            goto label_49519c;
        }
    }
    ctx->pc = 0x495190u;
label_495190:
    // 0x495190: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x495190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495194:
    // 0x495194: 0x10000002  b           . + 4 + (0x2 << 2)
label_495198:
    if (ctx->pc == 0x495198u) {
        ctx->pc = 0x49519Cu;
        goto label_49519c;
    }
    ctx->pc = 0x495194u;
    {
        const bool branch_taken_0x495194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495194) {
            ctx->pc = 0x4951A0u;
            goto label_4951a0;
        }
    }
    ctx->pc = 0x49519Cu;
label_49519c:
    // 0x49519c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49519cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4951a0:
    // 0x4951a0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x4951a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4951a4:
    // 0x4951a4: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_4951a8:
    if (ctx->pc == 0x4951A8u) {
        ctx->pc = 0x4951ACu;
        goto label_4951ac;
    }
    ctx->pc = 0x4951A4u;
    {
        const bool branch_taken_0x4951a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4951a4) {
            ctx->pc = 0x495254u;
            goto label_495254;
        }
    }
    ctx->pc = 0x4951ACu;
label_4951ac:
    // 0x4951ac: 0x8f82b758  lw          $v0, -0x48A8($gp)
    ctx->pc = 0x4951acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948696)));
label_4951b0:
    // 0x4951b0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4951b4:
    if (ctx->pc == 0x4951B4u) {
        ctx->pc = 0x4951B8u;
        goto label_4951b8;
    }
    ctx->pc = 0x4951B0u;
    {
        const bool branch_taken_0x4951b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4951b0) {
            ctx->pc = 0x495254u;
            goto label_495254;
        }
    }
    ctx->pc = 0x4951B8u;
label_4951b8:
    // 0x4951b8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4951b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4951bc:
    // 0x4951bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4951bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4951c0:
    // 0x4951c0: 0x27a60400  addiu       $a2, $sp, 0x400
    ctx->pc = 0x4951c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_4951c4:
    // 0x4951c4: 0xc115ee8  jal         func_457BA0
label_4951c8:
    if (ctx->pc == 0x4951C8u) {
        ctx->pc = 0x4951CCu;
        goto label_4951cc;
    }
    ctx->pc = 0x4951C4u;
    SET_GPR_U32(ctx, 31, 0x4951CCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4951C4u, 0x4951CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4951CCu;
label_4951cc:
    // 0x4951cc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4951d0:
    if (ctx->pc == 0x4951D0u) {
        ctx->pc = 0x4951D4u;
        goto label_4951d4;
    }
    ctx->pc = 0x4951CCu;
    {
        const bool branch_taken_0x4951cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4951cc) {
            ctx->pc = 0x495254u;
            goto label_495254;
        }
    }
    ctx->pc = 0x4951D4u;
label_4951d4:
    // 0x4951d4: 0x8fa20408  lw          $v0, 0x408($sp)
    ctx->pc = 0x4951d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_4951d8:
    // 0x4951d8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4951dc:
    if (ctx->pc == 0x4951DCu) {
        ctx->pc = 0x4951E0u;
        goto label_4951e0;
    }
    ctx->pc = 0x4951D8u;
    {
        const bool branch_taken_0x4951d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4951d8) {
            ctx->pc = 0x495254u;
            goto label_495254;
        }
    }
    ctx->pc = 0x4951E0u;
label_4951e0:
    // 0x4951e0: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x4951e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_4951e4:
    // 0x4951e4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4951e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4951e8:
    // 0x4951e8: 0x8fa60404  lw          $a2, 0x404($sp)
    ctx->pc = 0x4951e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
label_4951ec:
    // 0x4951ec: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4951ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4951f0:
    // 0x4951f0: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x4951f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_4951f4:
    // 0x4951f4: 0x240801c5  addiu       $t0, $zero, 0x1C5
    ctx->pc = 0x4951f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 453));
label_4951f8:
    // 0x4951f8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4951f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4951fc:
    // 0x4951fc: 0x25295300  addiu       $t1, $t1, 0x5300
    ctx->pc = 0x4951fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21248));
label_495200:
    // 0x495200: 0xc113940  jal         func_44E500
label_495204:
    if (ctx->pc == 0x495204u) {
        ctx->pc = 0x495208u;
        goto label_495208;
    }
    ctx->pc = 0x495200u;
    SET_GPR_U32(ctx, 31, 0x495208u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x495200u, 0x495208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495208u;
label_495208:
    // 0x495208: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x495208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_49520c:
    // 0x49520c: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x49520cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_495210:
    // 0x495210: 0x24a55500  addiu       $a1, $a1, 0x5500
    ctx->pc = 0x495210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21760));
label_495214:
    // 0x495214: 0xc115c24  jal         func_457090
label_495218:
    if (ctx->pc == 0x495218u) {
        ctx->pc = 0x49521Cu;
        goto label_49521c;
    }
    ctx->pc = 0x495214u;
    SET_GPR_U32(ctx, 31, 0x49521Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x495214u, 0x49521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49521Cu;
label_49521c:
    // 0x49521c: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x49521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_495220:
    // 0x495220: 0x8fa20408  lw          $v0, 0x408($sp)
    ctx->pc = 0x495220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
label_495224:
    // 0x495224: 0x40f809  jalr        $v0
label_495228:
    if (ctx->pc == 0x495228u) {
        ctx->pc = 0x49522Cu;
        goto label_49522c;
    }
    ctx->pc = 0x495224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49522Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495224u, 0x49522Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49522Cu;
label_49522c:
    // 0x49522c: 0xaf82b758  sw          $v0, -0x48A8($gp)
    ctx->pc = 0x49522cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948696), GPR_U32(ctx, 2));
label_495230:
    // 0x495230: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x495230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_495234:
    // 0x495234: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_495238:
    if (ctx->pc == 0x495238u) {
        ctx->pc = 0x49523Cu;
        goto label_49523c;
    }
    ctx->pc = 0x495234u;
    {
        const bool branch_taken_0x495234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495234) {
            ctx->pc = 0x495244u;
            goto label_495244;
        }
    }
    ctx->pc = 0x49523Cu;
label_49523c:
    // 0x49523c: 0xd  break       0
    ctx->pc = 0x49523cu;
    runtime->handleBreak(rdram, ctx);
label_495240:
    // 0x495240: 0x0  nop
    ctx->pc = 0x495240u;
    // NOP
label_495244:
    // 0x495244: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x495244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_495248:
    // 0x495248: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_49524c:
    // 0x49524c: 0xc11392c  jal         func_44E4B0
label_495250:
    if (ctx->pc == 0x495250u) {
        ctx->pc = 0x495254u;
        goto label_495254;
    }
    ctx->pc = 0x49524Cu;
    SET_GPR_U32(ctx, 31, 0x495254u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x49524Cu, 0x495254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495254u;
label_495254:
    // 0x495254: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_495258:
    if (ctx->pc == 0x495258u) {
        ctx->pc = 0x49525Cu;
        goto label_49525c;
    }
    ctx->pc = 0x495254u;
    {
        const bool branch_taken_0x495254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x495254) {
            ctx->pc = 0x495268u;
            goto label_495268;
        }
    }
    ctx->pc = 0x49525Cu;
label_49525c:
    // 0x49525c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x49525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495260:
    // 0x495260: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_495264:
    if (ctx->pc == 0x495264u) {
        ctx->pc = 0x495268u;
        goto label_495268;
    }
    ctx->pc = 0x495260u;
    {
        const bool branch_taken_0x495260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495260) {
            ctx->pc = 0x4954F0u;
            goto label_4954f0;
        }
    }
    ctx->pc = 0x495268u;
label_495268:
    // 0x495268: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x495268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_49526c:
    // 0x49526c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_495270:
    if (ctx->pc == 0x495270u) {
        ctx->pc = 0x495274u;
        goto label_495274;
    }
    ctx->pc = 0x49526Cu;
    {
        const bool branch_taken_0x49526c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49526c) {
            ctx->pc = 0x495280u;
            goto label_495280;
        }
    }
    ctx->pc = 0x495274u;
label_495274:
    // 0x495274: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x495274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495278:
    // 0x495278: 0x10000002  b           . + 4 + (0x2 << 2)
label_49527c:
    if (ctx->pc == 0x49527Cu) {
        ctx->pc = 0x495280u;
        goto label_495280;
    }
    ctx->pc = 0x495278u;
    {
        const bool branch_taken_0x495278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495278) {
            ctx->pc = 0x495284u;
            goto label_495284;
        }
    }
    ctx->pc = 0x495280u;
label_495280:
    // 0x495280: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x495280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495284:
    // 0x495284: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x495284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_495288:
    // 0x495288: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_49528c:
    if (ctx->pc == 0x49528Cu) {
        ctx->pc = 0x495290u;
        goto label_495290;
    }
    ctx->pc = 0x495288u;
    {
        const bool branch_taken_0x495288 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x495288) {
            ctx->pc = 0x495338u;
            goto label_495338;
        }
    }
    ctx->pc = 0x495290u;
label_495290:
    // 0x495290: 0x8f82b75c  lw          $v0, -0x48A4($gp)
    ctx->pc = 0x495290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948700)));
label_495294:
    // 0x495294: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_495298:
    if (ctx->pc == 0x495298u) {
        ctx->pc = 0x49529Cu;
        goto label_49529c;
    }
    ctx->pc = 0x495294u;
    {
        const bool branch_taken_0x495294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495294) {
            ctx->pc = 0x495338u;
            goto label_495338;
        }
    }
    ctx->pc = 0x49529Cu;
label_49529c:
    // 0x49529c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x49529cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4952a0:
    // 0x4952a0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4952a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4952a4:
    // 0x4952a4: 0x27a603f0  addiu       $a2, $sp, 0x3F0
    ctx->pc = 0x4952a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_4952a8:
    // 0x4952a8: 0xc115ee8  jal         func_457BA0
label_4952ac:
    if (ctx->pc == 0x4952ACu) {
        ctx->pc = 0x4952B0u;
        goto label_4952b0;
    }
    ctx->pc = 0x4952A8u;
    SET_GPR_U32(ctx, 31, 0x4952B0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4952A8u, 0x4952B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4952B0u;
label_4952b0:
    // 0x4952b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4952b4:
    if (ctx->pc == 0x4952B4u) {
        ctx->pc = 0x4952B8u;
        goto label_4952b8;
    }
    ctx->pc = 0x4952B0u;
    {
        const bool branch_taken_0x4952b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4952b0) {
            ctx->pc = 0x495338u;
            goto label_495338;
        }
    }
    ctx->pc = 0x4952B8u;
label_4952b8:
    // 0x4952b8: 0x8fa203f8  lw          $v0, 0x3F8($sp)
    ctx->pc = 0x4952b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
label_4952bc:
    // 0x4952bc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4952c0:
    if (ctx->pc == 0x4952C0u) {
        ctx->pc = 0x4952C4u;
        goto label_4952c4;
    }
    ctx->pc = 0x4952BCu;
    {
        const bool branch_taken_0x4952bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4952bc) {
            ctx->pc = 0x495338u;
            goto label_495338;
        }
    }
    ctx->pc = 0x4952C4u;
label_4952c4:
    // 0x4952c4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4952c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4952c8:
    // 0x4952c8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4952c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4952cc:
    // 0x4952cc: 0x8fa603f4  lw          $a2, 0x3F4($sp)
    ctx->pc = 0x4952ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1012)));
label_4952d0:
    // 0x4952d0: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4952d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4952d4:
    // 0x4952d4: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x4952d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_4952d8:
    // 0x4952d8: 0x240801ca  addiu       $t0, $zero, 0x1CA
    ctx->pc = 0x4952d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 458));
label_4952dc:
    // 0x4952dc: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4952dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4952e0:
    // 0x4952e0: 0x25295300  addiu       $t1, $t1, 0x5300
    ctx->pc = 0x4952e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21248));
label_4952e4:
    // 0x4952e4: 0xc113940  jal         func_44E500
label_4952e8:
    if (ctx->pc == 0x4952E8u) {
        ctx->pc = 0x4952ECu;
        goto label_4952ec;
    }
    ctx->pc = 0x4952E4u;
    SET_GPR_U32(ctx, 31, 0x4952ECu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4952E4u, 0x4952ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4952ECu;
label_4952ec:
    // 0x4952ec: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4952ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4952f0:
    // 0x4952f0: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4952f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4952f4:
    // 0x4952f4: 0x24a55550  addiu       $a1, $a1, 0x5550
    ctx->pc = 0x4952f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21840));
label_4952f8:
    // 0x4952f8: 0xc115c24  jal         func_457090
label_4952fc:
    if (ctx->pc == 0x4952FCu) {
        ctx->pc = 0x495300u;
        goto label_495300;
    }
    ctx->pc = 0x4952F8u;
    SET_GPR_U32(ctx, 31, 0x495300u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4952F8u, 0x495300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495300u;
label_495300:
    // 0x495300: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x495300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_495304:
    // 0x495304: 0x8fa203f8  lw          $v0, 0x3F8($sp)
    ctx->pc = 0x495304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
label_495308:
    // 0x495308: 0x40f809  jalr        $v0
label_49530c:
    if (ctx->pc == 0x49530Cu) {
        ctx->pc = 0x495310u;
        goto label_495310;
    }
    ctx->pc = 0x495308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495310u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495308u, 0x495310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495310u;
label_495310:
    // 0x495310: 0xaf82b75c  sw          $v0, -0x48A4($gp)
    ctx->pc = 0x495310u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948700), GPR_U32(ctx, 2));
label_495314:
    // 0x495314: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x495314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_495318:
    // 0x495318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49531c:
    if (ctx->pc == 0x49531Cu) {
        ctx->pc = 0x495320u;
        goto label_495320;
    }
    ctx->pc = 0x495318u;
    {
        const bool branch_taken_0x495318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495318) {
            ctx->pc = 0x495328u;
            goto label_495328;
        }
    }
    ctx->pc = 0x495320u;
label_495320:
    // 0x495320: 0xd  break       0
    ctx->pc = 0x495320u;
    runtime->handleBreak(rdram, ctx);
label_495324:
    // 0x495324: 0x0  nop
    ctx->pc = 0x495324u;
    // NOP
label_495328:
    // 0x495328: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x495328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_49532c:
    // 0x49532c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x49532cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495330:
    // 0x495330: 0xc11392c  jal         func_44E4B0
label_495334:
    if (ctx->pc == 0x495334u) {
        ctx->pc = 0x495338u;
        goto label_495338;
    }
    ctx->pc = 0x495330u;
    SET_GPR_U32(ctx, 31, 0x495338u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x495330u, 0x495338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495338u;
label_495338:
    // 0x495338: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_49533c:
    if (ctx->pc == 0x49533Cu) {
        ctx->pc = 0x495340u;
        goto label_495340;
    }
    ctx->pc = 0x495338u;
    {
        const bool branch_taken_0x495338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x495338) {
            ctx->pc = 0x49534Cu;
            goto label_49534c;
        }
    }
    ctx->pc = 0x495340u;
label_495340:
    // 0x495340: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x495340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495344:
    // 0x495344: 0x1000006a  b           . + 4 + (0x6A << 2)
label_495348:
    if (ctx->pc == 0x495348u) {
        ctx->pc = 0x49534Cu;
        goto label_49534c;
    }
    ctx->pc = 0x495344u;
    {
        const bool branch_taken_0x495344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495344) {
            ctx->pc = 0x4954F0u;
            goto label_4954f0;
        }
    }
    ctx->pc = 0x49534Cu;
label_49534c:
    // 0x49534c: 0x8fa20430  lw          $v0, 0x430($sp)
    ctx->pc = 0x49534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_495350:
    // 0x495350: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_495354:
    if (ctx->pc == 0x495354u) {
        ctx->pc = 0x495358u;
        goto label_495358;
    }
    ctx->pc = 0x495350u;
    {
        const bool branch_taken_0x495350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495350) {
            ctx->pc = 0x495364u;
            goto label_495364;
        }
    }
    ctx->pc = 0x495358u;
label_495358:
    // 0x495358: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x495358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49535c:
    // 0x49535c: 0x10000002  b           . + 4 + (0x2 << 2)
label_495360:
    if (ctx->pc == 0x495360u) {
        ctx->pc = 0x495364u;
        goto label_495364;
    }
    ctx->pc = 0x49535Cu;
    {
        const bool branch_taken_0x49535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49535c) {
            ctx->pc = 0x495368u;
            goto label_495368;
        }
    }
    ctx->pc = 0x495364u;
label_495364:
    // 0x495364: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x495364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495368:
    // 0x495368: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x495368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49536c:
    // 0x49536c: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_495370:
    if (ctx->pc == 0x495370u) {
        ctx->pc = 0x495374u;
        goto label_495374;
    }
    ctx->pc = 0x49536Cu;
    {
        const bool branch_taken_0x49536c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49536c) {
            ctx->pc = 0x49541Cu;
            goto label_49541c;
        }
    }
    ctx->pc = 0x495374u;
label_495374:
    // 0x495374: 0x8f82b760  lw          $v0, -0x48A0($gp)
    ctx->pc = 0x495374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948704)));
label_495378:
    // 0x495378: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_49537c:
    if (ctx->pc == 0x49537Cu) {
        ctx->pc = 0x495380u;
        goto label_495380;
    }
    ctx->pc = 0x495378u;
    {
        const bool branch_taken_0x495378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495378) {
            ctx->pc = 0x49541Cu;
            goto label_49541c;
        }
    }
    ctx->pc = 0x495380u;
label_495380:
    // 0x495380: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x495380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_495384:
    // 0x495384: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x495384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495388:
    // 0x495388: 0x27a603e0  addiu       $a2, $sp, 0x3E0
    ctx->pc = 0x495388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_49538c:
    // 0x49538c: 0xc115ee8  jal         func_457BA0
label_495390:
    if (ctx->pc == 0x495390u) {
        ctx->pc = 0x495394u;
        goto label_495394;
    }
    ctx->pc = 0x49538Cu;
    SET_GPR_U32(ctx, 31, 0x495394u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x49538Cu, 0x495394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495394u;
label_495394:
    // 0x495394: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_495398:
    if (ctx->pc == 0x495398u) {
        ctx->pc = 0x49539Cu;
        goto label_49539c;
    }
    ctx->pc = 0x495394u;
    {
        const bool branch_taken_0x495394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495394) {
            ctx->pc = 0x49541Cu;
            goto label_49541c;
        }
    }
    ctx->pc = 0x49539Cu;
label_49539c:
    // 0x49539c: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x49539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_4953a0:
    // 0x4953a0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4953a4:
    if (ctx->pc == 0x4953A4u) {
        ctx->pc = 0x4953A8u;
        goto label_4953a8;
    }
    ctx->pc = 0x4953A0u;
    {
        const bool branch_taken_0x4953a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4953a0) {
            ctx->pc = 0x49541Cu;
            goto label_49541c;
        }
    }
    ctx->pc = 0x4953A8u;
label_4953a8:
    // 0x4953a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4953a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4953ac:
    // 0x4953ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4953acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4953b0:
    // 0x4953b0: 0x8fa603e4  lw          $a2, 0x3E4($sp)
    ctx->pc = 0x4953b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
label_4953b4:
    // 0x4953b4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4953b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4953b8:
    // 0x4953b8: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x4953b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_4953bc:
    // 0x4953bc: 0x240801cf  addiu       $t0, $zero, 0x1CF
    ctx->pc = 0x4953bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 463));
label_4953c0:
    // 0x4953c0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4953c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4953c4:
    // 0x4953c4: 0x25295300  addiu       $t1, $t1, 0x5300
    ctx->pc = 0x4953c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21248));
label_4953c8:
    // 0x4953c8: 0xc113940  jal         func_44E500
label_4953cc:
    if (ctx->pc == 0x4953CCu) {
        ctx->pc = 0x4953D0u;
        goto label_4953d0;
    }
    ctx->pc = 0x4953C8u;
    SET_GPR_U32(ctx, 31, 0x4953D0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4953C8u, 0x4953D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4953D0u;
label_4953d0:
    // 0x4953d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4953d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4953d4:
    // 0x4953d4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4953d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4953d8:
    // 0x4953d8: 0x24a555a0  addiu       $a1, $a1, 0x55A0
    ctx->pc = 0x4953d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
label_4953dc:
    // 0x4953dc: 0xc115c24  jal         func_457090
label_4953e0:
    if (ctx->pc == 0x4953E0u) {
        ctx->pc = 0x4953E4u;
        goto label_4953e4;
    }
    ctx->pc = 0x4953DCu;
    SET_GPR_U32(ctx, 31, 0x4953E4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4953DCu, 0x4953E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4953E4u;
label_4953e4:
    // 0x4953e4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4953e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4953e8:
    // 0x4953e8: 0x8fa203e8  lw          $v0, 0x3E8($sp)
    ctx->pc = 0x4953e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_4953ec:
    // 0x4953ec: 0x40f809  jalr        $v0
label_4953f0:
    if (ctx->pc == 0x4953F0u) {
        ctx->pc = 0x4953F4u;
        goto label_4953f4;
    }
    ctx->pc = 0x4953ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4953F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4953ECu, 0x4953F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4953F4u;
label_4953f4:
    // 0x4953f4: 0xaf82b760  sw          $v0, -0x48A0($gp)
    ctx->pc = 0x4953f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948704), GPR_U32(ctx, 2));
label_4953f8:
    // 0x4953f8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4953f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4953fc:
    // 0x4953fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_495400:
    if (ctx->pc == 0x495400u) {
        ctx->pc = 0x495404u;
        goto label_495404;
    }
    ctx->pc = 0x4953FCu;
    {
        const bool branch_taken_0x4953fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4953fc) {
            ctx->pc = 0x49540Cu;
            goto label_49540c;
        }
    }
    ctx->pc = 0x495404u;
label_495404:
    // 0x495404: 0xd  break       0
    ctx->pc = 0x495404u;
    runtime->handleBreak(rdram, ctx);
label_495408:
    // 0x495408: 0x0  nop
    ctx->pc = 0x495408u;
    // NOP
label_49540c:
    // 0x49540c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x49540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_495410:
    // 0x495410: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495414:
    // 0x495414: 0xc11392c  jal         func_44E4B0
label_495418:
    if (ctx->pc == 0x495418u) {
        ctx->pc = 0x49541Cu;
        goto label_49541c;
    }
    ctx->pc = 0x495414u;
    SET_GPR_U32(ctx, 31, 0x49541Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x495414u, 0x49541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49541Cu;
label_49541c:
    // 0x49541c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_495420:
    if (ctx->pc == 0x495420u) {
        ctx->pc = 0x495424u;
        goto label_495424;
    }
    ctx->pc = 0x49541Cu;
    {
        const bool branch_taken_0x49541c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49541c) {
            ctx->pc = 0x495430u;
            goto label_495430;
        }
    }
    ctx->pc = 0x495424u;
label_495424:
    // 0x495424: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x495424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495428:
    // 0x495428: 0x10000031  b           . + 4 + (0x31 << 2)
label_49542c:
    if (ctx->pc == 0x49542Cu) {
        ctx->pc = 0x495430u;
        goto label_495430;
    }
    ctx->pc = 0x495428u;
    {
        const bool branch_taken_0x495428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495428) {
            ctx->pc = 0x4954F0u;
            goto label_4954f0;
        }
    }
    ctx->pc = 0x495430u;
label_495430:
    // 0x495430: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x495430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_495434:
    // 0x495434: 0x8fa50430  lw          $a1, 0x430($sp)
    ctx->pc = 0x495434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
label_495438:
    // 0x495438: 0xc040304  jal         func_100C10
label_49543c:
    if (ctx->pc == 0x49543Cu) {
        ctx->pc = 0x495440u;
        goto label_495440;
    }
    ctx->pc = 0x495438u;
    SET_GPR_U32(ctx, 31, 0x495440u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x495438u, 0x495440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495440u;
label_495440:
    // 0x495440: 0x8f84c164  lw          $a0, -0x3E9C($gp)
    ctx->pc = 0x495440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951268)));
label_495444:
    // 0x495444: 0x27a503c0  addiu       $a1, $sp, 0x3C0
    ctx->pc = 0x495444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_495448:
    // 0x495448: 0xc11bd88  jal         func_46F620
label_49544c:
    if (ctx->pc == 0x49544Cu) {
        ctx->pc = 0x495450u;
        goto label_495450;
    }
    ctx->pc = 0x495448u;
    SET_GPR_U32(ctx, 31, 0x495450u);
    ctx->pc = 0x46F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F620u, 0x495448u, 0x495450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495450u;
label_495450:
    // 0x495450: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x495450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_495454:
    // 0x495454: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495458:
    // 0x495458: 0xc0406d0  jal         func_101B40
label_49545c:
    if (ctx->pc == 0x49545Cu) {
        ctx->pc = 0x495460u;
        goto label_495460;
    }
    ctx->pc = 0x495458u;
    SET_GPR_U32(ctx, 31, 0x495460u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x495458u, 0x495460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495460u;
label_495460:
    // 0x495460: 0x27a403c0  addiu       $a0, $sp, 0x3C0
    ctx->pc = 0x495460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_495464:
    // 0x495464: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495468:
    // 0x495468: 0xc0402d4  jal         func_100B50
label_49546c:
    if (ctx->pc == 0x49546Cu) {
        ctx->pc = 0x495470u;
        goto label_495470;
    }
    ctx->pc = 0x495468u;
    SET_GPR_U32(ctx, 31, 0x495470u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x495468u, 0x495470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495470u;
label_495470:
    // 0x495470: 0x8fa20440  lw          $v0, 0x440($sp)
    ctx->pc = 0x495470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
label_495474:
    // 0x495474: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x495474u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_495478:
    // 0x495478: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_49547c:
    if (ctx->pc == 0x49547Cu) {
        ctx->pc = 0x495480u;
        goto label_495480;
    }
    ctx->pc = 0x495478u;
    {
        const bool branch_taken_0x495478 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x495478) {
            ctx->pc = 0x495498u;
            goto label_495498;
        }
    }
    ctx->pc = 0x495480u;
label_495480:
    // 0x495480: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x495480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_495484:
    // 0x495484: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x495484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_495488:
    // 0x495488: 0x24a555e8  addiu       $a1, $a1, 0x55E8
    ctx->pc = 0x495488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21992));
label_49548c:
    // 0x49548c: 0x8fa60440  lw          $a2, 0x440($sp)
    ctx->pc = 0x49548cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
label_495490:
    // 0x495490: 0xc119600  jal         func_465800
label_495494:
    if (ctx->pc == 0x495494u) {
        ctx->pc = 0x495498u;
        goto label_495498;
    }
    ctx->pc = 0x495490u;
    SET_GPR_U32(ctx, 31, 0x495498u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x495490u, 0x495498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495498u;
label_495498:
    // 0x495498: 0x8fa20450  lw          $v0, 0x450($sp)
    ctx->pc = 0x495498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_49549c:
    // 0x49549c: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x49549cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_4954a0:
    // 0x4954a0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_4954a4:
    if (ctx->pc == 0x4954A4u) {
        ctx->pc = 0x4954A8u;
        goto label_4954a8;
    }
    ctx->pc = 0x4954A0u;
    {
        const bool branch_taken_0x4954a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4954a0) {
            ctx->pc = 0x4954C0u;
            goto label_4954c0;
        }
    }
    ctx->pc = 0x4954A8u;
label_4954a8:
    // 0x4954a8: 0x8fa20450  lw          $v0, 0x450($sp)
    ctx->pc = 0x4954a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_4954ac:
    // 0x4954ac: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x4954acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4954b0:
    // 0x4954b0: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x4954b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4954b4:
    // 0x4954b4: 0x2785b768  addiu       $a1, $gp, -0x4898
    ctx->pc = 0x4954b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948712));
label_4954b8:
    // 0x4954b8: 0xc119600  jal         func_465800
label_4954bc:
    if (ctx->pc == 0x4954BCu) {
        ctx->pc = 0x4954C0u;
        goto label_4954c0;
    }
    ctx->pc = 0x4954B8u;
    SET_GPR_U32(ctx, 31, 0x4954C0u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x4954B8u, 0x4954C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4954C0u;
label_4954c0:
    // 0x4954c0: 0x8fa40410  lw          $a0, 0x410($sp)
    ctx->pc = 0x4954c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
label_4954c4:
    // 0x4954c4: 0x8fa50420  lw          $a1, 0x420($sp)
    ctx->pc = 0x4954c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
label_4954c8:
    // 0x4954c8: 0x27a603d0  addiu       $a2, $sp, 0x3D0
    ctx->pc = 0x4954c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4954cc:
    // 0x4954cc: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x4954ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_4954d0:
    // 0x4954d0: 0x40f809  jalr        $v0
label_4954d4:
    if (ctx->pc == 0x4954D4u) {
        ctx->pc = 0x4954D8u;
        goto label_4954d8;
    }
    ctx->pc = 0x4954D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4954D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4954D0u, 0x4954D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4954D8u;
label_4954d8:
    // 0x4954d8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x4954d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4954dc:
    // 0x4954dc: 0x27a403d0  addiu       $a0, $sp, 0x3D0
    ctx->pc = 0x4954dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_4954e0:
    // 0x4954e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4954e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4954e4:
    // 0x4954e4: 0xc0406a0  jal         func_101A80
label_4954e8:
    if (ctx->pc == 0x4954E8u) {
        ctx->pc = 0x4954ECu;
        goto label_4954ec;
    }
    ctx->pc = 0x4954E4u;
    SET_GPR_U32(ctx, 31, 0x4954ECu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x4954E4u, 0x4954ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4954ECu;
label_4954ec:
    // 0x4954ec: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4954ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4954f0:
    // 0x4954f0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4954f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4954f4:
    // 0x4954f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4954f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4954f8:
    // 0x4954f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4954f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4954fc:
    // 0x4954fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4954fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_495500:
    // 0x495500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x495500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_495504:
    // 0x495504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x495504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_495508:
    // 0x495508: 0x27bd0460  addiu       $sp, $sp, 0x460
    ctx->pc = 0x495508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_49550c:
    // 0x49550c: 0x3e00008  jr          $ra
label_495510:
    if (ctx->pc == 0x495510u) {
        ctx->pc = 0x495514u;
        goto label_495514;
    }
    ctx->pc = 0x49550Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49550Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495514u;
label_495514:
    // 0x495514: 0x0  nop
    ctx->pc = 0x495514u;
    // NOP
label_495518:
    // 0x495518: 0x0  nop
    ctx->pc = 0x495518u;
    // NOP
label_49551c:
    // 0x49551c: 0x0  nop
    ctx->pc = 0x49551cu;
    // NOP
    ctx->pc = 0x495520u;
}
