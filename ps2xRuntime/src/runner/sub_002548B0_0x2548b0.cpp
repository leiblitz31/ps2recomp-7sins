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

// Function: sub_002548B0
// Address: 0x2548b0 - 0x254920
void sub_002548B0_0x2548b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002548B0_0x2548b0");
#endif

    switch (ctx->pc) {
        case 0x2548d0u: goto label_2548d0;
        case 0x2548e4u: goto label_2548e4;
        case 0x2548f8u: goto label_2548f8;
        default: break;
    }

    ctx->pc = 0x2548b0u;

    // 0x2548b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2548b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2548b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2548b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2548b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2548b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2548bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2548bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2548c0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2548c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2548c4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2548c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2548c8: 0xc095264  jal         func_254990
    ctx->pc = 0x2548C8u;
    SET_GPR_U32(ctx, 31, 0x2548D0u);
    ctx->pc = 0x254990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254990u, 0x2548C8u, 0x2548D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548D0u;
label_2548d0:
    // 0x2548d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2548d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2548d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2548d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2548d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548dc: 0xc095248  jal         func_254920
    ctx->pc = 0x2548DCu;
    SET_GPR_U32(ctx, 31, 0x2548E4u);
    ctx->pc = 0x254920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254920u, 0x2548DCu, 0x2548E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548E4u;
label_2548e4:
    // 0x2548e4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2548e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2548e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2548e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2548ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2548ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2548f0: 0xc095c48  jal         func_257120
    ctx->pc = 0x2548F0u;
    SET_GPR_U32(ctx, 31, 0x2548F8u);
    ctx->pc = 0x257120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257120u, 0x2548F0u, 0x2548F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2548F8u;
label_2548f8:
    // 0x2548f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2548f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2548fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2548fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x254900: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254908: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25490c: 0x3e00008  jr          $ra
    ctx->pc = 0x25490Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25490Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254914u;
    // 0x254914: 0x0  nop
    ctx->pc = 0x254914u;
    // NOP
    // 0x254918: 0x0  nop
    ctx->pc = 0x254918u;
    // NOP
    // 0x25491c: 0x0  nop
    ctx->pc = 0x25491cu;
    // NOP
    ctx->pc = 0x254920u;
}
