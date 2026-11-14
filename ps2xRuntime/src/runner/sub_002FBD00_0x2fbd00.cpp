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

// Function: sub_002FBD00
// Address: 0x2fbd00 - 0x2fbd30
void sub_002FBD00_0x2fbd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBD00_0x2fbd00");
#endif

    switch (ctx->pc) {
        case 0x2fbd20u: goto label_2fbd20;
        default: break;
    }

    ctx->pc = 0x2fbd00u;

    // 0x2fbd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fbd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fbd04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2fbd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2fbd08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fbd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fbd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fbd10: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2fbd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2fbd14: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2fbd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2fbd18: 0xc0bec6e  jal         func_2FB1B8
    ctx->pc = 0x2FBD18u;
    SET_GPR_U32(ctx, 31, 0x2FBD20u);
    ctx->pc = 0x2FBD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBD18u;
    // 0x2fbd1c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB1B8u, 0x2FBD18u, 0x2FBD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBD20u;
label_2fbd20:
    // 0x2fbd20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fbd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fbd24: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD24u;
        // 0x2fbd28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBD2Cu;
    // 0x2fbd2c: 0x0  nop
    ctx->pc = 0x2fbd2cu;
    // NOP
    ctx->pc = 0x2fbd30u;
}
