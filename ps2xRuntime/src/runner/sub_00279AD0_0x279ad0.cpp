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

// Function: sub_00279AD0
// Address: 0x279ad0 - 0x279b00
void sub_00279AD0_0x279ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279AD0_0x279ad0");
#endif

    switch (ctx->pc) {
        case 0x279aecu: goto label_279aec;
        default: break;
    }

    ctx->pc = 0x279ad0u;

    // 0x279ad0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x279ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x279ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x279adc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279ae0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x279ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x279ae4: 0xc0a682c  jal         func_29A0B0
    ctx->pc = 0x279AE4u;
    SET_GPR_U32(ctx, 31, 0x279AECu);
    ctx->pc = 0x29A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A0B0u, 0x279AE4u, 0x279AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279AECu;
label_279aec:
    // 0x279aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279af0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279af4: 0x3e00008  jr          $ra
    ctx->pc = 0x279AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279AFCu;
    // 0x279afc: 0x0  nop
    ctx->pc = 0x279afcu;
    // NOP
    ctx->pc = 0x279b00u;
}
