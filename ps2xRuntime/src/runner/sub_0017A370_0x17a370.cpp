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

// Function: sub_0017A370
// Address: 0x17a370 - 0x17a3d0
void sub_0017A370_0x17a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A370_0x17a370");
#endif

    switch (ctx->pc) {
        case 0x17a394u: goto label_17a394;
        case 0x17a3b0u: goto label_17a3b0;
        default: break;
    }

    ctx->pc = 0x17a370u;

    // 0x17a370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a37c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17a37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17a380: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17a380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17a384: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x17a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17a388: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17a388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a38c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x17A38Cu;
    SET_GPR_U32(ctx, 31, 0x17A394u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x17A38Cu, 0x17A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A394u;
label_17a394:
    // 0x17a394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a398: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A398u;
    {
        const bool branch_taken_0x17a398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a398) {
            ctx->pc = 0x17A3B4u;
            goto label_17a3b4;
        }
    }
    ctx->pc = 0x17A3A0u;
    // 0x17a3a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3a4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a3a8: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x17A3A8u;
    SET_GPR_U32(ctx, 31, 0x17A3B0u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x17A3A8u, 0x17A3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A3B0u;
label_17a3b0:
    // 0x17a3b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a3b4:
    // 0x17a3b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a3b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a3bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17a3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17a3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A3C8u;
    // 0x17a3c8: 0x0  nop
    ctx->pc = 0x17a3c8u;
    // NOP
    // 0x17a3cc: 0x0  nop
    ctx->pc = 0x17a3ccu;
    // NOP
    ctx->pc = 0x17a3d0u;
}
