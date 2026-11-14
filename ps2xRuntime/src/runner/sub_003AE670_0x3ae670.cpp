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

// Function: sub_003AE670
// Address: 0x3ae670 - 0x3ae6d0
void sub_003AE670_0x3ae670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE670_0x3ae670");
#endif

    ctx->pc = 0x3ae670u;

    // 0x3ae670: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ae670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3ae674: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae678: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3ae678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x3ae67c: 0xc4600710  lwc1        $f0, 0x710($v1)
    ctx->pc = 0x3ae67cu;
    { uint32_t bits = FAST_READ32(0x61D590u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae680: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3ae680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3ae684: 0xc4610714  lwc1        $f1, 0x714($v1)
    ctx->pc = 0x3ae684u;
    { uint32_t bits = FAST_READ32(0x61D594u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae688: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x3ae688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x3ae68c: 0xc4600718  lwc1        $f0, 0x718($v1)
    ctx->pc = 0x3ae68cu;
    { uint32_t bits = FAST_READ32(0x61D598u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae690: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3ae690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3ae694: 0xc461071c  lwc1        $f1, 0x71C($v1)
    ctx->pc = 0x3ae694u;
    { uint32_t bits = FAST_READ32(0x61D59Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae698: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE698u;
        // 0x3ae69c: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE6A0u;
    // 0x3ae6a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ae6a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae6a4: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3ae6a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ae6a8: 0x0  nop
    ctx->pc = 0x3ae6a8u;
    // NOP
    // 0x3ae6ac: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3AE6ACu;
    {
        const bool branch_taken_0x3ae6ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AE6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6ACu;
        // 0x3ae6b0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae6ac) {
            ctx->pc = 0x3AE6BCu;
            goto label_3ae6bc;
        }
    }
    ctx->pc = 0x3AE6B4u;
    // 0x3ae6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6B4u;
        // 0x3ae6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE6BCu;
label_3ae6bc:
    // 0x3ae6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae6c0: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x3ae6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
    // 0x3ae6c4: 0xe46c06fc  swc1        $f12, 0x6FC($v1)
    ctx->pc = 0x3ae6c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1788), bits); }
    // 0x3ae6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE6C8u;
        // 0x3ae6cc: 0xac600704  sw          $zero, 0x704($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1796), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE6D0u;
}
