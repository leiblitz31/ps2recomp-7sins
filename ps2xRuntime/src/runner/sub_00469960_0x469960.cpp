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

// Function: sub_00469960
// Address: 0x469960 - 0x4699b0
void sub_00469960_0x469960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469960_0x469960");
#endif

    switch (ctx->pc) {
        case 0x469980u: goto label_469980;
        case 0x469994u: goto label_469994;
        default: break;
    }

    ctx->pc = 0x469960u;

    // 0x469960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469968: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46996c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469970: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469974: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x469974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x469978: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x469978u;
    SET_GPR_U32(ctx, 31, 0x469980u);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x469978u, 0x469980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469980u;
label_469980:
    // 0x469980: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469984: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469988: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x469988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46998c: 0xc11a66c  jal         func_4699B0
    ctx->pc = 0x46998Cu;
    SET_GPR_U32(ctx, 31, 0x469994u);
    ctx->pc = 0x4699B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4699B0u, 0x46998Cu, 0x469994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469994u;
label_469994:
    // 0x469994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469998: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46999c: 0x3e00008  jr          $ra
    ctx->pc = 0x46999Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46999Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4699A4u;
    // 0x4699a4: 0x0  nop
    ctx->pc = 0x4699a4u;
    // NOP
    // 0x4699a8: 0x0  nop
    ctx->pc = 0x4699a8u;
    // NOP
    // 0x4699ac: 0x0  nop
    ctx->pc = 0x4699acu;
    // NOP
    ctx->pc = 0x4699b0u;
}
