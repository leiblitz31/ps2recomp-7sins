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

// Function: sub_0046BC70
// Address: 0x46bc70 - 0x46bcb0
void sub_0046BC70_0x46bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046BC70_0x46bc70");
#endif

    switch (ctx->pc) {
        case 0x46bc9cu: goto label_46bc9c;
        default: break;
    }

    ctx->pc = 0x46bc70u;

    // 0x46bc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46bc74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46bc78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46bc78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46bc7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x46bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x46bc80: 0x24636ce8  addiu       $v1, $v1, 0x6CE8
    ctx->pc = 0x46bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27880));
    // 0x46bc84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bc88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x46bc8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bc90: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46bc94: 0xc11afd8  jal         func_46BF60
    ctx->pc = 0x46BC94u;
    SET_GPR_U32(ctx, 31, 0x46BC9Cu);
    ctx->pc = 0x46BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BF60u, 0x46BC94u, 0x46BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46BC9Cu;
label_46bc9c:
    // 0x46bc9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46bca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46bca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46bca4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46bca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46bca8: 0x3e00008  jr          $ra
    ctx->pc = 0x46BCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46BCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46BCB0u;
}
