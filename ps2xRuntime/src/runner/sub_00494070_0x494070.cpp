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

// Function: sub_00494070
// Address: 0x494070 - 0x494370
void sub_00494070_0x494070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494070_0x494070");
#endif

    switch (ctx->pc) {
        case 0x494070u: goto label_494070;
        case 0x494074u: goto label_494074;
        case 0x494078u: goto label_494078;
        case 0x49407cu: goto label_49407c;
        case 0x494080u: goto label_494080;
        case 0x494084u: goto label_494084;
        case 0x494088u: goto label_494088;
        case 0x49408cu: goto label_49408c;
        case 0x494090u: goto label_494090;
        case 0x494094u: goto label_494094;
        case 0x494098u: goto label_494098;
        case 0x49409cu: goto label_49409c;
        case 0x4940a0u: goto label_4940a0;
        case 0x4940a4u: goto label_4940a4;
        case 0x4940a8u: goto label_4940a8;
        case 0x4940acu: goto label_4940ac;
        case 0x4940b0u: goto label_4940b0;
        case 0x4940b4u: goto label_4940b4;
        case 0x4940b8u: goto label_4940b8;
        case 0x4940bcu: goto label_4940bc;
        case 0x4940c0u: goto label_4940c0;
        case 0x4940c4u: goto label_4940c4;
        case 0x4940c8u: goto label_4940c8;
        case 0x4940ccu: goto label_4940cc;
        case 0x4940d0u: goto label_4940d0;
        case 0x4940d4u: goto label_4940d4;
        case 0x4940d8u: goto label_4940d8;
        case 0x4940dcu: goto label_4940dc;
        case 0x4940e0u: goto label_4940e0;
        case 0x4940e4u: goto label_4940e4;
        case 0x4940e8u: goto label_4940e8;
        case 0x4940ecu: goto label_4940ec;
        case 0x4940f0u: goto label_4940f0;
        case 0x4940f4u: goto label_4940f4;
        case 0x4940f8u: goto label_4940f8;
        case 0x4940fcu: goto label_4940fc;
        case 0x494100u: goto label_494100;
        case 0x494104u: goto label_494104;
        case 0x494108u: goto label_494108;
        case 0x49410cu: goto label_49410c;
        case 0x494110u: goto label_494110;
        case 0x494114u: goto label_494114;
        case 0x494118u: goto label_494118;
        case 0x49411cu: goto label_49411c;
        case 0x494120u: goto label_494120;
        case 0x494124u: goto label_494124;
        case 0x494128u: goto label_494128;
        case 0x49412cu: goto label_49412c;
        case 0x494130u: goto label_494130;
        case 0x494134u: goto label_494134;
        case 0x494138u: goto label_494138;
        case 0x49413cu: goto label_49413c;
        case 0x494140u: goto label_494140;
        case 0x494144u: goto label_494144;
        case 0x494148u: goto label_494148;
        case 0x49414cu: goto label_49414c;
        case 0x494150u: goto label_494150;
        case 0x494154u: goto label_494154;
        case 0x494158u: goto label_494158;
        case 0x49415cu: goto label_49415c;
        case 0x494160u: goto label_494160;
        case 0x494164u: goto label_494164;
        case 0x494168u: goto label_494168;
        case 0x49416cu: goto label_49416c;
        case 0x494170u: goto label_494170;
        case 0x494174u: goto label_494174;
        case 0x494178u: goto label_494178;
        case 0x49417cu: goto label_49417c;
        case 0x494180u: goto label_494180;
        case 0x494184u: goto label_494184;
        case 0x494188u: goto label_494188;
        case 0x49418cu: goto label_49418c;
        case 0x494190u: goto label_494190;
        case 0x494194u: goto label_494194;
        case 0x494198u: goto label_494198;
        case 0x49419cu: goto label_49419c;
        case 0x4941a0u: goto label_4941a0;
        case 0x4941a4u: goto label_4941a4;
        case 0x4941a8u: goto label_4941a8;
        case 0x4941acu: goto label_4941ac;
        case 0x4941b0u: goto label_4941b0;
        case 0x4941b4u: goto label_4941b4;
        case 0x4941b8u: goto label_4941b8;
        case 0x4941bcu: goto label_4941bc;
        case 0x4941c0u: goto label_4941c0;
        case 0x4941c4u: goto label_4941c4;
        case 0x4941c8u: goto label_4941c8;
        case 0x4941ccu: goto label_4941cc;
        case 0x4941d0u: goto label_4941d0;
        case 0x4941d4u: goto label_4941d4;
        case 0x4941d8u: goto label_4941d8;
        case 0x4941dcu: goto label_4941dc;
        case 0x4941e0u: goto label_4941e0;
        case 0x4941e4u: goto label_4941e4;
        case 0x4941e8u: goto label_4941e8;
        case 0x4941ecu: goto label_4941ec;
        case 0x4941f0u: goto label_4941f0;
        case 0x4941f4u: goto label_4941f4;
        case 0x4941f8u: goto label_4941f8;
        case 0x4941fcu: goto label_4941fc;
        case 0x494200u: goto label_494200;
        case 0x494204u: goto label_494204;
        case 0x494208u: goto label_494208;
        case 0x49420cu: goto label_49420c;
        case 0x494210u: goto label_494210;
        case 0x494214u: goto label_494214;
        case 0x494218u: goto label_494218;
        case 0x49421cu: goto label_49421c;
        case 0x494220u: goto label_494220;
        case 0x494224u: goto label_494224;
        case 0x494228u: goto label_494228;
        case 0x49422cu: goto label_49422c;
        case 0x494230u: goto label_494230;
        case 0x494234u: goto label_494234;
        case 0x494238u: goto label_494238;
        case 0x49423cu: goto label_49423c;
        case 0x494240u: goto label_494240;
        case 0x494244u: goto label_494244;
        case 0x494248u: goto label_494248;
        case 0x49424cu: goto label_49424c;
        case 0x494250u: goto label_494250;
        case 0x494254u: goto label_494254;
        case 0x494258u: goto label_494258;
        case 0x49425cu: goto label_49425c;
        case 0x494260u: goto label_494260;
        case 0x494264u: goto label_494264;
        case 0x494268u: goto label_494268;
        case 0x49426cu: goto label_49426c;
        case 0x494270u: goto label_494270;
        case 0x494274u: goto label_494274;
        case 0x494278u: goto label_494278;
        case 0x49427cu: goto label_49427c;
        case 0x494280u: goto label_494280;
        case 0x494284u: goto label_494284;
        case 0x494288u: goto label_494288;
        case 0x49428cu: goto label_49428c;
        case 0x494290u: goto label_494290;
        case 0x494294u: goto label_494294;
        case 0x494298u: goto label_494298;
        case 0x49429cu: goto label_49429c;
        case 0x4942a0u: goto label_4942a0;
        case 0x4942a4u: goto label_4942a4;
        case 0x4942a8u: goto label_4942a8;
        case 0x4942acu: goto label_4942ac;
        case 0x4942b0u: goto label_4942b0;
        case 0x4942b4u: goto label_4942b4;
        case 0x4942b8u: goto label_4942b8;
        case 0x4942bcu: goto label_4942bc;
        case 0x4942c0u: goto label_4942c0;
        case 0x4942c4u: goto label_4942c4;
        case 0x4942c8u: goto label_4942c8;
        case 0x4942ccu: goto label_4942cc;
        case 0x4942d0u: goto label_4942d0;
        case 0x4942d4u: goto label_4942d4;
        case 0x4942d8u: goto label_4942d8;
        case 0x4942dcu: goto label_4942dc;
        case 0x4942e0u: goto label_4942e0;
        case 0x4942e4u: goto label_4942e4;
        case 0x4942e8u: goto label_4942e8;
        case 0x4942ecu: goto label_4942ec;
        case 0x4942f0u: goto label_4942f0;
        case 0x4942f4u: goto label_4942f4;
        case 0x4942f8u: goto label_4942f8;
        case 0x4942fcu: goto label_4942fc;
        case 0x494300u: goto label_494300;
        case 0x494304u: goto label_494304;
        case 0x494308u: goto label_494308;
        case 0x49430cu: goto label_49430c;
        case 0x494310u: goto label_494310;
        case 0x494314u: goto label_494314;
        case 0x494318u: goto label_494318;
        case 0x49431cu: goto label_49431c;
        case 0x494320u: goto label_494320;
        case 0x494324u: goto label_494324;
        case 0x494328u: goto label_494328;
        case 0x49432cu: goto label_49432c;
        case 0x494330u: goto label_494330;
        case 0x494334u: goto label_494334;
        case 0x494338u: goto label_494338;
        case 0x49433cu: goto label_49433c;
        case 0x494340u: goto label_494340;
        case 0x494344u: goto label_494344;
        case 0x494348u: goto label_494348;
        case 0x49434cu: goto label_49434c;
        case 0x494350u: goto label_494350;
        case 0x494354u: goto label_494354;
        case 0x494358u: goto label_494358;
        case 0x49435cu: goto label_49435c;
        case 0x494360u: goto label_494360;
        case 0x494364u: goto label_494364;
        case 0x494368u: goto label_494368;
        case 0x49436cu: goto label_49436c;
        default: break;
    }

    ctx->pc = 0x494070u;

label_494070:
    // 0x494070: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x494070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_494074:
    // 0x494074: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x494074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_494078:
    // 0x494078: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x494078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49407c:
    // 0x49407c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_494080:
    // 0x494080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x494080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_494084:
    // 0x494084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x494084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_494088:
    // 0x494088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x494088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49408c:
    // 0x49408c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x49408cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_494090:
    // 0x494090: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x494090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_494094:
    // 0x494094: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x494094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494098:
    // 0x494098: 0x8f82c138  lw          $v0, -0x3EC8($gp)
    ctx->pc = 0x494098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951224)));
label_49409c:
    // 0x49409c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4940a0:
    if (ctx->pc == 0x4940A0u) {
        ctx->pc = 0x4940A4u;
        goto label_4940a4;
    }
    ctx->pc = 0x49409Cu;
    {
        const bool branch_taken_0x49409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49409c) {
            ctx->pc = 0x4940B4u;
            goto label_4940b4;
        }
    }
    ctx->pc = 0x4940A4u;
label_4940a4:
    // 0x4940a4: 0x8f84c138  lw          $a0, -0x3EC8($gp)
    ctx->pc = 0x4940a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951224)));
label_4940a8:
    // 0x4940a8: 0xc119c5c  jal         func_467170
label_4940ac:
    if (ctx->pc == 0x4940ACu) {
        ctx->pc = 0x4940B0u;
        goto label_4940b0;
    }
    ctx->pc = 0x4940A8u;
    SET_GPR_U32(ctx, 31, 0x4940B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x4940A8u, 0x4940B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4940B0u;
label_4940b0:
    // 0x4940b0: 0xaf80c138  sw          $zero, -0x3EC8($gp)
    ctx->pc = 0x4940b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951224), GPR_U32(ctx, 0));
label_4940b4:
    // 0x4940b4: 0x8f82c10c  lw          $v0, -0x3EF4($gp)
    ctx->pc = 0x4940b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951180)));
label_4940b8:
    // 0x4940b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4940bc:
    if (ctx->pc == 0x4940BCu) {
        ctx->pc = 0x4940C0u;
        goto label_4940c0;
    }
    ctx->pc = 0x4940B8u;
    {
        const bool branch_taken_0x4940b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4940b8) {
            ctx->pc = 0x4940CCu;
            goto label_4940cc;
        }
    }
    ctx->pc = 0x4940C0u;
label_4940c0:
    // 0x4940c0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4940c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4940c4:
    // 0x4940c4: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_4940c8:
    if (ctx->pc == 0x4940C8u) {
        ctx->pc = 0x4940CCu;
        goto label_4940cc;
    }
    ctx->pc = 0x4940C4u;
    {
        const bool branch_taken_0x4940c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4940c4) {
            ctx->pc = 0x49434Cu;
            goto label_49434c;
        }
    }
    ctx->pc = 0x4940CCu;
label_4940cc:
    // 0x4940cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x4940ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_4940d0:
    // 0x4940d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4940d4:
    if (ctx->pc == 0x4940D4u) {
        ctx->pc = 0x4940D8u;
        goto label_4940d8;
    }
    ctx->pc = 0x4940D0u;
    {
        const bool branch_taken_0x4940d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4940d0) {
            ctx->pc = 0x4940E4u;
            goto label_4940e4;
        }
    }
    ctx->pc = 0x4940D8u;
label_4940d8:
    // 0x4940d8: 0x8f82c10c  lw          $v0, -0x3EF4($gp)
    ctx->pc = 0x4940d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951180)));
label_4940dc:
    // 0x4940dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_4940e0:
    if (ctx->pc == 0x4940E0u) {
        ctx->pc = 0x4940E4u;
        goto label_4940e4;
    }
    ctx->pc = 0x4940DCu;
    {
        const bool branch_taken_0x4940dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4940dc) {
            ctx->pc = 0x4940F0u;
            goto label_4940f0;
        }
    }
    ctx->pc = 0x4940E4u;
label_4940e4:
    // 0x4940e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4940e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4940e8:
    // 0x4940e8: 0x10000098  b           . + 4 + (0x98 << 2)
label_4940ec:
    if (ctx->pc == 0x4940ECu) {
        ctx->pc = 0x4940F0u;
        goto label_4940f0;
    }
    ctx->pc = 0x4940E8u;
    {
        const bool branch_taken_0x4940e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4940e8) {
            ctx->pc = 0x49434Cu;
            goto label_49434c;
        }
    }
    ctx->pc = 0x4940F0u;
label_4940f0:
    // 0x4940f0: 0xc12242c  jal         func_4890B0
label_4940f4:
    if (ctx->pc == 0x4940F4u) {
        ctx->pc = 0x4940F8u;
        goto label_4940f8;
    }
    ctx->pc = 0x4940F0u;
    SET_GPR_U32(ctx, 31, 0x4940F8u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x4940F0u, 0x4940F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4940F8u;
label_4940f8:
    // 0x4940f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4940f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4940fc:
    // 0x4940fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4940fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_494100:
    // 0x494100: 0x8c50e880  lw          $s0, -0x1780($v0)
    ctx->pc = 0x494100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
label_494104:
    // 0x494104: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_494108:
    if (ctx->pc == 0x494108u) {
        ctx->pc = 0x49410Cu;
        goto label_49410c;
    }
    ctx->pc = 0x494104u;
    {
        const bool branch_taken_0x494104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x494104) {
            ctx->pc = 0x494124u;
            goto label_494124;
        }
    }
    ctx->pc = 0x49410Cu;
label_49410c:
    // 0x49410c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49410cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494110:
    // 0x494110: 0xc12242c  jal         func_4890B0
label_494114:
    if (ctx->pc == 0x494114u) {
        ctx->pc = 0x494118u;
        goto label_494118;
    }
    ctx->pc = 0x494110u;
    SET_GPR_U32(ctx, 31, 0x494118u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x494110u, 0x494118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494118u;
label_494118:
    // 0x494118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x494118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49411c:
    // 0x49411c: 0x1000000e  b           . + 4 + (0xE << 2)
label_494120:
    if (ctx->pc == 0x494120u) {
        ctx->pc = 0x494124u;
        goto label_494124;
    }
    ctx->pc = 0x49411Cu;
    {
        const bool branch_taken_0x49411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49411c) {
            ctx->pc = 0x494158u;
            goto label_494158;
        }
    }
    ctx->pc = 0x494124u;
label_494124:
    // 0x494124: 0xc11c204  jal         func_470810
label_494128:
    if (ctx->pc == 0x494128u) {
        ctx->pc = 0x49412Cu;
        goto label_49412c;
    }
    ctx->pc = 0x494124u;
    SET_GPR_U32(ctx, 31, 0x49412Cu);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x494124u, 0x49412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49412Cu;
label_49412c:
    // 0x49412c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_494130:
    if (ctx->pc == 0x494130u) {
        ctx->pc = 0x494134u;
        goto label_494134;
    }
    ctx->pc = 0x49412Cu;
    {
        const bool branch_taken_0x49412c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x49412c) {
            ctx->pc = 0x49414Cu;
            goto label_49414c;
        }
    }
    ctx->pc = 0x494134u;
label_494134:
    // 0x494134: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x494134u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_494138:
    // 0x494138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x494138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49413c:
    // 0x49413c: 0xc105f9e  jal         func_417E78
label_494140:
    if (ctx->pc == 0x494140u) {
        ctx->pc = 0x494144u;
        goto label_494144;
    }
    ctx->pc = 0x49413Cu;
    SET_GPR_U32(ctx, 31, 0x494144u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x49413Cu, 0x494144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494144u;
label_494144:
    // 0x494144: 0x10000004  b           . + 4 + (0x4 << 2)
label_494148:
    if (ctx->pc == 0x494148u) {
        ctx->pc = 0x49414Cu;
        goto label_49414c;
    }
    ctx->pc = 0x494144u;
    {
        const bool branch_taken_0x494144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494144) {
            ctx->pc = 0x494158u;
            goto label_494158;
        }
    }
    ctx->pc = 0x49414Cu;
label_49414c:
    // 0x49414c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x49414cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494150:
    // 0x494150: 0xc11c448  jal         func_471120
label_494154:
    if (ctx->pc == 0x494154u) {
        ctx->pc = 0x494158u;
        goto label_494158;
    }
    ctx->pc = 0x494150u;
    SET_GPR_U32(ctx, 31, 0x494158u);
    ctx->pc = 0x471120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471120u, 0x494150u, 0x494158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494158u;
label_494158:
    // 0x494158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49415c:
    // 0x49415c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x49415cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_494160:
    // 0x494160: 0x10000061  b           . + 4 + (0x61 << 2)
label_494164:
    if (ctx->pc == 0x494164u) {
        ctx->pc = 0x494168u;
        goto label_494168;
    }
    ctx->pc = 0x494160u;
    {
        const bool branch_taken_0x494160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494160) {
            ctx->pc = 0x4942E8u;
            goto label_4942e8;
        }
    }
    ctx->pc = 0x494168u;
label_494168:
    // 0x494168: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x494168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49416c:
    // 0x49416c: 0xaf82c134  sw          $v0, -0x3ECC($gp)
    ctx->pc = 0x49416cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951220), GPR_U32(ctx, 2));
label_494170:
    // 0x494170: 0xc116edc  jal         func_45BB70
label_494174:
    if (ctx->pc == 0x494174u) {
        ctx->pc = 0x494178u;
        goto label_494178;
    }
    ctx->pc = 0x494170u;
    SET_GPR_U32(ctx, 31, 0x494178u);
    ctx->pc = 0x45BB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BB70u, 0x494170u, 0x494178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494178u;
label_494178:
    // 0x494178: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x494178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49417c:
    // 0x49417c: 0xc116ea4  jal         func_45BA90
label_494180:
    if (ctx->pc == 0x494180u) {
        ctx->pc = 0x494184u;
        goto label_494184;
    }
    ctx->pc = 0x49417Cu;
    SET_GPR_U32(ctx, 31, 0x494184u);
    ctx->pc = 0x45BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BA90u, 0x49417Cu, 0x494184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494184u;
label_494184:
    // 0x494184: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x494184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_494188:
    // 0x494188: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_49418c:
    if (ctx->pc == 0x49418Cu) {
        ctx->pc = 0x494190u;
        goto label_494190;
    }
    ctx->pc = 0x494188u;
    {
        const bool branch_taken_0x494188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x494188) {
            ctx->pc = 0x4941B4u;
            goto label_4941b4;
        }
    }
    ctx->pc = 0x494190u;
label_494190:
    // 0x494190: 0x8f84c130  lw          $a0, -0x3ED0($gp)
    ctx->pc = 0x494190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951216)));
label_494194:
    // 0x494194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494198:
    // 0x494198: 0xc116958  jal         func_45A560
label_49419c:
    if (ctx->pc == 0x49419Cu) {
        ctx->pc = 0x4941A0u;
        goto label_4941a0;
    }
    ctx->pc = 0x494198u;
    SET_GPR_U32(ctx, 31, 0x4941A0u);
    ctx->pc = 0x45A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A560u, 0x494198u, 0x4941A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4941A0u;
label_4941a0:
    // 0x4941a0: 0x8f84c130  lw          $a0, -0x3ED0($gp)
    ctx->pc = 0x4941a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951216)));
label_4941a4:
    // 0x4941a4: 0xc1169b4  jal         func_45A6D0
label_4941a8:
    if (ctx->pc == 0x4941A8u) {
        ctx->pc = 0x4941ACu;
        goto label_4941ac;
    }
    ctx->pc = 0x4941A4u;
    SET_GPR_U32(ctx, 31, 0x4941ACu);
    ctx->pc = 0x45A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A6D0u, 0x4941A4u, 0x4941ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4941ACu;
label_4941ac:
    // 0x4941ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_4941b0:
    if (ctx->pc == 0x4941B0u) {
        ctx->pc = 0x4941B4u;
        goto label_4941b4;
    }
    ctx->pc = 0x4941ACu;
    {
        const bool branch_taken_0x4941ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4941ac) {
            ctx->pc = 0x4941BCu;
            goto label_4941bc;
        }
    }
    ctx->pc = 0x4941B4u;
label_4941b4:
    // 0x4941b4: 0xc116f3c  jal         func_45BCF0
label_4941b8:
    if (ctx->pc == 0x4941B8u) {
        ctx->pc = 0x4941BCu;
        goto label_4941bc;
    }
    ctx->pc = 0x4941B4u;
    SET_GPR_U32(ctx, 31, 0x4941BCu);
    ctx->pc = 0x45BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45BCF0u, 0x4941B4u, 0x4941BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4941BCu;
label_4941bc:
    // 0x4941bc: 0x8f83c134  lw          $v1, -0x3ECC($gp)
    ctx->pc = 0x4941bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951220)));
label_4941c0:
    // 0x4941c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4941c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4941c4:
    // 0x4941c4: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_4941c8:
    if (ctx->pc == 0x4941C8u) {
        ctx->pc = 0x4941CCu;
        goto label_4941cc;
    }
    ctx->pc = 0x4941C4u;
    {
        const bool branch_taken_0x4941c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4941c4) {
            ctx->pc = 0x494218u;
            goto label_494218;
        }
    }
    ctx->pc = 0x4941CCu;
label_4941cc:
    // 0x4941cc: 0x8f83c134  lw          $v1, -0x3ECC($gp)
    ctx->pc = 0x4941ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951220)));
label_4941d0:
    // 0x4941d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4941d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4941d4:
    // 0x4941d4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_4941d8:
    if (ctx->pc == 0x4941D8u) {
        ctx->pc = 0x4941DCu;
        goto label_4941dc;
    }
    ctx->pc = 0x4941D4u;
    {
        const bool branch_taken_0x4941d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4941d4) {
            ctx->pc = 0x494210u;
            goto label_494210;
        }
    }
    ctx->pc = 0x4941DCu;
label_4941dc:
    // 0x4941dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4941dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4941e0:
    // 0x4941e0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4941e4:
    if (ctx->pc == 0x4941E4u) {
        ctx->pc = 0x4941E8u;
        goto label_4941e8;
    }
    ctx->pc = 0x4941E0u;
    {
        const bool branch_taken_0x4941e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4941e0) {
            ctx->pc = 0x494204u;
            goto label_494204;
        }
    }
    ctx->pc = 0x4941E8u;
label_4941e8:
    // 0x4941e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4941ec:
    if (ctx->pc == 0x4941ECu) {
        ctx->pc = 0x4941F0u;
        goto label_4941f0;
    }
    ctx->pc = 0x4941E8u;
    {
        const bool branch_taken_0x4941e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4941e8) {
            ctx->pc = 0x4941F8u;
            goto label_4941f8;
        }
    }
    ctx->pc = 0x4941F0u;
label_4941f0:
    // 0x4941f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_4941f4:
    if (ctx->pc == 0x4941F4u) {
        ctx->pc = 0x4941F8u;
        goto label_4941f8;
    }
    ctx->pc = 0x4941F0u;
    {
        const bool branch_taken_0x4941f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4941f0) {
            ctx->pc = 0x494214u;
            goto label_494214;
        }
    }
    ctx->pc = 0x4941F8u;
label_4941f8:
    // 0x4941f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4941f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4941fc:
    // 0x4941fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_494200:
    if (ctx->pc == 0x494200u) {
        ctx->pc = 0x494204u;
        goto label_494204;
    }
    ctx->pc = 0x4941FCu;
    {
        const bool branch_taken_0x4941fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4941fc) {
            ctx->pc = 0x494214u;
            goto label_494214;
        }
    }
    ctx->pc = 0x494204u;
label_494204:
    // 0x494204: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x494204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494208:
    // 0x494208: 0x10000002  b           . + 4 + (0x2 << 2)
label_49420c:
    if (ctx->pc == 0x49420Cu) {
        ctx->pc = 0x494210u;
        goto label_494210;
    }
    ctx->pc = 0x494208u;
    {
        const bool branch_taken_0x494208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494208) {
            ctx->pc = 0x494214u;
            goto label_494214;
        }
    }
    ctx->pc = 0x494210u;
label_494210:
    // 0x494210: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x494210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_494214:
    // 0x494214: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x494214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494218:
    // 0x494218: 0xc11c204  jal         func_470810
label_49421c:
    if (ctx->pc == 0x49421Cu) {
        ctx->pc = 0x494220u;
        goto label_494220;
    }
    ctx->pc = 0x494218u;
    SET_GPR_U32(ctx, 31, 0x494220u);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x494218u, 0x494220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494220u;
label_494220:
    // 0x494220: 0x8f84c12c  lw          $a0, -0x3ED4($gp)
    ctx->pc = 0x494220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951212)));
label_494224:
    // 0x494224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x494224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_494228:
    // 0x494228: 0xc0e6e40  jal         func_39B900
label_49422c:
    if (ctx->pc == 0x49422Cu) {
        ctx->pc = 0x494230u;
        goto label_494230;
    }
    ctx->pc = 0x494228u;
    SET_GPR_U32(ctx, 31, 0x494230u);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x494228u, 0x494230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494230u;
label_494230:
    // 0x494230: 0xc11c204  jal         func_470810
label_494234:
    if (ctx->pc == 0x494234u) {
        ctx->pc = 0x494238u;
        goto label_494238;
    }
    ctx->pc = 0x494230u;
    SET_GPR_U32(ctx, 31, 0x494238u);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x494230u, 0x494238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494238u;
label_494238:
    // 0x494238: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x494238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49423c:
    // 0x49423c: 0xc11c38c  jal         func_470E30
label_494240:
    if (ctx->pc == 0x494240u) {
        ctx->pc = 0x494244u;
        goto label_494244;
    }
    ctx->pc = 0x49423Cu;
    SET_GPR_U32(ctx, 31, 0x494244u);
    ctx->pc = 0x470E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E30u, 0x49423Cu, 0x494244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494244u;
label_494244:
    // 0x494244: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x494244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_494248:
    // 0x494248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49424c:
    // 0x49424c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_494250:
    // 0x494250: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x494250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_494254:
    // 0x494254: 0x40f809  jalr        $v0
label_494258:
    if (ctx->pc == 0x494258u) {
        ctx->pc = 0x49425Cu;
        goto label_49425c;
    }
    ctx->pc = 0x494254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49425Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494254u, 0x49425Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49425Cu;
label_49425c:
    // 0x49425c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x49425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_494260:
    // 0x494260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_494264:
    // 0x494264: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x494264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_494268:
    // 0x494268: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x494268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_49426c:
    // 0x49426c: 0x40f809  jalr        $v0
label_494270:
    if (ctx->pc == 0x494270u) {
        ctx->pc = 0x494274u;
        goto label_494274;
    }
    ctx->pc = 0x49426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x494274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49426Cu, 0x494274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x494274u;
label_494274:
    // 0x494274: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x494274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_494278:
    // 0x494278: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x494278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_49427c:
    // 0x49427c: 0xc1250dc  jal         func_494370
label_494280:
    if (ctx->pc == 0x494280u) {
        ctx->pc = 0x494284u;
        goto label_494284;
    }
    ctx->pc = 0x49427Cu;
    SET_GPR_U32(ctx, 31, 0x494284u);
    ctx->pc = 0x494370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494370u, 0x49427Cu, 0x494284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494284u;
label_494284:
    // 0x494284: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x494284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_494288:
    // 0x494288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x494288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49428c:
    // 0x49428c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x49428cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_494290:
    // 0x494290: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x494290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_494294:
    // 0x494294: 0x40f809  jalr        $v0
label_494298:
    if (ctx->pc == 0x494298u) {
        ctx->pc = 0x49429Cu;
        goto label_49429c;
    }
    ctx->pc = 0x494294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x49429Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494294u, 0x49429Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49429Cu;
label_49429c:
    // 0x49429c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x49429cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4942a0:
    // 0x4942a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4942a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4942a4:
    // 0x4942a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4942a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4942a8:
    // 0x4942a8: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x4942a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_4942ac:
    // 0x4942ac: 0x40f809  jalr        $v0
label_4942b0:
    if (ctx->pc == 0x4942B0u) {
        ctx->pc = 0x4942B4u;
        goto label_4942b4;
    }
    ctx->pc = 0x4942ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4942B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4942ACu, 0x4942B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4942B4u;
label_4942b4:
    // 0x4942b4: 0xc11c448  jal         func_471120
label_4942b8:
    if (ctx->pc == 0x4942B8u) {
        ctx->pc = 0x4942BCu;
        goto label_4942bc;
    }
    ctx->pc = 0x4942B4u;
    SET_GPR_U32(ctx, 31, 0x4942BCu);
    ctx->pc = 0x471120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471120u, 0x4942B4u, 0x4942BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4942BCu;
label_4942bc:
    // 0x4942bc: 0xc11c204  jal         func_470810
label_4942c0:
    if (ctx->pc == 0x4942C0u) {
        ctx->pc = 0x4942C4u;
        goto label_4942c4;
    }
    ctx->pc = 0x4942BCu;
    SET_GPR_U32(ctx, 31, 0x4942C4u);
    ctx->pc = 0x470810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470810u, 0x4942BCu, 0x4942C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4942C4u;
label_4942c4:
    // 0x4942c4: 0x8f84c12c  lw          $a0, -0x3ED4($gp)
    ctx->pc = 0x4942c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951212)));
label_4942c8:
    // 0x4942c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4942c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4942cc:
    // 0x4942cc: 0xc0e6e36  jal         func_39B8D8
label_4942d0:
    if (ctx->pc == 0x4942D0u) {
        ctx->pc = 0x4942D4u;
        goto label_4942d4;
    }
    ctx->pc = 0x4942CCu;
    SET_GPR_U32(ctx, 31, 0x4942D4u);
    ctx->pc = 0x39B8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B8D8u, 0x4942CCu, 0x4942D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4942D4u;
label_4942d4:
    // 0x4942d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4942d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4942d8:
    // 0x4942d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4942d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4942dc:
    // 0x4942dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4942dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4942e0:
    // 0x4942e0: 0xc105fb4  jal         func_417ED0
label_4942e4:
    if (ctx->pc == 0x4942E4u) {
        ctx->pc = 0x4942E8u;
        goto label_4942e8;
    }
    ctx->pc = 0x4942E0u;
    SET_GPR_U32(ctx, 31, 0x4942E8u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x4942E0u, 0x4942E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4942E8u;
label_4942e8:
    // 0x4942e8: 0x1660ff9f  bnez        $s3, . + 4 + (-0x61 << 2)
label_4942ec:
    if (ctx->pc == 0x4942ECu) {
        ctx->pc = 0x4942F0u;
        goto label_4942f0;
    }
    ctx->pc = 0x4942E8u;
    {
        const bool branch_taken_0x4942e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4942e8) {
            ctx->pc = 0x494168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_494168;
        }
    }
    ctx->pc = 0x4942F0u;
label_4942f0:
    // 0x4942f0: 0x3404c350  ori         $a0, $zero, 0xC350
    ctx->pc = 0x4942f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_4942f4:
    // 0x4942f4: 0xc119b68  jal         func_466DA0
label_4942f8:
    if (ctx->pc == 0x4942F8u) {
        ctx->pc = 0x4942FCu;
        goto label_4942fc;
    }
    ctx->pc = 0x4942F4u;
    SET_GPR_U32(ctx, 31, 0x4942FCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x4942F4u, 0x4942FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4942FCu;
label_4942fc:
    // 0x4942fc: 0xaf82c138  sw          $v0, -0x3EC8($gp)
    ctx->pc = 0x4942fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951224), GPR_U32(ctx, 2));
label_494300:
    // 0x494300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x494300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_494304:
    // 0x494304: 0x1242000d  beq         $s2, $v0, . + 4 + (0xD << 2)
label_494308:
    if (ctx->pc == 0x494308u) {
        ctx->pc = 0x49430Cu;
        goto label_49430c;
    }
    ctx->pc = 0x494304u;
    {
        const bool branch_taken_0x494304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x494304) {
            ctx->pc = 0x49433Cu;
            goto label_49433c;
        }
    }
    ctx->pc = 0x49430Cu;
label_49430c:
    // 0x49430c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494310:
    // 0x494310: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_494314:
    if (ctx->pc == 0x494314u) {
        ctx->pc = 0x494318u;
        goto label_494318;
    }
    ctx->pc = 0x494310u;
    {
        const bool branch_taken_0x494310 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x494310) {
            ctx->pc = 0x494328u;
            goto label_494328;
        }
    }
    ctx->pc = 0x494318u;
label_494318:
    // 0x494318: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_49431c:
    if (ctx->pc == 0x49431Cu) {
        ctx->pc = 0x494320u;
        goto label_494320;
    }
    ctx->pc = 0x494318u;
    {
        const bool branch_taken_0x494318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x494318) {
            ctx->pc = 0x494348u;
            goto label_494348;
        }
    }
    ctx->pc = 0x494320u;
label_494320:
    // 0x494320: 0x10000009  b           . + 4 + (0x9 << 2)
label_494324:
    if (ctx->pc == 0x494324u) {
        ctx->pc = 0x494328u;
        goto label_494328;
    }
    ctx->pc = 0x494320u;
    {
        const bool branch_taken_0x494320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494320) {
            ctx->pc = 0x494348u;
            goto label_494348;
        }
    }
    ctx->pc = 0x494328u;
label_494328:
    // 0x494328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x494328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49432c:
    // 0x49432c: 0xc11c38c  jal         func_470E30
label_494330:
    if (ctx->pc == 0x494330u) {
        ctx->pc = 0x494334u;
        goto label_494334;
    }
    ctx->pc = 0x49432Cu;
    SET_GPR_U32(ctx, 31, 0x494334u);
    ctx->pc = 0x470E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470E30u, 0x49432Cu, 0x494334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494334u;
label_494334:
    // 0x494334: 0x10000004  b           . + 4 + (0x4 << 2)
label_494338:
    if (ctx->pc == 0x494338u) {
        ctx->pc = 0x49433Cu;
        goto label_49433c;
    }
    ctx->pc = 0x494334u;
    {
        const bool branch_taken_0x494334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x494334) {
            ctx->pc = 0x494348u;
            goto label_494348;
        }
    }
    ctx->pc = 0x49433Cu;
label_49433c:
    // 0x49433c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49433cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_494340:
    // 0x494340: 0xc105f96  jal         func_417E58
label_494344:
    if (ctx->pc == 0x494344u) {
        ctx->pc = 0x494348u;
        goto label_494348;
    }
    ctx->pc = 0x494340u;
    SET_GPR_U32(ctx, 31, 0x494348u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x494340u, 0x494348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494348u;
label_494348:
    // 0x494348: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x494348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49434c:
    // 0x49434c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49434cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_494350:
    // 0x494350: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x494350u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_494354:
    // 0x494354: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x494354u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_494358:
    // 0x494358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x494358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49435c:
    // 0x49435c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49435cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_494360:
    // 0x494360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x494360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_494364:
    // 0x494364: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x494364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_494368:
    // 0x494368: 0x3e00008  jr          $ra
label_49436c:
    if (ctx->pc == 0x49436Cu) {
        ctx->pc = 0x494370u;
        goto label_fallthrough_0x494368;
    }
    ctx->pc = 0x494368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x494368:
    ctx->pc = 0x494370u;
}
