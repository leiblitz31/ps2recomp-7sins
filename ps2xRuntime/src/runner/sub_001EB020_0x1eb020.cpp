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

// Function: sub_001EB020
// Address: 0x1eb020 - 0x1ec000
void sub_001EB020_0x1eb020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB020_0x1eb020");
#endif

    switch (ctx->pc) {
        case 0x1eb0b0u: goto label_1eb0b0;
        case 0x1eb0ccu: goto label_1eb0cc;
        case 0x1eb0e4u: goto label_1eb0e4;
        case 0x1eb130u: goto label_1eb130;
        case 0x1eb14cu: goto label_1eb14c;
        case 0x1eb164u: goto label_1eb164;
        case 0x1eb1b0u: goto label_1eb1b0;
        case 0x1eb1ccu: goto label_1eb1cc;
        case 0x1eb1e4u: goto label_1eb1e4;
        case 0x1eb230u: goto label_1eb230;
        case 0x1eb24cu: goto label_1eb24c;
        case 0x1eb264u: goto label_1eb264;
        case 0x1eb314u: goto label_1eb314;
        case 0x1eb33cu: goto label_1eb33c;
        case 0x1eb348u: goto label_1eb348;
        case 0x1eb360u: goto label_1eb360;
        case 0x1eb374u: goto label_1eb374;
        case 0x1eb394u: goto label_1eb394;
        case 0x1eb3a8u: goto label_1eb3a8;
        case 0x1eb480u: goto label_1eb480;
        case 0x1eb498u: goto label_1eb498;
        case 0x1eb50cu: goto label_1eb50c;
        case 0x1eb528u: goto label_1eb528;
        case 0x1eb564u: goto label_1eb564;
        case 0x1eb57cu: goto label_1eb57c;
        case 0x1eb5a4u: goto label_1eb5a4;
        case 0x1eb5b0u: goto label_1eb5b0;
        case 0x1eb5e0u: goto label_1eb5e0;
        case 0x1eb5f4u: goto label_1eb5f4;
        case 0x1eb678u: goto label_1eb678;
        case 0x1eb698u: goto label_1eb698;
        case 0x1eb6c4u: goto label_1eb6c4;
        case 0x1eb718u: goto label_1eb718;
        case 0x1eb734u: goto label_1eb734;
        case 0x1eb764u: goto label_1eb764;
        case 0x1eb788u: goto label_1eb788;
        case 0x1eb7d4u: goto label_1eb7d4;
        case 0x1eb7f0u: goto label_1eb7f0;
        case 0x1eb800u: goto label_1eb800;
        case 0x1eb81cu: goto label_1eb81c;
        case 0x1eb82cu: goto label_1eb82c;
        case 0x1eb840u: goto label_1eb840;
        case 0x1eb84cu: goto label_1eb84c;
        case 0x1eb860u: goto label_1eb860;
        case 0x1eb86cu: goto label_1eb86c;
        case 0x1eb880u: goto label_1eb880;
        case 0x1eba48u: goto label_1eba48;
        case 0x1eba5cu: goto label_1eba5c;
        case 0x1eba70u: goto label_1eba70;
        case 0x1ebafcu: goto label_1ebafc;
        case 0x1ebb48u: goto label_1ebb48;
        case 0x1ebb68u: goto label_1ebb68;
        case 0x1ebb78u: goto label_1ebb78;
        case 0x1ebb84u: goto label_1ebb84;
        case 0x1ebbb8u: goto label_1ebbb8;
        case 0x1ebbc8u: goto label_1ebbc8;
        case 0x1ebbdcu: goto label_1ebbdc;
        case 0x1ebbf0u: goto label_1ebbf0;
        case 0x1ebc74u: goto label_1ebc74;
        case 0x1ebd3cu: goto label_1ebd3c;
        case 0x1ebd4cu: goto label_1ebd4c;
        case 0x1ebd6cu: goto label_1ebd6c;
        case 0x1ebd98u: goto label_1ebd98;
        case 0x1ebdb0u: goto label_1ebdb0;
        case 0x1ebdc0u: goto label_1ebdc0;
        case 0x1ebdf0u: goto label_1ebdf0;
        case 0x1ebe24u: goto label_1ebe24;
        case 0x1ebe74u: goto label_1ebe74;
        case 0x1ebeb0u: goto label_1ebeb0;
        case 0x1ebec8u: goto label_1ebec8;
        case 0x1ebee4u: goto label_1ebee4;
        case 0x1ebef0u: goto label_1ebef0;
        case 0x1ebf10u: goto label_1ebf10;
        case 0x1ebf2cu: goto label_1ebf2c;
        case 0x1ebf38u: goto label_1ebf38;
        case 0x1ebf50u: goto label_1ebf50;
        case 0x1ebf8cu: goto label_1ebf8c;
        case 0x1ebfa4u: goto label_1ebfa4;
        case 0x1ebfb8u: goto label_1ebfb8;
        default: break;
    }

    ctx->pc = 0x1eb020u;

label_1eb020:
    // 0x1eb020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb024: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1eb024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1eb028: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1eb028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb02c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eb02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb030: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1eb030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eb034: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB03Cu;
    // 0x1eb03c: 0x0  nop
    ctx->pc = 0x1eb03cu;
    // NOP
    // 0x1eb040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb044: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb048: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB050u;
    // 0x1eb050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb054: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb058: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB060u;
    // 0x1eb060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb064: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb068: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB070u;
    // 0x1eb070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb074: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb074u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb078: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB080u;
    // 0x1eb080: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eb088: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb08c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1eb08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1eb090: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1eb090u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eb094: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1eb094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb098: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EB098u;
    {
        const bool branch_taken_0x1eb098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb098) {
            ctx->pc = 0x1EB0E4u;
            goto label_1eb0e4;
        }
    }
    ctx->pc = 0x1EB0A0u;
    // 0x1eb0a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eb0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0a8: 0xc07bd44  jal         func_1EF510
    ctx->pc = 0x1EB0A8u;
    SET_GPR_U32(ctx, 31, 0x1EB0B0u);
    ctx->pc = 0x1EF510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF510u, 0x1EB0A8u, 0x1EB0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0B0u;
label_1eb0b0:
    // 0x1eb0b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eb0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0b4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB0B4u;
    {
        const bool branch_taken_0x1eb0b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0b4) {
            ctx->pc = 0x1EB0E4u;
            goto label_1eb0e4;
        }
    }
    ctx->pc = 0x1EB0BCu;
    // 0x1eb0bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb0c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0c4: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EB0C4u;
    SET_GPR_U32(ctx, 31, 0x1EB0CCu);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EB0C4u, 0x1EB0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0CCu;
label_1eb0cc:
    // 0x1eb0cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB0CCu;
    {
        const bool branch_taken_0x1eb0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0cc) {
            ctx->pc = 0x1EB0E4u;
            goto label_1eb0e4;
        }
    }
    ctx->pc = 0x1EB0D4u;
    // 0x1eb0d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb0d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb0dc: 0xc07c058  jal         func_1F0160
    ctx->pc = 0x1EB0DCu;
    SET_GPR_U32(ctx, 31, 0x1EB0E4u);
    ctx->pc = 0x1F0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0160u, 0x1EB0DCu, 0x1EB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB0E4u;
label_1eb0e4:
    // 0x1eb0e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb0e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb0e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb0e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb0ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1eb0ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eb0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB0F8u;
    // 0x1eb0f8: 0x0  nop
    ctx->pc = 0x1eb0f8u;
    // NOP
    // 0x1eb0fc: 0x0  nop
    ctx->pc = 0x1eb0fcu;
    // NOP
    // 0x1eb100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eb108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb10c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1eb10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1eb110: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1eb110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eb114: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1eb114u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb118: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EB118u;
    {
        const bool branch_taken_0x1eb118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb118) {
            ctx->pc = 0x1EB164u;
            goto label_1eb164;
        }
    }
    ctx->pc = 0x1EB120u;
    // 0x1eb120: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb124: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1eb124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eb128: 0xc07bd44  jal         func_1EF510
    ctx->pc = 0x1EB128u;
    SET_GPR_U32(ctx, 31, 0x1EB130u);
    ctx->pc = 0x1EF510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF510u, 0x1EB128u, 0x1EB130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB130u;
label_1eb130:
    // 0x1eb130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eb130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb134: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB134u;
    {
        const bool branch_taken_0x1eb134 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb134) {
            ctx->pc = 0x1EB164u;
            goto label_1eb164;
        }
    }
    ctx->pc = 0x1EB13Cu;
    // 0x1eb13c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb144: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EB144u;
    SET_GPR_U32(ctx, 31, 0x1EB14Cu);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EB144u, 0x1EB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB14Cu;
label_1eb14c:
    // 0x1eb14c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB14Cu;
    {
        const bool branch_taken_0x1eb14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb14c) {
            ctx->pc = 0x1EB164u;
            goto label_1eb164;
        }
    }
    ctx->pc = 0x1EB154u;
    // 0x1eb154: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb158: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb15c: 0xc07c058  jal         func_1F0160
    ctx->pc = 0x1EB15Cu;
    SET_GPR_U32(ctx, 31, 0x1EB164u);
    ctx->pc = 0x1F0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0160u, 0x1EB15Cu, 0x1EB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB164u;
label_1eb164:
    // 0x1eb164: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb168: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb16c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1eb16cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eb170: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB178u;
    // 0x1eb178: 0x0  nop
    ctx->pc = 0x1eb178u;
    // NOP
    // 0x1eb17c: 0x0  nop
    ctx->pc = 0x1eb17cu;
    // NOP
    // 0x1eb180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eb188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb18c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1eb18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1eb190: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1eb190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eb194: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1eb194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb198: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EB198u;
    {
        const bool branch_taken_0x1eb198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb198) {
            ctx->pc = 0x1EB1E4u;
            goto label_1eb1e4;
        }
    }
    ctx->pc = 0x1EB1A0u;
    // 0x1eb1a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb1a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1eb1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eb1a8: 0xc07bd44  jal         func_1EF510
    ctx->pc = 0x1EB1A8u;
    SET_GPR_U32(ctx, 31, 0x1EB1B0u);
    ctx->pc = 0x1EF510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF510u, 0x1EB1A8u, 0x1EB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1B0u;
label_1eb1b0:
    // 0x1eb1b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eb1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1b4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB1B4u;
    {
        const bool branch_taken_0x1eb1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1b4) {
            ctx->pc = 0x1EB1E4u;
            goto label_1eb1e4;
        }
    }
    ctx->pc = 0x1EB1BCu;
    // 0x1eb1bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb1c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1c4: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EB1C4u;
    SET_GPR_U32(ctx, 31, 0x1EB1CCu);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EB1C4u, 0x1EB1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1CCu;
label_1eb1cc:
    // 0x1eb1cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB1CCu;
    {
        const bool branch_taken_0x1eb1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1cc) {
            ctx->pc = 0x1EB1E4u;
            goto label_1eb1e4;
        }
    }
    ctx->pc = 0x1EB1D4u;
    // 0x1eb1d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb1d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb1dc: 0xc07c058  jal         func_1F0160
    ctx->pc = 0x1EB1DCu;
    SET_GPR_U32(ctx, 31, 0x1EB1E4u);
    ctx->pc = 0x1F0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0160u, 0x1EB1DCu, 0x1EB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB1E4u;
label_1eb1e4:
    // 0x1eb1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb1ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1eb1ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eb1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB1F8u;
    // 0x1eb1f8: 0x0  nop
    ctx->pc = 0x1eb1f8u;
    // NOP
    // 0x1eb1fc: 0x0  nop
    ctx->pc = 0x1eb1fcu;
    // NOP
    // 0x1eb200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eb200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eb204: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eb204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eb208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb20c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1eb20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1eb210: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1eb210u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1eb214: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1eb214u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eb218: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EB218u;
    {
        const bool branch_taken_0x1eb218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb218) {
            ctx->pc = 0x1EB264u;
            goto label_1eb264;
        }
    }
    ctx->pc = 0x1EB220u;
    // 0x1eb220: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb224: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eb224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb228: 0xc07bd44  jal         func_1EF510
    ctx->pc = 0x1EB228u;
    SET_GPR_U32(ctx, 31, 0x1EB230u);
    ctx->pc = 0x1EF510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF510u, 0x1EB228u, 0x1EB230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB230u;
label_1eb230:
    // 0x1eb230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eb230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb234: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB234u;
    {
        const bool branch_taken_0x1eb234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb234) {
            ctx->pc = 0x1EB264u;
            goto label_1eb264;
        }
    }
    ctx->pc = 0x1EB23Cu;
    // 0x1eb23c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb244: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EB244u;
    SET_GPR_U32(ctx, 31, 0x1EB24Cu);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EB244u, 0x1EB24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB24Cu;
label_1eb24c:
    // 0x1eb24c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB24Cu;
    {
        const bool branch_taken_0x1eb24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb24c) {
            ctx->pc = 0x1EB264u;
            goto label_1eb264;
        }
    }
    ctx->pc = 0x1EB254u;
    // 0x1eb254: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1eb254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb258: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb25c: 0xc07c058  jal         func_1F0160
    ctx->pc = 0x1EB25Cu;
    SET_GPR_U32(ctx, 31, 0x1EB264u);
    ctx->pc = 0x1F0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0160u, 0x1EB25Cu, 0x1EB264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB264u;
label_1eb264:
    // 0x1eb264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1eb264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb26c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1eb26cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eb270: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB278u;
    // 0x1eb278: 0x0  nop
    ctx->pc = 0x1eb278u;
    // NOP
    // 0x1eb27c: 0x0  nop
    ctx->pc = 0x1eb27cu;
    // NOP
    // 0x1eb280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb284: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb288: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB290u;
    // 0x1eb290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb294: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb298: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB2A0u;
    // 0x1eb2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb2a4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB2B0u;
    // 0x1eb2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb2b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eb2b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eb2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB2C0u;
    // 0x1eb2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eb2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eb2c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1eb2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eb2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB2D0u;
    // 0x1eb2d0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1eb2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1eb2d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1eb2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1eb2d8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1eb2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1eb2dc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1eb2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1eb2e0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1eb2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1eb2e4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1eb2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1eb2e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1eb2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1eb2ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eb2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eb2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eb2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eb2f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eb2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eb2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eb2fc: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x1eb2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
    // 0x1eb300: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1eb300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1eb304: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eb304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb308: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB308u;
    {
        const bool branch_taken_0x1eb308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb308) {
            ctx->pc = 0x1EB330u;
            goto label_1eb330;
        }
    }
    ctx->pc = 0x1EB310u;
    // 0x1eb310: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1eb310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1eb314:
    // 0x1eb314: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1eb314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb318: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1eb318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1eb31c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1eb31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1eb320: 0x0  nop
    ctx->pc = 0x1eb320u;
    // NOP
    // 0x1eb324: 0x0  nop
    ctx->pc = 0x1eb324u;
    // NOP
    // 0x1eb328: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EB328u;
    {
        const bool branch_taken_0x1eb328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb328) {
            ctx->pc = 0x1EB314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb314;
        }
    }
    ctx->pc = 0x1EB330u;
label_1eb330:
    // 0x1eb330: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1eb330u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb334: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EB334u;
    {
        const bool branch_taken_0x1eb334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb334) {
            ctx->pc = 0x1EB378u;
            goto label_1eb378;
        }
    }
    ctx->pc = 0x1EB33Cu;
label_1eb33c:
    // 0x1eb33c: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb340: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EB340u;
    SET_GPR_U32(ctx, 31, 0x1EB348u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EB340u, 0x1EB348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB348u;
label_1eb348:
    // 0x1eb348: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1eb348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1eb34c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eb34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb350: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1eb350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1eb354: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1eb354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb358: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB358u;
    SET_GPR_U32(ctx, 31, 0x1EB360u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB358u, 0x1EB360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB360u;
label_1eb360:
    // 0x1eb360: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1eb360u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1eb364: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eb364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb368: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eb368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb36c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1EB36Cu;
    SET_GPR_U32(ctx, 31, 0x1EB374u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1EB36Cu, 0x1EB374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB374u;
label_1eb374:
    // 0x1eb374: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1eb374u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1eb378:
    // 0x1eb378: 0x2ec20028  sltiu       $v0, $s6, 0x28
    ctx->pc = 0x1eb378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x1eb37c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1EB37Cu;
    {
        const bool branch_taken_0x1eb37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb37c) {
            ctx->pc = 0x1EB33Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb33c;
        }
    }
    ctx->pc = 0x1EB384u;
    // 0x1eb384: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb388: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1eb388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1eb38c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x1EB38Cu;
    SET_GPR_U32(ctx, 31, 0x1EB394u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x1EB38Cu, 0x1EB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB394u;
label_1eb394:
    // 0x1eb394: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1eb394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x1eb398: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eb398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb39c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1eb39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3a0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x1EB3A0u;
    {
        const bool branch_taken_0x1eb3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3a0) {
            ctx->pc = 0x1EB580u;
            goto label_1eb580;
        }
    }
    ctx->pc = 0x1EB3A8u;
label_1eb3a8:
    // 0x1eb3a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1eb3a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb3ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eb3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eb3b0: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EB3B0u;
    {
        const bool branch_taken_0x1eb3b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eb3b0) {
            ctx->pc = 0x1EB3FCu;
            goto label_1eb3fc;
        }
    }
    ctx->pc = 0x1EB3B8u;
    // 0x1eb3b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb3bc: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB3BCu;
    {
        const bool branch_taken_0x1eb3bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eb3bc) {
            ctx->pc = 0x1EB3E8u;
            goto label_1eb3e8;
        }
    }
    ctx->pc = 0x1EB3C4u;
    // 0x1eb3c4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB3C4u;
    {
        const bool branch_taken_0x1eb3c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3c4) {
            ctx->pc = 0x1EB3D4u;
            goto label_1eb3d4;
        }
    }
    ctx->pc = 0x1EB3CCu;
    // 0x1eb3cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EB3CCu;
    {
        const bool branch_taken_0x1eb3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3cc) {
            ctx->pc = 0x1EB408u;
            goto label_1eb408;
        }
    }
    ctx->pc = 0x1EB3D4u;
label_1eb3d4:
    // 0x1eb3d4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb3d8: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x1eb3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb3dc: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1eb3e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EB3E0u;
    {
        const bool branch_taken_0x1eb3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3e0) {
            ctx->pc = 0x1EB408u;
            goto label_1eb408;
        }
    }
    ctx->pc = 0x1EB3E8u;
label_1eb3e8:
    // 0x1eb3e8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb3ec: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1eb3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb3f0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1eb3f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB3F4u;
    {
        const bool branch_taken_0x1eb3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb3f4) {
            ctx->pc = 0x1EB408u;
            goto label_1eb408;
        }
    }
    ctx->pc = 0x1EB3FCu;
label_1eb3fc:
    // 0x1eb3fc: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb400: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1eb400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb404: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1eb408:
    // 0x1eb408: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb40c: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1eb40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb410: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1eb410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1eb414: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1eb414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1eb418: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB418u;
    {
        const bool branch_taken_0x1eb418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb418) {
            ctx->pc = 0x1EB46Cu;
            goto label_1eb46c;
        }
    }
    ctx->pc = 0x1EB420u;
    // 0x1eb420: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1eb420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1eb424: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1eb424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1eb428: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1eb428u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1eb42c: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1EB42Cu;
    {
        const bool branch_taken_0x1eb42c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb42c) {
            ctx->pc = 0x1EB46Cu;
            goto label_1eb46c;
        }
    }
    ctx->pc = 0x1EB434u;
    // 0x1eb434: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb438: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb43c: 0x80420060  lb          $v0, 0x60($v0)
    ctx->pc = 0x1eb43cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1eb440: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1eb440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1eb444: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1eb444u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1eb448: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1eb448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1eb44c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB44Cu;
    {
        const bool branch_taken_0x1eb44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb44c) {
            ctx->pc = 0x1EB46Cu;
            goto label_1eb46c;
        }
    }
    ctx->pc = 0x1EB454u;
    // 0x1eb454: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb458: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1eb458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1eb45c: 0x80420060  lb          $v0, 0x60($v0)
    ctx->pc = 0x1eb45cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1eb460: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1eb460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1eb464: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1eb464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1eb468: 0x2455ffd0  addiu       $s5, $v0, -0x30
    ctx->pc = 0x1eb468u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1eb46c:
    // 0x1eb46c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eb46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb470: 0x26a50022  addiu       $a1, $s5, 0x22
    ctx->pc = 0x1eb470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 34));
    // 0x1eb474: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1eb474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1eb478: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB478u;
    SET_GPR_U32(ctx, 31, 0x1EB480u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB478u, 0x1EB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB480u;
label_1eb480:
    // 0x1eb480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eb480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb484: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb488: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eb488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb48c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1eb48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1eb490: 0xc07c200  jal         func_1F0800
    ctx->pc = 0x1EB490u;
    SET_GPR_U32(ctx, 31, 0x1EB498u);
    ctx->pc = 0x1F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0800u, 0x1EB490u, 0x1EB498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB498u;
label_1eb498:
    // 0x1eb498: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1eb498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eb49c: 0x16a20037  bne         $s5, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1EB49Cu;
    {
        const bool branch_taken_0x1eb49c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb49c) {
            ctx->pc = 0x1EB57Cu;
            goto label_1eb57c;
        }
    }
    ctx->pc = 0x1EB4A4u;
    // 0x1eb4a4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1eb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1eb4a8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1eb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eb4ac: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1eb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1eb4b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1eb4b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1eb4b4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb4b8: 0xc44100b8  lwc1        $f1, 0xB8($v0)
    ctx->pc = 0x1eb4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb4bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1eb4bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb4c0: 0x0  nop
    ctx->pc = 0x1eb4c0u;
    // NOP
    // 0x1eb4c4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1eb4c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1eb4c8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1eb4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1eb4cc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1eb4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x1eb4d0: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb4d4: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1eb4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb4d8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb4dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb4dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb4e0: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1eb4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1eb4e4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb4e8: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x1eb4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb4ec: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1eb4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb4f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb4f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb4f4: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1eb4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1eb4f8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eb4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb4fc: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1eb4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1eb500: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x1eb500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1eb504: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB504u;
    SET_GPR_U32(ctx, 31, 0x1EB50Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB504u, 0x1EB50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB50Cu;
label_1eb50c:
    // 0x1eb50c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1eb50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb510: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb514: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eb514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb518: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x1eb518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1eb51c: 0xc46c00b8  lwc1        $f12, 0xB8($v1)
    ctx->pc = 0x1eb51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eb520: 0xc07c200  jal         func_1F0800
    ctx->pc = 0x1EB520u;
    SET_GPR_U32(ctx, 31, 0x1EB528u);
    ctx->pc = 0x1F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0800u, 0x1EB520u, 0x1EB528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB528u;
label_1eb528:
    // 0x1eb528: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb52c: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x1eb52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb530: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb538: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1eb538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1eb53c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb540: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x1eb540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb544: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1eb544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb548: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eb548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eb54c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1eb54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1eb550: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eb550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb554: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1eb558: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1eb558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1eb55c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB55Cu;
    SET_GPR_U32(ctx, 31, 0x1EB564u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB55Cu, 0x1EB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB564u;
label_1eb564:
    // 0x1eb564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eb564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb568: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb56c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eb56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb570: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x1eb570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x1eb574: 0xc07c200  jal         func_1F0800
    ctx->pc = 0x1EB574u;
    SET_GPR_U32(ctx, 31, 0x1EB57Cu);
    ctx->pc = 0x1F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0800u, 0x1EB574u, 0x1EB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB57Cu;
label_1eb57c:
    // 0x1eb57c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1eb57cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eb580:
    // 0x1eb580: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eb580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eb584: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1eb584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1eb588: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1eb588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eb58c: 0x1440ff86  bnez        $v0, . + 4 + (-0x7A << 2)
    ctx->pc = 0x1EB58Cu;
    {
        const bool branch_taken_0x1eb58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb58c) {
            ctx->pc = 0x1EB3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb3a8;
        }
    }
    ctx->pc = 0x1EB594u;
    // 0x1eb594: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eb594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb598: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1eb598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1eb59c: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1EB59Cu;
    SET_GPR_U32(ctx, 31, 0x1EB5A4u);
    ctx->pc = 0x1EB020u;
    goto label_1eb020;
    ctx->pc = 0x1EB5A4u;
label_1eb5a4:
    // 0x1eb5a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1eb5a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5a8: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x1EB5A8u;
    {
        const bool branch_taken_0x1eb5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb5a8) {
            ctx->pc = 0x1EBA4Cu;
            goto label_1eba4c;
        }
    }
    ctx->pc = 0x1EB5B0u;
label_1eb5b0:
    // 0x1eb5b0: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x1eb5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1eb5b4: 0x12000124  beqz        $s0, . + 4 + (0x124 << 2)
    ctx->pc = 0x1EB5B4u;
    {
        const bool branch_taken_0x1eb5b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb5b4) {
            ctx->pc = 0x1EBA48u;
            goto label_1eba48;
        }
    }
    ctx->pc = 0x1EB5BCu;
    // 0x1eb5bc: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1eb5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eb5c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1eb5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb5c8: 0x1462011f  bne         $v1, $v0, . + 4 + (0x11F << 2)
    ctx->pc = 0x1EB5C8u;
    {
        const bool branch_taken_0x1eb5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb5c8) {
            ctx->pc = 0x1EBA48u;
            goto label_1eba48;
        }
    }
    ctx->pc = 0x1EB5D0u;
    // 0x1eb5d0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb5d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5d8: 0xc07be2c  jal         func_1EF8B0
    ctx->pc = 0x1EB5D8u;
    SET_GPR_U32(ctx, 31, 0x1EB5E0u);
    ctx->pc = 0x1EF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B0u, 0x1EB5D8u, 0x1EB5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB5E0u;
label_1eb5e0:
    // 0x1eb5e0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EB5E0u;
    {
        const bool branch_taken_0x1eb5e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb5e0) {
            ctx->pc = 0x1EB6B0u;
            goto label_1eb6b0;
        }
    }
    ctx->pc = 0x1EB5E8u;
    // 0x1eb5e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1eb5e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5ec: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1EB5ECu;
    {
        const bool branch_taken_0x1eb5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb5ec) {
            ctx->pc = 0x1EB69Cu;
            goto label_1eb69c;
        }
    }
    ctx->pc = 0x1EB5F4u;
label_1eb5f4:
    // 0x1eb5f4: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1eb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1eb5f8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1eb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eb5fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb600: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eb604: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1eb604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1eb608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb60c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB60Cu;
    {
        const bool branch_taken_0x1eb60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb60c) {
            ctx->pc = 0x1EB624u;
            goto label_1eb624;
        }
    }
    ctx->pc = 0x1EB614u;
    // 0x1eb614: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1eb614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1eb618: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1eb618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x1eb61c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB61Cu;
    {
        const bool branch_taken_0x1eb61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb61c) {
            ctx->pc = 0x1EB62Cu;
            goto label_1eb62c;
        }
    }
    ctx->pc = 0x1EB624u;
label_1eb624:
    // 0x1eb624: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1eb624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1eb628: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x1eb628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
label_1eb62c:
    // 0x1eb62c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1eb62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1eb630: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x1eb630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x1eb634: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x1eb634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1eb638: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1eb638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eb63c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb640: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1eb640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1eb644: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x1eb644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb648: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1eb648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1eb64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb650: 0x0  nop
    ctx->pc = 0x1eb650u;
    // NOP
    // 0x1eb654: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1eb654u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eb658: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1EB658u;
    {
        const bool branch_taken_0x1eb658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eb658) {
            ctx->pc = 0x1EB698u;
            goto label_1eb698;
        }
    }
    ctx->pc = 0x1EB660u;
    // 0x1eb660: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1eb660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb664: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1eb664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1eb668: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1eb668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eb66c: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1eb66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1eb670: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB670u;
    SET_GPR_U32(ctx, 31, 0x1EB678u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB670u, 0x1EB678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB678u;
label_1eb678:
    // 0x1eb678: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x1eb678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1eb67c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1eb680: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eb680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb684: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb688: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb68c: 0x246600f4  addiu       $a2, $v1, 0xF4
    ctx->pc = 0x1eb68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 244));
    // 0x1eb690: 0xc07c200  jal         func_1F0800
    ctx->pc = 0x1EB690u;
    SET_GPR_U32(ctx, 31, 0x1EB698u);
    ctx->pc = 0x1F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0800u, 0x1EB690u, 0x1EB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB698u;
label_1eb698:
    // 0x1eb698: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1eb698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1eb69c:
    // 0x1eb69c: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x1eb69cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1eb6a0: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1EB6A0u;
    {
        const bool branch_taken_0x1eb6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb6a0) {
            ctx->pc = 0x1EB5F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb5f4;
        }
    }
    ctx->pc = 0x1EB6A8u;
    // 0x1eb6a8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x1EB6A8u;
    {
        const bool branch_taken_0x1eb6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb6a8) {
            ctx->pc = 0x1EBA48u;
            goto label_1eba48;
        }
    }
    ctx->pc = 0x1EB6B0u;
label_1eb6b0:
    // 0x1eb6b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1eb6b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6b4: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb6b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb6bc: 0xc07bd98  jal         func_1EF660
    ctx->pc = 0x1EB6BCu;
    SET_GPR_U32(ctx, 31, 0x1EB6C4u);
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1EB6BCu, 0x1EB6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB6C4u;
label_1eb6c4:
    // 0x1eb6c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EB6C4u;
    {
        const bool branch_taken_0x1eb6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb6c4) {
            ctx->pc = 0x1EB724u;
            goto label_1eb724;
        }
    }
    ctx->pc = 0x1EB6CCu;
    // 0x1eb6cc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1eb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eb6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb6d4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB6D4u;
    {
        const bool branch_taken_0x1eb6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb6d4) {
            ctx->pc = 0x1EB6ECu;
            goto label_1eb6ec;
        }
    }
    ctx->pc = 0x1EB6DCu;
    // 0x1eb6dc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1eb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1eb6e0: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1eb6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x1eb6e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB6E4u;
    {
        const bool branch_taken_0x1eb6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb6e4) {
            ctx->pc = 0x1EB6F4u;
            goto label_1eb6f4;
        }
    }
    ctx->pc = 0x1EB6ECu;
label_1eb6ec:
    // 0x1eb6ec: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1eb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1eb6f0: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x1eb6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_1eb6f4:
    // 0x1eb6f4: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x1eb6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1eb6f8: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x1eb6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x1eb6fc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb700: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x1eb700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x1eb704: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb708: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1eb708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb70c: 0x248400a4  addiu       $a0, $a0, 0xA4
    ctx->pc = 0x1eb70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eb710: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB710u;
    SET_GPR_U32(ctx, 31, 0x1EB718u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB710u, 0x1EB718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB718u;
label_1eb718:
    // 0x1eb718: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1eb718u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb71c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1EB71Cu;
    {
        const bool branch_taken_0x1eb71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb71c) {
            ctx->pc = 0x1EB7D8u;
            goto label_1eb7d8;
        }
    }
    ctx->pc = 0x1EB724u;
label_1eb724:
    // 0x1eb724: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb728: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb72c: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EB72Cu;
    SET_GPR_U32(ctx, 31, 0x1EB734u);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EB72Cu, 0x1EB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB734u;
label_1eb734:
    // 0x1eb734: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EB734u;
    {
        const bool branch_taken_0x1eb734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb734) {
            ctx->pc = 0x1EB794u;
            goto label_1eb794;
        }
    }
    ctx->pc = 0x1EB73Cu;
    // 0x1eb73c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1eb73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eb740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb744: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EB744u;
    {
        const bool branch_taken_0x1eb744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb744) {
            ctx->pc = 0x1EB770u;
            goto label_1eb770;
        }
    }
    ctx->pc = 0x1EB74Cu;
    // 0x1eb74c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1eb74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb750: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb754: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1eb758: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1eb758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1eb75c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB75Cu;
    SET_GPR_U32(ctx, 31, 0x1EB764u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB75Cu, 0x1EB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB764u;
label_1eb764:
    // 0x1eb764: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1eb764u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb768: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EB768u;
    {
        const bool branch_taken_0x1eb768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb768) {
            ctx->pc = 0x1EB7D8u;
            goto label_1eb7d8;
        }
    }
    ctx->pc = 0x1EB770u;
label_1eb770:
    // 0x1eb770: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1eb770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb774: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb778: 0x2445000f  addiu       $a1, $v0, 0xF
    ctx->pc = 0x1eb778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1eb77c: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1eb77cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1eb780: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB780u;
    SET_GPR_U32(ctx, 31, 0x1EB788u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB780u, 0x1EB788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB788u;
label_1eb788:
    // 0x1eb788: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1eb788u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb78c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EB78Cu;
    {
        const bool branch_taken_0x1eb78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb78c) {
            ctx->pc = 0x1EB7D8u;
            goto label_1eb7d8;
        }
    }
    ctx->pc = 0x1EB794u;
label_1eb794:
    // 0x1eb794: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1eb794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eb798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb79c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB79Cu;
    {
        const bool branch_taken_0x1eb79c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb79c) {
            ctx->pc = 0x1EB7B0u;
            goto label_1eb7b0;
        }
    }
    ctx->pc = 0x1EB7A4u;
    // 0x1eb7a4: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x1eb7a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eb7a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EB7A8u;
    {
        const bool branch_taken_0x1eb7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb7a8) {
            ctx->pc = 0x1EB7B4u;
            goto label_1eb7b4;
        }
    }
    ctx->pc = 0x1EB7B0u;
label_1eb7b0:
    // 0x1eb7b0: 0x241e000b  addiu       $fp, $zero, 0xB
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1eb7b4:
    // 0x1eb7b4: 0xafbe00f0  sw          $fp, 0xF0($sp)
    ctx->pc = 0x1eb7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 30));
    // 0x1eb7b8: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb7bc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1eb7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1eb7c0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb7c4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1eb7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb7c8: 0x248400a4  addiu       $a0, $a0, 0xA4
    ctx->pc = 0x1eb7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1eb7cc: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB7CCu;
    SET_GPR_U32(ctx, 31, 0x1EB7D4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB7CCu, 0x1EB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7D4u;
label_1eb7d4:
    // 0x1eb7d4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1eb7d4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eb7d8:
    // 0x1eb7d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eb7d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eb7dc: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb7e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eb7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb7e4: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1eb7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1eb7e8: 0xc07c200  jal         func_1F0800
    ctx->pc = 0x1EB7E8u;
    SET_GPR_U32(ctx, 31, 0x1EB7F0u);
    ctx->pc = 0x1F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0800u, 0x1EB7E8u, 0x1EB7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7F0u;
label_1eb7f0:
    // 0x1eb7f0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb7f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eb7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb7f8: 0xc07bd98  jal         func_1EF660
    ctx->pc = 0x1EB7F8u;
    SET_GPR_U32(ctx, 31, 0x1EB800u);
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1EB7F8u, 0x1EB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB800u;
label_1eb800:
    // 0x1eb800: 0x14400091  bnez        $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1EB800u;
    {
        const bool branch_taken_0x1eb800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb800) {
            ctx->pc = 0x1EBA48u;
            goto label_1eba48;
        }
    }
    ctx->pc = 0x1EB808u;
    // 0x1eb808: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eb808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb80c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1eb80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1eb810: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1eb810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1eb814: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EB814u;
    SET_GPR_U32(ctx, 31, 0x1EB81Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EB814u, 0x1EB81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB81Cu;
label_1eb81c:
    // 0x1eb81c: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x1eb81cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb820: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb824: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EB824u;
    SET_GPR_U32(ctx, 31, 0x1EB82Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EB824u, 0x1EB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB82Cu;
label_1eb82c:
    // 0x1eb82c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eb82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb830: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1eb830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb834: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x1eb834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1eb838: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1EB838u;
    SET_GPR_U32(ctx, 31, 0x1EB840u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1EB838u, 0x1EB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB840u;
label_1eb840:
    // 0x1eb840: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb844: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EB844u;
    SET_GPR_U32(ctx, 31, 0x1EB84Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EB844u, 0x1EB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB84Cu;
label_1eb84c:
    // 0x1eb84c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eb84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb850: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1eb850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb854: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1eb854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1eb858: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1EB858u;
    SET_GPR_U32(ctx, 31, 0x1EB860u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1EB858u, 0x1EB860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB860u;
label_1eb860:
    // 0x1eb860: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eb860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eb864: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1EB864u;
    SET_GPR_U32(ctx, 31, 0x1EB86Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1EB864u, 0x1EB86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB86Cu;
label_1eb86c:
    // 0x1eb86c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eb86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb870: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1eb870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb874: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x1eb874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x1eb878: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1EB878u;
    SET_GPR_U32(ctx, 31, 0x1EB880u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1EB878u, 0x1EB880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB880u;
label_1eb880:
    // 0x1eb880: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1eb880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1eb884: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1eb884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb888: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB888u;
    {
        const bool branch_taken_0x1eb888 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eb888) {
            ctx->pc = 0x1EB8A4u;
            goto label_1eb8a4;
        }
    }
    ctx->pc = 0x1EB890u;
    // 0x1eb890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb894: 0x0  nop
    ctx->pc = 0x1eb894u;
    // NOP
    // 0x1eb898: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb89c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB89Cu;
    {
        const bool branch_taken_0x1eb89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb89c) {
            ctx->pc = 0x1EB8C0u;
            goto label_1eb8c0;
        }
    }
    ctx->pc = 0x1EB8A4u;
label_1eb8a4:
    // 0x1eb8a4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eb8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eb8a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb8ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eb8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb8b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb8b4: 0x0  nop
    ctx->pc = 0x1eb8b4u;
    // NOP
    // 0x1eb8b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb8b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb8bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eb8bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eb8c0:
    // 0x1eb8c0: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1eb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1eb8c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb8c8: 0x0  nop
    ctx->pc = 0x1eb8c8u;
    // NOP
    // 0x1eb8cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1eb8ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eb8d0: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1eb8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb8d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb8d8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1eb8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1eb8dc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1eb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1eb8e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1eb8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eb8e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB8E4u;
    {
        const bool branch_taken_0x1eb8e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eb8e4) {
            ctx->pc = 0x1EB900u;
            goto label_1eb900;
        }
    }
    ctx->pc = 0x1EB8ECu;
    // 0x1eb8ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb8f0: 0x0  nop
    ctx->pc = 0x1eb8f0u;
    // NOP
    // 0x1eb8f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb8f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB8F8u;
    {
        const bool branch_taken_0x1eb8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb8f8) {
            ctx->pc = 0x1EB91Cu;
            goto label_1eb91c;
        }
    }
    ctx->pc = 0x1EB900u;
label_1eb900:
    // 0x1eb900: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eb900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eb904: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb908: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eb908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb90c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb90cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb910: 0x0  nop
    ctx->pc = 0x1eb910u;
    // NOP
    // 0x1eb914: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb918: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eb918u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eb91c:
    // 0x1eb91c: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1eb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1eb920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb924: 0x0  nop
    ctx->pc = 0x1eb924u;
    // NOP
    // 0x1eb928: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1eb928u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eb92c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1eb92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eb930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eb934: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1eb934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1eb938: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1eb938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb93c: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1eb93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb940: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb944: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1eb944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1eb948: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1eb948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eb94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb950: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB950u;
    {
        const bool branch_taken_0x1eb950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb950) {
            ctx->pc = 0x1EB970u;
            goto label_1eb970;
        }
    }
    ctx->pc = 0x1EB958u;
    // 0x1eb958: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1eb958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb95c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1eb95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb960: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eb960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eb964: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1eb968: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EB968u;
    {
        const bool branch_taken_0x1eb968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb968) {
            ctx->pc = 0x1EB9A8u;
            goto label_1eb9a8;
        }
    }
    ctx->pc = 0x1EB970u;
label_1eb970:
    // 0x1eb970: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1eb970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1eb974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eb974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eb978: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB978u;
    {
        const bool branch_taken_0x1eb978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eb978) {
            ctx->pc = 0x1EB9A8u;
            goto label_1eb9a8;
        }
    }
    ctx->pc = 0x1EB980u;
    // 0x1eb980: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x1eb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eb984: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x1eb984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb988: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1eb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb98c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eb98cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb990: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1eb990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1eb994: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1eb998: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1eb998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eb99c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1eb99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb9a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eb9a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eb9a4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1eb9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1eb9a8:
    // 0x1eb9a8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1eb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1eb9ac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EB9ACu;
    {
        const bool branch_taken_0x1eb9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9ac) {
            ctx->pc = 0x1EBA30u;
            goto label_1eba30;
        }
    }
    ctx->pc = 0x1EB9B4u;
    // 0x1eb9b4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1eb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x1eb9b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb9bc: 0x0  nop
    ctx->pc = 0x1eb9bcu;
    // NOP
    // 0x1eb9c0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1eb9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1eb9c4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1eb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1eb9c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1eb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1eb9cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EB9CCu;
    {
        const bool branch_taken_0x1eb9cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eb9cc) {
            ctx->pc = 0x1EB9E8u;
            goto label_1eb9e8;
        }
    }
    ctx->pc = 0x1EB9D4u;
    // 0x1eb9d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eb9d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb9d8: 0x0  nop
    ctx->pc = 0x1eb9d8u;
    // NOP
    // 0x1eb9dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb9dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eb9e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EB9E0u;
    {
        const bool branch_taken_0x1eb9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9e0) {
            ctx->pc = 0x1EBA04u;
            goto label_1eba04;
        }
    }
    ctx->pc = 0x1EB9E8u;
label_1eb9e8:
    // 0x1eb9e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eb9ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eb9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eb9f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eb9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eb9f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eb9f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eb9f8: 0x0  nop
    ctx->pc = 0x1eb9f8u;
    // NOP
    // 0x1eb9fc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eb9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eba00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eba00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eba04:
    // 0x1eba04: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1eba04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1eba08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eba0c: 0x0  nop
    ctx->pc = 0x1eba0cu;
    // NOP
    // 0x1eba10: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1eba10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eba14: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1eba14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eba18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eba18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eba1c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1eba1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1eba20: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1eba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eba24: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x1eba24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eba28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eba28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eba2c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1eba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1eba30:
    // 0x1eba30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eba30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eba34: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eba34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eba38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1eba38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eba3c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1eba3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1eba40: 0xc07c200  jal         func_1F0800
    ctx->pc = 0x1EBA40u;
    SET_GPR_U32(ctx, 31, 0x1EBA48u);
    ctx->pc = 0x1F0800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0800u, 0x1EBA40u, 0x1EBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA48u;
label_1eba48:
    // 0x1eba48: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1eba48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1eba4c:
    // 0x1eba4c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1eba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eba50: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1eba50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1eba54: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1EBA54u;
    SET_GPR_U32(ctx, 31, 0x1EBA5Cu);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1EBA54u, 0x1EBA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA5Cu;
label_1eba5c:
    // 0x1eba5c: 0x1682fed4  bne         $s4, $v0, . + 4 + (-0x12C << 2)
    ctx->pc = 0x1EBA5Cu;
    {
        const bool branch_taken_0x1eba5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eba5c) {
            ctx->pc = 0x1EB5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb5b0;
        }
    }
    ctx->pc = 0x1EBA64u;
    // 0x1eba64: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1eba64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1eba68: 0xc064aec  jal         func_192BB0
    ctx->pc = 0x1EBA68u;
    SET_GPR_U32(ctx, 31, 0x1EBA70u);
    ctx->pc = 0x192BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192BB0u, 0x1EBA68u, 0x1EBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA70u;
label_1eba70:
    // 0x1eba70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1eba70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1eba74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1eba74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1eba78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1eba78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1eba7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1eba7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1eba80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1eba80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1eba84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1eba84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1eba88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1eba88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eba8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1eba8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eba90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eba90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eba94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eba94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eba98: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1eba98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1eba9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBAA4u;
    // 0x1ebaa4: 0x0  nop
    ctx->pc = 0x1ebaa4u;
    // NOP
    // 0x1ebaa8: 0x0  nop
    ctx->pc = 0x1ebaa8u;
    // NOP
    // 0x1ebaac: 0x0  nop
    ctx->pc = 0x1ebaacu;
    // NOP
    // 0x1ebab0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ebab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ebab4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ebab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ebab8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ebab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ebabc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ebabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ebac0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ebac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ebac4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ebac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ebac8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ebac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ebacc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ebaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ebad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ebad4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebad8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1ebadc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ebadcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebae4: 0x0  nop
    ctx->pc = 0x1ebae4u;
    // NOP
    // 0x1ebae8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1ebae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1ebaec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ebaecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebaf0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebaf4: 0xc064cb0  jal         func_1932C0
    ctx->pc = 0x1EBAF4u;
    SET_GPR_U32(ctx, 31, 0x1EBAFCu);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1EBAF4u, 0x1EBAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBAFCu;
label_1ebafc:
    // 0x1ebafc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ebafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ebb00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBB00u;
    {
        const bool branch_taken_0x1ebb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb00) {
            ctx->pc = 0x1EBB14u;
            goto label_1ebb14;
        }
    }
    ctx->pc = 0x1EBB08u;
    // 0x1ebb08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ebb08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb0c: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x1EBB0Cu;
    {
        const bool branch_taken_0x1ebb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb0c) {
            ctx->pc = 0x1EBFC4u;
            goto label_1ebfc4;
        }
    }
    ctx->pc = 0x1EBB14u;
label_1ebb14:
    // 0x1ebb14: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ebb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebb18: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1ebb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebb1c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ebb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebb20: 0xc44000c8  lwc1        $f0, 0xC8($v0)
    ctx->pc = 0x1ebb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebb24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebb28: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ebb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ebb2c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ebb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebb30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebb30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebb34: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1EBB34u;
    {
        const bool branch_taken_0x1ebb34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebb34) {
            ctx->pc = 0x1EBB68u;
            goto label_1ebb68;
        }
    }
    ctx->pc = 0x1EBB3Cu;
    // 0x1ebb3c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebb40: 0xc07b2e0  jal         func_1ECB80
    ctx->pc = 0x1EBB40u;
    SET_GPR_U32(ctx, 31, 0x1EBB48u);
    ctx->pc = 0x1ECB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECB80u, 0x1EBB40u, 0x1EBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB48u;
label_1ebb48:
    // 0x1ebb48: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ebb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ebb4c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1ebb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1ebb50: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1ebb50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ebb54: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EBB54u;
    {
        const bool branch_taken_0x1ebb54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb54) {
            ctx->pc = 0x1EBB68u;
            goto label_1ebb68;
        }
    }
    ctx->pc = 0x1EBB5Cu;
    // 0x1ebb5c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebb60: 0xc07b000  jal         func_1EC000
    ctx->pc = 0x1EBB60u;
    SET_GPR_U32(ctx, 31, 0x1EBB68u);
    ctx->pc = 0x1EC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC000u, 0x1EBB60u, 0x1EBB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBB68u;
label_1ebb68:
    // 0x1ebb68: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ebb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebb6c: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ebb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ebb70: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1EBB70u;
    SET_GPR_U32(ctx, 31, 0x1EBB78u);
    ctx->pc = 0x1EB020u;
    goto label_1eb020;
    ctx->pc = 0x1EBB78u;
label_1ebb78:
    // 0x1ebb78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ebb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb7c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x1EBB7Cu;
    {
        const bool branch_taken_0x1ebb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb7c) {
            ctx->pc = 0x1EBFA8u;
            goto label_1ebfa8;
        }
    }
    ctx->pc = 0x1EBB84u;
label_1ebb84:
    // 0x1ebb84: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1ebb84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ebb88: 0x12000106  beqz        $s0, . + 4 + (0x106 << 2)
    ctx->pc = 0x1EBB88u;
    {
        const bool branch_taken_0x1ebb88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebb88) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBB90u;
    // 0x1ebb90: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x1ebb90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ebb94: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ebb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ebb98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebb9c: 0x14620101  bne         $v1, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x1EBB9Cu;
    {
        const bool branch_taken_0x1ebb9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebb9c) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBBA4u;
    // 0x1ebba4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbac: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1ebbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ebbb0: 0xc07bd0c  jal         func_1EF430
    ctx->pc = 0x1EBBB0u;
    SET_GPR_U32(ctx, 31, 0x1EBBB8u);
    ctx->pc = 0x1EF430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF430u, 0x1EBBB0u, 0x1EBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBB8u;
label_1ebbb8:
    // 0x1ebbb8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebbbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbc0: 0xc07bd74  jal         func_1EF5D0
    ctx->pc = 0x1EBBC0u;
    SET_GPR_U32(ctx, 31, 0x1EBBC8u);
    ctx->pc = 0x1EF5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF5D0u, 0x1EBBC0u, 0x1EBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBC8u;
label_1ebbc8:
    // 0x1ebbc8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x1ebbc8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ebbcc: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebbd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbd4: 0xc07be2c  jal         func_1EF8B0
    ctx->pc = 0x1EBBD4u;
    SET_GPR_U32(ctx, 31, 0x1EBBDCu);
    ctx->pc = 0x1EF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF8B0u, 0x1EBBD4u, 0x1EBBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBDCu;
label_1ebbdc:
    // 0x1ebbdc: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1ebbdcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ebbe0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebbe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebbe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebbe8: 0xc07bd98  jal         func_1EF660
    ctx->pc = 0x1EBBE8u;
    SET_GPR_U32(ctx, 31, 0x1EBBF0u);
    ctx->pc = 0x1EF660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF660u, 0x1EBBE8u, 0x1EBBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBF0u;
label_1ebbf0:
    // 0x1ebbf0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ebbf0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ebbf4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ebbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ebbf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ebbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebbfc: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EBBFCu;
    {
        const bool branch_taken_0x1ebbfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebbfc) {
            ctx->pc = 0x1EBC7Cu;
            goto label_1ebc7c;
        }
    }
    ctx->pc = 0x1EBC04u;
    // 0x1ebc04: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ebc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebc08: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1ebc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebc0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ebc0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ebc10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebc10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebc14: 0x0  nop
    ctx->pc = 0x1ebc14u;
    // NOP
    // 0x1ebc18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebc18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebc1c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1EBC1Cu;
    {
        const bool branch_taken_0x1ebc1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebc1c) {
            ctx->pc = 0x1EBC64u;
            goto label_1ebc64;
        }
    }
    ctx->pc = 0x1EBC24u;
    // 0x1ebc24: 0x16600045  bnez        $s3, . + 4 + (0x45 << 2)
    ctx->pc = 0x1EBC24u;
    {
        const bool branch_taken_0x1ebc24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc24) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBC2Cu;
    // 0x1ebc2c: 0x16200043  bnez        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1EBC2Cu;
    {
        const bool branch_taken_0x1ebc2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc2c) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBC34u;
    // 0x1ebc34: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ebc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ebc38: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x1ebc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ebc3c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ebc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1ebc40: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1ebc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebc44: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ebc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebc48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebc48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebc4c: 0x0  nop
    ctx->pc = 0x1ebc4cu;
    // NOP
    // 0x1ebc50: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ebc50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ebc54: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1ebc54u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ebc58: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1ebc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1ebc5c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1EBC5Cu;
    {
        const bool branch_taken_0x1ebc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc5c) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBC64u;
label_1ebc64:
    // 0x1ebc64: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebc64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebc68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebc68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebc6c: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x1EBC6Cu;
    SET_GPR_U32(ctx, 31, 0x1EBC74u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x1EBC6Cu, 0x1EBC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBC74u;
label_1ebc74:
    // 0x1ebc74: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1EBC74u;
    {
        const bool branch_taken_0x1ebc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebc74) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBC7Cu;
label_1ebc7c:
    // 0x1ebc7c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ebc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ebc80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebc84: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1EBC84u;
    {
        const bool branch_taken_0x1ebc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebc84) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBC8Cu;
    // 0x1ebc8c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ebc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ebc90: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ebc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ebc94: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBC94u;
    {
        const bool branch_taken_0x1ebc94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ebc94) {
            ctx->pc = 0x1EBCB0u;
            goto label_1ebcb0;
        }
    }
    ctx->pc = 0x1EBC9Cu;
    // 0x1ebc9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebc9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebca0: 0x0  nop
    ctx->pc = 0x1ebca0u;
    // NOP
    // 0x1ebca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EBCA8u;
    {
        const bool branch_taken_0x1ebca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebca8) {
            ctx->pc = 0x1EBCCCu;
            goto label_1ebccc;
        }
    }
    ctx->pc = 0x1EBCB0u;
label_1ebcb0:
    // 0x1ebcb0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ebcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ebcb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ebcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ebcb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ebcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ebcbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ebcbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebcc0: 0x0  nop
    ctx->pc = 0x1ebcc0u;
    // NOP
    // 0x1ebcc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ebcc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ebcc8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ebcc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ebccc:
    // 0x1ebccc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1ebcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ebcd0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ebcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebcd4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x1ebcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebcd8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ebcd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ebcdc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1ebcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebce0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ebce0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebce4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1EBCE4u;
    {
        const bool branch_taken_0x1ebce4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebce4) {
            ctx->pc = 0x1EBD2Cu;
            goto label_1ebd2c;
        }
    }
    ctx->pc = 0x1EBCECu;
    // 0x1ebcec: 0x16600013  bnez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EBCECu;
    {
        const bool branch_taken_0x1ebcec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcec) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBCF4u;
    // 0x1ebcf4: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EBCF4u;
    {
        const bool branch_taken_0x1ebcf4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebcf4) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBCFCu;
    // 0x1ebcfc: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ebcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ebd00: 0xc443001c  lwc1        $f3, 0x1C($v0)
    ctx->pc = 0x1ebd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ebd04: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ebd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1ebd08: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1ebd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ebd0c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1ebd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebd10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ebd10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebd14: 0x0  nop
    ctx->pc = 0x1ebd14u;
    // NOP
    // 0x1ebd18: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1ebd18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1ebd1c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1ebd1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1ebd20: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1ebd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1ebd24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBD24u;
    {
        const bool branch_taken_0x1ebd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd24) {
            ctx->pc = 0x1EBD3Cu;
            goto label_1ebd3c;
        }
    }
    ctx->pc = 0x1EBD2Cu;
label_1ebd2c:
    // 0x1ebd2c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebd30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd34: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x1EBD34u;
    SET_GPR_U32(ctx, 31, 0x1EBD3Cu);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x1EBD34u, 0x1EBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD3Cu;
label_1ebd3c:
    // 0x1ebd3c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebd40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd44: 0xc07be8c  jal         func_1EFA30
    ctx->pc = 0x1EBD44u;
    SET_GPR_U32(ctx, 31, 0x1EBD4Cu);
    ctx->pc = 0x1EFA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EFA30u, 0x1EBD44u, 0x1EBD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD4Cu;
label_1ebd4c:
    // 0x1ebd4c: 0x12600035  beqz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EBD4Cu;
    {
        const bool branch_taken_0x1ebd4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd4c) {
            ctx->pc = 0x1EBE24u;
            goto label_1ebe24;
        }
    }
    ctx->pc = 0x1EBD54u;
    // 0x1ebd54: 0x16200033  bnez        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1EBD54u;
    {
        const bool branch_taken_0x1ebd54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd54) {
            ctx->pc = 0x1EBE24u;
            goto label_1ebe24;
        }
    }
    ctx->pc = 0x1EBD5Cu;
    // 0x1ebd5c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebd60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd64: 0xc07b99c  jal         func_1EE670
    ctx->pc = 0x1EBD64u;
    SET_GPR_U32(ctx, 31, 0x1EBD6Cu);
    ctx->pc = 0x1EE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE670u, 0x1EBD64u, 0x1EBD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD6Cu;
label_1ebd6c:
    // 0x1ebd6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1ebd6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd70: 0x16c00021  bnez        $s6, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EBD70u;
    {
        const bool branch_taken_0x1ebd70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd70) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EBD78u;
    // 0x1ebd78: 0x16a0001f  bnez        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EBD78u;
    {
        const bool branch_taken_0x1ebd78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd78) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EBD80u;
    // 0x1ebd80: 0x1620001d  bnez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EBD80u;
    {
        const bool branch_taken_0x1ebd80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebd80) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EBD88u;
    // 0x1ebd88: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebd8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebd90: 0xc07c190  jal         func_1F0640
    ctx->pc = 0x1EBD90u;
    SET_GPR_U32(ctx, 31, 0x1EBD98u);
    ctx->pc = 0x1F0640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0640u, 0x1EBD90u, 0x1EBD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBD98u;
label_1ebd98:
    // 0x1ebd98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ebd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebd9c: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1EBD9Cu;
    {
        const bool branch_taken_0x1ebd9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ebd9c) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EBDA4u;
    // 0x1ebda4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebda8: 0xc07c274  jal         func_1F09D0
    ctx->pc = 0x1EBDA8u;
    SET_GPR_U32(ctx, 31, 0x1EBDB0u);
    ctx->pc = 0x1F09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F09D0u, 0x1EBDA8u, 0x1EBDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBDB0u;
label_1ebdb0:
    // 0x1ebdb0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebdb4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1ebdb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1ebdb8: 0xc064d10  jal         func_193440
    ctx->pc = 0x1EBDB8u;
    SET_GPR_U32(ctx, 31, 0x1EBDC0u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1EBDB8u, 0x1EBDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBDC0u;
label_1ebdc0:
    // 0x1ebdc0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ebdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebdc4: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1ebdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1ebdc8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EBDC8u;
    {
        const bool branch_taken_0x1ebdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebdc8) {
            ctx->pc = 0x1EBDF8u;
            goto label_1ebdf8;
        }
    }
    ctx->pc = 0x1EBDD0u;
    // 0x1ebdd0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ebdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ebdd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ebdd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ebdd8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ebdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1ebddc: 0x27859898  addiu       $a1, $gp, -0x6768
    ctx->pc = 0x1ebddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940824));
    // 0x1ebde0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ebde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebde4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ebde4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ebde8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1EBDE8u;
    SET_GPR_U32(ctx, 31, 0x1EBDF0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1EBDE8u, 0x1EBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBDF0u;
label_1ebdf0:
    // 0x1ebdf0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1ebdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebdf4: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1ebdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1ebdf8:
    // 0x1ebdf8: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1ebdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebdfc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ebdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ebe00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ebe00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ebe04: 0x0  nop
    ctx->pc = 0x1ebe04u;
    // NOP
    // 0x1ebe08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1ebe08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe0c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBE0Cu;
    {
        const bool branch_taken_0x1ebe0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe0c) {
            ctx->pc = 0x1EBE24u;
            goto label_1ebe24;
        }
    }
    ctx->pc = 0x1EBE14u;
    // 0x1ebe14: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebe18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebe18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe1c: 0xc07be58  jal         func_1EF960
    ctx->pc = 0x1EBE1Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE24u);
    ctx->pc = 0x1EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF960u, 0x1EBE1Cu, 0x1EBE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE24u;
label_1ebe24:
    // 0x1ebe24: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EBE24u;
    {
        const bool branch_taken_0x1ebe24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe24) {
            ctx->pc = 0x1EBE7Cu;
            goto label_1ebe7c;
        }
    }
    ctx->pc = 0x1EBE2Cu;
    // 0x1ebe2c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ebe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebe30: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1ebe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebe34: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1ebe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe38: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x1ebe38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebe3c: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ebe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ebe40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ebe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ebe44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ebe44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ebe48: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1ebe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1ebe4cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1ebe50: 0x0  nop
    ctx->pc = 0x1ebe50u;
    // NOP
    // 0x1ebe54: 0x0  nop
    ctx->pc = 0x1ebe54u;
    // NOP
    // 0x1ebe58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ebe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe5c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x1EBE5Cu;
    {
        const bool branch_taken_0x1ebe5c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe5c) {
            ctx->pc = 0x1EBEB0u;
            goto label_1ebeb0;
        }
    }
    ctx->pc = 0x1EBE64u;
    // 0x1ebe64: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebe68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebe68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe6c: 0xc07be58  jal         func_1EF960
    ctx->pc = 0x1EBE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EBE74u);
    ctx->pc = 0x1EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF960u, 0x1EBE6Cu, 0x1EBE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBE74u;
label_1ebe74:
    // 0x1ebe74: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EBE74u;
    {
        const bool branch_taken_0x1ebe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebe74) {
            ctx->pc = 0x1EBEB0u;
            goto label_1ebeb0;
        }
    }
    ctx->pc = 0x1EBE7Cu;
label_1ebe7c:
    // 0x1ebe7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ebe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebe80: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x1ebe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ebe84: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1ebe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ebe88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ebe8c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ebe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ebe90: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ebe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebe94: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ebe94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ebe98: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBE98u;
    {
        const bool branch_taken_0x1ebe98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ebe98) {
            ctx->pc = 0x1EBEB0u;
            goto label_1ebeb0;
        }
    }
    ctx->pc = 0x1EBEA0u;
    // 0x1ebea0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebea4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebea8: 0xc07be58  jal         func_1EF960
    ctx->pc = 0x1EBEA8u;
    SET_GPR_U32(ctx, 31, 0x1EBEB0u);
    ctx->pc = 0x1EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF960u, 0x1EBEA8u, 0x1EBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEB0u;
label_1ebeb0:
    // 0x1ebeb0: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EBEB0u;
    {
        const bool branch_taken_0x1ebeb0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebeb0) {
            ctx->pc = 0x1EBEF8u;
            goto label_1ebef8;
        }
    }
    ctx->pc = 0x1EBEB8u;
    // 0x1ebeb8: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebec0: 0xc07bbc8  jal         func_1EEF20
    ctx->pc = 0x1EBEC0u;
    SET_GPR_U32(ctx, 31, 0x1EBEC8u);
    ctx->pc = 0x1EEF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF20u, 0x1EBEC0u, 0x1EBEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEC8u;
label_1ebec8:
    // 0x1ebec8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ebec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ebecc: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1EBECCu;
    {
        const bool branch_taken_0x1ebecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebecc) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBED4u;
    // 0x1ebed4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebedc: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x1EBEDCu;
    SET_GPR_U32(ctx, 31, 0x1EBEE4u);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x1EBEDCu, 0x1EBEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEE4u;
label_1ebee4:
    // 0x1ebee4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebee8: 0xc07b000  jal         func_1EC000
    ctx->pc = 0x1EBEE8u;
    SET_GPR_U32(ctx, 31, 0x1EBEF0u);
    ctx->pc = 0x1EC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC000u, 0x1EBEE8u, 0x1EBEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBEF0u;
label_1ebef0:
    // 0x1ebef0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1EBEF0u;
    {
        const bool branch_taken_0x1ebef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebef0) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBEF8u;
label_1ebef8:
    // 0x1ebef8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EBEF8u;
    {
        const bool branch_taken_0x1ebef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebef8) {
            ctx->pc = 0x1EBF40u;
            goto label_1ebf40;
        }
    }
    ctx->pc = 0x1EBF00u;
    // 0x1ebf00: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebf04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf08: 0xc07bc34  jal         func_1EF0D0
    ctx->pc = 0x1EBF08u;
    SET_GPR_U32(ctx, 31, 0x1EBF10u);
    ctx->pc = 0x1EF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF0D0u, 0x1EBF08u, 0x1EBF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF10u;
label_1ebf10:
    // 0x1ebf10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ebf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ebf14: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EBF14u;
    {
        const bool branch_taken_0x1ebf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf14) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBF1Cu;
    // 0x1ebf1c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebf20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebf20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf24: 0xc07b98c  jal         func_1EE630
    ctx->pc = 0x1EBF24u;
    SET_GPR_U32(ctx, 31, 0x1EBF2Cu);
    ctx->pc = 0x1EE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE630u, 0x1EBF24u, 0x1EBF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF2Cu;
label_1ebf2c:
    // 0x1ebf2c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebf30: 0xc07b000  jal         func_1EC000
    ctx->pc = 0x1EBF30u;
    SET_GPR_U32(ctx, 31, 0x1EBF38u);
    ctx->pc = 0x1EC000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC000u, 0x1EBF30u, 0x1EBF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF38u;
label_1ebf38:
    // 0x1ebf38: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EBF38u;
    {
        const bool branch_taken_0x1ebf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf38) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBF40u;
label_1ebf40:
    // 0x1ebf40: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebf44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf48: 0xc07bdb4  jal         func_1EF6D0
    ctx->pc = 0x1EBF48u;
    SET_GPR_U32(ctx, 31, 0x1EBF50u);
    ctx->pc = 0x1EF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6D0u, 0x1EBF48u, 0x1EBF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF50u;
label_1ebf50:
    // 0x1ebf50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ebf50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf54: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EBF54u;
    {
        const bool branch_taken_0x1ebf54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf54) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBF5Cu;
    // 0x1ebf5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebf60: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EBF60u;
    {
        const bool branch_taken_0x1ebf60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ebf60) {
            ctx->pc = 0x1EBF94u;
            goto label_1ebf94;
        }
    }
    ctx->pc = 0x1EBF68u;
    // 0x1ebf68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ebf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ebf6c: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBF6Cu;
    {
        const bool branch_taken_0x1ebf6c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ebf6c) {
            ctx->pc = 0x1EBF7Cu;
            goto label_1ebf7c;
        }
    }
    ctx->pc = 0x1EBF74u;
    // 0x1ebf74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBF74u;
    {
        const bool branch_taken_0x1ebf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf74) {
            ctx->pc = 0x1EBF94u;
            goto label_1ebf94;
        }
    }
    ctx->pc = 0x1EBF7Cu;
label_1ebf7c:
    // 0x1ebf7c: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebf80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf84: 0xc07bc10  jal         func_1EF040
    ctx->pc = 0x1EBF84u;
    SET_GPR_U32(ctx, 31, 0x1EBF8Cu);
    ctx->pc = 0x1EF040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF040u, 0x1EBF84u, 0x1EBF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF8Cu;
label_1ebf8c:
    // 0x1ebf8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EBF8Cu;
    {
        const bool branch_taken_0x1ebf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf8c) {
            ctx->pc = 0x1EBFA4u;
            goto label_1ebfa4;
        }
    }
    ctx->pc = 0x1EBF94u;
label_1ebf94:
    // 0x1ebf94: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1ebf94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebf98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebf98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf9c: 0xc07b9c8  jal         func_1EE720
    ctx->pc = 0x1EBF9Cu;
    SET_GPR_U32(ctx, 31, 0x1EBFA4u);
    ctx->pc = 0x1EE720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE720u, 0x1EBF9Cu, 0x1EBFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFA4u;
label_1ebfa4:
    // 0x1ebfa4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ebfa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1ebfa8:
    // 0x1ebfa8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ebfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ebfac: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ebfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ebfb0: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1EBFB0u;
    SET_GPR_U32(ctx, 31, 0x1EBFB8u);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1EBFB0u, 0x1EBFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBFB8u;
label_1ebfb8:
    // 0x1ebfb8: 0x1642fef2  bne         $s2, $v0, . + 4 + (-0x10E << 2)
    ctx->pc = 0x1EBFB8u;
    {
        const bool branch_taken_0x1ebfb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebfb8) {
            ctx->pc = 0x1EBB84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ebb84;
        }
    }
    ctx->pc = 0x1EBFC0u;
    // 0x1ebfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebfc4:
    // 0x1ebfc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ebfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ebfc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ebfc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ebfcc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ebfccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ebfd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ebfd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebfd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ebfd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ebfd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ebfd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebfdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ebfdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebfe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebfe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebfe8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1ebfe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ebfec: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBFF4u;
    // 0x1ebff4: 0x0  nop
    ctx->pc = 0x1ebff4u;
    // NOP
    // 0x1ebff8: 0x0  nop
    ctx->pc = 0x1ebff8u;
    // NOP
    // 0x1ebffc: 0x0  nop
    ctx->pc = 0x1ebffcu;
    // NOP
    ctx->pc = 0x1ec000u;
}
