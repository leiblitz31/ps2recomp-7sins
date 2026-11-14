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

// Function: sub_001A2170
// Address: 0x1a2170 - 0x1a21b0
void sub_001A2170_0x1a2170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2170_0x1a2170");
#endif

    switch (ctx->pc) {
        case 0x1a2188u: goto label_1a2188;
        case 0x1a2198u: goto label_1a2198;
        default: break;
    }

    ctx->pc = 0x1a2170u;

    // 0x1a2170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2178: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a2178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a217c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1a217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1a2180: 0xc0688ac  jal         func_1A22B0
    ctx->pc = 0x1A2180u;
    SET_GPR_U32(ctx, 31, 0x1A2188u);
    ctx->pc = 0x1A22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A22B0u, 0x1A2180u, 0x1A2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2188u;
label_1a2188:
    // 0x1a2188: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a2188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a218c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a218cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2190: 0xc06886c  jal         func_1A21B0
    ctx->pc = 0x1A2190u;
    SET_GPR_U32(ctx, 31, 0x1A2198u);
    ctx->pc = 0x1A21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21B0u, 0x1A2190u, 0x1A2198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2198u;
label_1a2198:
    // 0x1a2198: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1a2198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a219c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a219cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a21a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a21a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A21A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A21ACu;
    // 0x1a21ac: 0x0  nop
    ctx->pc = 0x1a21acu;
    // NOP
    ctx->pc = 0x1a21b0u;
}
