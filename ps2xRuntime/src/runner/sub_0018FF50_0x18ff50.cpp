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

// Function: sub_0018FF50
// Address: 0x18ff50 - 0x190150
void sub_0018FF50_0x18ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FF50_0x18ff50");
#endif

    switch (ctx->pc) {
        case 0x18ff80u: goto label_18ff80;
        case 0x18ff8cu: goto label_18ff8c;
        case 0x18ff9cu: goto label_18ff9c;
        case 0x18ffb0u: goto label_18ffb0;
        case 0x18ffc0u: goto label_18ffc0;
        case 0x18ffd8u: goto label_18ffd8;
        case 0x18ffe8u: goto label_18ffe8;
        case 0x190000u: goto label_190000;
        case 0x190044u: goto label_190044;
        case 0x190084u: goto label_190084;
        case 0x1900c4u: goto label_1900c4;
        case 0x190104u: goto label_190104;
        case 0x190138u: goto label_190138;
        default: break;
    }

    ctx->pc = 0x18ff50u;

label_18ff50:
    // 0x18ff50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18ff54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18ff58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ff5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ff60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ff64: 0xa3a50050  sb          $a1, 0x50($sp)
    ctx->pc = 0x18ff64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 5));
    // 0x18ff68: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x18ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x18ff6c: 0x93a30050  lbu         $v1, 0x50($sp)
    ctx->pc = 0x18ff6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ff70: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18FF70u;
    {
        const bool branch_taken_0x18ff70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff70) {
            ctx->pc = 0x190000u;
            goto label_190000;
        }
    }
    ctx->pc = 0x18FF78u;
    // 0x18ff78: 0xc090864  jal         func_242190
    ctx->pc = 0x18FF78u;
    SET_GPR_U32(ctx, 31, 0x18FF80u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x18FF78u, 0x18FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF80u;
label_18ff80:
    // 0x18ff80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ff80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff84: 0xc090868  jal         func_2421A0
    ctx->pc = 0x18FF84u;
    SET_GPR_U32(ctx, 31, 0x18FF8Cu);
    ctx->pc = 0x2421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2421A0u, 0x18FF84u, 0x18FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF8Cu;
label_18ff8c:
    // 0x18ff8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ff8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ff94: 0xc09090c  jal         func_242430
    ctx->pc = 0x18FF94u;
    SET_GPR_U32(ctx, 31, 0x18FF9Cu);
    ctx->pc = 0x242430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242430u, 0x18FF94u, 0x18FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FF9Cu;
label_18ff9c:
    // 0x18ff9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18ff9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffa0: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x18ffa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ffa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffa8: 0xc090914  jal         func_242450
    ctx->pc = 0x18FFA8u;
    SET_GPR_U32(ctx, 31, 0x18FFB0u);
    ctx->pc = 0x242450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242450u, 0x18FFA8u, 0x18FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFB0u;
label_18ffb0:
    // 0x18ffb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ffb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ffb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffb8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x18FFB8u;
    SET_GPR_U32(ctx, 31, 0x18FFC0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x18FFB8u, 0x18FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFC0u;
label_18ffc0:
    // 0x18ffc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ffc4: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18FFC4u;
    {
        const bool branch_taken_0x18ffc4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ffc4) {
            ctx->pc = 0x190000u;
            goto label_190000;
        }
    }
    ctx->pc = 0x18FFCCu;
    // 0x18ffcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ffccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffd0: 0xc090914  jal         func_242450
    ctx->pc = 0x18FFD0u;
    SET_GPR_U32(ctx, 31, 0x18FFD8u);
    ctx->pc = 0x242450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242450u, 0x18FFD0u, 0x18FFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFD8u;
label_18ffd8:
    // 0x18ffd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ffdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ffe0: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x18FFE0u;
    SET_GPR_U32(ctx, 31, 0x18FFE8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x18FFE0u, 0x18FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FFE8u;
label_18ffe8:
    // 0x18ffe8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ffec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x18ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x18fff0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18fff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fff8: 0xc09091c  jal         func_242470
    ctx->pc = 0x18FFF8u;
    SET_GPR_U32(ctx, 31, 0x190000u);
    ctx->pc = 0x242470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242470u, 0x18FFF8u, 0x190000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190000u;
label_190000:
    // 0x190000: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x190000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190004: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190008: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19000c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19000cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190010: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x190010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190014: 0x3e00008  jr          $ra
    ctx->pc = 0x190014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19001Cu;
    // 0x19001c: 0x0  nop
    ctx->pc = 0x19001cu;
    // NOP
    // 0x190020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19002c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x19002cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x190030: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190034: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x190034u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190038: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x190038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19003c: 0xc063fd4  jal         func_18FF50
    ctx->pc = 0x19003Cu;
    SET_GPR_U32(ctx, 31, 0x190044u);
    ctx->pc = 0x18FF50u;
    goto label_18ff50;
    ctx->pc = 0x190044u;
label_190044:
    // 0x190044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190048: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19004c: 0x3e00008  jr          $ra
    ctx->pc = 0x19004Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19004Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190054u;
    // 0x190054: 0x0  nop
    ctx->pc = 0x190054u;
    // NOP
    // 0x190058: 0x0  nop
    ctx->pc = 0x190058u;
    // NOP
    // 0x19005c: 0x0  nop
    ctx->pc = 0x19005cu;
    // NOP
    // 0x190060: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x190060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x190064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19006c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x19006cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x190070: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x190070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190074: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x190074u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190078: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x190078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19007c: 0xc063fd4  jal         func_18FF50
    ctx->pc = 0x19007Cu;
    SET_GPR_U32(ctx, 31, 0x190084u);
    ctx->pc = 0x18FF50u;
    goto label_18ff50;
    ctx->pc = 0x190084u;
label_190084:
    // 0x190084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190088: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19008c: 0x3e00008  jr          $ra
    ctx->pc = 0x19008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190094u;
    // 0x190094: 0x0  nop
    ctx->pc = 0x190094u;
    // NOP
    // 0x190098: 0x0  nop
    ctx->pc = 0x190098u;
    // NOP
    // 0x19009c: 0x0  nop
    ctx->pc = 0x19009cu;
    // NOP
    // 0x1900a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1900a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1900a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1900a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1900a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1900a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1900ac: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1900acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1900b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1900b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1900b4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1900b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1900b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1900b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900bc: 0xc063fd4  jal         func_18FF50
    ctx->pc = 0x1900BCu;
    SET_GPR_U32(ctx, 31, 0x1900C4u);
    ctx->pc = 0x18FF50u;
    goto label_18ff50;
    ctx->pc = 0x1900C4u;
label_1900c4:
    // 0x1900c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1900c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1900c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1900c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1900cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1900CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1900CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1900D4u;
    // 0x1900d4: 0x0  nop
    ctx->pc = 0x1900d4u;
    // NOP
    // 0x1900d8: 0x0  nop
    ctx->pc = 0x1900d8u;
    // NOP
    // 0x1900dc: 0x0  nop
    ctx->pc = 0x1900dcu;
    // NOP
    // 0x1900e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1900e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1900e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1900e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1900e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1900e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1900ec: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1900ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1900f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1900f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1900f4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1900f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1900f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1900f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1900fc: 0xc063fd4  jal         func_18FF50
    ctx->pc = 0x1900FCu;
    SET_GPR_U32(ctx, 31, 0x190104u);
    ctx->pc = 0x18FF50u;
    goto label_18ff50;
    ctx->pc = 0x190104u;
label_190104:
    // 0x190104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190108: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x190108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19010c: 0x3e00008  jr          $ra
    ctx->pc = 0x19010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19010Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190114u;
    // 0x190114: 0x0  nop
    ctx->pc = 0x190114u;
    // NOP
    // 0x190118: 0x0  nop
    ctx->pc = 0x190118u;
    // NOP
    // 0x19011c: 0x0  nop
    ctx->pc = 0x19011cu;
    // NOP
    // 0x190120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x190124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190128: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x190128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19012c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190130: 0xc0ad720  jal         func_2B5C80
    ctx->pc = 0x190130u;
    SET_GPR_U32(ctx, 31, 0x190138u);
    ctx->pc = 0x2B5C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C80u, 0x190130u, 0x190138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190138u;
label_190138:
    // 0x190138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19013c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19013cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190140: 0x3e00008  jr          $ra
    ctx->pc = 0x190140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190148u;
    // 0x190148: 0x0  nop
    ctx->pc = 0x190148u;
    // NOP
    // 0x19014c: 0x0  nop
    ctx->pc = 0x19014cu;
    // NOP
    ctx->pc = 0x190150u;
}
