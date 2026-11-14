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

// Function: sub_0022BCC0
// Address: 0x22bcc0 - 0x22bd40
void sub_0022BCC0_0x22bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BCC0_0x22bcc0");
#endif

    switch (ctx->pc) {
        case 0x22bcf4u: goto label_22bcf4;
        case 0x22bd04u: goto label_22bd04;
        case 0x22bd24u: goto label_22bd24;
        default: break;
    }

    ctx->pc = 0x22bcc0u;

    // 0x22bcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22bcc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22bcc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22bccc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22bcccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22bcd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bcd4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x22BCD4u;
    {
        const bool branch_taken_0x22bcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bcd4) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BCDCu;
    // 0x22bcdc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bce4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22bce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22bce8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x22bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22bcec: 0xc08af7c  jal         func_22BDF0
    ctx->pc = 0x22BCECu;
    SET_GPR_U32(ctx, 31, 0x22BCF4u);
    ctx->pc = 0x22BDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDF0u, 0x22BCECu, 0x22BCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BCF4u;
label_22bcf4:
    // 0x22bcf4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bcf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22bcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bcfc: 0xc08af50  jal         func_22BD40
    ctx->pc = 0x22BCFCu;
    SET_GPR_U32(ctx, 31, 0x22BD04u);
    ctx->pc = 0x22BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BD40u, 0x22BCFCu, 0x22BD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD04u;
label_22bd04:
    // 0x22bd04: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22bd04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22bd08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22bd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22bd0c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22bd0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22bd10: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BD10u;
    {
        const bool branch_taken_0x22bd10 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22bd10) {
            ctx->pc = 0x22BD24u;
            goto label_22bd24;
        }
    }
    ctx->pc = 0x22BD18u;
    // 0x22bd18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd1c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22BD1Cu;
    SET_GPR_U32(ctx, 31, 0x22BD24u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22BD1Cu, 0x22BD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22BD24u;
label_22bd24:
    // 0x22bd24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22bd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bd2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22bd2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22bd30: 0x3e00008  jr          $ra
    ctx->pc = 0x22BD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BD38u;
    // 0x22bd38: 0x0  nop
    ctx->pc = 0x22bd38u;
    // NOP
    // 0x22bd3c: 0x0  nop
    ctx->pc = 0x22bd3cu;
    // NOP
    ctx->pc = 0x22bd40u;
}
