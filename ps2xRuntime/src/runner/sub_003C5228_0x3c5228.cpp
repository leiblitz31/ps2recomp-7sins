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

// Function: sub_003C5228
// Address: 0x3c5228 - 0x3c5280
void sub_003C5228_0x3c5228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5228_0x3c5228");
#endif

    ctx->pc = 0x3c5228u;

    // 0x3c5228: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3c5228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3c522c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c5230: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5230u;
    {
        const bool branch_taken_0x3c5230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C5234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5230u;
        // 0x3c5234: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5230) {
            ctx->pc = 0x3C5258u;
            goto label_3c5258;
        }
    }
    ctx->pc = 0x3C5238u;
    // 0x3c5238: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5238u;
    {
        const bool branch_taken_0x3c5238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5238u;
        // 0x3c523c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5238) {
            ctx->pc = 0x3C5260u;
            goto label_3c5260;
        }
    }
    ctx->pc = 0x3C5240u;
    // 0x3c5240: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C5240u;
    {
        const bool branch_taken_0x3c5240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5240u;
        // 0x3c5244: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5240) {
            ctx->pc = 0x3C5268u;
            goto label_3c5268;
        }
    }
    ctx->pc = 0x3C5248u;
    // 0x3c5248: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C5248u;
    {
        const bool branch_taken_0x3c5248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5248u;
        // 0x3c524c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5248) {
            ctx->pc = 0x3C5274u;
            goto label_3c5274;
        }
    }
    ctx->pc = 0x3C5250u;
    // 0x3c5250: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5258u;
label_3c5258:
    // 0x3c5258: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5258u;
        // 0x3c525c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5260u;
label_3c5260:
    // 0x3c5260: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5260u;
        // 0x3c5264: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5268u;
label_3c5268:
    // 0x3c5268: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3c5268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c526c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C526Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C526Cu;
        // 0x3c5270: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C526Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5274u;
label_3c5274:
    // 0x3c5274: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5274u;
        // 0x3c5278: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C5274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C527Cu;
    // 0x3c527c: 0x0  nop
    ctx->pc = 0x3c527cu;
    // NOP
    ctx->pc = 0x3c5280u;
}
