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

// Function: sub_0027ED40
// Address: 0x27ed40 - 0x27eda0
void sub_0027ED40_0x27ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ED40_0x27ed40");
#endif

    switch (ctx->pc) {
        case 0x27ed6cu: goto label_27ed6c;
        case 0x27ed8cu: goto label_27ed8c;
        default: break;
    }

    ctx->pc = 0x27ed40u;

    // 0x27ed40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ed44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ed48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27ed4c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27ed4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x27ed50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed54: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x27ED54u;
    {
        const bool branch_taken_0x27ed54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ed54) {
            ctx->pc = 0x27ED8Cu;
            goto label_27ed8c;
        }
    }
    ctx->pc = 0x27ED5Cu;
    // 0x27ed5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27ed60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ed64: 0xc09fb68  jal         func_27EDA0
    ctx->pc = 0x27ED64u;
    SET_GPR_U32(ctx, 31, 0x27ED6Cu);
    ctx->pc = 0x27EDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EDA0u, 0x27ED64u, 0x27ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED6Cu;
label_27ed6c:
    // 0x27ed6c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27ed6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ed70: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x27ed74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x27ed74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27ed78: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ED78u;
    {
        const bool branch_taken_0x27ed78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x27ed78) {
            ctx->pc = 0x27ED8Cu;
            goto label_27ed8c;
        }
    }
    ctx->pc = 0x27ED80u;
    // 0x27ed80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27ed80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed84: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x27ED84u;
    SET_GPR_U32(ctx, 31, 0x27ED8Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x27ED84u, 0x27ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ED8Cu;
label_27ed8c:
    // 0x27ed8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ed90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ed90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ed94: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ed94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ed98: 0x3e00008  jr          $ra
    ctx->pc = 0x27ED98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ED98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EDA0u;
}
