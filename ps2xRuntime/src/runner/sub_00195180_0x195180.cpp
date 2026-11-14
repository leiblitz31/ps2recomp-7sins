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

// Function: sub_00195180
// Address: 0x195180 - 0x1951c0
void sub_00195180_0x195180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195180_0x195180");
#endif

    switch (ctx->pc) {
        case 0x1951a4u: goto label_1951a4;
        default: break;
    }

    ctx->pc = 0x195180u;

    // 0x195180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195188: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19518c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x19518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x195190: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195194: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x195194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x195198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19519c: 0xc065470  jal         func_1951C0
    ctx->pc = 0x19519Cu;
    SET_GPR_U32(ctx, 31, 0x1951A4u);
    ctx->pc = 0x1951C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1951C0u, 0x19519Cu, 0x1951A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1951A4u;
label_1951a4:
    // 0x1951a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1951a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1951a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1951a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1951ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1951ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1951ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1951B4u;
    // 0x1951b4: 0x0  nop
    ctx->pc = 0x1951b4u;
    // NOP
    // 0x1951b8: 0x0  nop
    ctx->pc = 0x1951b8u;
    // NOP
    // 0x1951bc: 0x0  nop
    ctx->pc = 0x1951bcu;
    // NOP
    ctx->pc = 0x1951c0u;
}
