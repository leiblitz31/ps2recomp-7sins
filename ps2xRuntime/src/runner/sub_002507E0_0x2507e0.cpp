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

// Function: sub_002507E0
// Address: 0x2507e0 - 0x250830
void sub_002507E0_0x2507e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002507E0_0x2507e0");
#endif

    switch (ctx->pc) {
        case 0x250814u: goto label_250814;
        default: break;
    }

    ctx->pc = 0x2507e0u;

    // 0x2507e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2507e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2507e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2507e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2507e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2507e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2507ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2507ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2507f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2507f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2507f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2507f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2507f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2507fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2507fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250800: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x250800u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x250804: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250808: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x250808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x25080c: 0xc0942ac  jal         func_250AB0
    ctx->pc = 0x25080Cu;
    SET_GPR_U32(ctx, 31, 0x250814u);
    ctx->pc = 0x250AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250AB0u, 0x25080Cu, 0x250814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250814u;
label_250814:
    // 0x250814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25081c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25081cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x250820: 0x3e00008  jr          $ra
    ctx->pc = 0x250820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250828u;
    // 0x250828: 0x0  nop
    ctx->pc = 0x250828u;
    // NOP
    // 0x25082c: 0x0  nop
    ctx->pc = 0x25082cu;
    // NOP
    ctx->pc = 0x250830u;
}
