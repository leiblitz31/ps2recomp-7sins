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

// Function: sub_00116600
// Address: 0x116600 - 0x116640
void sub_00116600_0x116600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116600_0x116600");
#endif

    switch (ctx->pc) {
        case 0x11661cu: goto label_11661c;
        default: break;
    }

    ctx->pc = 0x116600u;

    // 0x116600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x116604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x116608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x116608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11660c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11660cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116610: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x116610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x116614: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x116614u;
    SET_GPR_U32(ctx, 31, 0x11661Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x116614u, 0x11661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11661Cu;
label_11661c:
    // 0x11661c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116620: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x116620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x116624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x116624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x116628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11662c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11662cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x116630: 0x3e00008  jr          $ra
    ctx->pc = 0x116630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116638u;
    // 0x116638: 0x0  nop
    ctx->pc = 0x116638u;
    // NOP
    // 0x11663c: 0x0  nop
    ctx->pc = 0x11663cu;
    // NOP
    ctx->pc = 0x116640u;
}
