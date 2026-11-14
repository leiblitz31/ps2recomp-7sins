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

// Function: sub_002B9060
// Address: 0x2b9060 - 0x2b92d0
void sub_002B9060_0x2b9060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9060_0x2b9060");
#endif

    switch (ctx->pc) {
        case 0x2b9060u: goto label_2b9060;
        case 0x2b9064u: goto label_2b9064;
        case 0x2b9068u: goto label_2b9068;
        case 0x2b906cu: goto label_2b906c;
        case 0x2b9070u: goto label_2b9070;
        case 0x2b9074u: goto label_2b9074;
        case 0x2b9078u: goto label_2b9078;
        case 0x2b907cu: goto label_2b907c;
        case 0x2b9080u: goto label_2b9080;
        case 0x2b9084u: goto label_2b9084;
        case 0x2b9088u: goto label_2b9088;
        case 0x2b908cu: goto label_2b908c;
        case 0x2b9090u: goto label_2b9090;
        case 0x2b9094u: goto label_2b9094;
        case 0x2b9098u: goto label_2b9098;
        case 0x2b909cu: goto label_2b909c;
        case 0x2b90a0u: goto label_2b90a0;
        case 0x2b90a4u: goto label_2b90a4;
        case 0x2b90a8u: goto label_2b90a8;
        case 0x2b90acu: goto label_2b90ac;
        case 0x2b90b0u: goto label_2b90b0;
        case 0x2b90b4u: goto label_2b90b4;
        case 0x2b90b8u: goto label_2b90b8;
        case 0x2b90bcu: goto label_2b90bc;
        case 0x2b90c0u: goto label_2b90c0;
        case 0x2b90c4u: goto label_2b90c4;
        case 0x2b90c8u: goto label_2b90c8;
        case 0x2b90ccu: goto label_2b90cc;
        case 0x2b90d0u: goto label_2b90d0;
        case 0x2b90d4u: goto label_2b90d4;
        case 0x2b90d8u: goto label_2b90d8;
        case 0x2b90dcu: goto label_2b90dc;
        case 0x2b90e0u: goto label_2b90e0;
        case 0x2b90e4u: goto label_2b90e4;
        case 0x2b90e8u: goto label_2b90e8;
        case 0x2b90ecu: goto label_2b90ec;
        case 0x2b90f0u: goto label_2b90f0;
        case 0x2b90f4u: goto label_2b90f4;
        case 0x2b90f8u: goto label_2b90f8;
        case 0x2b90fcu: goto label_2b90fc;
        case 0x2b9100u: goto label_2b9100;
        case 0x2b9104u: goto label_2b9104;
        case 0x2b9108u: goto label_2b9108;
        case 0x2b910cu: goto label_2b910c;
        case 0x2b9110u: goto label_2b9110;
        case 0x2b9114u: goto label_2b9114;
        case 0x2b9118u: goto label_2b9118;
        case 0x2b911cu: goto label_2b911c;
        case 0x2b9120u: goto label_2b9120;
        case 0x2b9124u: goto label_2b9124;
        case 0x2b9128u: goto label_2b9128;
        case 0x2b912cu: goto label_2b912c;
        case 0x2b9130u: goto label_2b9130;
        case 0x2b9134u: goto label_2b9134;
        case 0x2b9138u: goto label_2b9138;
        case 0x2b913cu: goto label_2b913c;
        case 0x2b9140u: goto label_2b9140;
        case 0x2b9144u: goto label_2b9144;
        case 0x2b9148u: goto label_2b9148;
        case 0x2b914cu: goto label_2b914c;
        case 0x2b9150u: goto label_2b9150;
        case 0x2b9154u: goto label_2b9154;
        case 0x2b9158u: goto label_2b9158;
        case 0x2b915cu: goto label_2b915c;
        case 0x2b9160u: goto label_2b9160;
        case 0x2b9164u: goto label_2b9164;
        case 0x2b9168u: goto label_2b9168;
        case 0x2b916cu: goto label_2b916c;
        case 0x2b9170u: goto label_2b9170;
        case 0x2b9174u: goto label_2b9174;
        case 0x2b9178u: goto label_2b9178;
        case 0x2b917cu: goto label_2b917c;
        case 0x2b9180u: goto label_2b9180;
        case 0x2b9184u: goto label_2b9184;
        case 0x2b9188u: goto label_2b9188;
        case 0x2b918cu: goto label_2b918c;
        case 0x2b9190u: goto label_2b9190;
        case 0x2b9194u: goto label_2b9194;
        case 0x2b9198u: goto label_2b9198;
        case 0x2b919cu: goto label_2b919c;
        case 0x2b91a0u: goto label_2b91a0;
        case 0x2b91a4u: goto label_2b91a4;
        case 0x2b91a8u: goto label_2b91a8;
        case 0x2b91acu: goto label_2b91ac;
        case 0x2b91b0u: goto label_2b91b0;
        case 0x2b91b4u: goto label_2b91b4;
        case 0x2b91b8u: goto label_2b91b8;
        case 0x2b91bcu: goto label_2b91bc;
        case 0x2b91c0u: goto label_2b91c0;
        case 0x2b91c4u: goto label_2b91c4;
        case 0x2b91c8u: goto label_2b91c8;
        case 0x2b91ccu: goto label_2b91cc;
        case 0x2b91d0u: goto label_2b91d0;
        case 0x2b91d4u: goto label_2b91d4;
        case 0x2b91d8u: goto label_2b91d8;
        case 0x2b91dcu: goto label_2b91dc;
        case 0x2b91e0u: goto label_2b91e0;
        case 0x2b91e4u: goto label_2b91e4;
        case 0x2b91e8u: goto label_2b91e8;
        case 0x2b91ecu: goto label_2b91ec;
        case 0x2b91f0u: goto label_2b91f0;
        case 0x2b91f4u: goto label_2b91f4;
        case 0x2b91f8u: goto label_2b91f8;
        case 0x2b91fcu: goto label_2b91fc;
        case 0x2b9200u: goto label_2b9200;
        case 0x2b9204u: goto label_2b9204;
        case 0x2b9208u: goto label_2b9208;
        case 0x2b920cu: goto label_2b920c;
        case 0x2b9210u: goto label_2b9210;
        case 0x2b9214u: goto label_2b9214;
        case 0x2b9218u: goto label_2b9218;
        case 0x2b921cu: goto label_2b921c;
        case 0x2b9220u: goto label_2b9220;
        case 0x2b9224u: goto label_2b9224;
        case 0x2b9228u: goto label_2b9228;
        case 0x2b922cu: goto label_2b922c;
        case 0x2b9230u: goto label_2b9230;
        case 0x2b9234u: goto label_2b9234;
        case 0x2b9238u: goto label_2b9238;
        case 0x2b923cu: goto label_2b923c;
        case 0x2b9240u: goto label_2b9240;
        case 0x2b9244u: goto label_2b9244;
        case 0x2b9248u: goto label_2b9248;
        case 0x2b924cu: goto label_2b924c;
        case 0x2b9250u: goto label_2b9250;
        case 0x2b9254u: goto label_2b9254;
        case 0x2b9258u: goto label_2b9258;
        case 0x2b925cu: goto label_2b925c;
        case 0x2b9260u: goto label_2b9260;
        case 0x2b9264u: goto label_2b9264;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b926cu: goto label_2b926c;
        case 0x2b9270u: goto label_2b9270;
        case 0x2b9274u: goto label_2b9274;
        case 0x2b9278u: goto label_2b9278;
        case 0x2b927cu: goto label_2b927c;
        case 0x2b9280u: goto label_2b9280;
        case 0x2b9284u: goto label_2b9284;
        case 0x2b9288u: goto label_2b9288;
        case 0x2b928cu: goto label_2b928c;
        case 0x2b9290u: goto label_2b9290;
        case 0x2b9294u: goto label_2b9294;
        case 0x2b9298u: goto label_2b9298;
        case 0x2b929cu: goto label_2b929c;
        case 0x2b92a0u: goto label_2b92a0;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92a8u: goto label_2b92a8;
        case 0x2b92acu: goto label_2b92ac;
        case 0x2b92b0u: goto label_2b92b0;
        case 0x2b92b4u: goto label_2b92b4;
        case 0x2b92b8u: goto label_2b92b8;
        case 0x2b92bcu: goto label_2b92bc;
        case 0x2b92c0u: goto label_2b92c0;
        case 0x2b92c4u: goto label_2b92c4;
        case 0x2b92c8u: goto label_2b92c8;
        case 0x2b92ccu: goto label_2b92cc;
        default: break;
    }

    ctx->pc = 0x2b9060u;

label_2b9060:
    // 0x2b9060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b9064:
    // 0x2b9064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b9068:
    // 0x2b9068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b9068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b906c:
    // 0x2b906c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9070:
    // 0x2b9070: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b9070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2b9074:
    // 0x2b9074: 0xc051400  jal         func_145000
label_2b9078:
    if (ctx->pc == 0x2B9078u) {
        ctx->pc = 0x2B907Cu;
        goto label_2b907c;
    }
    ctx->pc = 0x2B9074u;
    SET_GPR_U32(ctx, 31, 0x2B907Cu);
    ctx->pc = 0x145000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145000u, 0x2B9074u, 0x2B907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B907Cu;
label_2b907c:
    // 0x2b907c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b907cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9080:
    // 0x2b9080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b9080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b9084:
    // 0x2b9084: 0x3e00008  jr          $ra
label_2b9088:
    if (ctx->pc == 0x2B9088u) {
        ctx->pc = 0x2B908Cu;
        goto label_2b908c;
    }
    ctx->pc = 0x2B9084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B908Cu;
label_2b908c:
    // 0x2b908c: 0x0  nop
    ctx->pc = 0x2b908cu;
    // NOP
label_2b9090:
    // 0x2b9090: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2b9094:
    // 0x2b9094: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b9094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b9098:
    // 0x2b9098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b9098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b909c:
    // 0x2b909c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b90a0:
    // 0x2b90a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b90a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b90a4:
    // 0x2b90a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b90a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b90a8:
    // 0x2b90a8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_2b90ac:
    // 0x2b90ac: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2b90acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_2b90b0:
    // 0x2b90b0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b90b4:
    // 0x2b90b4: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b90b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2b90b8:
    // 0x2b90b8: 0xc0513f8  jal         func_144FE0
label_2b90bc:
    if (ctx->pc == 0x2B90BCu) {
        ctx->pc = 0x2B90C0u;
        goto label_2b90c0;
    }
    ctx->pc = 0x2B90B8u;
    SET_GPR_U32(ctx, 31, 0x2B90C0u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2B90B8u, 0x2B90C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90C0u;
label_2b90c0:
    // 0x2b90c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b90c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b90c4:
    // 0x2b90c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b90c8:
    // 0x2b90c8: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2b90cc:
    // 0x2b90cc: 0xc09c064  jal         func_270190
label_2b90d0:
    if (ctx->pc == 0x2B90D0u) {
        ctx->pc = 0x2B90D4u;
        goto label_2b90d4;
    }
    ctx->pc = 0x2B90CCu;
    SET_GPR_U32(ctx, 31, 0x2B90D4u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x2B90CCu, 0x2B90D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90D4u;
label_2b90d4:
    // 0x2b90d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b90d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b90d8:
    // 0x2b90d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b90d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b90dc:
    // 0x2b90dc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2b90dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2b90e0:
    // 0x2b90e0: 0xc0aeeb0  jal         func_2BBAC0
label_2b90e4:
    if (ctx->pc == 0x2B90E4u) {
        ctx->pc = 0x2B90E8u;
        goto label_2b90e8;
    }
    ctx->pc = 0x2B90E0u;
    SET_GPR_U32(ctx, 31, 0x2B90E8u);
    ctx->pc = 0x2BBAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBAC0u, 0x2B90E0u, 0x2B90E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90E8u;
label_2b90e8:
    // 0x2b90e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b90e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b90ec:
    // 0x2b90ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b90f0:
    // 0x2b90f0: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b90f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2b90f4:
    // 0x2b90f4: 0xc09c064  jal         func_270190
label_2b90f8:
    if (ctx->pc == 0x2B90F8u) {
        ctx->pc = 0x2B90FCu;
        goto label_2b90fc;
    }
    ctx->pc = 0x2B90F4u;
    SET_GPR_U32(ctx, 31, 0x2B90FCu);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x2B90F4u, 0x2B90FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B90FCu;
label_2b90fc:
    // 0x2b90fc: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
label_2b9100:
    if (ctx->pc == 0x2B9100u) {
        ctx->pc = 0x2B9104u;
        goto label_2b9104;
    }
    ctx->pc = 0x2B90FCu;
    {
        const bool branch_taken_0x2b90fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b90fc) {
            ctx->pc = 0x2B9118u;
            goto label_2b9118;
        }
    }
    ctx->pc = 0x2B9104u;
label_2b9104:
    // 0x2b9104: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9108:
    // 0x2b9108: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b9108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2b910c:
    // 0x2b910c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b9110:
    // 0x2b9110: 0xc09c1ac  jal         func_2706B0
label_2b9114:
    if (ctx->pc == 0x2B9114u) {
        ctx->pc = 0x2B9118u;
        goto label_2b9118;
    }
    ctx->pc = 0x2B9110u;
    SET_GPR_U32(ctx, 31, 0x2B9118u);
    ctx->pc = 0x2706B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2706B0u, 0x2B9110u, 0x2B9118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9118u;
label_2b9118:
    // 0x2b9118: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b9118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b911c:
    // 0x2b911c: 0xc0ae418  jal         func_2B9060
label_2b9120:
    if (ctx->pc == 0x2B9120u) {
        ctx->pc = 0x2B9124u;
        goto label_2b9124;
    }
    ctx->pc = 0x2B911Cu;
    SET_GPR_U32(ctx, 31, 0x2B9124u);
    ctx->pc = 0x2B9060u;
    goto label_2b9060;
    ctx->pc = 0x2B9124u;
label_2b9124:
    // 0x2b9124: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2b9128:
    if (ctx->pc == 0x2B9128u) {
        ctx->pc = 0x2B912Cu;
        goto label_2b912c;
    }
    ctx->pc = 0x2B9124u;
    {
        const bool branch_taken_0x2b9124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9124) {
            ctx->pc = 0x2B91B0u;
            goto label_2b91b0;
        }
    }
    ctx->pc = 0x2B912Cu;
label_2b912c:
    // 0x2b912c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2b912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9130:
    // 0x2b9130: 0x90630007  lbu         $v1, 0x7($v1)
    ctx->pc = 0x2b9130u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
label_2b9134:
    // 0x2b9134: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_2b9138:
    if (ctx->pc == 0x2B9138u) {
        ctx->pc = 0x2B913Cu;
        goto label_2b913c;
    }
    ctx->pc = 0x2B9134u;
    {
        const bool branch_taken_0x2b9134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9134) {
            ctx->pc = 0x2B91B0u;
            goto label_2b91b0;
        }
    }
    ctx->pc = 0x2B913Cu;
label_2b913c:
    // 0x2b913c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9140:
    // 0x2b9140: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x2b9140u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
label_2b9144:
    // 0x2b9144: 0xc090864  jal         func_242190
label_2b9148:
    if (ctx->pc == 0x2B9148u) {
        ctx->pc = 0x2B914Cu;
        goto label_2b914c;
    }
    ctx->pc = 0x2B9144u;
    SET_GPR_U32(ctx, 31, 0x2B914Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2B9144u, 0x2B914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B914Cu;
label_2b914c:
    // 0x2b914c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9150:
    // 0x2b9150: 0xc090590  jal         func_241640
label_2b9154:
    if (ctx->pc == 0x2B9154u) {
        ctx->pc = 0x2B9158u;
        goto label_2b9158;
    }
    ctx->pc = 0x2B9150u;
    SET_GPR_U32(ctx, 31, 0x2B9158u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2B9150u, 0x2B9158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9158u;
label_2b9158:
    // 0x2b9158: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b9158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b915c:
    // 0x2b915c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9160:
    // 0x2b9160: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b9160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9164:
    // 0x2b9164: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2b9164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9168:
    // 0x2b9168: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b916c:
    // 0x2b916c: 0xc09158c  jal         func_245630
label_2b9170:
    if (ctx->pc == 0x2B9170u) {
        ctx->pc = 0x2B9174u;
        goto label_2b9174;
    }
    ctx->pc = 0x2B916Cu;
    SET_GPR_U32(ctx, 31, 0x2B9174u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x2B916Cu, 0x2B9174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9174u;
label_2b9174:
    // 0x2b9174: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b9178:
    if (ctx->pc == 0x2B9178u) {
        ctx->pc = 0x2B917Cu;
        goto label_2b917c;
    }
    ctx->pc = 0x2B9174u;
    {
        const bool branch_taken_0x2b9174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9174) {
            ctx->pc = 0x2B91B0u;
            goto label_2b91b0;
        }
    }
    ctx->pc = 0x2B917Cu;
label_2b917c:
    // 0x2b917c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b917cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9180:
    // 0x2b9180: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b9184:
    // 0x2b9184: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x2b9184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2b9188:
    // 0x2b9188: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2b9188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b918c:
    // 0x2b918c: 0xc085538  jal         func_2154E0
label_2b9190:
    if (ctx->pc == 0x2B9190u) {
        ctx->pc = 0x2B9194u;
        goto label_2b9194;
    }
    ctx->pc = 0x2B918Cu;
    SET_GPR_U32(ctx, 31, 0x2B9194u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2B918Cu, 0x2B9194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9194u;
label_2b9194:
    // 0x2b9194: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b9194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9198:
    // 0x2b9198: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b919c:
    // 0x2b919c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2b919cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2b91a0:
    // 0x2b91a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b91a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b91a4:
    // 0x2b91a4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2b91a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2b91a8:
    // 0x2b91a8: 0xc097698  jal         func_25DA60
label_2b91ac:
    if (ctx->pc == 0x2B91ACu) {
        ctx->pc = 0x2B91B0u;
        goto label_2b91b0;
    }
    ctx->pc = 0x2B91A8u;
    SET_GPR_U32(ctx, 31, 0x2B91B0u);
    ctx->pc = 0x25DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA60u, 0x2B91A8u, 0x2B91B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B91B0u;
label_2b91b0:
    // 0x2b91b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b91b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b91b4:
    // 0x2b91b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b91b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b91b8:
    // 0x2b91b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b91b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b91bc:
    // 0x2b91bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b91bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b91c0:
    // 0x2b91c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b91c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b91c4:
    // 0x2b91c4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b91c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2b91c8:
    // 0x2b91c8: 0x3e00008  jr          $ra
label_2b91cc:
    if (ctx->pc == 0x2B91CCu) {
        ctx->pc = 0x2B91D0u;
        goto label_2b91d0;
    }
    ctx->pc = 0x2B91C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B91C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B91D0u;
label_2b91d0:
    // 0x2b91d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b91d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2b91d4:
    // 0x2b91d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b91d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b91d8:
    // 0x2b91d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b91d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b91dc:
    // 0x2b91dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b91dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b91e0:
    // 0x2b91e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b91e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b91e4:
    // 0x2b91e4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2b91e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2b91e8:
    // 0x2b91e8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2b91e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_2b91ec:
    // 0x2b91ec: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2b91ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_2b91f0:
    // 0x2b91f0: 0xa3a70070  sb          $a3, 0x70($sp)
    ctx->pc = 0x2b91f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 7));
label_2b91f4:
    // 0x2b91f4: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x2b91f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
label_2b91f8:
    // 0x2b91f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b91fc:
    // 0x2b91fc: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b91fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2b9200:
    // 0x2b9200: 0xc0513f8  jal         func_144FE0
label_2b9204:
    if (ctx->pc == 0x2B9204u) {
        ctx->pc = 0x2B9208u;
        goto label_2b9208;
    }
    ctx->pc = 0x2B9200u;
    SET_GPR_U32(ctx, 31, 0x2B9208u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2B9200u, 0x2B9208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9208u;
label_2b9208:
    // 0x2b9208: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b920c:
    // 0x2b920c: 0x10000022  b           . + 4 + (0x22 << 2)
label_2b9210:
    if (ctx->pc == 0x2B9210u) {
        ctx->pc = 0x2B9214u;
        goto label_2b9214;
    }
    ctx->pc = 0x2B920Cu;
    {
        const bool branch_taken_0x2b920c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b920c) {
            ctx->pc = 0x2B9298u;
            goto label_2b9298;
        }
    }
    ctx->pc = 0x2B9214u;
label_2b9214:
    // 0x2b9214: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b9214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9218:
    // 0x2b9218: 0xc09d274  jal         func_2749D0
label_2b921c:
    if (ctx->pc == 0x2B921Cu) {
        ctx->pc = 0x2B9220u;
        goto label_2b9220;
    }
    ctx->pc = 0x2B9218u;
    SET_GPR_U32(ctx, 31, 0x2B9220u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2B9218u, 0x2B9220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9220u;
label_2b9220:
    // 0x2b9220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b9220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9224:
    // 0x2b9224: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x2b9224u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9228:
    // 0x2b9228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b922c:
    // 0x2b922c: 0xc09d0b8  jal         func_2742E0
label_2b9230:
    if (ctx->pc == 0x2B9230u) {
        ctx->pc = 0x2B9234u;
        goto label_2b9234;
    }
    ctx->pc = 0x2B922Cu;
    SET_GPR_U32(ctx, 31, 0x2B9234u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2B922Cu, 0x2B9234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9234u;
label_2b9234:
    // 0x2b9234: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
label_2b9238:
    if (ctx->pc == 0x2B9238u) {
        ctx->pc = 0x2B923Cu;
        goto label_2b923c;
    }
    ctx->pc = 0x2B9234u;
    {
        const bool branch_taken_0x2b9234 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9234) {
            ctx->pc = 0x2B9294u;
            goto label_2b9294;
        }
    }
    ctx->pc = 0x2B923Cu;
label_2b923c:
    // 0x2b923c: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x2b923cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2b9240:
    // 0x2b9240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9244:
    // 0x2b9244: 0xc09d0d0  jal         func_274340
label_2b9248:
    if (ctx->pc == 0x2B9248u) {
        ctx->pc = 0x2B924Cu;
        goto label_2b924c;
    }
    ctx->pc = 0x2B9244u;
    SET_GPR_U32(ctx, 31, 0x2B924Cu);
    ctx->pc = 0x274340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274340u, 0x2B9244u, 0x2B924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B924Cu;
label_2b924c:
    // 0x2b924c: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
label_2b9250:
    if (ctx->pc == 0x2B9250u) {
        ctx->pc = 0x2B9254u;
        goto label_2b9254;
    }
    ctx->pc = 0x2B924Cu;
    {
        const bool branch_taken_0x2b924c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b924c) {
            ctx->pc = 0x2B9294u;
            goto label_2b9294;
        }
    }
    ctx->pc = 0x2B9254u;
label_2b9254:
    // 0x2b9254: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x2b9254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_2b9258:
    // 0x2b9258: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2b9258u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b925c:
    // 0x2b925c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9260:
    // 0x2b9260: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2b9260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
label_2b9264:
    // 0x2b9264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b9264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9268:
    // 0x2b9268: 0xc04146c  jal         func_1051B0
label_2b926c:
    if (ctx->pc == 0x2B926Cu) {
        ctx->pc = 0x2B9270u;
        goto label_2b9270;
    }
    ctx->pc = 0x2B9268u;
    SET_GPR_U32(ctx, 31, 0x2B9270u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2B9268u, 0x2B9270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9270u;
label_2b9270:
    // 0x2b9270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b9270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b9274:
    // 0x2b9274: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
label_2b9278:
    if (ctx->pc == 0x2B9278u) {
        ctx->pc = 0x2B927Cu;
        goto label_2b927c;
    }
    ctx->pc = 0x2B9274u;
    {
        const bool branch_taken_0x2b9274 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9274) {
            ctx->pc = 0x2B9294u;
            goto label_2b9294;
        }
    }
    ctx->pc = 0x2B927Cu;
label_2b927c:
    // 0x2b927c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2b927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9280:
    // 0x2b9280: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2b9280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2b9284:
    // 0x2b9284: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b9284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b9288:
    // 0x2b9288: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2b9288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2b928c:
    // 0x2b928c: 0x320f809  jalr        $t9
label_2b9290:
    if (ctx->pc == 0x2B9290u) {
        ctx->pc = 0x2B9294u;
        goto label_2b9294;
    }
    ctx->pc = 0x2B928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B9294u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B928Cu, 0x2B9294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9294u;
label_2b9294:
    // 0x2b9294: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b9294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b9298:
    // 0x2b9298: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b9298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b929c:
    // 0x2b929c: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x2b929cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_2b92a0:
    // 0x2b92a0: 0xc09c064  jal         func_270190
label_2b92a4:
    if (ctx->pc == 0x2B92A4u) {
        ctx->pc = 0x2B92A8u;
        goto label_2b92a8;
    }
    ctx->pc = 0x2B92A0u;
    SET_GPR_U32(ctx, 31, 0x2B92A8u);
    ctx->pc = 0x270190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270190u, 0x2B92A0u, 0x2B92A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92A8u;
label_2b92a8:
    // 0x2b92a8: 0x1602ffda  bne         $s0, $v0, . + 4 + (-0x26 << 2)
label_2b92ac:
    if (ctx->pc == 0x2B92ACu) {
        ctx->pc = 0x2B92B0u;
        goto label_2b92b0;
    }
    ctx->pc = 0x2B92A8u;
    {
        const bool branch_taken_0x2b92a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b92a8) {
            ctx->pc = 0x2B9214u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9214;
        }
    }
    ctx->pc = 0x2B92B0u;
label_2b92b0:
    // 0x2b92b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b92b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b92b4:
    // 0x2b92b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b92b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b92b8:
    // 0x2b92b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b92b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b92bc:
    // 0x2b92bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b92bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b92c0:
    // 0x2b92c0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2b92c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b92c4:
    // 0x2b92c4: 0x3e00008  jr          $ra
label_2b92c8:
    if (ctx->pc == 0x2B92C8u) {
        ctx->pc = 0x2B92CCu;
        goto label_2b92cc;
    }
    ctx->pc = 0x2B92C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B92C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B92CCu;
label_2b92cc:
    // 0x2b92cc: 0x0  nop
    ctx->pc = 0x2b92ccu;
    // NOP
    ctx->pc = 0x2b92d0u;
}
