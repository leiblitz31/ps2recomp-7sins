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

// Function: sub_003D4B40
// Address: 0x3d4b40 - 0x3d4be0
void sub_003D4B40_0x3d4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4B40_0x3d4b40");
#endif

    ctx->pc = 0x3d4b40u;

    // 0x3d4b40: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x3d4b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3d4b44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4B44u;
    {
        const bool branch_taken_0x3d4b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B44u;
        // 0x3d4b48: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4b44) {
            ctx->pc = 0x3D4B54u;
            goto label_3d4b54;
        }
    }
    ctx->pc = 0x3D4B4Cu;
    // 0x3d4b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B4Cu;
        // 0x3d4b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B54u;
label_3d4b54:
    // 0x3d4b54: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3d4b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3d4b58: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3d4b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3d4b5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D4B5Cu;
    {
        const bool branch_taken_0x3d4b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B5Cu;
        // 0x3d4b60: 0x3c040062  lui         $a0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4b5c) {
            ctx->pc = 0x3D4B78u;
            goto label_3d4b78;
        }
    }
    ctx->pc = 0x3D4B64u;
    // 0x3d4b64: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3d4b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4b68: 0x8c83b1e4  lw          $v1, -0x4E1C($a0)
    ctx->pc = 0x3d4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947300)));
    // 0x3d4b6c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3d4b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d4b70: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B70u;
        // 0x3d4b74: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B78u;
label_3d4b78:
    // 0x3d4b78: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B78u;
        // 0x3d4b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B80u;
    // 0x3d4b80: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4b84: 0x2445b1e0  addiu       $a1, $v0, -0x4E20
    ctx->pc = 0x3d4b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x3d4b88: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3d4b88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x3d4b8c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3d4b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d4b90: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d4b94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4B94u;
    {
        const bool branch_taken_0x3d4b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4b94) {
            ctx->pc = 0x3D4BA4u;
            goto label_3d4ba4;
        }
    }
    ctx->pc = 0x3D4B9Cu;
    // 0x3d4b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B9Cu;
        // 0x3d4ba0: 0x8ca20024  lw          $v0, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4BA4u;
label_3d4ba4:
    // 0x3d4ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4BACu;
    // 0x3d4bac: 0x0  nop
    ctx->pc = 0x3d4bacu;
    // NOP
    // 0x3d4bb0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3d4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3d4bb4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3d4bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3d4bb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D4BB8u;
    {
        const bool branch_taken_0x3d4bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4BB8u;
        // 0x3d4bbc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4bb8) {
            ctx->pc = 0x3D4BD8u;
            goto label_3d4bd8;
        }
    }
    ctx->pc = 0x3D4BC0u;
    // 0x3d4bc0: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3d4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x3d4bc4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3d4bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4bc8: 0x8c83b1ec  lw          $v1, -0x4E14($a0)
    ctx->pc = 0x3d4bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ECu));
    // 0x3d4bcc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3d4bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d4bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4BD0u;
        // 0x3d4bd4: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4BD8u;
label_3d4bd8:
    // 0x3d4bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4BD8u;
        // 0x3d4bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4BE0u;
}
