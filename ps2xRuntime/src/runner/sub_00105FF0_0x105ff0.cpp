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

// Function: sub_00105FF0
// Address: 0x105ff0 - 0x106060
void sub_00105FF0_0x105ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105FF0_0x105ff0");
#endif

    switch (ctx->pc) {
        case 0x106018u: goto label_106018;
        case 0x106028u: goto label_106028;
        case 0x106048u: goto label_106048;
        default: break;
    }

    ctx->pc = 0x105ff0u;

    // 0x105ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x105ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x105ffc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x105ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x106000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106004: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x106004u;
    {
        const bool branch_taken_0x106004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x106004) {
            ctx->pc = 0x106048u;
            goto label_106048;
        }
    }
    ctx->pc = 0x10600Cu;
    // 0x10600c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106010: 0xc041834  jal         func_1060D0
    ctx->pc = 0x106010u;
    SET_GPR_U32(ctx, 31, 0x106018u);
    ctx->pc = 0x1060D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1060D0u, 0x106010u, 0x106018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106018u;
label_106018:
    // 0x106018: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x106018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10601c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10601cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106020: 0xc041818  jal         func_106060
    ctx->pc = 0x106020u;
    SET_GPR_U32(ctx, 31, 0x106028u);
    ctx->pc = 0x106060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106060u, 0x106020u, 0x106028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106028u;
label_106028:
    // 0x106028: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x106028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10602c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x106030: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106030u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106034: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106034u;
    {
        const bool branch_taken_0x106034 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x106034) {
            ctx->pc = 0x106048u;
            goto label_106048;
        }
    }
    ctx->pc = 0x10603Cu;
    // 0x10603c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106040: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x106040u;
    SET_GPR_U32(ctx, 31, 0x106048u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x106040u, 0x106048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106048u;
label_106048:
    // 0x106048: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10604c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10604cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106050: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x106050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x106054: 0x3e00008  jr          $ra
    ctx->pc = 0x106054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10605Cu;
    // 0x10605c: 0x0  nop
    ctx->pc = 0x10605cu;
    // NOP
    ctx->pc = 0x106060u;
}
