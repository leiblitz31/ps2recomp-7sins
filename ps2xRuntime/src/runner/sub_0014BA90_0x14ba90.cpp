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

// Function: sub_0014BA90
// Address: 0x14ba90 - 0x14bb50
void sub_0014BA90_0x14ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BA90_0x14ba90");
#endif

    switch (ctx->pc) {
        case 0x14ba90u: goto label_14ba90;
        case 0x14ba94u: goto label_14ba94;
        case 0x14ba98u: goto label_14ba98;
        case 0x14ba9cu: goto label_14ba9c;
        case 0x14baa0u: goto label_14baa0;
        case 0x14baa4u: goto label_14baa4;
        case 0x14baa8u: goto label_14baa8;
        case 0x14baacu: goto label_14baac;
        case 0x14bab0u: goto label_14bab0;
        case 0x14bab4u: goto label_14bab4;
        case 0x14bab8u: goto label_14bab8;
        case 0x14babcu: goto label_14babc;
        case 0x14bac0u: goto label_14bac0;
        case 0x14bac4u: goto label_14bac4;
        case 0x14bac8u: goto label_14bac8;
        case 0x14baccu: goto label_14bacc;
        case 0x14bad0u: goto label_14bad0;
        case 0x14bad4u: goto label_14bad4;
        case 0x14bad8u: goto label_14bad8;
        case 0x14badcu: goto label_14badc;
        case 0x14bae0u: goto label_14bae0;
        case 0x14bae4u: goto label_14bae4;
        case 0x14bae8u: goto label_14bae8;
        case 0x14baecu: goto label_14baec;
        case 0x14baf0u: goto label_14baf0;
        case 0x14baf4u: goto label_14baf4;
        case 0x14baf8u: goto label_14baf8;
        case 0x14bafcu: goto label_14bafc;
        case 0x14bb00u: goto label_14bb00;
        case 0x14bb04u: goto label_14bb04;
        case 0x14bb08u: goto label_14bb08;
        case 0x14bb0cu: goto label_14bb0c;
        case 0x14bb10u: goto label_14bb10;
        case 0x14bb14u: goto label_14bb14;
        case 0x14bb18u: goto label_14bb18;
        case 0x14bb1cu: goto label_14bb1c;
        case 0x14bb20u: goto label_14bb20;
        case 0x14bb24u: goto label_14bb24;
        case 0x14bb28u: goto label_14bb28;
        case 0x14bb2cu: goto label_14bb2c;
        case 0x14bb30u: goto label_14bb30;
        case 0x14bb34u: goto label_14bb34;
        case 0x14bb38u: goto label_14bb38;
        case 0x14bb3cu: goto label_14bb3c;
        case 0x14bb40u: goto label_14bb40;
        case 0x14bb44u: goto label_14bb44;
        case 0x14bb48u: goto label_14bb48;
        case 0x14bb4cu: goto label_14bb4c;
        default: break;
    }

    ctx->pc = 0x14ba90u;

label_14ba90:
    // 0x14ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14ba94:
    // 0x14ba94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14ba98:
    // 0x14ba98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_14ba9c:
    // 0x14ba9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_14baa0:
    // 0x14baa0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14baa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14baa4:
    // 0x14baa4: 0xc0526c0  jal         func_149B00
label_14baa8:
    if (ctx->pc == 0x14BAA8u) {
        ctx->pc = 0x14BAACu;
        goto label_14baac;
    }
    ctx->pc = 0x14BAA4u;
    SET_GPR_U32(ctx, 31, 0x14BAACu);
    ctx->pc = 0x149B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149B00u, 0x14BAA4u, 0x14BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BAACu;
label_14baac:
    // 0x14baac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14bab0:
    // 0x14bab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14bab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_14bab4:
    // 0x14bab4: 0x3e00008  jr          $ra
label_14bab8:
    if (ctx->pc == 0x14BAB8u) {
        ctx->pc = 0x14BABCu;
        goto label_14babc;
    }
    ctx->pc = 0x14BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BABCu;
label_14babc:
    // 0x14babc: 0x0  nop
    ctx->pc = 0x14babcu;
    // NOP
label_14bac0:
    // 0x14bac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14bac4:
    // 0x14bac4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14bac8:
    // 0x14bac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14bac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14bacc:
    // 0x14bacc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14baccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_14bad0:
    // 0x14bad0: 0x8f82ba90  lw          $v0, -0x4570($gp)
    ctx->pc = 0x14bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949520)));
label_14bad4:
    // 0x14bad4: 0x10020002  beq         $zero, $v0, . + 4 + (0x2 << 2)
label_14bad8:
    if (ctx->pc == 0x14BAD8u) {
        ctx->pc = 0x14BADCu;
        goto label_14badc;
    }
    ctx->pc = 0x14BAD4u;
    {
        const bool branch_taken_0x14bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bad4) {
            ctx->pc = 0x14BAE0u;
            goto label_14bae0;
        }
    }
    ctx->pc = 0x14BADCu;
label_14badc:
    // 0x14badc: 0xaf80ba90  sw          $zero, -0x4570($gp)
    ctx->pc = 0x14badcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949520), GPR_U32(ctx, 0));
label_14bae0:
    // 0x14bae0: 0x8f82ba94  lw          $v0, -0x456C($gp)
    ctx->pc = 0x14bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bae4:
    // 0x14bae4: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
label_14bae8:
    if (ctx->pc == 0x14BAE8u) {
        ctx->pc = 0x14BAECu;
        goto label_14baec;
    }
    ctx->pc = 0x14BAE4u;
    {
        const bool branch_taken_0x14bae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14bae4) {
            ctx->pc = 0x14BB28u;
            goto label_14bb28;
        }
    }
    ctx->pc = 0x14BAECu;
label_14baec:
    // 0x14baec: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14baecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14baf0:
    // 0x14baf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14baf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_14baf4:
    // 0x14baf4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x14baf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_14baf8:
    // 0x14baf8: 0x320f809  jalr        $t9
label_14bafc:
    if (ctx->pc == 0x14BAFCu) {
        ctx->pc = 0x14BB00u;
        goto label_14bb00;
    }
    ctx->pc = 0x14BAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14BB00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BAF8u, 0x14BB00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14BB00u;
label_14bb00:
    // 0x14bb00: 0x8f82ba94  lw          $v0, -0x456C($gp)
    ctx->pc = 0x14bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bb04:
    // 0x14bb04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_14bb08:
    if (ctx->pc == 0x14BB08u) {
        ctx->pc = 0x14BB0Cu;
        goto label_14bb0c;
    }
    ctx->pc = 0x14BB04u;
    {
        const bool branch_taken_0x14bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14bb04) {
            ctx->pc = 0x14BB28u;
            goto label_14bb28;
        }
    }
    ctx->pc = 0x14BB0Cu;
label_14bb0c:
    // 0x14bb0c: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bb10:
    // 0x14bb10: 0xc052ed4  jal         func_14BB50
label_14bb14:
    if (ctx->pc == 0x14BB14u) {
        ctx->pc = 0x14BB18u;
        goto label_14bb18;
    }
    ctx->pc = 0x14BB10u;
    SET_GPR_U32(ctx, 31, 0x14BB18u);
    ctx->pc = 0x14BB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BB50u, 0x14BB10u, 0x14BB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB18u;
label_14bb18:
    // 0x14bb18: 0x8f84ba94  lw          $a0, -0x456C($gp)
    ctx->pc = 0x14bb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949524)));
label_14bb1c:
    // 0x14bb1c: 0xc119c5c  jal         func_467170
label_14bb20:
    if (ctx->pc == 0x14BB20u) {
        ctx->pc = 0x14BB24u;
        goto label_14bb24;
    }
    ctx->pc = 0x14BB1Cu;
    SET_GPR_U32(ctx, 31, 0x14BB24u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x14BB1Cu, 0x14BB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB24u;
label_14bb24:
    // 0x14bb24: 0xaf80ba94  sw          $zero, -0x456C($gp)
    ctx->pc = 0x14bb24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949524), GPR_U32(ctx, 0));
label_14bb28:
    // 0x14bb28: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14bb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_14bb2c:
    // 0x14bb2c: 0xc0ad710  jal         func_2B5C40
label_14bb30:
    if (ctx->pc == 0x14BB30u) {
        ctx->pc = 0x14BB34u;
        goto label_14bb34;
    }
    ctx->pc = 0x14BB2Cu;
    SET_GPR_U32(ctx, 31, 0x14BB34u);
    ctx->pc = 0x2B5C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5C40u, 0x14BB2Cu, 0x14BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BB34u;
label_14bb34:
    // 0x14bb34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x14bb34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14bb38:
    // 0x14bb38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14bb38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14bb3c:
    // 0x14bb3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14bb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14bb40:
    // 0x14bb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14bb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_14bb44:
    // 0x14bb44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14bb44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14bb48:
    // 0x14bb48: 0x3e00008  jr          $ra
label_14bb4c:
    if (ctx->pc == 0x14BB4Cu) {
        ctx->pc = 0x14BB50u;
        goto label_fallthrough_0x14bb48;
    }
    ctx->pc = 0x14BB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14bb48:
    ctx->pc = 0x14BB50u;
}
