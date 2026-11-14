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

// Function: sub_00459C70
// Address: 0x459c70 - 0x459ce0
void sub_00459C70_0x459c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459C70_0x459c70");
#endif

    switch (ctx->pc) {
        case 0x459ca0u: goto label_459ca0;
        case 0x459cc0u: goto label_459cc0;
        default: break;
    }

    ctx->pc = 0x459c70u;

    // 0x459c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x459c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x459c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x459c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x459c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x459c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x459c7c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x459c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x459c80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459c84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x459C84u;
    {
        const bool branch_taken_0x459c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x459c84) {
            ctx->pc = 0x459CC0u;
            goto label_459cc0;
        }
    }
    ctx->pc = 0x459C8Cu;
    // 0x459c8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459c90: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x459c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x459c94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x459c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x459c98: 0xc116670  jal         func_4599C0
    ctx->pc = 0x459C98u;
    SET_GPR_U32(ctx, 31, 0x459CA0u);
    ctx->pc = 0x4599C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4599C0u, 0x459C98u, 0x459CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459CA0u;
label_459ca0:
    // 0x459ca0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x459ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459ca4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x459ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x459ca8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459ca8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x459cac: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x459CACu;
    {
        const bool branch_taken_0x459cac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x459cac) {
            ctx->pc = 0x459CC0u;
            goto label_459cc0;
        }
    }
    ctx->pc = 0x459CB4u;
    // 0x459cb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x459cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459cb8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x459CB8u;
    SET_GPR_U32(ctx, 31, 0x459CC0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x459CB8u, 0x459CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459CC0u;
label_459cc0:
    // 0x459cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x459cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459cc8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x459cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x459ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x459CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459CD4u;
    // 0x459cd4: 0x0  nop
    ctx->pc = 0x459cd4u;
    // NOP
    // 0x459cd8: 0x0  nop
    ctx->pc = 0x459cd8u;
    // NOP
    // 0x459cdc: 0x0  nop
    ctx->pc = 0x459cdcu;
    // NOP
    ctx->pc = 0x459ce0u;
}
