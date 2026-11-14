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

// Function: sub_0025DB90
// Address: 0x25db90 - 0x25dbc0
void sub_0025DB90_0x25db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DB90_0x25db90");
#endif

    switch (ctx->pc) {
        case 0x25dbacu: goto label_25dbac;
        default: break;
    }

    ctx->pc = 0x25db90u;

    // 0x25db90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25db94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25db98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25db98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25db9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25dba0: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x25dba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25dba4: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x25DBA4u;
    SET_GPR_U32(ctx, 31, 0x25DBACu);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x25DBA4u, 0x25DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DBACu;
label_25dbac:
    // 0x25dbac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25dbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25dbb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25dbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x25DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DBBCu;
    // 0x25dbbc: 0x0  nop
    ctx->pc = 0x25dbbcu;
    // NOP
    ctx->pc = 0x25dbc0u;
}
