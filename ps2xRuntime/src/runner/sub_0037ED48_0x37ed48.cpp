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

// Function: sub_0037ED48
// Address: 0x37ed48 - 0x37eea8
void sub_0037ED48_0x37ed48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037ED48_0x37ed48");
#endif

    switch (ctx->pc) {
        case 0x37eda4u: goto label_37eda4;
        case 0x37edacu: goto label_37edac;
        case 0x37edb4u: goto label_37edb4;
        case 0x37ee10u: goto label_37ee10;
        case 0x37ee28u: goto label_37ee28;
        case 0x37ee34u: goto label_37ee34;
        case 0x37ee40u: goto label_37ee40;
        case 0x37ee4cu: goto label_37ee4c;
        case 0x37ee58u: goto label_37ee58;
        case 0x37ee64u: goto label_37ee64;
        case 0x37ee70u: goto label_37ee70;
        default: break;
    }

    ctx->pc = 0x37ed48u;

label_37ed48:
    // 0x37ed48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37ed48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37ed4c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37ed50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37ed54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x37ed54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37ed58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37ed5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37ed5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ed60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ed64: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x37ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37ed68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37ed68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37ed6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x37ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x37ed70: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x37ed70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37ed74: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x37ED74u;
    {
        const bool branch_taken_0x37ed74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED74u;
        // 0x37ed78: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed74) {
            ctx->pc = 0x37EDC0u;
            goto label_37edc0;
        }
    }
    ctx->pc = 0x37ED7Cu;
    // 0x37ed7c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x37ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x37ed80: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x37ED80u;
    {
        const bool branch_taken_0x37ed80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED80u;
        // 0x37ed84: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed80) {
            ctx->pc = 0x37EDACu;
            goto label_37edac;
        }
    }
    ctx->pc = 0x37ED88u;
    // 0x37ed88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37ED88u;
    {
        const bool branch_taken_0x37ed88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED88u;
        // 0x37ed8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed88) {
            ctx->pc = 0x37EDACu;
            goto label_37edac;
        }
    }
    ctx->pc = 0x37ED90u;
    // 0x37ed90: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37ED90u;
    {
        const bool branch_taken_0x37ed90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37ED90u;
        // 0x37ed94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ed90) {
            ctx->pc = 0x37EDACu;
            goto label_37edac;
        }
    }
    ctx->pc = 0x37ED98u;
    // 0x37ed98: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x37ed98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37ed9c: 0xc0e2686  jal         func_389A18
    ctx->pc = 0x37ED9Cu;
    SET_GPR_U32(ctx, 31, 0x37EDA4u);
    ctx->pc = 0x37EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37ED9Cu;
    // 0x37eda0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389A18u, 0x37ED9Cu, 0x37EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EDA4u;
label_37eda4:
    // 0x37eda4: 0xc1067c6  jal         func_419F18
    ctx->pc = 0x37EDA4u;
    SET_GPR_U32(ctx, 31, 0x37EDACu);
    ctx->pc = 0x37EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDA4u;
    // 0x37eda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419F18u, 0x37EDA4u, 0x37EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EDACu;
label_37edac:
    // 0x37edac: 0xc0e27ae  jal         func_389EB8
    ctx->pc = 0x37EDACu;
    SET_GPR_U32(ctx, 31, 0x37EDB4u);
    ctx->pc = 0x37EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EDACu;
    // 0x37edb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389EB8u, 0x37EDACu, 0x37EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37EDB4u;
label_37edb4:
    // 0x37edb4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37edb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37edb8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x37edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x37edbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x37edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_37edc0:
    // 0x37edc0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37edc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37edc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37edc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37edc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37edc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37edcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37edccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37edd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37edd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37edd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37edd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37edd8: 0x3e00008  jr          $ra
    ctx->pc = 0x37EDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EDD8u;
        // 0x37eddc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EDE0u;
    // 0x37ede0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37ede0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37ede4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37ede4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37ede8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37ede8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37edec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37edecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37edf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37edf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37edf4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37edf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37edf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37edfc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x37edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37ee00: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x37EE00u;
    {
        const bool branch_taken_0x37ee00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE00u;
        // 0x37ee04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee00) {
            ctx->pc = 0x37EE88u;
            goto label_37ee88;
        }
    }
    ctx->pc = 0x37EE08u;
    // 0x37ee08: 0x24130024  addiu       $s3, $zero, 0x24
    ctx->pc = 0x37ee08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x37ee0c: 0x2331018  mult        $v0, $s1, $s3
    ctx->pc = 0x37ee0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37ee10:
    // 0x37ee10: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x37ee10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x37ee14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37ee14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37ee18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x37ee18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37ee1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee20: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37EE20u;
    SET_GPR_U32(ctx, 31, 0x37EE28u);
    ctx->pc = 0x37EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE20u;
    // 0x37ee24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    goto label_37ed48;
    ctx->pc = 0x37EE28u;
label_37ee28:
    // 0x37ee28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee2c: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37EE2Cu;
    SET_GPR_U32(ctx, 31, 0x37EE34u);
    ctx->pc = 0x37EE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE2Cu;
    // 0x37ee30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    goto label_37ed48;
    ctx->pc = 0x37EE34u;
label_37ee34:
    // 0x37ee34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ee34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee38: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37EE38u;
    SET_GPR_U32(ctx, 31, 0x37EE40u);
    ctx->pc = 0x37EE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE38u;
    // 0x37ee3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    goto label_37ed48;
    ctx->pc = 0x37EE40u;
label_37ee40:
    // 0x37ee40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee44: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37EE44u;
    SET_GPR_U32(ctx, 31, 0x37EE4Cu);
    ctx->pc = 0x37EE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE44u;
    // 0x37ee48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    goto label_37ed48;
    ctx->pc = 0x37EE4Cu;
label_37ee4c:
    // 0x37ee4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ee4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee50: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37EE50u;
    SET_GPR_U32(ctx, 31, 0x37EE58u);
    ctx->pc = 0x37EE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE50u;
    // 0x37ee54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    goto label_37ed48;
    ctx->pc = 0x37EE58u;
label_37ee58:
    // 0x37ee58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ee58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee5c: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37EE5Cu;
    SET_GPR_U32(ctx, 31, 0x37EE64u);
    ctx->pc = 0x37EE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE5Cu;
    // 0x37ee60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    goto label_37ed48;
    ctx->pc = 0x37EE64u;
label_37ee64:
    // 0x37ee64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37ee64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee68: 0xc0dfb52  jal         func_37ED48
    ctx->pc = 0x37EE68u;
    SET_GPR_U32(ctx, 31, 0x37EE70u);
    ctx->pc = 0x37EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37EE68u;
    // 0x37ee6c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37ED48u;
    goto label_37ed48;
    ctx->pc = 0x37EE70u;
label_37ee70:
    // 0x37ee70: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x37ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x37ee74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x37ee74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37ee78: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x37ee78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37ee7c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x37EE7Cu;
    {
        const bool branch_taken_0x37ee7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EE7Cu;
        // 0x37ee80: 0x2331018  mult        $v0, $s1, $s3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ee7c) {
            ctx->pc = 0x37EE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ee10;
        }
    }
    ctx->pc = 0x37EE84u;
    // 0x37ee84: 0x0  nop
    ctx->pc = 0x37ee84u;
    // NOP
label_37ee88:
    // 0x37ee88: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37ee88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ee8c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37ee8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ee90: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37ee90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ee94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37ee94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ee98: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37ee98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ee9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ee9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37eea0: 0x3e00008  jr          $ra
    ctx->pc = 0x37EEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37EEA0u;
        // 0x37eea4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37EEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37EEA8u;
}
