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

// Function: sub_00469A10
// Address: 0x469a10 - 0x469a50
void sub_00469A10_0x469a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469A10_0x469a10");
#endif

    switch (ctx->pc) {
        case 0x469a3cu: goto label_469a3c;
        default: break;
    }

    ctx->pc = 0x469a10u;

    // 0x469a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x469a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x469a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x469a1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x469a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x469a20: 0x24636cc8  addiu       $v1, $v1, 0x6CC8
    ctx->pc = 0x469a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27848));
    // 0x469a24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469a28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x469a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x469a2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469a30: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469a34: 0xc11a72c  jal         func_469CB0
    ctx->pc = 0x469A34u;
    SET_GPR_U32(ctx, 31, 0x469A3Cu);
    ctx->pc = 0x469CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469CB0u, 0x469A34u, 0x469A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469A3Cu;
label_469a3c:
    // 0x469a3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469a44: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x469a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x469a48: 0x3e00008  jr          $ra
    ctx->pc = 0x469A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469A50u;
}
