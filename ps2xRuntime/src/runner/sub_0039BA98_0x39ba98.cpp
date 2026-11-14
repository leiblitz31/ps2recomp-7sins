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

// Function: sub_0039BA98
// Address: 0x39ba98 - 0x39bb80
void sub_0039BA98_0x39ba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BA98_0x39ba98");
#endif

    switch (ctx->pc) {
        case 0x39bb08u: goto label_39bb08;
        case 0x39bb1cu: goto label_39bb1c;
        case 0x39bb30u: goto label_39bb30;
        case 0x39bb40u: goto label_39bb40;
        case 0x39bb48u: goto label_39bb48;
        default: break;
    }

    ctx->pc = 0x39ba98u;

    // 0x39ba98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39ba98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39ba9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x39ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x39baa0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x39baa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x39baa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39baa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39baa8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x39baa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x39baac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39baacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39bab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x39bab4: 0x2623002c  addiu       $v1, $s1, 0x2C
    ctx->pc = 0x39bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x39bab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39babc: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x39babcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x39bac0: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39bac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39bac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bac8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x39bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x39bacc: 0x24a5cbe8  addiu       $a1, $a1, -0x3418
    ctx->pc = 0x39baccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953960));
    // 0x39bad0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x39bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x39bad4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x39bad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bad8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x39bad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x39badc: 0x8f83a9e8  lw          $v1, -0x5618($gp)
    ctx->pc = 0x39badcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945256)));
    // 0x39bae0: 0x8e27002c  lw          $a3, 0x2C($s1)
    ctx->pc = 0x39bae0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x39bae4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x39bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x39bae8: 0x2039821  addu        $s3, $s0, $v1
    ctx->pc = 0x39bae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x39baec: 0xace80004  sw          $t0, 0x4($a3)
    ctx->pc = 0x39baecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 8));
    // 0x39baf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x39baf4: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x39baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x39baf8: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x39baf8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39bafc: 0xae28002c  sw          $t0, 0x2C($s1)
    ctx->pc = 0x39bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 8));
    // 0x39bb00: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x39BB00u;
    SET_GPR_U32(ctx, 31, 0x39BB08u);
    ctx->pc = 0x39BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB00u;
    // 0x39bb04: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x39BB00u, 0x39BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB08u;
label_39bb08:
    // 0x39bb08: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39bb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39bb0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb10: 0x24a5cc60  addiu       $a1, $a1, -0x33A0
    ctx->pc = 0x39bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
    // 0x39bb14: 0xc0e2646  jal         func_389918
    ctx->pc = 0x39BB14u;
    SET_GPR_U32(ctx, 31, 0x39BB1Cu);
    ctx->pc = 0x39BB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB14u;
    // 0x39bb18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389918u, 0x39BB14u, 0x39BB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB1Cu;
label_39bb1c:
    // 0x39bb1c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39bb20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39bb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb24: 0x24a5ccd8  addiu       $a1, $a1, -0x3328
    ctx->pc = 0x39bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954200));
    // 0x39bb28: 0xc0e2666  jal         func_389998
    ctx->pc = 0x39BB28u;
    SET_GPR_U32(ctx, 31, 0x39BB30u);
    ctx->pc = 0x39BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB28u;
    // 0x39bb2c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389998u, 0x39BB28u, 0x39BB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB30u;
label_39bb30:
    // 0x39bb30: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x39BB30u;
    {
        const bool branch_taken_0x39bb30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB30u;
        // 0x39bb34: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bb30) {
            ctx->pc = 0x39BB48u;
            goto label_39bb48;
        }
    }
    ctx->pc = 0x39BB38u;
    // 0x39bb38: 0xc103afe  jal         func_40EBF8
    ctx->pc = 0x39BB38u;
    SET_GPR_U32(ctx, 31, 0x39BB40u);
    ctx->pc = 0x39BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB38u;
    // 0x39bb3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40EBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40EBF8u, 0x39BB38u, 0x39BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB40u;
label_39bb40:
    // 0x39bb40: 0xc106794  jal         func_419E50
    ctx->pc = 0x39BB40u;
    SET_GPR_U32(ctx, 31, 0x39BB48u);
    ctx->pc = 0x39BB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BB40u;
    // 0x39bb44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x39BB40u, 0x39BB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BB48u;
label_39bb48:
    // 0x39bb48: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39bb4c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x39bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x39bb50: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x39bb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x39bb54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39bb54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bb58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x39bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x39bb5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x39bb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39bb60: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x39bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x39bb64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39bb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39bb68: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x39bb68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x39bb6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39bb6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bb70: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x39bb70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bb78: 0x3e00008  jr          $ra
    ctx->pc = 0x39BB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BB78u;
        // 0x39bb7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BB80u;
}
