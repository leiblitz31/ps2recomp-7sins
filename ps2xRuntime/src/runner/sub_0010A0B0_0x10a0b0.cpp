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

// Function: sub_0010A0B0
// Address: 0x10a0b0 - 0x10a110
void sub_0010A0B0_0x10a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A0B0_0x10a0b0");
#endif

    switch (ctx->pc) {
        case 0x10a0d4u: goto label_10a0d4;
        case 0x10a0f0u: goto label_10a0f0;
        default: break;
    }

    ctx->pc = 0x10a0b0u;

    // 0x10a0b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10a0b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10a0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10a0bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10a0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10a0c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10a0c4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x10a0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10a0c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10a0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a0cc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x10A0CCu;
    SET_GPR_U32(ctx, 31, 0x10A0D4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x10A0CCu, 0x10A0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0D4u;
label_10a0d4:
    // 0x10a0d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0d8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A0D8u;
    {
        const bool branch_taken_0x10a0d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a0d8) {
            ctx->pc = 0x10A0F4u;
            goto label_10a0f4;
        }
    }
    ctx->pc = 0x10A0E0u;
    // 0x10a0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a0e4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x10a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a0e8: 0xc042844  jal         func_10A110
    ctx->pc = 0x10A0E8u;
    SET_GPR_U32(ctx, 31, 0x10A0F0u);
    ctx->pc = 0x10A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A110u, 0x10A0E8u, 0x10A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0F0u;
label_10a0f0:
    // 0x10a0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a0f4:
    // 0x10a0f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10a0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a0fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10a0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10a100: 0x3e00008  jr          $ra
    ctx->pc = 0x10A100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A108u;
    // 0x10a108: 0x0  nop
    ctx->pc = 0x10a108u;
    // NOP
    // 0x10a10c: 0x0  nop
    ctx->pc = 0x10a10cu;
    // NOP
    ctx->pc = 0x10a110u;
}
