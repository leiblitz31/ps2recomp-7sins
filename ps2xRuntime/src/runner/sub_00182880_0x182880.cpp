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

// Function: sub_00182880
// Address: 0x182880 - 0x182930
void sub_00182880_0x182880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182880_0x182880");
#endif

    switch (ctx->pc) {
        case 0x182880u: goto label_182880;
        case 0x182884u: goto label_182884;
        case 0x182888u: goto label_182888;
        case 0x18288cu: goto label_18288c;
        case 0x182890u: goto label_182890;
        case 0x182894u: goto label_182894;
        case 0x182898u: goto label_182898;
        case 0x18289cu: goto label_18289c;
        case 0x1828a0u: goto label_1828a0;
        case 0x1828a4u: goto label_1828a4;
        case 0x1828a8u: goto label_1828a8;
        case 0x1828acu: goto label_1828ac;
        case 0x1828b0u: goto label_1828b0;
        case 0x1828b4u: goto label_1828b4;
        case 0x1828b8u: goto label_1828b8;
        case 0x1828bcu: goto label_1828bc;
        case 0x1828c0u: goto label_1828c0;
        case 0x1828c4u: goto label_1828c4;
        case 0x1828c8u: goto label_1828c8;
        case 0x1828ccu: goto label_1828cc;
        case 0x1828d0u: goto label_1828d0;
        case 0x1828d4u: goto label_1828d4;
        case 0x1828d8u: goto label_1828d8;
        case 0x1828dcu: goto label_1828dc;
        case 0x1828e0u: goto label_1828e0;
        case 0x1828e4u: goto label_1828e4;
        case 0x1828e8u: goto label_1828e8;
        case 0x1828ecu: goto label_1828ec;
        case 0x1828f0u: goto label_1828f0;
        case 0x1828f4u: goto label_1828f4;
        case 0x1828f8u: goto label_1828f8;
        case 0x1828fcu: goto label_1828fc;
        case 0x182900u: goto label_182900;
        case 0x182904u: goto label_182904;
        case 0x182908u: goto label_182908;
        case 0x18290cu: goto label_18290c;
        case 0x182910u: goto label_182910;
        case 0x182914u: goto label_182914;
        case 0x182918u: goto label_182918;
        case 0x18291cu: goto label_18291c;
        case 0x182920u: goto label_182920;
        case 0x182924u: goto label_182924;
        case 0x182928u: goto label_182928;
        case 0x18292cu: goto label_18292c;
        default: break;
    }

    ctx->pc = 0x182880u;

label_182880:
    // 0x182880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x182880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_182884:
    // 0x182884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_182888:
    // 0x182888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x182888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18288c:
    // 0x18288c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182890:
    // 0x182890: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x182890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_182894:
    // 0x182894: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x182894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_182898:
    // 0x182898: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18289c:
    if (ctx->pc == 0x18289Cu) {
        ctx->pc = 0x1828A0u;
        goto label_1828a0;
    }
    ctx->pc = 0x182898u;
    {
        const bool branch_taken_0x182898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182898) {
            ctx->pc = 0x1828A8u;
            goto label_1828a8;
        }
    }
    ctx->pc = 0x1828A0u;
label_1828a0:
    // 0x1828a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1828a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1828a4:
    // 0x1828a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1828a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1828a8:
    // 0x1828a8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1828a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1828ac:
    // 0x1828ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1828acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1828b0:
    // 0x1828b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1828b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1828b4:
    // 0x1828b4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1828b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1828b8:
    // 0x1828b8: 0xc119b68  jal         func_466DA0
label_1828bc:
    if (ctx->pc == 0x1828BCu) {
        ctx->pc = 0x1828C0u;
        goto label_1828c0;
    }
    ctx->pc = 0x1828B8u;
    SET_GPR_U32(ctx, 31, 0x1828C0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1828B8u, 0x1828C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828C0u;
label_1828c0:
    // 0x1828c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1828c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1828c4:
    // 0x1828c4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1828c8:
    if (ctx->pc == 0x1828C8u) {
        ctx->pc = 0x1828CCu;
        goto label_1828cc;
    }
    ctx->pc = 0x1828C4u;
    {
        const bool branch_taken_0x1828c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828c4) {
            ctx->pc = 0x1828D8u;
            goto label_1828d8;
        }
    }
    ctx->pc = 0x1828CCu;
label_1828cc:
    // 0x1828cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1828ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1828d0:
    // 0x1828d0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1828d4:
    if (ctx->pc == 0x1828D4u) {
        ctx->pc = 0x1828D8u;
        goto label_1828d8;
    }
    ctx->pc = 0x1828D0u;
    {
        const bool branch_taken_0x1828d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828d0) {
            ctx->pc = 0x18290Cu;
            goto label_18290c;
        }
    }
    ctx->pc = 0x1828D8u;
label_1828d8:
    // 0x1828d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1828d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1828dc:
    // 0x1828dc: 0xc0ba088  jal         func_2E8220
label_1828e0:
    if (ctx->pc == 0x1828E0u) {
        ctx->pc = 0x1828E4u;
        goto label_1828e4;
    }
    ctx->pc = 0x1828DCu;
    SET_GPR_U32(ctx, 31, 0x1828E4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1828DCu, 0x1828E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828E4u;
label_1828e4:
    // 0x1828e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1828e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1828e8:
    // 0x1828e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1828e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1828ec:
    // 0x1828ec: 0xc0ba088  jal         func_2E8220
label_1828f0:
    if (ctx->pc == 0x1828F0u) {
        ctx->pc = 0x1828F4u;
        goto label_1828f4;
    }
    ctx->pc = 0x1828ECu;
    SET_GPR_U32(ctx, 31, 0x1828F4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1828ECu, 0x1828F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1828F4u;
label_1828f4:
    // 0x1828f4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1828f8:
    if (ctx->pc == 0x1828F8u) {
        ctx->pc = 0x1828FCu;
        goto label_1828fc;
    }
    ctx->pc = 0x1828F4u;
    {
        const bool branch_taken_0x1828f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1828f4) {
            ctx->pc = 0x1828A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1828a8;
        }
    }
    ctx->pc = 0x1828FCu;
label_1828fc:
    // 0x1828fc: 0x200f809  jalr        $s0
label_182900:
    if (ctx->pc == 0x182900u) {
        ctx->pc = 0x182904u;
        goto label_182904;
    }
    ctx->pc = 0x1828FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x182904u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1828FCu, 0x182904u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182904u;
label_182904:
    // 0x182904: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_182908:
    if (ctx->pc == 0x182908u) {
        ctx->pc = 0x18290Cu;
        goto label_18290c;
    }
    ctx->pc = 0x182904u;
    {
        const bool branch_taken_0x182904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182904) {
            ctx->pc = 0x1828A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1828a8;
        }
    }
    ctx->pc = 0x18290Cu;
label_18290c:
    // 0x18290c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18290cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_182910:
    // 0x182910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x182910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_182914:
    // 0x182914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182918:
    // 0x182918: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x182918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18291c:
    // 0x18291c: 0x3e00008  jr          $ra
label_182920:
    if (ctx->pc == 0x182920u) {
        ctx->pc = 0x182924u;
        goto label_182924;
    }
    ctx->pc = 0x18291Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18291Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182924u;
label_182924:
    // 0x182924: 0x0  nop
    ctx->pc = 0x182924u;
    // NOP
label_182928:
    // 0x182928: 0x0  nop
    ctx->pc = 0x182928u;
    // NOP
label_18292c:
    // 0x18292c: 0x0  nop
    ctx->pc = 0x18292cu;
    // NOP
    ctx->pc = 0x182930u;
}
