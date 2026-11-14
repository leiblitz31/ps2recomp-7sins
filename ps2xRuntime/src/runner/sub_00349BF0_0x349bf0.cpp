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

// Function: sub_00349BF0
// Address: 0x349bf0 - 0x349ce0
void sub_00349BF0_0x349bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349BF0_0x349bf0");
#endif

    switch (ctx->pc) {
        case 0x349c28u: goto label_349c28;
        case 0x349c30u: goto label_349c30;
        case 0x349c58u: goto label_349c58;
        case 0x349c60u: goto label_349c60;
        case 0x349c88u: goto label_349c88;
        case 0x349c90u: goto label_349c90;
        default: break;
    }

    ctx->pc = 0x349bf0u;

    // 0x349bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x349bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x349bf4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x349bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x349bf8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x349bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x349bfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x349bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x349c00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x349c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x349c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x349c08: 0x2442c2c8  addiu       $v0, $v0, -0x3D38
    ctx->pc = 0x349c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951624));
    // 0x349c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x349c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x349c10: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x349c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x349c14: 0x8c500068  lw          $s0, 0x68($v0)
    ctx->pc = 0x349c14u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61C330u));
    // 0x349c18: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x349C18u;
    {
        const bool branch_taken_0x349c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C18u;
        // 0x349c1c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c18) {
            ctx->pc = 0x349C40u;
            goto label_349c40;
        }
    }
    ctx->pc = 0x349C20u;
    // 0x349c20: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x349c20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c24: 0x0  nop
    ctx->pc = 0x349c24u;
    // NOP
label_349c28:
    // 0x349c28: 0xc0d12b4  jal         func_344AD0
    ctx->pc = 0x349C28u;
    SET_GPR_U32(ctx, 31, 0x349C30u);
    ctx->pc = 0x349C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C28u;
    // 0x349c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344AD0u, 0x349C28u, 0x349C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C30u;
label_349c30:
    // 0x349c30: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x349c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349c34: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x349c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x349c38: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x349C38u;
    {
        const bool branch_taken_0x349c38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x349C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C38u;
        // 0x349c3c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c38) {
            ctx->pc = 0x349C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349c28;
        }
    }
    ctx->pc = 0x349C40u;
label_349c40:
    // 0x349c40: 0x2662c2c8  addiu       $v0, $s3, -0x3D38
    ctx->pc = 0x349c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
    // 0x349c44: 0x8c500064  lw          $s0, 0x64($v0)
    ctx->pc = 0x349c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x349c48: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x349C48u;
    {
        const bool branch_taken_0x349c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C48u;
        // 0x349c4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c48) {
            ctx->pc = 0x349C74u;
            goto label_349c74;
        }
    }
    ctx->pc = 0x349C50u;
    // 0x349c50: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x349c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c54: 0x0  nop
    ctx->pc = 0x349c54u;
    // NOP
label_349c58:
    // 0x349c58: 0xc0d0e98  jal         func_343A60
    ctx->pc = 0x349C58u;
    SET_GPR_U32(ctx, 31, 0x349C60u);
    ctx->pc = 0x349C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C58u;
    // 0x349c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A60u, 0x349C58u, 0x349C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C60u;
label_349c60:
    // 0x349c60: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x349c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349c64: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x349c64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349c68: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x349C68u;
    {
        const bool branch_taken_0x349c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x349C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C68u;
        // 0x349c6c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c68) {
            ctx->pc = 0x349C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349c58;
        }
    }
    ctx->pc = 0x349C70u;
    // 0x349c70: 0x2662c2c8  addiu       $v0, $s3, -0x3D38
    ctx->pc = 0x349c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951624));
label_349c74:
    // 0x349c74: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x349c74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x349c78: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x349C78u;
    {
        const bool branch_taken_0x349c78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C78u;
        // 0x349c7c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c78) {
            ctx->pc = 0x349CA0u;
            goto label_349ca0;
        }
    }
    ctx->pc = 0x349C80u;
    // 0x349c80: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x349c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349c84: 0x0  nop
    ctx->pc = 0x349c84u;
    // NOP
label_349c88:
    // 0x349c88: 0xc0d04fc  jal         func_3413F0
    ctx->pc = 0x349C88u;
    SET_GPR_U32(ctx, 31, 0x349C90u);
    ctx->pc = 0x349C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C88u;
    // 0x349c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3413F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3413F0u, 0x349C88u, 0x349C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C90u;
label_349c90:
    // 0x349c90: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x349c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x349c94: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x349c94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x349c98: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x349C98u;
    {
        const bool branch_taken_0x349c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x349C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C98u;
        // 0x349c9c: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c98) {
            ctx->pc = 0x349C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349c88;
        }
    }
    ctx->pc = 0x349CA0u;
label_349ca0:
    // 0x349ca0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x349ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ca4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x349ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x349ca8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x349ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x349cac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x349cacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x349cb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x349cb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349cb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x349cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x349CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CB8u;
        // 0x349cbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349CC0u;
    // 0x349cc0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x349cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x349cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x349CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CC4u;
        // 0x349cc8: 0xac44c344  sw          $a0, -0x3CBC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294951748), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349CCCu;
    // 0x349ccc: 0x0  nop
    ctx->pc = 0x349cccu;
    // NOP
    // 0x349cd0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x349cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x349cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x349CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CD4u;
        // 0x349cd8: 0x8c62c344  lw          $v0, -0x3CBC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951748)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349CDCu;
    // 0x349cdc: 0x0  nop
    ctx->pc = 0x349cdcu;
    // NOP
    ctx->pc = 0x349ce0u;
}
