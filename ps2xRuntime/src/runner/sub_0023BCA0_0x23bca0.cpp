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

// Function: sub_0023BCA0
// Address: 0x23bca0 - 0x23bd40
void sub_0023BCA0_0x23bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BCA0_0x23bca0");
#endif

    switch (ctx->pc) {
        case 0x23bca0u: goto label_23bca0;
        case 0x23bca4u: goto label_23bca4;
        case 0x23bca8u: goto label_23bca8;
        case 0x23bcacu: goto label_23bcac;
        case 0x23bcb0u: goto label_23bcb0;
        case 0x23bcb4u: goto label_23bcb4;
        case 0x23bcb8u: goto label_23bcb8;
        case 0x23bcbcu: goto label_23bcbc;
        case 0x23bcc0u: goto label_23bcc0;
        case 0x23bcc4u: goto label_23bcc4;
        case 0x23bcc8u: goto label_23bcc8;
        case 0x23bcccu: goto label_23bccc;
        case 0x23bcd0u: goto label_23bcd0;
        case 0x23bcd4u: goto label_23bcd4;
        case 0x23bcd8u: goto label_23bcd8;
        case 0x23bcdcu: goto label_23bcdc;
        case 0x23bce0u: goto label_23bce0;
        case 0x23bce4u: goto label_23bce4;
        case 0x23bce8u: goto label_23bce8;
        case 0x23bcecu: goto label_23bcec;
        case 0x23bcf0u: goto label_23bcf0;
        case 0x23bcf4u: goto label_23bcf4;
        case 0x23bcf8u: goto label_23bcf8;
        case 0x23bcfcu: goto label_23bcfc;
        case 0x23bd00u: goto label_23bd00;
        case 0x23bd04u: goto label_23bd04;
        case 0x23bd08u: goto label_23bd08;
        case 0x23bd0cu: goto label_23bd0c;
        case 0x23bd10u: goto label_23bd10;
        case 0x23bd14u: goto label_23bd14;
        case 0x23bd18u: goto label_23bd18;
        case 0x23bd1cu: goto label_23bd1c;
        case 0x23bd20u: goto label_23bd20;
        case 0x23bd24u: goto label_23bd24;
        case 0x23bd28u: goto label_23bd28;
        case 0x23bd2cu: goto label_23bd2c;
        case 0x23bd30u: goto label_23bd30;
        case 0x23bd34u: goto label_23bd34;
        case 0x23bd38u: goto label_23bd38;
        case 0x23bd3cu: goto label_23bd3c;
        default: break;
    }

    ctx->pc = 0x23bca0u;

label_23bca0:
    // 0x23bca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23bca4:
    // 0x23bca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23bca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23bca8:
    // 0x23bca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_23bcac:
    // 0x23bcac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_23bcb0:
    // 0x23bcb0: 0x8f83bbe8  lw          $v1, -0x4418($gp)
    ctx->pc = 0x23bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
label_23bcb4:
    // 0x23bcb4: 0x1003001b  beq         $zero, $v1, . + 4 + (0x1B << 2)
label_23bcb8:
    if (ctx->pc == 0x23BCB8u) {
        ctx->pc = 0x23BCBCu;
        goto label_23bcbc;
    }
    ctx->pc = 0x23BCB4u;
    {
        const bool branch_taken_0x23bcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x23bcb4) {
            ctx->pc = 0x23BD24u;
            goto label_23bd24;
        }
    }
    ctx->pc = 0x23BCBCu;
label_23bcbc:
    // 0x23bcbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bcc0:
    // 0x23bcc0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x23bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_23bcc4:
    // 0x23bcc4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_23bcc8:
    if (ctx->pc == 0x23BCC8u) {
        ctx->pc = 0x23BCCCu;
        goto label_23bccc;
    }
    ctx->pc = 0x23BCC4u;
    {
        const bool branch_taken_0x23bcc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23bcc4) {
            ctx->pc = 0x23BD08u;
            goto label_23bd08;
        }
    }
    ctx->pc = 0x23BCCCu;
label_23bccc:
    // 0x23bccc: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
label_23bcd0:
    // 0x23bcd0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x23bcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_23bcd4:
    // 0x23bcd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23bcd8:
    // 0x23bcd8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_23bcdc:
    if (ctx->pc == 0x23BCDCu) {
        ctx->pc = 0x23BCE0u;
        goto label_23bce0;
    }
    ctx->pc = 0x23BCD8u;
    {
        const bool branch_taken_0x23bcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23bcd8) {
            ctx->pc = 0x23BD08u;
            goto label_23bd08;
        }
    }
    ctx->pc = 0x23BCE0u;
label_23bce0:
    // 0x23bce0: 0x8f82bbe8  lw          $v0, -0x4418($gp)
    ctx->pc = 0x23bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
label_23bce4:
    // 0x23bce4: 0x8f84bbe8  lw          $a0, -0x4418($gp)
    ctx->pc = 0x23bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
label_23bce8:
    // 0x23bce8: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x23bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_23bcec:
    // 0x23bcec: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x23bcecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23bcf0:
    // 0x23bcf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23bcf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23bcf4:
    // 0x23bcf4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x23bcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_23bcf8:
    // 0x23bcf8: 0x320f809  jalr        $t9
label_23bcfc:
    if (ctx->pc == 0x23BCFCu) {
        ctx->pc = 0x23BD00u;
        goto label_23bd00;
    }
    ctx->pc = 0x23BCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23BD00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BCF8u, 0x23BD00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BD00u;
label_23bd00:
    // 0x23bd00: 0x10000008  b           . + 4 + (0x8 << 2)
label_23bd04:
    if (ctx->pc == 0x23BD04u) {
        ctx->pc = 0x23BD08u;
        goto label_23bd08;
    }
    ctx->pc = 0x23BD00u;
    {
        const bool branch_taken_0x23bd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23bd00) {
            ctx->pc = 0x23BD24u;
            goto label_23bd24;
        }
    }
    ctx->pc = 0x23BD08u;
label_23bd08:
    // 0x23bd08: 0x8f84bbe8  lw          $a0, -0x4418($gp)
    ctx->pc = 0x23bd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949864)));
label_23bd0c:
    // 0x23bd0c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x23bd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23bd10:
    // 0x23bd10: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x23bd10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23bd14:
    // 0x23bd14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23bd14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23bd18:
    // 0x23bd18: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x23bd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_23bd1c:
    // 0x23bd1c: 0x320f809  jalr        $t9
label_23bd20:
    if (ctx->pc == 0x23BD20u) {
        ctx->pc = 0x23BD24u;
        goto label_23bd24;
    }
    ctx->pc = 0x23BD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23BD24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD1Cu, 0x23BD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23BD24u;
label_23bd24:
    // 0x23bd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23bd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23bd28:
    // 0x23bd28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23bd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23bd2c:
    // 0x23bd2c: 0x3e00008  jr          $ra
label_23bd30:
    if (ctx->pc == 0x23BD30u) {
        ctx->pc = 0x23BD34u;
        goto label_23bd34;
    }
    ctx->pc = 0x23BD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BD34u;
label_23bd34:
    // 0x23bd34: 0x0  nop
    ctx->pc = 0x23bd34u;
    // NOP
label_23bd38:
    // 0x23bd38: 0x0  nop
    ctx->pc = 0x23bd38u;
    // NOP
label_23bd3c:
    // 0x23bd3c: 0x0  nop
    ctx->pc = 0x23bd3cu;
    // NOP
    ctx->pc = 0x23bd40u;
}
