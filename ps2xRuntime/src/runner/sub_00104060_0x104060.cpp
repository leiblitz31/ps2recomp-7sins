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

// Function: sub_00104060
// Address: 0x104060 - 0x104330
void sub_00104060_0x104060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104060_0x104060");
#endif

    switch (ctx->pc) {
        case 0x104060u: goto label_104060;
        case 0x104064u: goto label_104064;
        case 0x104068u: goto label_104068;
        case 0x10406cu: goto label_10406c;
        case 0x104070u: goto label_104070;
        case 0x104074u: goto label_104074;
        case 0x104078u: goto label_104078;
        case 0x10407cu: goto label_10407c;
        case 0x104080u: goto label_104080;
        case 0x104084u: goto label_104084;
        case 0x104088u: goto label_104088;
        case 0x10408cu: goto label_10408c;
        case 0x104090u: goto label_104090;
        case 0x104094u: goto label_104094;
        case 0x104098u: goto label_104098;
        case 0x10409cu: goto label_10409c;
        case 0x1040a0u: goto label_1040a0;
        case 0x1040a4u: goto label_1040a4;
        case 0x1040a8u: goto label_1040a8;
        case 0x1040acu: goto label_1040ac;
        case 0x1040b0u: goto label_1040b0;
        case 0x1040b4u: goto label_1040b4;
        case 0x1040b8u: goto label_1040b8;
        case 0x1040bcu: goto label_1040bc;
        case 0x1040c0u: goto label_1040c0;
        case 0x1040c4u: goto label_1040c4;
        case 0x1040c8u: goto label_1040c8;
        case 0x1040ccu: goto label_1040cc;
        case 0x1040d0u: goto label_1040d0;
        case 0x1040d4u: goto label_1040d4;
        case 0x1040d8u: goto label_1040d8;
        case 0x1040dcu: goto label_1040dc;
        case 0x1040e0u: goto label_1040e0;
        case 0x1040e4u: goto label_1040e4;
        case 0x1040e8u: goto label_1040e8;
        case 0x1040ecu: goto label_1040ec;
        case 0x1040f0u: goto label_1040f0;
        case 0x1040f4u: goto label_1040f4;
        case 0x1040f8u: goto label_1040f8;
        case 0x1040fcu: goto label_1040fc;
        case 0x104100u: goto label_104100;
        case 0x104104u: goto label_104104;
        case 0x104108u: goto label_104108;
        case 0x10410cu: goto label_10410c;
        case 0x104110u: goto label_104110;
        case 0x104114u: goto label_104114;
        case 0x104118u: goto label_104118;
        case 0x10411cu: goto label_10411c;
        case 0x104120u: goto label_104120;
        case 0x104124u: goto label_104124;
        case 0x104128u: goto label_104128;
        case 0x10412cu: goto label_10412c;
        case 0x104130u: goto label_104130;
        case 0x104134u: goto label_104134;
        case 0x104138u: goto label_104138;
        case 0x10413cu: goto label_10413c;
        case 0x104140u: goto label_104140;
        case 0x104144u: goto label_104144;
        case 0x104148u: goto label_104148;
        case 0x10414cu: goto label_10414c;
        case 0x104150u: goto label_104150;
        case 0x104154u: goto label_104154;
        case 0x104158u: goto label_104158;
        case 0x10415cu: goto label_10415c;
        case 0x104160u: goto label_104160;
        case 0x104164u: goto label_104164;
        case 0x104168u: goto label_104168;
        case 0x10416cu: goto label_10416c;
        case 0x104170u: goto label_104170;
        case 0x104174u: goto label_104174;
        case 0x104178u: goto label_104178;
        case 0x10417cu: goto label_10417c;
        case 0x104180u: goto label_104180;
        case 0x104184u: goto label_104184;
        case 0x104188u: goto label_104188;
        case 0x10418cu: goto label_10418c;
        case 0x104190u: goto label_104190;
        case 0x104194u: goto label_104194;
        case 0x104198u: goto label_104198;
        case 0x10419cu: goto label_10419c;
        case 0x1041a0u: goto label_1041a0;
        case 0x1041a4u: goto label_1041a4;
        case 0x1041a8u: goto label_1041a8;
        case 0x1041acu: goto label_1041ac;
        case 0x1041b0u: goto label_1041b0;
        case 0x1041b4u: goto label_1041b4;
        case 0x1041b8u: goto label_1041b8;
        case 0x1041bcu: goto label_1041bc;
        case 0x1041c0u: goto label_1041c0;
        case 0x1041c4u: goto label_1041c4;
        case 0x1041c8u: goto label_1041c8;
        case 0x1041ccu: goto label_1041cc;
        case 0x1041d0u: goto label_1041d0;
        case 0x1041d4u: goto label_1041d4;
        case 0x1041d8u: goto label_1041d8;
        case 0x1041dcu: goto label_1041dc;
        case 0x1041e0u: goto label_1041e0;
        case 0x1041e4u: goto label_1041e4;
        case 0x1041e8u: goto label_1041e8;
        case 0x1041ecu: goto label_1041ec;
        case 0x1041f0u: goto label_1041f0;
        case 0x1041f4u: goto label_1041f4;
        case 0x1041f8u: goto label_1041f8;
        case 0x1041fcu: goto label_1041fc;
        case 0x104200u: goto label_104200;
        case 0x104204u: goto label_104204;
        case 0x104208u: goto label_104208;
        case 0x10420cu: goto label_10420c;
        case 0x104210u: goto label_104210;
        case 0x104214u: goto label_104214;
        case 0x104218u: goto label_104218;
        case 0x10421cu: goto label_10421c;
        case 0x104220u: goto label_104220;
        case 0x104224u: goto label_104224;
        case 0x104228u: goto label_104228;
        case 0x10422cu: goto label_10422c;
        case 0x104230u: goto label_104230;
        case 0x104234u: goto label_104234;
        case 0x104238u: goto label_104238;
        case 0x10423cu: goto label_10423c;
        case 0x104240u: goto label_104240;
        case 0x104244u: goto label_104244;
        case 0x104248u: goto label_104248;
        case 0x10424cu: goto label_10424c;
        case 0x104250u: goto label_104250;
        case 0x104254u: goto label_104254;
        case 0x104258u: goto label_104258;
        case 0x10425cu: goto label_10425c;
        case 0x104260u: goto label_104260;
        case 0x104264u: goto label_104264;
        case 0x104268u: goto label_104268;
        case 0x10426cu: goto label_10426c;
        case 0x104270u: goto label_104270;
        case 0x104274u: goto label_104274;
        case 0x104278u: goto label_104278;
        case 0x10427cu: goto label_10427c;
        case 0x104280u: goto label_104280;
        case 0x104284u: goto label_104284;
        case 0x104288u: goto label_104288;
        case 0x10428cu: goto label_10428c;
        case 0x104290u: goto label_104290;
        case 0x104294u: goto label_104294;
        case 0x104298u: goto label_104298;
        case 0x10429cu: goto label_10429c;
        case 0x1042a0u: goto label_1042a0;
        case 0x1042a4u: goto label_1042a4;
        case 0x1042a8u: goto label_1042a8;
        case 0x1042acu: goto label_1042ac;
        case 0x1042b0u: goto label_1042b0;
        case 0x1042b4u: goto label_1042b4;
        case 0x1042b8u: goto label_1042b8;
        case 0x1042bcu: goto label_1042bc;
        case 0x1042c0u: goto label_1042c0;
        case 0x1042c4u: goto label_1042c4;
        case 0x1042c8u: goto label_1042c8;
        case 0x1042ccu: goto label_1042cc;
        case 0x1042d0u: goto label_1042d0;
        case 0x1042d4u: goto label_1042d4;
        case 0x1042d8u: goto label_1042d8;
        case 0x1042dcu: goto label_1042dc;
        case 0x1042e0u: goto label_1042e0;
        case 0x1042e4u: goto label_1042e4;
        case 0x1042e8u: goto label_1042e8;
        case 0x1042ecu: goto label_1042ec;
        case 0x1042f0u: goto label_1042f0;
        case 0x1042f4u: goto label_1042f4;
        case 0x1042f8u: goto label_1042f8;
        case 0x1042fcu: goto label_1042fc;
        case 0x104300u: goto label_104300;
        case 0x104304u: goto label_104304;
        case 0x104308u: goto label_104308;
        case 0x10430cu: goto label_10430c;
        case 0x104310u: goto label_104310;
        case 0x104314u: goto label_104314;
        case 0x104318u: goto label_104318;
        case 0x10431cu: goto label_10431c;
        case 0x104320u: goto label_104320;
        case 0x104324u: goto label_104324;
        case 0x104328u: goto label_104328;
        case 0x10432cu: goto label_10432c;
        default: break;
    }

    ctx->pc = 0x104060u;

label_104060:
    // 0x104060: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x104060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_104064:
    // 0x104064: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x104064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_104068:
    // 0x104068: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x104068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_10406c:
    // 0x10406c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_104070:
    // 0x104070: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x104070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_104074:
    // 0x104074: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x104074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_104078:
    // 0x104078: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x104078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10407c:
    // 0x10407c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_104080:
    // 0x104080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x104080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_104084:
    // 0x104084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x104084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_104088:
    // 0x104088: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x104088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_10408c:
    // 0x10408c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x10408cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_104090:
    // 0x104090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_104094:
    // 0x104094: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x104094u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_104098:
    // 0x104098: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x104098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_10409c:
    // 0x10409c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x10409cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1040a0:
    // 0x1040a0: 0xc085538  jal         func_2154E0
label_1040a4:
    if (ctx->pc == 0x1040A4u) {
        ctx->pc = 0x1040A8u;
        goto label_1040a8;
    }
    ctx->pc = 0x1040A0u;
    SET_GPR_U32(ctx, 31, 0x1040A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1040A0u, 0x1040A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040A8u;
label_1040a8:
    // 0x1040a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1040a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1040ac:
    // 0x1040ac: 0x1016002a  beq         $zero, $s6, . + 4 + (0x2A << 2)
label_1040b0:
    if (ctx->pc == 0x1040B0u) {
        ctx->pc = 0x1040B4u;
        goto label_1040b4;
    }
    ctx->pc = 0x1040ACu;
    {
        const bool branch_taken_0x1040ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 22));
        if (branch_taken_0x1040ac) {
            ctx->pc = 0x104158u;
            goto label_104158;
        }
    }
    ctx->pc = 0x1040B4u;
label_1040b4:
    // 0x1040b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1040b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1040b8:
    // 0x1040b8: 0xc09107c  jal         func_2441F0
label_1040bc:
    if (ctx->pc == 0x1040BCu) {
        ctx->pc = 0x1040C0u;
        goto label_1040c0;
    }
    ctx->pc = 0x1040B8u;
    SET_GPR_U32(ctx, 31, 0x1040C0u);
    ctx->pc = 0x2441F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2441F0u, 0x1040B8u, 0x1040C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040C0u;
label_1040c0:
    // 0x1040c0: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1040c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1040c4:
    // 0x1040c4: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1040c8:
    if (ctx->pc == 0x1040C8u) {
        ctx->pc = 0x1040CCu;
        goto label_1040cc;
    }
    ctx->pc = 0x1040C4u;
    {
        const bool branch_taken_0x1040c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1040c4) {
            ctx->pc = 0x1040ECu;
            goto label_1040ec;
        }
    }
    ctx->pc = 0x1040CCu;
label_1040cc:
    // 0x1040cc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1040ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1040d0:
    // 0x1040d0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_1040d4:
    if (ctx->pc == 0x1040D4u) {
        ctx->pc = 0x1040D8u;
        goto label_1040d8;
    }
    ctx->pc = 0x1040D0u;
    {
        const bool branch_taken_0x1040d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1040d0) {
            ctx->pc = 0x1040ECu;
            goto label_1040ec;
        }
    }
    ctx->pc = 0x1040D8u;
label_1040d8:
    // 0x1040d8: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1040d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1040dc:
    // 0x1040dc: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_1040e0:
    if (ctx->pc == 0x1040E0u) {
        ctx->pc = 0x1040E4u;
        goto label_1040e4;
    }
    ctx->pc = 0x1040DCu;
    {
        const bool branch_taken_0x1040dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1040dc) {
            ctx->pc = 0x1040ECu;
            goto label_1040ec;
        }
    }
    ctx->pc = 0x1040E4u;
label_1040e4:
    // 0x1040e4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1040e8:
    if (ctx->pc == 0x1040E8u) {
        ctx->pc = 0x1040ECu;
        goto label_1040ec;
    }
    ctx->pc = 0x1040E4u;
    {
        const bool branch_taken_0x1040e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1040e4) {
            ctx->pc = 0x104158u;
            goto label_104158;
        }
    }
    ctx->pc = 0x1040ECu;
label_1040ec:
    // 0x1040ec: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1040ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1040f0:
    // 0x1040f0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1040f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1040f4:
    // 0x1040f4: 0xc085538  jal         func_2154E0
label_1040f8:
    if (ctx->pc == 0x1040F8u) {
        ctx->pc = 0x1040FCu;
        goto label_1040fc;
    }
    ctx->pc = 0x1040F4u;
    SET_GPR_U32(ctx, 31, 0x1040FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1040F4u, 0x1040FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040FCu;
label_1040fc:
    // 0x1040fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1040fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104100:
    // 0x104100: 0x10150015  beq         $zero, $s5, . + 4 + (0x15 << 2)
label_104104:
    if (ctx->pc == 0x104104u) {
        ctx->pc = 0x104108u;
        goto label_104108;
    }
    ctx->pc = 0x104100u;
    {
        const bool branch_taken_0x104100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x104100) {
            ctx->pc = 0x104158u;
            goto label_104158;
        }
    }
    ctx->pc = 0x104108u;
label_104108:
    // 0x104108: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x104108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10410c:
    // 0x10410c: 0xc090dc4  jal         func_243710
label_104110:
    if (ctx->pc == 0x104110u) {
        ctx->pc = 0x104114u;
        goto label_104114;
    }
    ctx->pc = 0x10410Cu;
    SET_GPR_U32(ctx, 31, 0x104114u);
    ctx->pc = 0x243710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243710u, 0x10410Cu, 0x104114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104114u;
label_104114:
    // 0x104114: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x104114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104118:
    // 0x104118: 0x10000009  b           . + 4 + (0x9 << 2)
label_10411c:
    if (ctx->pc == 0x10411Cu) {
        ctx->pc = 0x104120u;
        goto label_104120;
    }
    ctx->pc = 0x104118u;
    {
        const bool branch_taken_0x104118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104118) {
            ctx->pc = 0x104140u;
            goto label_104140;
        }
    }
    ctx->pc = 0x104120u;
label_104120:
    // 0x104120: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x104120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104124:
    // 0x104124: 0xc041160  jal         func_104580
label_104128:
    if (ctx->pc == 0x104128u) {
        ctx->pc = 0x10412Cu;
        goto label_10412c;
    }
    ctx->pc = 0x104124u;
    SET_GPR_U32(ctx, 31, 0x10412Cu);
    ctx->pc = 0x104580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104580u, 0x104124u, 0x10412Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10412Cu;
label_10412c:
    // 0x10412c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x10412cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104130:
    // 0x104130: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x104130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_104134:
    // 0x104134: 0x8ee50008  lw          $a1, 0x8($s7)
    ctx->pc = 0x104134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_104138:
    // 0x104138: 0xc041018  jal         func_104060
label_10413c:
    if (ctx->pc == 0x10413Cu) {
        ctx->pc = 0x104140u;
        goto label_104140;
    }
    ctx->pc = 0x104138u;
    SET_GPR_U32(ctx, 31, 0x104140u);
    ctx->pc = 0x104060u;
    goto label_104060;
    ctx->pc = 0x104140u;
label_104140:
    // 0x104140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x104140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_104144:
    // 0x104144: 0xc041154  jal         func_104550
label_104148:
    if (ctx->pc == 0x104148u) {
        ctx->pc = 0x10414Cu;
        goto label_10414c;
    }
    ctx->pc = 0x104144u;
    SET_GPR_U32(ctx, 31, 0x10414Cu);
    ctx->pc = 0x104550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104550u, 0x104144u, 0x10414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10414Cu;
label_10414c:
    // 0x10414c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x10414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_104150:
    // 0x104150: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_104154:
    if (ctx->pc == 0x104154u) {
        ctx->pc = 0x104158u;
        goto label_104158;
    }
    ctx->pc = 0x104150u;
    {
        const bool branch_taken_0x104150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104150) {
            ctx->pc = 0x104120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104120;
        }
    }
    ctx->pc = 0x104158u;
label_104158:
    // 0x104158: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x104158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_10415c:
    // 0x10415c: 0xc0913e4  jal         func_244F90
label_104160:
    if (ctx->pc == 0x104160u) {
        ctx->pc = 0x104164u;
        goto label_104164;
    }
    ctx->pc = 0x10415Cu;
    SET_GPR_U32(ctx, 31, 0x104164u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x10415Cu, 0x104164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104164u;
label_104164:
    // 0x104164: 0x1002000b  beq         $zero, $v0, . + 4 + (0xB << 2)
label_104168:
    if (ctx->pc == 0x104168u) {
        ctx->pc = 0x10416Cu;
        goto label_10416c;
    }
    ctx->pc = 0x104164u;
    {
        const bool branch_taken_0x104164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x104164) {
            ctx->pc = 0x104194u;
            goto label_104194;
        }
    }
    ctx->pc = 0x10416Cu;
label_10416c:
    // 0x10416c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x10416cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_104170:
    // 0x104170: 0xc0913e4  jal         func_244F90
label_104174:
    if (ctx->pc == 0x104174u) {
        ctx->pc = 0x104178u;
        goto label_104178;
    }
    ctx->pc = 0x104170u;
    SET_GPR_U32(ctx, 31, 0x104178u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x104170u, 0x104178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104178u;
label_104178:
    // 0x104178: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x104178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_10417c:
    // 0x10417c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x10417cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_104180:
    // 0x104180: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x104180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104184:
    // 0x104184: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104188:
    // 0x104188: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x104188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_10418c:
    // 0x10418c: 0x320f809  jalr        $t9
label_104190:
    if (ctx->pc == 0x104190u) {
        ctx->pc = 0x104194u;
        goto label_104194;
    }
    ctx->pc = 0x10418Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104194u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10418Cu, 0x104194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104194u;
label_104194:
    // 0x104194: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x104194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_104198:
    // 0x104198: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x104198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_10419c:
    // 0x10419c: 0xc090590  jal         func_241640
label_1041a0:
    if (ctx->pc == 0x1041A0u) {
        ctx->pc = 0x1041A4u;
        goto label_1041a4;
    }
    ctx->pc = 0x10419Cu;
    SET_GPR_U32(ctx, 31, 0x1041A4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x10419Cu, 0x1041A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041A4u;
label_1041a4:
    // 0x1041a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1041a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1041a8:
    // 0x1041a8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1041a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1041ac:
    // 0x1041ac: 0xc091648  jal         func_245920
label_1041b0:
    if (ctx->pc == 0x1041B0u) {
        ctx->pc = 0x1041B4u;
        goto label_1041b4;
    }
    ctx->pc = 0x1041ACu;
    SET_GPR_U32(ctx, 31, 0x1041B4u);
    ctx->pc = 0x245920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245920u, 0x1041ACu, 0x1041B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041B4u;
label_1041b4:
    // 0x1041b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1041b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1041b8:
    // 0x1041b8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1041b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1041bc:
    // 0x1041bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1041bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1041c0:
    // 0x1041c0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1041c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1041c4:
    // 0x1041c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1041c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1041c8:
    // 0x1041c8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1041c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1041cc:
    // 0x1041cc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1041ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1041d0:
    // 0x1041d0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1041d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1041d4:
    // 0x1041d4: 0xc0856d4  jal         func_215B50
label_1041d8:
    if (ctx->pc == 0x1041D8u) {
        ctx->pc = 0x1041DCu;
        goto label_1041dc;
    }
    ctx->pc = 0x1041D4u;
    SET_GPR_U32(ctx, 31, 0x1041DCu);
    ctx->pc = 0x215B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B50u, 0x1041D4u, 0x1041DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041DCu;
label_1041dc:
    // 0x1041dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1041dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1041e0:
    // 0x1041e0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x1041e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_1041e4:
    // 0x1041e4: 0xc04114c  jal         func_104530
label_1041e8:
    if (ctx->pc == 0x1041E8u) {
        ctx->pc = 0x1041ECu;
        goto label_1041ec;
    }
    ctx->pc = 0x1041E4u;
    SET_GPR_U32(ctx, 31, 0x1041ECu);
    ctx->pc = 0x104530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104530u, 0x1041E4u, 0x1041ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041ECu;
label_1041ec:
    // 0x1041ec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1041ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1041f0:
    // 0x1041f0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1041f4:
    if (ctx->pc == 0x1041F4u) {
        ctx->pc = 0x1041F8u;
        goto label_1041f8;
    }
    ctx->pc = 0x1041F0u;
    {
        const bool branch_taken_0x1041f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1041f0) {
            ctx->pc = 0x10429Cu;
            goto label_10429c;
        }
    }
    ctx->pc = 0x1041F8u;
label_1041f8:
    // 0x1041f8: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x1041f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_1041fc:
    // 0x1041fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1041fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_104200:
    // 0x104200: 0xc041128  jal         func_1044A0
label_104204:
    if (ctx->pc == 0x104204u) {
        ctx->pc = 0x104208u;
        goto label_104208;
    }
    ctx->pc = 0x104200u;
    SET_GPR_U32(ctx, 31, 0x104208u);
    ctx->pc = 0x1044A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044A0u, 0x104200u, 0x104208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104208u;
label_104208:
    // 0x104208: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x104208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_10420c:
    // 0x10420c: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x10420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_104210:
    // 0x104210: 0xc041110  jal         func_104440
label_104214:
    if (ctx->pc == 0x104214u) {
        ctx->pc = 0x104218u;
        goto label_104218;
    }
    ctx->pc = 0x104210u;
    SET_GPR_U32(ctx, 31, 0x104218u);
    ctx->pc = 0x104440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104440u, 0x104210u, 0x104218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104218u;
label_104218:
    // 0x104218: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x104218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_10421c:
    // 0x10421c: 0xc041104  jal         func_104410
label_104220:
    if (ctx->pc == 0x104220u) {
        ctx->pc = 0x104224u;
        goto label_104224;
    }
    ctx->pc = 0x10421Cu;
    SET_GPR_U32(ctx, 31, 0x104224u);
    ctx->pc = 0x104410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104410u, 0x10421Cu, 0x104224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104224u;
label_104224:
    // 0x104224: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x104224u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104228:
    // 0x104228: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x104228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_10422c:
    // 0x10422c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10422cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104230:
    // 0x104230: 0xc08566c  jal         func_2159B0
label_104234:
    if (ctx->pc == 0x104234u) {
        ctx->pc = 0x104238u;
        goto label_104238;
    }
    ctx->pc = 0x104230u;
    SET_GPR_U32(ctx, 31, 0x104238u);
    ctx->pc = 0x2159B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2159B0u, 0x104230u, 0x104238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104238u;
label_104238:
    // 0x104238: 0x8f82bb6c  lw          $v0, -0x4494($gp)
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_10423c:
    // 0x10423c: 0x10020017  beq         $zero, $v0, . + 4 + (0x17 << 2)
label_104240:
    if (ctx->pc == 0x104240u) {
        ctx->pc = 0x104244u;
        goto label_104244;
    }
    ctx->pc = 0x10423Cu;
    {
        const bool branch_taken_0x10423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x10423c) {
            ctx->pc = 0x10429Cu;
            goto label_10429c;
        }
    }
    ctx->pc = 0x104244u;
label_104244:
    // 0x104244: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x104244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_104248:
    // 0x104248: 0xc041008  jal         func_104020
label_10424c:
    if (ctx->pc == 0x10424Cu) {
        ctx->pc = 0x104250u;
        goto label_104250;
    }
    ctx->pc = 0x104248u;
    SET_GPR_U32(ctx, 31, 0x104250u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x104248u, 0x104250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104250u;
label_104250:
    // 0x104250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x104250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104254:
    // 0x104254: 0x1000000c  b           . + 4 + (0xC << 2)
label_104258:
    if (ctx->pc == 0x104258u) {
        ctx->pc = 0x10425Cu;
        goto label_10425c;
    }
    ctx->pc = 0x104254u;
    {
        const bool branch_taken_0x104254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x104254) {
            ctx->pc = 0x104288u;
            goto label_104288;
        }
    }
    ctx->pc = 0x10425Cu;
label_10425c:
    // 0x10425c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x10425cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_104260:
    // 0x104260: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x104260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_104264:
    // 0x104264: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x104264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_104268:
    // 0x104268: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x104268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_10426c:
    // 0x10426c: 0x320f809  jalr        $t9
label_104270:
    if (ctx->pc == 0x104270u) {
        ctx->pc = 0x104274u;
        goto label_104274;
    }
    ctx->pc = 0x10426Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x104274u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10426Cu, 0x104274u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104274u;
label_104274:
    // 0x104274: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x104274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_104278:
    // 0x104278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10427c:
    // 0x10427c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_104280:
    if (ctx->pc == 0x104280u) {
        ctx->pc = 0x104284u;
        goto label_104284;
    }
    ctx->pc = 0x10427Cu;
    {
        const bool branch_taken_0x10427c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10427c) {
            ctx->pc = 0x10429Cu;
            goto label_10429c;
        }
    }
    ctx->pc = 0x104284u;
label_104284:
    // 0x104284: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x104284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_104288:
    // 0x104288: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_10428c:
    // 0x10428c: 0xc041000  jal         func_104000
label_104290:
    if (ctx->pc == 0x104290u) {
        ctx->pc = 0x104294u;
        goto label_104294;
    }
    ctx->pc = 0x10428Cu;
    SET_GPR_U32(ctx, 31, 0x104294u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x10428Cu, 0x104294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104294u;
label_104294:
    // 0x104294: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
label_104298:
    if (ctx->pc == 0x104298u) {
        ctx->pc = 0x10429Cu;
        goto label_10429c;
    }
    ctx->pc = 0x104294u;
    {
        const bool branch_taken_0x104294 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x104294) {
            ctx->pc = 0x10425Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10425c;
        }
    }
    ctx->pc = 0x10429Cu;
label_10429c:
    // 0x10429c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1042a0:
    // 0x1042a0: 0xc0410f8  jal         func_1043E0
label_1042a4:
    if (ctx->pc == 0x1042A4u) {
        ctx->pc = 0x1042A8u;
        goto label_1042a8;
    }
    ctx->pc = 0x1042A0u;
    SET_GPR_U32(ctx, 31, 0x1042A8u);
    ctx->pc = 0x1043E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1043E0u, 0x1042A0u, 0x1042A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042A8u;
label_1042a8:
    // 0x1042a8: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
label_1042ac:
    if (ctx->pc == 0x1042ACu) {
        ctx->pc = 0x1042B0u;
        goto label_1042b0;
    }
    ctx->pc = 0x1042A8u;
    {
        const bool branch_taken_0x1042a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1042a8) {
            ctx->pc = 0x1041F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1041f8;
        }
    }
    ctx->pc = 0x1042B0u;
label_1042b0:
    // 0x1042b0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1042b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1042b4:
    // 0x1042b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1042b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1042b8:
    // 0x1042b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1042b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1042bc:
    // 0x1042bc: 0x320f809  jalr        $t9
label_1042c0:
    if (ctx->pc == 0x1042C0u) {
        ctx->pc = 0x1042C4u;
        goto label_1042c4;
    }
    ctx->pc = 0x1042BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1042C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1042BCu, 0x1042C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1042C4u;
label_1042c4:
    // 0x1042c4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1042c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1042c8:
    // 0x1042c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1042cc:
    if (ctx->pc == 0x1042CCu) {
        ctx->pc = 0x1042D0u;
        goto label_1042d0;
    }
    ctx->pc = 0x1042C8u;
    {
        const bool branch_taken_0x1042c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1042c8) {
            ctx->pc = 0x1042ECu;
            goto label_1042ec;
        }
    }
    ctx->pc = 0x1042D0u;
label_1042d0:
    // 0x1042d0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1042d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1042d4:
    // 0x1042d4: 0xc0410cc  jal         func_104330
label_1042d8:
    if (ctx->pc == 0x1042D8u) {
        ctx->pc = 0x1042DCu;
        goto label_1042dc;
    }
    ctx->pc = 0x1042D4u;
    SET_GPR_U32(ctx, 31, 0x1042DCu);
    ctx->pc = 0x104330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104330u, 0x1042D4u, 0x1042DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042DCu;
label_1042dc:
    // 0x1042dc: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1042dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1042e0:
    // 0x1042e0: 0xc119c5c  jal         func_467170
label_1042e4:
    if (ctx->pc == 0x1042E4u) {
        ctx->pc = 0x1042E8u;
        goto label_1042e8;
    }
    ctx->pc = 0x1042E0u;
    SET_GPR_U32(ctx, 31, 0x1042E8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1042E0u, 0x1042E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042E8u;
label_1042e8:
    // 0x1042e8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1042e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_1042ec:
    // 0x1042ec: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1042ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1042f0:
    // 0x1042f0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1042f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1042f4:
    // 0x1042f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1042f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1042f8:
    // 0x1042f8: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1042f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_1042fc:
    // 0x1042fc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1042fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_104300:
    // 0x104300: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x104300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_104304:
    // 0x104304: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x104304u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_104308:
    // 0x104308: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x104308u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10430c:
    // 0x10430c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10430cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_104310:
    // 0x104310: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x104310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_104314:
    // 0x104314: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x104314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_104318:
    // 0x104318: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x104318u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10431c:
    // 0x10431c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10431cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_104320:
    // 0x104320: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x104320u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_104324:
    // 0x104324: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x104324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_104328:
    // 0x104328: 0x3e00008  jr          $ra
label_10432c:
    if (ctx->pc == 0x10432Cu) {
        ctx->pc = 0x104330u;
        goto label_fallthrough_0x104328;
    }
    ctx->pc = 0x104328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x104328:
    ctx->pc = 0x104330u;
}
