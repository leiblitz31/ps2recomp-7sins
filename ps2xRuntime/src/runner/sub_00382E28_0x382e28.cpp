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

// Function: sub_00382E28
// Address: 0x382e28 - 0x3830b8
void sub_00382E28_0x382e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382E28_0x382e28");
#endif

    switch (ctx->pc) {
        case 0x382ed8u: goto label_382ed8;
        case 0x382f34u: goto label_382f34;
        case 0x382f5cu: goto label_382f5c;
        case 0x383020u: goto label_383020;
        case 0x38307cu: goto label_38307c;
        case 0x3830a4u: goto label_3830a4;
        default: break;
    }

    ctx->pc = 0x382e28u;

    // 0x382e28: 0x8f83a924  lw          $v1, -0x56DC($gp)
    ctx->pc = 0x382e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945060)));
    // 0x382e2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x382e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x382e30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x382e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382e34: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x382e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x382e38: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x382E38u;
    {
        const bool branch_taken_0x382e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382e38) {
            ctx->pc = 0x382E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382E38u;
            // 0x382e3c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382E48u;
            goto label_382e48;
        }
    }
    ctx->pc = 0x382E40u;
    // 0x382e40: 0x3e00008  jr          $ra
    ctx->pc = 0x382E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E40u;
        // 0x382e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382E48u;
label_382e48:
    // 0x382e48: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x382e48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x382e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x382E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E4Cu;
        // 0x382e50: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382E54u;
    // 0x382e54: 0x0  nop
    ctx->pc = 0x382e54u;
    // NOP
    // 0x382e58: 0x8f82a924  lw          $v0, -0x56DC($gp)
    ctx->pc = 0x382e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945060)));
    // 0x382e5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x382e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382e60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x382e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382e64: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x382E64u;
    {
        const bool branch_taken_0x382e64 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E64u;
        // 0x382e68: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e64) {
            ctx->pc = 0x382F14u;
            goto label_382f14;
        }
    }
    ctx->pc = 0x382E6Cu;
    // 0x382e6c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x382e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x382e70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x382e70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e74: 0x71023  negu        $v0, $a3
    ctx->pc = 0x382e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x382e78: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x382e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x382e7c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x382E7Cu;
    {
        const bool branch_taken_0x382e7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E7Cu;
        // 0x382e80: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e7c) {
            ctx->pc = 0x382ED4u;
            goto label_382ed4;
        }
    }
    ctx->pc = 0x382E84u;
    // 0x382e84: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x382e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x382e88: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x382E88u;
    {
        const bool branch_taken_0x382e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E88u;
        // 0x382e8c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e88) {
            ctx->pc = 0x382EBCu;
            goto label_382ebc;
        }
    }
    ctx->pc = 0x382E90u;
    // 0x382e90: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x382E90u;
    {
        const bool branch_taken_0x382e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382e90) {
            ctx->pc = 0x382E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382E90u;
            // 0x382e94: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382EACu;
            goto label_382eac;
        }
    }
    ctx->pc = 0x382E98u;
    // 0x382e98: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x382e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x382e9c: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x382e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x382ea0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x382ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x382ea4: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x382ea4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x382ea8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x382ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_382eac:
    // 0x382eac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x382eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382eb0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x382eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x382eb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x382eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x382eb8: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x382eb8u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_382ebc:
    // 0x382ebc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x382ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x382ec0: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x382ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382ec4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x382ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x382ec8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x382ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x382ecc: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x382ECCu;
    {
        const bool branch_taken_0x382ecc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x382ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382ECCu;
        // 0x382ed0: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ecc) {
            ctx->pc = 0x382F14u;
            goto label_382f14;
        }
    }
    ctx->pc = 0x382ED4u;
label_382ed4:
    // 0x382ed4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x382ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_382ed8:
    // 0x382ed8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x382ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382edc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x382edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382ee0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x382ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x382ee4: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x382ee4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x382ee8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x382ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x382eec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x382eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382ef0: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x382ef0u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x382ef4: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x382ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x382ef8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x382ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382efc: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x382efcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x382f00: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x382f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x382f04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x382f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382f08: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x382f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x382f0c: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x382F0Cu;
    {
        const bool branch_taken_0x382f0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x382F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F0Cu;
        // 0x382f10: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f0c) {
            ctx->pc = 0x382ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382ed8;
        }
    }
    ctx->pc = 0x382F14u;
label_382f14:
    // 0x382f14: 0x3e00008  jr          $ra
    ctx->pc = 0x382F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F14u;
        // 0x382f18: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F1Cu;
    // 0x382f1c: 0x0  nop
    ctx->pc = 0x382f1cu;
    // NOP
    // 0x382f20: 0x8f82a92c  lw          $v0, -0x56D4($gp)
    ctx->pc = 0x382f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945068)));
    // 0x382f24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x382f24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x382f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382f2c: 0xc0e0a08  jal         func_382820
    ctx->pc = 0x382F2Cu;
    SET_GPR_U32(ctx, 31, 0x382F34u);
    ctx->pc = 0x382F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382F2Cu;
    // 0x382f30: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382820u, 0x382F2Cu, 0x382F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382F34u;
label_382f34:
    // 0x382f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382f38: 0x3e00008  jr          $ra
    ctx->pc = 0x382F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F38u;
        // 0x382f3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F40u;
    // 0x382f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x382f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x382f44: 0x8f82a92c  lw          $v0, -0x56D4($gp)
    ctx->pc = 0x382f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945068)));
    // 0x382f48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x382f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x382f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382f54: 0xc0e0a86  jal         func_382A18
    ctx->pc = 0x382F54u;
    SET_GPR_U32(ctx, 31, 0x382F5Cu);
    ctx->pc = 0x382F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382F54u;
    // 0x382f58: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382A18u, 0x382F54u, 0x382F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382F5Cu;
label_382f5c:
    // 0x382f5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x382f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x382f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x382f68: 0x3e00008  jr          $ra
    ctx->pc = 0x382F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F68u;
        // 0x382f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F70u;
    // 0x382f70: 0x8f83a92c  lw          $v1, -0x56D4($gp)
    ctx->pc = 0x382f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945068)));
    // 0x382f74: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x382f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x382f78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x382f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382f7c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x382f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x382f80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x382F80u;
    {
        const bool branch_taken_0x382f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382f80) {
            ctx->pc = 0x382F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382F80u;
            // 0x382f84: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382F90u;
            goto label_382f90;
        }
    }
    ctx->pc = 0x382F88u;
    // 0x382f88: 0x3e00008  jr          $ra
    ctx->pc = 0x382F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F88u;
        // 0x382f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F90u;
label_382f90:
    // 0x382f90: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x382f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x382f94: 0x3e00008  jr          $ra
    ctx->pc = 0x382F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F94u;
        // 0x382f98: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382F9Cu;
    // 0x382f9c: 0x0  nop
    ctx->pc = 0x382f9cu;
    // NOP
    // 0x382fa0: 0x8f82a92c  lw          $v0, -0x56D4($gp)
    ctx->pc = 0x382fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945068)));
    // 0x382fa4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x382fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382fa8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x382fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382fac: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x382FACu;
    {
        const bool branch_taken_0x382fac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x382FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FACu;
        // 0x382fb0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fac) {
            ctx->pc = 0x38305Cu;
            goto label_38305c;
        }
    }
    ctx->pc = 0x382FB4u;
    // 0x382fb4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x382fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x382fb8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x382fb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382fbc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x382fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x382fc0: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x382fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x382fc4: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x382FC4u;
    {
        const bool branch_taken_0x382fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FC4u;
        // 0x382fc8: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fc4) {
            ctx->pc = 0x38301Cu;
            goto label_38301c;
        }
    }
    ctx->pc = 0x382FCCu;
    // 0x382fcc: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x382fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x382fd0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x382FD0u;
    {
        const bool branch_taken_0x382fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FD0u;
        // 0x382fd4: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fd0) {
            ctx->pc = 0x383004u;
            goto label_383004;
        }
    }
    ctx->pc = 0x382FD8u;
    // 0x382fd8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x382FD8u;
    {
        const bool branch_taken_0x382fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x382fd8) {
            ctx->pc = 0x382FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382FD8u;
            // 0x382fdc: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382FF4u;
            goto label_382ff4;
        }
    }
    ctx->pc = 0x382FE0u;
    // 0x382fe0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x382fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x382fe4: 0x2486001c  addiu       $a2, $a0, 0x1C
    ctx->pc = 0x382fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x382fe8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x382fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x382fec: 0x5182b  sltu        $v1, $zero, $a1
    ctx->pc = 0x382fecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x382ff0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x382ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_382ff4:
    // 0x382ff4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x382ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x382ff8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x382ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x382ffc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x382ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383000: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383000u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_383004:
    // 0x383004: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x383004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x383008: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38300c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x38300cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x383010: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x383010u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x383014: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x383014u;
    {
        const bool branch_taken_0x383014 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x383018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383014u;
        // 0x383018: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383014) {
            ctx->pc = 0x38305Cu;
            goto label_38305c;
        }
    }
    ctx->pc = 0x38301Cu;
label_38301c:
    // 0x38301c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x38301cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_383020:
    // 0x383020: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x383020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x383024: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383028: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x383028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x38302c: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x38302cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383030: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x383030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x383034: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383038: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383038u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x38303c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x38303cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x383040: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x383040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383044: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x383044u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x383048: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x383048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x38304c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x38304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383050: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x383050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x383054: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x383054u;
    {
        const bool branch_taken_0x383054 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x383058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383054u;
        // 0x383058: 0x45180b  movn        $v1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383054) {
            ctx->pc = 0x383020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383020;
        }
    }
    ctx->pc = 0x38305Cu;
label_38305c:
    // 0x38305c: 0x3e00008  jr          $ra
    ctx->pc = 0x38305Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38305Cu;
        // 0x383060: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38305Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383064u;
    // 0x383064: 0x0  nop
    ctx->pc = 0x383064u;
    // NOP
    // 0x383068: 0x8f82a934  lw          $v0, -0x56CC($gp)
    ctx->pc = 0x383068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945076)));
    // 0x38306c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38306cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x383070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383074: 0xc0e0a08  jal         func_382820
    ctx->pc = 0x383074u;
    SET_GPR_U32(ctx, 31, 0x38307Cu);
    ctx->pc = 0x383078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383074u;
    // 0x383078: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382820u, 0x383074u, 0x38307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38307Cu;
label_38307c:
    // 0x38307c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38307cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383080: 0x3e00008  jr          $ra
    ctx->pc = 0x383080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383080u;
        // 0x383084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383088u;
    // 0x383088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38308c: 0x8f82a934  lw          $v0, -0x56CC($gp)
    ctx->pc = 0x38308cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945076)));
    // 0x383090: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x383090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x383094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x383094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38309c: 0xc0e0a86  jal         func_382A18
    ctx->pc = 0x38309Cu;
    SET_GPR_U32(ctx, 31, 0x3830A4u);
    ctx->pc = 0x3830A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38309Cu;
    // 0x3830a0: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382A18u, 0x38309Cu, 0x3830A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3830A4u;
label_3830a4:
    // 0x3830a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3830a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3830a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3830a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3830ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3830acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3830b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3830B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3830B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830B0u;
        // 0x3830b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3830B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3830B8u;
}
