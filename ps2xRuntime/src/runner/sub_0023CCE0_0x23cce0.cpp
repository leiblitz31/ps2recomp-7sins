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

// Function: sub_0023CCE0
// Address: 0x23cce0 - 0x23cd40
void sub_0023CCE0_0x23cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CCE0_0x23cce0");
#endif

    switch (ctx->pc) {
        case 0x23cd0cu: goto label_23cd0c;
        case 0x23cd2cu: goto label_23cd2c;
        default: break;
    }

    ctx->pc = 0x23cce0u;

    // 0x23cce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ccec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x23ccecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x23ccf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23ccf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ccf4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23CCF4u;
    {
        const bool branch_taken_0x23ccf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ccf4) {
            ctx->pc = 0x23CD2Cu;
            goto label_23cd2c;
        }
    }
    ctx->pc = 0x23CCFCu;
    // 0x23ccfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cd00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23cd04: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x23CD04u;
    SET_GPR_U32(ctx, 31, 0x23CD0Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x23CD04u, 0x23CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD0Cu;
label_23cd0c:
    // 0x23cd0c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x23cd0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cd10: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23cd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x23cd14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23cd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x23cd18: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CD18u;
    {
        const bool branch_taken_0x23cd18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23cd18) {
            ctx->pc = 0x23CD2Cu;
            goto label_23cd2c;
        }
    }
    ctx->pc = 0x23CD20u;
    // 0x23cd20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cd24: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x23CD24u;
    SET_GPR_U32(ctx, 31, 0x23CD2Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x23CD24u, 0x23CD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CD2Cu;
label_23cd2c:
    // 0x23cd2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cd30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cd34: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23cd34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cd38: 0x3e00008  jr          $ra
    ctx->pc = 0x23CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CD40u;
}
