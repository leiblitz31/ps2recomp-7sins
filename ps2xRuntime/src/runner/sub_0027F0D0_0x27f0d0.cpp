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

// Function: sub_0027F0D0
// Address: 0x27f0d0 - 0x27f1b0
void sub_0027F0D0_0x27f0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F0D0_0x27f0d0");
#endif

    switch (ctx->pc) {
        case 0x27f0d0u: goto label_27f0d0;
        case 0x27f0d4u: goto label_27f0d4;
        case 0x27f0d8u: goto label_27f0d8;
        case 0x27f0dcu: goto label_27f0dc;
        case 0x27f0e0u: goto label_27f0e0;
        case 0x27f0e4u: goto label_27f0e4;
        case 0x27f0e8u: goto label_27f0e8;
        case 0x27f0ecu: goto label_27f0ec;
        case 0x27f0f0u: goto label_27f0f0;
        case 0x27f0f4u: goto label_27f0f4;
        case 0x27f0f8u: goto label_27f0f8;
        case 0x27f0fcu: goto label_27f0fc;
        case 0x27f100u: goto label_27f100;
        case 0x27f104u: goto label_27f104;
        case 0x27f108u: goto label_27f108;
        case 0x27f10cu: goto label_27f10c;
        case 0x27f110u: goto label_27f110;
        case 0x27f114u: goto label_27f114;
        case 0x27f118u: goto label_27f118;
        case 0x27f11cu: goto label_27f11c;
        case 0x27f120u: goto label_27f120;
        case 0x27f124u: goto label_27f124;
        case 0x27f128u: goto label_27f128;
        case 0x27f12cu: goto label_27f12c;
        case 0x27f130u: goto label_27f130;
        case 0x27f134u: goto label_27f134;
        case 0x27f138u: goto label_27f138;
        case 0x27f13cu: goto label_27f13c;
        case 0x27f140u: goto label_27f140;
        case 0x27f144u: goto label_27f144;
        case 0x27f148u: goto label_27f148;
        case 0x27f14cu: goto label_27f14c;
        case 0x27f150u: goto label_27f150;
        case 0x27f154u: goto label_27f154;
        case 0x27f158u: goto label_27f158;
        case 0x27f15cu: goto label_27f15c;
        case 0x27f160u: goto label_27f160;
        case 0x27f164u: goto label_27f164;
        case 0x27f168u: goto label_27f168;
        case 0x27f16cu: goto label_27f16c;
        case 0x27f170u: goto label_27f170;
        case 0x27f174u: goto label_27f174;
        case 0x27f178u: goto label_27f178;
        case 0x27f17cu: goto label_27f17c;
        case 0x27f180u: goto label_27f180;
        case 0x27f184u: goto label_27f184;
        case 0x27f188u: goto label_27f188;
        case 0x27f18cu: goto label_27f18c;
        case 0x27f190u: goto label_27f190;
        case 0x27f194u: goto label_27f194;
        case 0x27f198u: goto label_27f198;
        case 0x27f19cu: goto label_27f19c;
        case 0x27f1a0u: goto label_27f1a0;
        case 0x27f1a4u: goto label_27f1a4;
        case 0x27f1a8u: goto label_27f1a8;
        case 0x27f1acu: goto label_27f1ac;
        default: break;
    }

    ctx->pc = 0x27f0d0u;

label_27f0d0:
    // 0x27f0d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27f0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27f0d4:
    // 0x27f0d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27f0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_27f0d8:
    // 0x27f0d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27f0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27f0dc:
    // 0x27f0dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27f0e0:
    // 0x27f0e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27f0e4:
    // 0x27f0e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27f0e8:
    // 0x27f0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27f0ec:
    // 0x27f0ec: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x27f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_27f0f0:
    // 0x27f0f0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x27f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_27f0f4:
    // 0x27f0f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27f0f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27f0f8:
    // 0x27f0f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x27f0f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_27f0fc:
    // 0x27f0fc: 0x320f809  jalr        $t9
label_27f100:
    if (ctx->pc == 0x27F100u) {
        ctx->pc = 0x27F104u;
        goto label_27f104;
    }
    ctx->pc = 0x27F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F104u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F0FCu, 0x27F104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27F104u;
label_27f104:
    // 0x27f104: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27f104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f108:
    // 0x27f108: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f10c:
    // 0x27f10c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x27f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_27f110:
    // 0x27f110: 0xc085538  jal         func_2154E0
label_27f114:
    if (ctx->pc == 0x27F114u) {
        ctx->pc = 0x27F118u;
        goto label_27f118;
    }
    ctx->pc = 0x27F110u;
    SET_GPR_U32(ctx, 31, 0x27F118u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F110u, 0x27F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F118u;
label_27f118:
    // 0x27f118: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27f118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f11c:
    // 0x27f11c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27f11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27f120:
    // 0x27f120: 0xc091aa8  jal         func_246AA0
label_27f124:
    if (ctx->pc == 0x27F124u) {
        ctx->pc = 0x27F128u;
        goto label_27f128;
    }
    ctx->pc = 0x27F120u;
    SET_GPR_U32(ctx, 31, 0x27F128u);
    ctx->pc = 0x246AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246AA0u, 0x27F120u, 0x27F128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F128u;
label_27f128:
    // 0x27f128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f12c:
    // 0x27f12c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f130:
    // 0x27f130: 0xc040e7c  jal         func_1039F0
label_27f134:
    if (ctx->pc == 0x27F134u) {
        ctx->pc = 0x27F138u;
        goto label_27f138;
    }
    ctx->pc = 0x27F130u;
    SET_GPR_U32(ctx, 31, 0x27F138u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27F130u, 0x27F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F138u;
label_27f138:
    // 0x27f138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f13c:
    // 0x27f13c: 0x1000000d  b           . + 4 + (0xD << 2)
label_27f140:
    if (ctx->pc == 0x27F140u) {
        ctx->pc = 0x27F144u;
        goto label_27f144;
    }
    ctx->pc = 0x27F13Cu;
    {
        const bool branch_taken_0x27f13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f13c) {
            ctx->pc = 0x27F174u;
            goto label_27f174;
        }
    }
    ctx->pc = 0x27F144u;
label_27f144:
    // 0x27f144: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27f144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27f148:
    // 0x27f148: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x27f148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_27f14c:
    // 0x27f14c: 0xc085538  jal         func_2154E0
label_27f150:
    if (ctx->pc == 0x27F150u) {
        ctx->pc = 0x27F154u;
        goto label_27f154;
    }
    ctx->pc = 0x27F14Cu;
    SET_GPR_U32(ctx, 31, 0x27F154u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F14Cu, 0x27F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F154u;
label_27f154:
    // 0x27f154: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f158:
    // 0x27f158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27f15c:
    // 0x27f15c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27f15cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27f160:
    // 0x27f160: 0x24a58240  addiu       $a1, $a1, -0x7DC0
    ctx->pc = 0x27f160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935104));
label_27f164:
    // 0x27f164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f168:
    // 0x27f168: 0xc0a3674  jal         func_28D9D0
label_27f16c:
    if (ctx->pc == 0x27F16Cu) {
        ctx->pc = 0x27F170u;
        goto label_27f170;
    }
    ctx->pc = 0x27F168u;
    SET_GPR_U32(ctx, 31, 0x27F170u);
    ctx->pc = 0x28D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9D0u, 0x27F168u, 0x27F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F170u;
label_27f170:
    // 0x27f170: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27f170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27f174:
    // 0x27f174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f178:
    // 0x27f178: 0xc04147c  jal         func_1051F0
label_27f17c:
    if (ctx->pc == 0x27F17Cu) {
        ctx->pc = 0x27F180u;
        goto label_27f180;
    }
    ctx->pc = 0x27F178u;
    SET_GPR_U32(ctx, 31, 0x27F180u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27F178u, 0x27F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F180u;
label_27f180:
    // 0x27f180: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
label_27f184:
    if (ctx->pc == 0x27F184u) {
        ctx->pc = 0x27F188u;
        goto label_27f188;
    }
    ctx->pc = 0x27F180u;
    {
        const bool branch_taken_0x27f180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f180) {
            ctx->pc = 0x27F144u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f144;
        }
    }
    ctx->pc = 0x27F188u;
label_27f188:
    // 0x27f188: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27f188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27f18c:
    // 0x27f18c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27f18cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27f190:
    // 0x27f190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27f190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27f194:
    // 0x27f194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27f198:
    // 0x27f198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f19c:
    // 0x27f19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27f1a0:
    // 0x27f1a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27f1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_27f1a4:
    // 0x27f1a4: 0x3e00008  jr          $ra
label_27f1a8:
    if (ctx->pc == 0x27F1A8u) {
        ctx->pc = 0x27F1ACu;
        goto label_27f1ac;
    }
    ctx->pc = 0x27F1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F1ACu;
label_27f1ac:
    // 0x27f1ac: 0x0  nop
    ctx->pc = 0x27f1acu;
    // NOP
    ctx->pc = 0x27f1b0u;
}
