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

// Function: sub_00326C48
// Address: 0x326c48 - 0x326ce0
void sub_00326C48_0x326c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326C48_0x326c48");
#endif

    switch (ctx->pc) {
        case 0x326c9cu: goto label_326c9c;
        default: break;
    }

    ctx->pc = 0x326c48u;

    // 0x326c48: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x326c4c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x326c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x326c50: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x326c54: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x326c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x326c58: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x326c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x326c5c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x326C5Cu;
    {
        const bool branch_taken_0x326c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C5Cu;
        // 0x326c60: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c5c) {
            ctx->pc = 0x326CD8u;
            goto label_326cd8;
        }
    }
    ctx->pc = 0x326C64u;
    // 0x326c64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326c68: 0x2442b7f0  addiu       $v0, $v0, -0x4810
    ctx->pc = 0x326c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948848));
    // 0x326c6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x326c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x326c70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x326c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326c74: 0x800008  jr          $a0
    ctx->pc = 0x326C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x326C7Cu: goto label_326c7c;
            case 0x326C8Cu: goto label_326c8c;
            case 0x326CA8u: goto label_326ca8;
            case 0x326CBCu: goto label_326cbc;
            case 0x326CCCu: goto label_326ccc;
            case 0x326CD8u: goto label_326cd8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326C74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x326C7Cu;
label_326c7c:
    // 0x326c7c: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x326c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x326c80: 0xfca00070  sd          $zero, 0x70($a1)
    ctx->pc = 0x326c80u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 0));
    // 0x326c84: 0xfca20068  sd          $v0, 0x68($a1)
    ctx->pc = 0x326c84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 104), GPR_U64(ctx, 2));
    // 0x326c88: 0xfca00078  sd          $zero, 0x78($a1)
    ctx->pc = 0x326c88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 0));
label_326c8c:
    // 0x326c8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x326c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x326c90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326c94: 0x34420048  ori         $v0, $v0, 0x48
    ctx->pc = 0x326c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)72);
    // 0x326c98: 0xfca00038  sd          $zero, 0x38($a1)
    ctx->pc = 0x326c98u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
label_326c9c:
    // 0x326c9c: 0xfca20028  sd          $v0, 0x28($a1)
    ctx->pc = 0x326c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 2));
    // 0x326ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x326CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CA0u;
        // 0x326ca4: 0xfca00030  sd          $zero, 0x30($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326CA8u;
label_326ca8:
    // 0x326ca8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x326ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x326cac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x326cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x326cb0: 0x34420068  ori         $v0, $v0, 0x68
    ctx->pc = 0x326cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    // 0x326cb4: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x326CB4u;
    {
        const bool branch_taken_0x326cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CB4u;
        // 0x326cb8: 0xfca00038  sd          $zero, 0x38($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326cb4) {
            ctx->pc = 0x326C9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326c9c;
        }
    }
    ctx->pc = 0x326CBCu;
label_326cbc:
    // 0x326cbc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x326cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x326cc0: 0xfca00038  sd          $zero, 0x38($a1)
    ctx->pc = 0x326cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 0));
    // 0x326cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x326CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CC4u;
        // 0x326cc8: 0xfca20030  sd          $v0, 0x30($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326CCCu;
label_326ccc:
    // 0x326ccc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x326cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x326cd0: 0xfca00078  sd          $zero, 0x78($a1)
    ctx->pc = 0x326cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 120), GPR_U64(ctx, 0));
    // 0x326cd4: 0xfca20070  sd          $v0, 0x70($a1)
    ctx->pc = 0x326cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 112), GPR_U64(ctx, 2));
label_326cd8:
    // 0x326cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x326CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326CE0u;
}
