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

// Function: sub_00177AE0
// Address: 0x177ae0 - 0x177b10
void sub_00177AE0_0x177ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177AE0_0x177ae0");
#endif

    switch (ctx->pc) {
        case 0x177afcu: goto label_177afc;
        default: break;
    }

    ctx->pc = 0x177ae0u;

    // 0x177ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x177aec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177af0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x177af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177af4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x177AF4u;
    SET_GPR_U32(ctx, 31, 0x177AFCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x177AF4u, 0x177AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AFCu;
label_177afc:
    // 0x177afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x177b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x177b04: 0x3e00008  jr          $ra
    ctx->pc = 0x177B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B0Cu;
    // 0x177b0c: 0x0  nop
    ctx->pc = 0x177b0cu;
    // NOP
    ctx->pc = 0x177b10u;
}
