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

// Function: sub_00379C08
// Address: 0x379c08 - 0x379c28
void sub_00379C08_0x379c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379C08_0x379c08");
#endif

    ctx->pc = 0x379c08u;

    // 0x379c08: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x379c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x379c0c: 0x8c43ac4c  lw          $v1, -0x53B4($v0)
    ctx->pc = 0x379c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DAC4Cu));
    // 0x379c10: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x379c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x379c14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x379c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x379c18: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x379C18u;
    {
        const bool branch_taken_0x379c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x379c18) {
            ctx->pc = 0x379C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379C18u;
            // 0x379c1c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379C20u;
            goto label_379c20;
        }
    }
    ctx->pc = 0x379C20u;
label_379c20:
    // 0x379c20: 0x3e00008  jr          $ra
    ctx->pc = 0x379C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379C20u;
        // 0x379c24: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379C28u;
}
