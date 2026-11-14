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

// Function: sub_0031E788
// Address: 0x31e788 - 0x31e7c8
void sub_0031E788_0x31e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E788_0x31e788");
#endif

    ctx->pc = 0x31e788u;

    // 0x31e788: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e78c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31e78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31e790: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e794: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E794u;
    {
        const bool branch_taken_0x31e794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e794) {
            ctx->pc = 0x31E7A4u;
            goto label_31e7a4;
        }
    }
    ctx->pc = 0x31E79Cu;
    // 0x31e79c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E79Cu;
        // 0x31e7a0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7A4u;
label_31e7a4:
    // 0x31e7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7A4u;
        // 0x31e7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7ACu;
    // 0x31e7ac: 0x0  nop
    ctx->pc = 0x31e7acu;
    // NOP
    // 0x31e7b0: 0x8f82a5cc  lw          $v0, -0x5A34($gp)
    ctx->pc = 0x31e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944204)));
    // 0x31e7b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x31e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31e7b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x31e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7BCu;
        // 0x31e7c0: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7C4u;
    // 0x31e7c4: 0x0  nop
    ctx->pc = 0x31e7c4u;
    // NOP
    ctx->pc = 0x31e7c8u;
}
