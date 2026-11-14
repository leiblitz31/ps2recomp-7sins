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

// Function: sub_0049EFF8
// Address: 0x49eff8 - 0x49f038
void sub_0049EFF8_0x49eff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EFF8_0x49eff8");
#endif

    ctx->pc = 0x49eff8u;

    // 0x49eff8: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x49eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x49effc: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x49effcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x49f000: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x49f000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x49f004: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x49f004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x49f008: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x49f008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f00c: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x49f00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49f010: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x49f010u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x49f014: 0xaca60020  sw          $a2, 0x20($a1)
    ctx->pc = 0x49f014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 6));
    // 0x49f018: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x49f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49f01c: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x49f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x49f020: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x49f020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x49f024: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49f024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f028: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x49f028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x49f02c: 0x3e00008  jr          $ra
    ctx->pc = 0x49F02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F02Cu;
        // 0x49f030: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F034u;
    // 0x49f034: 0x0  nop
    ctx->pc = 0x49f034u;
    // NOP
    ctx->pc = 0x49f038u;
}
