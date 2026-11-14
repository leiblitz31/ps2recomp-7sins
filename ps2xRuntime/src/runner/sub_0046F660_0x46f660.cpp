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

// Function: sub_0046F660
// Address: 0x46f660 - 0x46f6a0
void sub_0046F660_0x46f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F660_0x46f660");
#endif

    switch (ctx->pc) {
        case 0x46f68cu: goto label_46f68c;
        default: break;
    }

    ctx->pc = 0x46f660u;

    // 0x46f660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46f664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f66c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46f66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46f670: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46f670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46f674: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f678: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f67c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f680: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x46f680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f684: 0xc11a4a0  jal         func_469280
    ctx->pc = 0x46F684u;
    SET_GPR_U32(ctx, 31, 0x46F68Cu);
    ctx->pc = 0x469280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469280u, 0x46F684u, 0x46F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F68Cu;
label_46f68c:
    // 0x46f68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f690: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46f690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46f694: 0x3e00008  jr          $ra
    ctx->pc = 0x46F694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F69Cu;
    // 0x46f69c: 0x0  nop
    ctx->pc = 0x46f69cu;
    // NOP
    ctx->pc = 0x46f6a0u;
}
