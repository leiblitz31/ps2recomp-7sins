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

// Function: sub_0044F940
// Address: 0x44f940 - 0x44f980
void sub_0044F940_0x44f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F940_0x44f940");
#endif

    switch (ctx->pc) {
        case 0x44f960u: goto label_44f960;
        default: break;
    }

    ctx->pc = 0x44f940u;

    // 0x44f940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44f944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44f948: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44f94c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44f950: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f954: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x44f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44f958: 0xc113e60  jal         func_44F980
    ctx->pc = 0x44F958u;
    SET_GPR_U32(ctx, 31, 0x44F960u);
    ctx->pc = 0x44F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F980u, 0x44F958u, 0x44F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44F960u;
label_44f960:
    // 0x44f960: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44f964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44f964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44f968: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44f968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44f96c: 0x3e00008  jr          $ra
    ctx->pc = 0x44F96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F974u;
    // 0x44f974: 0x0  nop
    ctx->pc = 0x44f974u;
    // NOP
    // 0x44f978: 0x0  nop
    ctx->pc = 0x44f978u;
    // NOP
    // 0x44f97c: 0x0  nop
    ctx->pc = 0x44f97cu;
    // NOP
    ctx->pc = 0x44f980u;
}
