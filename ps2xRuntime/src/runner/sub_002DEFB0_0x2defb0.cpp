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

// Function: sub_002DEFB0
// Address: 0x2defb0 - 0x2df010
void sub_002DEFB0_0x2defb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEFB0_0x2defb0");
#endif

    switch (ctx->pc) {
        case 0x2defdcu: goto label_2defdc;
        case 0x2deffcu: goto label_2deffc;
        default: break;
    }

    ctx->pc = 0x2defb0u;

    // 0x2defb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2defb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2defb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2defb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2defb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2defb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2defbc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2defbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2defc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2defc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2defc4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DEFC4u;
    {
        const bool branch_taken_0x2defc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2defc4) {
            ctx->pc = 0x2DEFFCu;
            goto label_2deffc;
        }
    }
    ctx->pc = 0x2DEFCCu;
    // 0x2defcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2defccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2defd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2defd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2defd4: 0xc0b7c04  jal         func_2DF010
    ctx->pc = 0x2DEFD4u;
    SET_GPR_U32(ctx, 31, 0x2DEFDCu);
    ctx->pc = 0x2DF010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF010u, 0x2DEFD4u, 0x2DEFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEFDCu;
label_2defdc:
    // 0x2defdc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2defdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2defe0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2defe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2defe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2defe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2defe8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEFE8u;
    {
        const bool branch_taken_0x2defe8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2defe8) {
            ctx->pc = 0x2DEFFCu;
            goto label_2deffc;
        }
    }
    ctx->pc = 0x2DEFF0u;
    // 0x2deff0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2deff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deff4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DEFF4u;
    SET_GPR_U32(ctx, 31, 0x2DEFFCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DEFF4u, 0x2DEFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEFFCu;
label_2deffc:
    // 0x2deffc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2deffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df004: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2df008: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF010u;
}
