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

// Function: sub_00198240
// Address: 0x198240 - 0x198280
void sub_00198240_0x198240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198240_0x198240");
#endif

    switch (ctx->pc) {
        case 0x198270u: goto label_198270;
        default: break;
    }

    ctx->pc = 0x198240u;

    // 0x198240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x198240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x198244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198248: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x198248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19824c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19824cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x198250: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x198250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x198254: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x198254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198258: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x198258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19825c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x19825cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198260: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x198260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x198264: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x198264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198268: 0xc0660a0  jal         func_198280
    ctx->pc = 0x198268u;
    SET_GPR_U32(ctx, 31, 0x198270u);
    ctx->pc = 0x198280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198280u, 0x198268u, 0x198270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198270u;
label_198270:
    // 0x198270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198274: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x198278: 0x3e00008  jr          $ra
    ctx->pc = 0x198278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198280u;
}
