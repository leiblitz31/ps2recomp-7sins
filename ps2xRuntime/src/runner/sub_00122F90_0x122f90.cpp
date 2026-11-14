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

// Function: sub_00122F90
// Address: 0x122f90 - 0x122fe0
void sub_00122F90_0x122f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122F90_0x122f90");
#endif

    switch (ctx->pc) {
        case 0x122fc8u: goto label_122fc8;
        default: break;
    }

    ctx->pc = 0x122f90u;

    // 0x122f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x122f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x122f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x122f98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x122f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x122f9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x122f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x122fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122fa4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x122fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x122fa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122fac: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x122facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x122fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122fb4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x122fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x122fb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x122fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122fbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x122fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fc0: 0xc048bf8  jal         func_122FE0
    ctx->pc = 0x122FC0u;
    SET_GPR_U32(ctx, 31, 0x122FC8u);
    ctx->pc = 0x122FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FE0u, 0x122FC0u, 0x122FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FC8u;
label_122fc8:
    // 0x122fc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x122fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x122fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122fd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x122fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x122fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x122FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122FDCu;
    // 0x122fdc: 0x0  nop
    ctx->pc = 0x122fdcu;
    // NOP
    ctx->pc = 0x122fe0u;
}
