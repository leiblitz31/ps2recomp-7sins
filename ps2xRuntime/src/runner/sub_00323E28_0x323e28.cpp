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

// Function: sub_00323E28
// Address: 0x323e28 - 0x323e70
void sub_00323E28_0x323e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323E28_0x323e28");
#endif

    ctx->pc = 0x323e28u;

    // 0x323e28: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x323e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x323e2c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x323e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323e30: 0x24c6b1e0  addiu       $a2, $a2, -0x4E20
    ctx->pc = 0x323e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947296));
    // 0x323e34: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x323e34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x323e38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x323e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x323e3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x323e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x323e40: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x323e40u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x323e44: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x323e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x323e48: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x323e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x323e4c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x323e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x323e50: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x323e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x323e54: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x323e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x323e58: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x323e58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x323e5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x323e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x323e60: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x323e60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x323e64: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x323e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x323e68: 0x3e00008  jr          $ra
    ctx->pc = 0x323E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323E68u;
        // 0x323e6c: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323E70u;
}
