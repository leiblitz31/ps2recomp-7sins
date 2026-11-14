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

// Function: sub_002EBC80
// Address: 0x2ebc80 - 0x2ebd78
void sub_002EBC80_0x2ebc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBC80_0x2ebc80");
#endif

    switch (ctx->pc) {
        case 0x2ebcacu: goto label_2ebcac;
        case 0x2ebcb0u: goto label_2ebcb0;
        case 0x2ebcc0u: goto label_2ebcc0;
        case 0x2ebd00u: goto label_2ebd00;
        default: break;
    }

    ctx->pc = 0x2ebc80u;

    // 0x2ebc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ebc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ebc84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebc88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ebc88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebc90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ebc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ebc94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ebc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ebc98: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2ebc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2ebc9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBC9Cu;
    {
        const bool branch_taken_0x2ebc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBC9Cu;
        // 0x2ebca0: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebc9c) {
            ctx->pc = 0x2EBCACu;
            goto label_2ebcac;
        }
    }
    ctx->pc = 0x2EBCA4u;
    // 0x2ebca4: 0xc0baf6e  jal         func_2EBDB8
    ctx->pc = 0x2EBCA4u;
    SET_GPR_U32(ctx, 31, 0x2EBCACu);
    ctx->pc = 0x2EBDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBDB8u, 0x2EBCA4u, 0x2EBCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBCACu;
label_2ebcac:
    // 0x2ebcac: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x2ebcacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2ebcb0:
    // 0x2ebcb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ebcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ebcb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2ebcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2ebcb8: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2EBCB8u;
    {
        const bool branch_taken_0x2ebcb8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2EBCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCB8u;
        // 0x2ebcbc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcb8) {
            ctx->pc = 0x2EBCE4u;
            goto label_2ebce4;
        }
    }
    ctx->pc = 0x2EBCC0u;
label_2ebcc0:
    // 0x2ebcc0: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x2ebcc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ebcc4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EBCC4u;
    {
        const bool branch_taken_0x2ebcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCC4u;
        // 0x2ebcc8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcc4) {
            ctx->pc = 0x2EBD20u;
            goto label_2ebd20;
        }
    }
    ctx->pc = 0x2EBCCCu;
    // 0x2ebccc: 0x0  nop
    ctx->pc = 0x2ebcccu;
    // NOP
    // 0x2ebcd0: 0x0  nop
    ctx->pc = 0x2ebcd0u;
    // NOP
    // 0x2ebcd4: 0x0  nop
    ctx->pc = 0x2ebcd4u;
    // NOP
    // 0x2ebcd8: 0x0  nop
    ctx->pc = 0x2ebcd8u;
    // NOP
    // 0x2ebcdc: 0x461fff8  bgez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EBCDCu;
    {
        const bool branch_taken_0x2ebcdc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2EBCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCDCu;
        // 0x2ebce0: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcdc) {
            ctx->pc = 0x2EBCC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebcc0;
        }
    }
    ctx->pc = 0x2EBCE4u;
label_2ebce4:
    // 0x2ebce4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ebce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ebce8: 0x0  nop
    ctx->pc = 0x2ebce8u;
    // NOP
    // 0x2ebcec: 0x5480fff0  bnel        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2EBCECu;
    {
        const bool branch_taken_0x2ebcec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ebcec) {
            ctx->pc = 0x2EBCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EBCECu;
            // 0x2ebcf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebcb0;
        }
    }
    ctx->pc = 0x2EBCF4u;
    // 0x2ebcf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ebcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcf8: 0xc0baf02  jal         func_2EBC08
    ctx->pc = 0x2EBCF8u;
    SET_GPR_U32(ctx, 31, 0x2EBD00u);
    ctx->pc = 0x2EBCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBCF8u;
    // 0x2ebcfc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBC08u, 0x2EBCF8u, 0x2EBD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBD00u;
label_2ebd00:
    // 0x2ebd00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ebd00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ebd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ebd08: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBD08u;
    {
        const bool branch_taken_0x2ebd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD08u;
        // 0x2ebd0c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd08) {
            ctx->pc = 0x2EBD18u;
            goto label_2ebd18;
        }
    }
    ctx->pc = 0x2EBD10u;
    // 0x2ebd10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2EBD10u;
    {
        const bool branch_taken_0x2ebd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD10u;
        // 0x2ebd14: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd10) {
            ctx->pc = 0x2EBD60u;
            goto label_2ebd60;
        }
    }
    ctx->pc = 0x2EBD18u;
label_2ebd18:
    // 0x2ebd18: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x2EBD18u;
    {
        const bool branch_taken_0x2ebd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD18u;
        // 0x2ebd1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd18) {
            ctx->pc = 0x2EBCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ebcb0;
        }
    }
    ctx->pc = 0x2EBD20u;
label_2ebd20:
    // 0x2ebd20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ebd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ebd24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebd28: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2ebd28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ebd2c: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x2ebd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x2ebd30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ebd30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ebd34: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2ebd34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ebd38: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ebd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ebd3c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2ebd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2ebd40: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ebd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2ebd44: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2ebd44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2ebd48: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2ebd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2ebd4c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x2ebd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x2ebd50: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2ebd50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2ebd54: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2ebd54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2ebd58: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x2ebd58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ebd5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd60:
    // 0x2ebd60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ebd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebd64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ebd64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ebd68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ebd68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebd6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ebd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ebd70: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBD70u;
        // 0x2ebd74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBD78u;
}
