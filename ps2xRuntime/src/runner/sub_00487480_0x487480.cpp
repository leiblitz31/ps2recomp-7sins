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

// Function: sub_00487480
// Address: 0x487480 - 0x4874c0
void sub_00487480_0x487480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487480_0x487480");
#endif

    switch (ctx->pc) {
        case 0x4874a4u: goto label_4874a4;
        default: break;
    }

    ctx->pc = 0x487480u;

    // 0x487480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x487480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x487484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x487484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x487488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x487488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48748c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48748cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x487490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487494: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x487494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x487498: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x487498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x48749c: 0xc1215c0  jal         func_485700
    ctx->pc = 0x48749Cu;
    SET_GPR_U32(ctx, 31, 0x4874A4u);
    ctx->pc = 0x485700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485700u, 0x48749Cu, 0x4874A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4874A4u;
label_4874a4:
    // 0x4874a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4874a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4874a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4874a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4874ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4874ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4874ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4874B4u;
    // 0x4874b4: 0x0  nop
    ctx->pc = 0x4874b4u;
    // NOP
    // 0x4874b8: 0x0  nop
    ctx->pc = 0x4874b8u;
    // NOP
    // 0x4874bc: 0x0  nop
    ctx->pc = 0x4874bcu;
    // NOP
    ctx->pc = 0x4874c0u;
}
