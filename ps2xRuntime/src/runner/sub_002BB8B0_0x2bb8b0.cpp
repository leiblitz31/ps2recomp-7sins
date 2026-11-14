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

// Function: sub_002BB8B0
// Address: 0x2bb8b0 - 0x2bb8f0
void sub_002BB8B0_0x2bb8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB8B0_0x2bb8b0");
#endif

    switch (ctx->pc) {
        case 0x2bb8c8u: goto label_2bb8c8;
        default: break;
    }

    ctx->pc = 0x2bb8b0u;

    // 0x2bb8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb8b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb8b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bb8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bb8bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bb8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb8c0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2BB8C0u;
    SET_GPR_U32(ctx, 31, 0x2BB8C8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2BB8C0u, 0x2BB8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB8C8u;
label_2bb8c8:
    // 0x2bb8c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2bb8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2bb8cc: 0x24636890  addiu       $v1, $v1, 0x6890
    ctx->pc = 0x2bb8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26768));
    // 0x2bb8d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bb8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb8d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bb8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2bb8d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bb8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb8dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb8e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bb8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bb8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB8ECu;
    // 0x2bb8ec: 0x0  nop
    ctx->pc = 0x2bb8ecu;
    // NOP
    ctx->pc = 0x2bb8f0u;
}
