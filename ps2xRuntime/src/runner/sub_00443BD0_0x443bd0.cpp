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

// Function: sub_00443BD0
// Address: 0x443bd0 - 0x443d30
void sub_00443BD0_0x443bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443BD0_0x443bd0");
#endif

    switch (ctx->pc) {
        case 0x443c10u: goto label_443c10;
        default: break;
    }

    ctx->pc = 0x443bd0u;

    // 0x443bd0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x443bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x443bd4: 0x8c43d7c0  lw          $v1, -0x2840($v0)
    ctx->pc = 0x443bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DD7C0u));
    // 0x443bd8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x443bd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443bdc: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x443BDCu;
    {
        const bool branch_taken_0x443bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443BDCu;
        // 0x443be0: 0x2444d7c0  addiu       $a0, $v0, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443bdc) {
            ctx->pc = 0x443C60u;
            goto label_443c60;
        }
    }
    ctx->pc = 0x443BE4u;
    // 0x443be4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x443be8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x443be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x443bec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x443becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x443bf0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x443BF0u;
    {
        const bool branch_taken_0x443bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x443BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443BF0u;
        // 0x443bf4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443bf0) {
            ctx->pc = 0x443C4Cu;
            goto label_443c4c;
        }
    }
    ctx->pc = 0x443BF8u;
    // 0x443bf8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x443bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x443bfc: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x443bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x443c00: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x443c00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x443c04: 0x8f87beb8  lw          $a3, -0x4148($gp)
    ctx->pc = 0x443c04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443c08: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x443c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x443c0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x443c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_443c10:
    // 0x443c10: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x443c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x443c14: 0x881026  xor         $v0, $a0, $t0
    ctx->pc = 0x443c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 8));
    // 0x443c18: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x443c18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x443c1c: 0x892818  mult        $a1, $a0, $t1
    ctx->pc = 0x443c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x443c20: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x443c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x443c24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x443c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x443c28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x443C28u;
    {
        const bool branch_taken_0x443c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x443C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C28u;
        // 0x443c2c: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443c28) {
            ctx->pc = 0x443C40u;
            goto label_443c40;
        }
    }
    ctx->pc = 0x443C30u;
    // 0x443c30: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x443c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x443c34: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x443c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x443c38: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x443c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x443c3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x443c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_443c40:
    // 0x443c40: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x443c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x443c44: 0x1482fff2  bne         $a0, $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x443C44u;
    {
        const bool branch_taken_0x443c44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x443C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C44u;
        // 0x443c48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443c44) {
            ctx->pc = 0x443C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443c10;
        }
    }
    ctx->pc = 0x443C4Cu;
label_443c4c:
    // 0x443c4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x443c50: 0x2543d7c0  addiu       $v1, $t2, -0x2840
    ctx->pc = 0x443c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956992));
    // 0x443c54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x443c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x443c58: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x443c58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x443c5c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x443c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_443c60:
    // 0x443c60: 0x2542d7c0  addiu       $v0, $t2, -0x2840
    ctx->pc = 0x443c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956992));
    // 0x443c64: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x443c64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x443c68: 0x3e00008  jr          $ra
    ctx->pc = 0x443C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C68u;
        // 0x443c6c: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443C70u;
    // 0x443c70: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x443c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x443c74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x443c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443c78: 0x24c2d7c0  addiu       $v0, $a2, -0x2840
    ctx->pc = 0x443c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956992));
    // 0x443c7c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x443c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x443c80: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x443c80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DD7D8u));
    // 0x443c84: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x443C84u;
    {
        const bool branch_taken_0x443c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x443C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C84u;
        // 0x443c88: 0x2ca30001  sltiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x443c84) {
            ctx->pc = 0x443C94u;
            goto label_443c94;
        }
    }
    ctx->pc = 0x443C8Cu;
    // 0x443c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x443C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C8Cu;
        // 0x443c90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443C94u;
label_443c94:
    // 0x443c94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x443c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443c98: 0x3e00008  jr          $ra
    ctx->pc = 0x443C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443C98u;
        // 0x443c9c: 0xacc3d7c0  sw          $v1, -0x2840($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294956992), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CA0u;
    // 0x443ca0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x443ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x443ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x443CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CA4u;
        // 0x443ca8: 0x8c62d7d8  lw          $v0, -0x2828($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957016)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CACu;
    // 0x443cac: 0x0  nop
    ctx->pc = 0x443cacu;
    // NOP
    // 0x443cb0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x443cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x443cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x443CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CB4u;
        // 0x443cb8: 0x8c62d7dc  lw          $v0, -0x2824($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957020)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CBCu;
    // 0x443cbc: 0x0  nop
    ctx->pc = 0x443cbcu;
    // NOP
    // 0x443cc0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x443cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x443cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x443cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x443CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CC8u;
        // 0x443ccc: 0xac64d7e0  sw          $a0, -0x2820($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957024), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CD0u;
    // 0x443cd0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x443cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x443cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x443CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CD4u;
        // 0x443cd8: 0x8c62d7e0  lw          $v0, -0x2820($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957024)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CDCu;
    // 0x443cdc: 0x0  nop
    ctx->pc = 0x443cdcu;
    // NOP
    // 0x443ce0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x443ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x443ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x443ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x443ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x443CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CE8u;
        // 0x443cec: 0xac64d7f8  sw          $a0, -0x2808($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957048), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CF0u;
    // 0x443cf0: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x443cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x443cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x443CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443CF4u;
        // 0x443cf8: 0x8c62d7f8  lw          $v0, -0x2808($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957048)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443CFCu;
    // 0x443cfc: 0x0  nop
    ctx->pc = 0x443cfcu;
    // NOP
    // 0x443d00: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x443d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443d04: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x443d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x443d08: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x443d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x443d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x443D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D0Cu;
        // 0x443d10: 0x30423fff  andi        $v0, $v0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443D14u;
    // 0x443d14: 0x0  nop
    ctx->pc = 0x443d14u;
    // NOP
    // 0x443d18: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x443d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x443d1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x443d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443d20: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x443d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x443d24: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x443d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x443d28: 0x3e00008  jr          $ra
    ctx->pc = 0x443D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443D28u;
        // 0x443d2c: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443D30u;
}
