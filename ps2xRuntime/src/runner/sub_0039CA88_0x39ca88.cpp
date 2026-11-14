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

// Function: sub_0039CA88
// Address: 0x39ca88 - 0x39cac8
void sub_0039CA88_0x39ca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CA88_0x39ca88");
#endif

    switch (ctx->pc) {
        case 0x39cab4u: goto label_39cab4;
        default: break;
    }

    ctx->pc = 0x39ca88u;

    // 0x39ca88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ca8c: 0x8f82a9e8  lw          $v0, -0x5618($gp)
    ctx->pc = 0x39ca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945256)));
    // 0x39ca90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39ca94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ca98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ca98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39ca9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x39caa0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x39caa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x39caa4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39CAA4u;
    {
        const bool branch_taken_0x39caa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAA4u;
        // 0x39caa8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39caa4) {
            ctx->pc = 0x39CAB8u;
            goto label_39cab8;
        }
    }
    ctx->pc = 0x39CAACu;
    // 0x39caac: 0xc0e6ea6  jal         func_39BA98
    ctx->pc = 0x39CAACu;
    SET_GPR_U32(ctx, 31, 0x39CAB4u);
    ctx->pc = 0x39CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CAACu;
    // 0x39cab0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BA98u, 0x39CAACu, 0x39CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CAB4u;
label_39cab4:
    // 0x39cab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39cab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39cab8:
    // 0x39cab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cabc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cac0: 0x3e00008  jr          $ra
    ctx->pc = 0x39CAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CAC0u;
        // 0x39cac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CAC8u;
}
