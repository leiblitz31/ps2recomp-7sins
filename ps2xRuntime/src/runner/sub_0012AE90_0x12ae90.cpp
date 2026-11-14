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

// Function: sub_0012AE90
// Address: 0x12ae90 - 0x12af10
void sub_0012AE90_0x12ae90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012AE90_0x12ae90");
#endif

    switch (ctx->pc) {
        case 0x12aec4u: goto label_12aec4;
        case 0x12aed4u: goto label_12aed4;
        case 0x12aef4u: goto label_12aef4;
        default: break;
    }

    ctx->pc = 0x12ae90u;

    // 0x12ae90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ae90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ae94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12ae98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12ae9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12ae9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x12aea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aea4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12AEA4u;
    {
        const bool branch_taken_0x12aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aea4) {
            ctx->pc = 0x12AEF4u;
            goto label_12aef4;
        }
    }
    ctx->pc = 0x12AEACu;
    // 0x12aeac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x12aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aeb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aeb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12aeb8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x12aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12aebc: 0xc04abf0  jal         func_12AFC0
    ctx->pc = 0x12AEBCu;
    SET_GPR_U32(ctx, 31, 0x12AEC4u);
    ctx->pc = 0x12AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AFC0u, 0x12AEBCu, 0x12AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEC4u;
label_12aec4:
    // 0x12aec4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aecc: 0xc04abc4  jal         func_12AF10
    ctx->pc = 0x12AECCu;
    SET_GPR_U32(ctx, 31, 0x12AED4u);
    ctx->pc = 0x12AF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AF10u, 0x12AECCu, 0x12AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AED4u;
label_12aed4:
    // 0x12aed4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12aed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12aed8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12aed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12aedc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12aedcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12aee0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AEE0u;
    {
        const bool branch_taken_0x12aee0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12aee0) {
            ctx->pc = 0x12AEF4u;
            goto label_12aef4;
        }
    }
    ctx->pc = 0x12AEE8u;
    // 0x12aee8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aeec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12AEECu;
    SET_GPR_U32(ctx, 31, 0x12AEF4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12AEECu, 0x12AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEF4u;
label_12aef4:
    // 0x12aef4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12aef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aefc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12aefcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12af00: 0x3e00008  jr          $ra
    ctx->pc = 0x12AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AF00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AF08u;
    // 0x12af08: 0x0  nop
    ctx->pc = 0x12af08u;
    // NOP
    // 0x12af0c: 0x0  nop
    ctx->pc = 0x12af0cu;
    // NOP
    ctx->pc = 0x12af10u;
}
