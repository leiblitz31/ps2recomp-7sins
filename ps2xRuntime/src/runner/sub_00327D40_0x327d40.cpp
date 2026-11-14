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

// Function: sub_00327D40
// Address: 0x327d40 - 0x327d78
void sub_00327D40_0x327d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327D40_0x327d40");
#endif

    ctx->pc = 0x327d40u;

    // 0x327d40: 0x8f82a650  lw          $v0, -0x59B0($gp)
    ctx->pc = 0x327d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944336)));
    // 0x327d44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x327d44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327d48: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x327d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x327d4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x327d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x327d50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x327d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327d54: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x327d54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x327d58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x327d58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327d5c: 0x0  nop
    ctx->pc = 0x327d5cu;
    // NOP
    // 0x327d60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x327D60u;
    {
        const bool branch_taken_0x327d60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327d60) {
            ctx->pc = 0x327D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327D60u;
            // 0x327d64: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x327D68u;
            goto label_327d68;
        }
    }
    ctx->pc = 0x327D68u;
label_327d68:
    // 0x327d68: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x327d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x327d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x327D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D6Cu;
        // 0x327d70: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327D74u;
    // 0x327d74: 0x0  nop
    ctx->pc = 0x327d74u;
    // NOP
    ctx->pc = 0x327d78u;
}
