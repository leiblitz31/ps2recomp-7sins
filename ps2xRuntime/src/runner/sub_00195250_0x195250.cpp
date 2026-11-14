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

// Function: sub_00195250
// Address: 0x195250 - 0x195280
void sub_00195250_0x195250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195250_0x195250");
#endif

    switch (ctx->pc) {
        case 0x19526cu: goto label_19526c;
        default: break;
    }

    ctx->pc = 0x195250u;

    // 0x195250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195258: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19525c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195260: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x195260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195264: 0xc067054  jal         func_19C150
    ctx->pc = 0x195264u;
    SET_GPR_U32(ctx, 31, 0x19526Cu);
    ctx->pc = 0x19C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C150u, 0x195264u, 0x19526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19526Cu;
label_19526c:
    // 0x19526c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19526cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195270: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x195270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195274: 0x3e00008  jr          $ra
    ctx->pc = 0x195274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19527Cu;
    // 0x19527c: 0x0  nop
    ctx->pc = 0x19527cu;
    // NOP
    ctx->pc = 0x195280u;
}
