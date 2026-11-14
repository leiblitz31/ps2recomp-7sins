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

// Function: sub_00177F80
// Address: 0x177f80 - 0x177fc0
void sub_00177F80_0x177f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177F80_0x177f80");
#endif

    switch (ctx->pc) {
        case 0x177f98u: goto label_177f98;
        default: break;
    }

    ctx->pc = 0x177f80u;

    // 0x177f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x177f8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177f90: 0xc05dff0  jal         func_177FC0
    ctx->pc = 0x177F90u;
    SET_GPR_U32(ctx, 31, 0x177F98u);
    ctx->pc = 0x177FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177FC0u, 0x177F90u, 0x177F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F98u;
label_177f98:
    // 0x177f98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x177f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x177f9c: 0x24633e58  addiu       $v1, $v1, 0x3E58
    ctx->pc = 0x177f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15960));
    // 0x177fa0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177fa4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x177fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x177fa8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x177fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177fb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x177fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x177fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x177FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177FBCu;
    // 0x177fbc: 0x0  nop
    ctx->pc = 0x177fbcu;
    // NOP
    ctx->pc = 0x177fc0u;
}
