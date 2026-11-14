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

// Function: sub_00117650
// Address: 0x117650 - 0x117690
void sub_00117650_0x117650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117650_0x117650");
#endif

    switch (ctx->pc) {
        case 0x11766cu: goto label_11766c;
        default: break;
    }

    ctx->pc = 0x117650u;

    // 0x117650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x117650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x117654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x117658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11765c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x117660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117664: 0xc042734  jal         func_109CD0
    ctx->pc = 0x117664u;
    SET_GPR_U32(ctx, 31, 0x11766Cu);
    ctx->pc = 0x109CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109CD0u, 0x117664u, 0x11766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11766Cu;
label_11766c:
    // 0x11766c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117670: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x117670u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x117674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11767c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11767cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x117680: 0x3e00008  jr          $ra
    ctx->pc = 0x117680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117688u;
    // 0x117688: 0x0  nop
    ctx->pc = 0x117688u;
    // NOP
    // 0x11768c: 0x0  nop
    ctx->pc = 0x11768cu;
    // NOP
    ctx->pc = 0x117690u;
}
