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

// Function: sub_0046ADC0
// Address: 0x46adc0 - 0x46ae40
void sub_0046ADC0_0x46adc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046ADC0_0x46adc0");
#endif

    switch (ctx->pc) {
        case 0x46ade4u: goto label_46ade4;
        case 0x46ae28u: goto label_46ae28;
        default: break;
    }

    ctx->pc = 0x46adc0u;

    // 0x46adc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46adc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46adc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46adc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46adc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46adcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46adccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46add0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46add0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46add4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46add4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46add8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46add8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46addc: 0xc04e020  jal         func_138080
    ctx->pc = 0x46ADDCu;
    SET_GPR_U32(ctx, 31, 0x46ADE4u);
    ctx->pc = 0x138080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138080u, 0x46ADDCu, 0x46ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ADE4u;
label_46ade4:
    // 0x46ade4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ade8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x46ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46adec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46adf0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x46adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x46adf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46adf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46adf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46adfc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x46adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46ae00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46ae00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46ae04: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x46ae04u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x46ae08: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46AE08u;
    {
        const bool branch_taken_0x46ae08 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x46ae08) {
            ctx->pc = 0x46AE18u;
            goto label_46ae18;
        }
    }
    ctx->pc = 0x46AE10u;
    // 0x46ae10: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x46ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x46ae14: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x46ae14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_46ae18:
    // 0x46ae18: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x46ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x46ae1c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x46ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46ae20: 0xc11aa80  jal         func_46AA00
    ctx->pc = 0x46AE20u;
    SET_GPR_U32(ctx, 31, 0x46AE28u);
    ctx->pc = 0x46AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AA00u, 0x46AE20u, 0x46AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AE28u;
label_46ae28:
    // 0x46ae28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46ae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ae2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46ae2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46ae30: 0x3e00008  jr          $ra
    ctx->pc = 0x46AE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AE38u;
    // 0x46ae38: 0x0  nop
    ctx->pc = 0x46ae38u;
    // NOP
    // 0x46ae3c: 0x0  nop
    ctx->pc = 0x46ae3cu;
    // NOP
    ctx->pc = 0x46ae40u;
}
