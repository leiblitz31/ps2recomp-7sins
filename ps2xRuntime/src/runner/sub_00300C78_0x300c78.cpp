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

// Function: sub_00300C78
// Address: 0x300c78 - 0x300ca8
void sub_00300C78_0x300c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300C78_0x300c78");
#endif

    ctx->pc = 0x300c78u;

    // 0x300c78: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x300c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x300c7c: 0x2463f898  addiu       $v1, $v1, -0x768
    ctx->pc = 0x300c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965400));
    // 0x300c80: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x300c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60F8ACu));
    // 0x300c84: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x300c84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x60F8B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60F8B0u, _value); } while (0);
    // 0x300c88: 0x3e00008  jr          $ra
    ctx->pc = 0x300C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C88u;
        // 0x300c8c: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300C90u;
    // 0x300c90: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x300c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x300c94: 0x2463f898  addiu       $v1, $v1, -0x768
    ctx->pc = 0x300c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965400));
    // 0x300c98: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x300c98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60F8A4u));
    // 0x300c9c: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x300c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x60F8A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60F8A8u, _value); } while (0);
    // 0x300ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x300CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CA0u;
        // 0x300ca4: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300CA8u;
}
