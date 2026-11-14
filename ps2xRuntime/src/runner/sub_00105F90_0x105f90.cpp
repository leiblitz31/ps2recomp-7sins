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

// Function: sub_00105F90
// Address: 0x105f90 - 0x105ff0
void sub_00105F90_0x105f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105F90_0x105f90");
#endif

    switch (ctx->pc) {
        case 0x105fbcu: goto label_105fbc;
        case 0x105fdcu: goto label_105fdc;
        default: break;
    }

    ctx->pc = 0x105f90u;

    // 0x105f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x105f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x105f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x105f9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x105f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x105fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x105fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105fa4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x105FA4u;
    {
        const bool branch_taken_0x105fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105fa4) {
            ctx->pc = 0x105FDCu;
            goto label_105fdc;
        }
    }
    ctx->pc = 0x105FACu;
    // 0x105fac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x105facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105fb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x105fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x105fb4: 0xc0417fc  jal         func_105FF0
    ctx->pc = 0x105FB4u;
    SET_GPR_U32(ctx, 31, 0x105FBCu);
    ctx->pc = 0x105FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105FF0u, 0x105FB4u, 0x105FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FBCu;
label_105fbc:
    // 0x105fbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x105fbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105fc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x105fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x105fc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105fc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x105fc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105FC8u;
    {
        const bool branch_taken_0x105fc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x105fc8) {
            ctx->pc = 0x105FDCu;
            goto label_105fdc;
        }
    }
    ctx->pc = 0x105FD0u;
    // 0x105fd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x105fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105fd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x105FD4u;
    SET_GPR_U32(ctx, 31, 0x105FDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x105FD4u, 0x105FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FDCu;
label_105fdc:
    // 0x105fdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x105fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105fe4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x105fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x105fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x105FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105FF0u;
}
