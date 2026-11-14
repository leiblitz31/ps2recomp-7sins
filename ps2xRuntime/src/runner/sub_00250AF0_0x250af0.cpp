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

// Function: sub_00250AF0
// Address: 0x250af0 - 0x250b30
void sub_00250AF0_0x250af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250AF0_0x250af0");
#endif

    switch (ctx->pc) {
        case 0x250b10u: goto label_250b10;
        default: break;
    }

    ctx->pc = 0x250af0u;

    // 0x250af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250af8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x250afc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x250afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x250b00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x250b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250b08: 0xc0942cc  jal         func_250B30
    ctx->pc = 0x250B08u;
    SET_GPR_U32(ctx, 31, 0x250B10u);
    ctx->pc = 0x250B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B30u, 0x250B08u, 0x250B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250B10u;
label_250b10:
    // 0x250b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250b18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x250B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250B24u;
    // 0x250b24: 0x0  nop
    ctx->pc = 0x250b24u;
    // NOP
    // 0x250b28: 0x0  nop
    ctx->pc = 0x250b28u;
    // NOP
    // 0x250b2c: 0x0  nop
    ctx->pc = 0x250b2cu;
    // NOP
    ctx->pc = 0x250b30u;
}
