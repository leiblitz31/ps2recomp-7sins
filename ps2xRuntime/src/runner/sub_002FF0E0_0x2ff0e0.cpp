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

// Function: sub_002FF0E0
// Address: 0x2ff0e0 - 0x2ff120
void sub_002FF0E0_0x2ff0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF0E0_0x2ff0e0");
#endif

    ctx->pc = 0x2ff0e0u;

    // 0x2ff0e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ff0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff0e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ff0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ff0e8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2ff0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ff0ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ff0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ff0f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ff0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ff0f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ff0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ff0f8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2ff0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2ff0fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2ff0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ff100: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2ff100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2ff104: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF104u;
    {
        const bool branch_taken_0x2ff104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF104u;
        // 0x2ff108: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff104) {
            ctx->pc = 0x2FF114u;
            goto label_2ff114;
        }
    }
    ctx->pc = 0x2FF10Cu;
    // 0x2ff10c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2ff10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2ff110: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2ff110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_2ff114:
    // 0x2ff114: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF11Cu;
    // 0x2ff11c: 0x0  nop
    ctx->pc = 0x2ff11cu;
    // NOP
    ctx->pc = 0x2ff120u;
}
