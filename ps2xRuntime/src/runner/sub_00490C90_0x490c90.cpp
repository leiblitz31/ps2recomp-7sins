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

// Function: sub_00490C90
// Address: 0x490c90 - 0x490d10
void sub_00490C90_0x490c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490C90_0x490c90");
#endif

    switch (ctx->pc) {
        case 0x490cc4u: goto label_490cc4;
        case 0x490cd4u: goto label_490cd4;
        case 0x490cf4u: goto label_490cf4;
        default: break;
    }

    ctx->pc = 0x490c90u;

    // 0x490c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x490c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x490c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x490c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x490c98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x490c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x490c9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x490c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x490ca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490ca4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x490CA4u;
    {
        const bool branch_taken_0x490ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x490ca4) {
            ctx->pc = 0x490CF4u;
            goto label_490cf4;
        }
    }
    ctx->pc = 0x490CACu;
    // 0x490cac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x490cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490cb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490cb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x490cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x490cb8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x490cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x490cbc: 0xc124344  jal         func_490D10
    ctx->pc = 0x490CBCu;
    SET_GPR_U32(ctx, 31, 0x490CC4u);
    ctx->pc = 0x490D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490D10u, 0x490CBCu, 0x490CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490CC4u;
label_490cc4:
    // 0x490cc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x490cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490ccc: 0xc124224  jal         func_490890
    ctx->pc = 0x490CCCu;
    SET_GPR_U32(ctx, 31, 0x490CD4u);
    ctx->pc = 0x490890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490890u, 0x490CCCu, 0x490CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490CD4u;
label_490cd4:
    // 0x490cd4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x490cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490cd8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x490cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x490cdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x490cdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x490ce0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x490CE0u;
    {
        const bool branch_taken_0x490ce0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x490ce0) {
            ctx->pc = 0x490CF4u;
            goto label_490cf4;
        }
    }
    ctx->pc = 0x490CE8u;
    // 0x490ce8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x490ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490cec: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x490CECu;
    SET_GPR_U32(ctx, 31, 0x490CF4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x490CECu, 0x490CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490CF4u;
label_490cf4:
    // 0x490cf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x490cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x490cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490cfc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x490cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x490d00: 0x3e00008  jr          $ra
    ctx->pc = 0x490D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490D08u;
    // 0x490d08: 0x0  nop
    ctx->pc = 0x490d08u;
    // NOP
    // 0x490d0c: 0x0  nop
    ctx->pc = 0x490d0cu;
    // NOP
    ctx->pc = 0x490d10u;
}
