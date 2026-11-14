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

// Function: sub_0028AB60
// Address: 0x28ab60 - 0x28aba0
void sub_0028AB60_0x28ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AB60_0x28ab60");
#endif

    switch (ctx->pc) {
        case 0x28ab7cu: goto label_28ab7c;
        default: break;
    }

    ctx->pc = 0x28ab60u;

    // 0x28ab60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ab64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ab68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28ab6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ab70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ab74: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x28AB74u;
    SET_GPR_U32(ctx, 31, 0x28AB7Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x28AB74u, 0x28AB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AB7Cu;
label_28ab7c:
    // 0x28ab7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28ab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ab80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28ab80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x28ab84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ab88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ab88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ab8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ab8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x28AB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AB98u;
    // 0x28ab98: 0x0  nop
    ctx->pc = 0x28ab98u;
    // NOP
    // 0x28ab9c: 0x0  nop
    ctx->pc = 0x28ab9cu;
    // NOP
    ctx->pc = 0x28aba0u;
}
