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

// Function: sub_003AE6D0
// Address: 0x3ae6d0 - 0x3ae710
void sub_003AE6D0_0x3ae6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE6D0_0x3ae6d0");
#endif

    ctx->pc = 0x3ae6d0u;

    // 0x3ae6d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ae6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae6d4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3ae6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae6d8: 0x0  nop
    ctx->pc = 0x3ae6d8u;
    // NOP
    // 0x3ae6dc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE6DCu;
    {
        const bool branch_taken_0x3ae6dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AE6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6DCu;
        // 0x3ae6e0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae6dc) {
            ctx->pc = 0x3AE6ECu;
            goto label_3ae6ec;
        }
    }
    ctx->pc = 0x3AE6E4u;
    // 0x3ae6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6E4u;
        // 0x3ae6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE6ECu;
label_3ae6ec:
    // 0x3ae6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae6f0: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3ae6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x3ae6f4: 0xe46c06f8  swc1        $f12, 0x6F8($v1)
    ctx->pc = 0x3ae6f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1784), bits); }
    // 0x3ae6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6F8u;
        // 0x3ae6fc: 0xac6006f0  sw          $zero, 0x6F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE700u;
    // 0x3ae700: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ae700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3ae704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae708: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE708u;
        // 0x3ae70c: 0xac64d574  sw          $a0, -0x2A8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956404), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE710u;
}
