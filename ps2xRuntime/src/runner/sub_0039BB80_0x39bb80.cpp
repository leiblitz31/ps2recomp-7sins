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

// Function: sub_0039BB80
// Address: 0x39bb80 - 0x39bc68
void sub_0039BB80_0x39bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BB80_0x39bb80");
#endif

    switch (ctx->pc) {
        case 0x39bbf8u: goto label_39bbf8;
        case 0x39bc0cu: goto label_39bc0c;
        case 0x39bc20u: goto label_39bc20;
        case 0x39bc3cu: goto label_39bc3c;
        case 0x39bc48u: goto label_39bc48;
        default: break;
    }

    ctx->pc = 0x39bb80u;

    // 0x39bb80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39bb84: 0x8f82a9e8  lw          $v0, -0x5618($gp)
    ctx->pc = 0x39bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945256)));
    // 0x39bb88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39bb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x39bb8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39bb8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x39bb90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39bb90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39bb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39bb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39bb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39bb9c: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x39bb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39bba0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x39bba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x39bba4: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x39BBA4u;
    {
        const bool branch_taken_0x39bba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBA4u;
        // 0x39bba8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bba4) {
            ctx->pc = 0x39BC2Cu;
            goto label_39bc2c;
        }
    }
    ctx->pc = 0x39BBACu;
    // 0x39bbac: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x39bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x39bbb0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x39bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39bbb4: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x39bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x39bbb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x39bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x39bbbc: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BBBCu;
    {
        const bool branch_taken_0x39bbbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x39BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BBBCu;
        // 0x39bbc0: 0xaca20024  sw          $v0, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bbbc) {
            ctx->pc = 0x39BBCCu;
            goto label_39bbcc;
        }
    }
    ctx->pc = 0x39BBC4u;
    // 0x39bbc4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x39bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39bbc8: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x39bbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
label_39bbcc:
    // 0x39bbcc: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x39bbccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x39bbd0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39bbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39bbd4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x39bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39bbd8: 0x24a5cc18  addiu       $a1, $a1, -0x33E8
    ctx->pc = 0x39bbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954008));
    // 0x39bbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bbe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x39bbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bbe4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x39bbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x39bbe8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x39bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x39bbec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x39bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x39bbf0: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x39BBF0u;
    SET_GPR_U32(ctx, 31, 0x39BBF8u);
    ctx->pc = 0x39BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BBF0u;
    // 0x39bbf4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x39BBF0u, 0x39BBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BBF8u;
label_39bbf8:
    // 0x39bbf8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39bbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39bbfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc00: 0x24a5cc90  addiu       $a1, $a1, -0x3370
    ctx->pc = 0x39bc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
    // 0x39bc04: 0xc0e2646  jal         func_389918
    ctx->pc = 0x39BC04u;
    SET_GPR_U32(ctx, 31, 0x39BC0Cu);
    ctx->pc = 0x39BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC04u;
    // 0x39bc08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389918u, 0x39BC04u, 0x39BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC0Cu;
label_39bc0c:
    // 0x39bc0c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39bc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39bc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc14: 0x24a5cd08  addiu       $a1, $a1, -0x32F8
    ctx->pc = 0x39bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954248));
    // 0x39bc18: 0xc0e2666  jal         func_389998
    ctx->pc = 0x39BC18u;
    SET_GPR_U32(ctx, 31, 0x39BC20u);
    ctx->pc = 0x39BC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC18u;
    // 0x39bc1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389998u, 0x39BC18u, 0x39BC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC20u;
label_39bc20:
    // 0x39bc20: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x39bc20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x39bc24: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x39BC24u;
    {
        const bool branch_taken_0x39bc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC24u;
        // 0x39bc28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bc24) {
            ctx->pc = 0x39BC50u;
            goto label_39bc50;
        }
    }
    ctx->pc = 0x39BC2Cu;
label_39bc2c:
    // 0x39bc2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39bc30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x39bc30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39bc34: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x39BC34u;
    SET_GPR_U32(ctx, 31, 0x39BC3Cu);
    ctx->pc = 0x39BC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC34u;
    // 0x39bc38: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x39BC34u, 0x39BC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC3Cu;
label_39bc3c:
    // 0x39bc3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x39bc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc40: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x39BC40u;
    SET_GPR_U32(ctx, 31, 0x39BC48u);
    ctx->pc = 0x39BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BC40u;
    // 0x39bc44: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x39BC40u, 0x39BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BC48u;
label_39bc48:
    // 0x39bc48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39bc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc4c: 0x0  nop
    ctx->pc = 0x39bc4cu;
    // NOP
label_39bc50:
    // 0x39bc50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39bc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bc54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39bc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bc58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39bc58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bc5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39bc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bc60: 0x3e00008  jr          $ra
    ctx->pc = 0x39BC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BC60u;
        // 0x39bc64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BC68u;
}
