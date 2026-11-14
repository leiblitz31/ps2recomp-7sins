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

// Function: sub_003779E8
// Address: 0x3779e8 - 0x377a20
void sub_003779E8_0x3779e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003779E8_0x3779e8");
#endif

    ctx->pc = 0x3779e8u;

    // 0x3779e8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3779e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3779ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3779ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3779f0: 0x8c43c438  lw          $v1, -0x3BC8($v0)
    ctx->pc = 0x3779f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C438u));
    // 0x3779f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3779f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3779f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3779f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3779fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3779fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x377a00: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x377a00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x377a04: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x377a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x377a08: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x377a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x377a0c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x377a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x377a10: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x377a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x377a14: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x377a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x377a18: 0x3e00008  jr          $ra
    ctx->pc = 0x377A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A18u;
        // 0x377a1c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377A20u;
}
