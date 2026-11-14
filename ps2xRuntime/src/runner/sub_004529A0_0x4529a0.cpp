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

// Function: sub_004529A0
// Address: 0x4529a0 - 0x4529d0
void sub_004529A0_0x4529a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004529A0_0x4529a0");
#endif

    switch (ctx->pc) {
        case 0x4529bcu: goto label_4529bc;
        default: break;
    }

    ctx->pc = 0x4529a0u;

    // 0x4529a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4529a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4529a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4529a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4529a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4529a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4529ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4529acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4529b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4529b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4529b4: 0xc114894  jal         func_452250
    ctx->pc = 0x4529B4u;
    SET_GPR_U32(ctx, 31, 0x4529BCu);
    ctx->pc = 0x452250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x452250u, 0x4529B4u, 0x4529BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4529BCu;
label_4529bc:
    // 0x4529bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4529bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4529c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4529c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4529c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4529C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4529C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4529CCu;
    // 0x4529cc: 0x0  nop
    ctx->pc = 0x4529ccu;
    // NOP
    ctx->pc = 0x4529d0u;
}
