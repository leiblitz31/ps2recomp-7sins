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

// Function: sub_0039C888
// Address: 0x39c888 - 0x39c8d8
void sub_0039C888_0x39c888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C888_0x39c888");
#endif

    switch (ctx->pc) {
        case 0x39c8c0u: goto label_39c8c0;
        default: break;
    }

    ctx->pc = 0x39c888u;

    // 0x39c888: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39c888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
    // 0x39c88c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39c88cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39c890: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39c890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39c894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39c898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39c898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c89c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39c89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39c8a0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39c8a4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x39c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x39c8a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x39c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x39c8ac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x39c8acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x39c8b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C8B0u;
    {
        const bool branch_taken_0x39c8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8B0u;
        // 0x39c8b4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c8b0) {
            ctx->pc = 0x39C8C0u;
            goto label_39c8c0;
        }
    }
    ctx->pc = 0x39C8B8u;
    // 0x39c8b8: 0xc0e6e40  jal         func_39B900
    ctx->pc = 0x39C8B8u;
    SET_GPR_U32(ctx, 31, 0x39C8C0u);
    ctx->pc = 0x39C8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C8B8u;
    // 0x39c8bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x39C8B8u, 0x39C8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C8C0u;
label_39c8c0:
    // 0x39c8c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39c8c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c8c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c8c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39c8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x39C8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C8CCu;
        // 0x39c8d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C8D4u;
    // 0x39c8d4: 0x0  nop
    ctx->pc = 0x39c8d4u;
    // NOP
    ctx->pc = 0x39c8d8u;
}
