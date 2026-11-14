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

// Function: sub_004AAEF8
// Address: 0x4aaef8 - 0x4aafe0
void sub_004AAEF8_0x4aaef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAEF8_0x4aaef8");
#endif

    switch (ctx->pc) {
        case 0x4aaf08u: goto label_4aaf08;
        case 0x4aaf40u: goto label_4aaf40;
        case 0x4aaf94u: goto label_4aaf94;
        case 0x4aafccu: goto label_4aafcc;
        default: break;
    }

    ctx->pc = 0x4aaef8u;

    // 0x4aaef8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4aaef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4aaefc: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AAEFCu;
    {
        const bool branch_taken_0x4aaefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4AAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAEFCu;
        // 0x4aaf00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaefc) {
            ctx->pc = 0x4AAF24u;
            goto label_4aaf24;
        }
    }
    ctx->pc = 0x4AAF04u;
    // 0x4aaf04: 0x0  nop
    ctx->pc = 0x4aaf04u;
    // NOP
label_4aaf08:
    // 0x4aaf08: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4aaf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4aaf0c: 0x0  nop
    ctx->pc = 0x4aaf0cu;
    // NOP
    // 0x4aaf10: 0x0  nop
    ctx->pc = 0x4aaf10u;
    // NOP
    // 0x4aaf14: 0x0  nop
    ctx->pc = 0x4aaf14u;
    // NOP
    // 0x4aaf18: 0x0  nop
    ctx->pc = 0x4aaf18u;
    // NOP
    // 0x4aaf1c: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AAF1Cu;
    {
        const bool branch_taken_0x4aaf1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4AAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAF1Cu;
        // 0x4aaf20: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaf1c) {
            ctx->pc = 0x4AAF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aaf08;
        }
    }
    ctx->pc = 0x4AAF24u;
label_4aaf24:
    // 0x4aaf24: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAF2Cu;
    // 0x4aaf2c: 0x0  nop
    ctx->pc = 0x4aaf2cu;
    // NOP
    // 0x4aaf30: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4aaf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4aaf34: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AAF34u;
    {
        const bool branch_taken_0x4aaf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4aaf34) {
            ctx->pc = 0x4AAF5Cu;
            goto label_4aaf5c;
        }
    }
    ctx->pc = 0x4AAF3Cu;
    // 0x4aaf3c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4aaf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4aaf40:
    // 0x4aaf40: 0x0  nop
    ctx->pc = 0x4aaf40u;
    // NOP
    // 0x4aaf44: 0x0  nop
    ctx->pc = 0x4aaf44u;
    // NOP
    // 0x4aaf48: 0x0  nop
    ctx->pc = 0x4aaf48u;
    // NOP
    // 0x4aaf4c: 0x0  nop
    ctx->pc = 0x4aaf4cu;
    // NOP
    // 0x4aaf50: 0x0  nop
    ctx->pc = 0x4aaf50u;
    // NOP
    // 0x4aaf54: 0x5444fffa  bnel        $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4AAF54u;
    {
        const bool branch_taken_0x4aaf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4aaf54) {
            ctx->pc = 0x4AAF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAF54u;
            // 0x4aaf58: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aaf40;
        }
    }
    ctx->pc = 0x4AAF5Cu;
label_4aaf5c:
    // 0x4aaf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAF5Cu;
        // 0x4aaf60: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAF64u;
    // 0x4aaf64: 0x0  nop
    ctx->pc = 0x4aaf64u;
    // NOP
    // 0x4aaf68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aaf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aaf6c: 0x3c080066  lui         $t0, 0x66
    ctx->pc = 0x4aaf6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)102 << 16));
    // 0x4aaf70: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4aaf70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4aaf74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aaf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aaf78: 0x250888f8  addiu       $t0, $t0, -0x7708
    ctx->pc = 0x4aaf78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936824));
    // 0x4aaf7c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4aaf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4aaf80: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x4aaf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4aaf84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4aaf84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaf88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4aaf88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aaf8c: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x4AAF8Cu;
    SET_GPR_U32(ctx, 31, 0x4AAF94u);
    ctx->pc = 0x4AAF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAF8Cu;
    // 0x4aaf90: 0x35290804  ori         $t1, $t1, 0x804 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2052);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x4AAF8Cu, 0x4AAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAF94u;
label_4aaf94:
    // 0x4aaf94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AAF94u;
    {
        const bool branch_taken_0x4aaf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAF94u;
        // 0x4aaf98: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaf94) {
            ctx->pc = 0x4AAFA4u;
            goto label_4aafa4;
        }
    }
    ctx->pc = 0x4AAF9Cu;
    // 0x4aaf9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AAF9Cu;
    {
        const bool branch_taken_0x4aaf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAF9Cu;
        // 0x4aafa0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aaf9c) {
            ctx->pc = 0x4AAFACu;
            goto label_4aafac;
        }
    }
    ctx->pc = 0x4AAFA4u;
label_4aafa4:
    // 0x4aafa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aafa8: 0xaf83b89c  sw          $v1, -0x4764($gp)
    ctx->pc = 0x4aafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949020), GPR_U32(ctx, 3));
label_4aafac:
    // 0x4aafac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aafacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aafb0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAFB0u;
        // 0x4aafb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAFB8u;
    // 0x4aafb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4aafb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4aafbc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4aafbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4aafc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aafc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aafc4: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x4AAFC4u;
    SET_GPR_U32(ctx, 31, 0x4AAFCCu);
    ctx->pc = 0x4AAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAFC4u;
    // 0x4aafc8: 0x248488f8  addiu       $a0, $a0, -0x7708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x4AAFC4u, 0x4AAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAFCCu;
label_4aafcc:
    // 0x4aafcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aafccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aafd0: 0xaf80b89c  sw          $zero, -0x4764($gp)
    ctx->pc = 0x4aafd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949020), GPR_U32(ctx, 0));
    // 0x4aafd4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AAFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAFD4u;
        // 0x4aafd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AAFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AAFDCu;
    // 0x4aafdc: 0x0  nop
    ctx->pc = 0x4aafdcu;
    // NOP
    ctx->pc = 0x4aafe0u;
}
