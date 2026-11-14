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

// Function: sub_00290AE0
// Address: 0x290ae0 - 0x290b10
void sub_00290AE0_0x290ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290AE0_0x290ae0");
#endif

    switch (ctx->pc) {
        case 0x290afcu: goto label_290afc;
        default: break;
    }

    ctx->pc = 0x290ae0u;

    // 0x290ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x290ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x290ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x290ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x290aec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x290aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290af0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x290af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290af4: 0xc0a42c4  jal         func_290B10
    ctx->pc = 0x290AF4u;
    SET_GPR_U32(ctx, 31, 0x290AFCu);
    ctx->pc = 0x290B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B10u, 0x290AF4u, 0x290AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290AFCu;
label_290afc:
    // 0x290afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290b00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x290b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x290b04: 0x3e00008  jr          $ra
    ctx->pc = 0x290B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290B0Cu;
    // 0x290b0c: 0x0  nop
    ctx->pc = 0x290b0cu;
    // NOP
    ctx->pc = 0x290b10u;
}
