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

// Function: sub_00163A30
// Address: 0x163a30 - 0x163a70
void sub_00163A30_0x163a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163A30_0x163a30");
#endif

    switch (ctx->pc) {
        case 0x163a4cu: goto label_163a4c;
        default: break;
    }

    ctx->pc = 0x163a30u;

    // 0x163a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x163a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x163a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x163a3c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x163a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x163a40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x163a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163a44: 0xc0559ac  jal         func_1566B0
    ctx->pc = 0x163A44u;
    SET_GPR_U32(ctx, 31, 0x163A4Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x163A44u, 0x163A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A4Cu;
label_163a4c:
    // 0x163a4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x163a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x163a50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x163a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x163a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163a58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163a5c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x163a5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163a60: 0x3e00008  jr          $ra
    ctx->pc = 0x163A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163A68u;
    // 0x163a68: 0x0  nop
    ctx->pc = 0x163a68u;
    // NOP
    // 0x163a6c: 0x0  nop
    ctx->pc = 0x163a6cu;
    // NOP
    ctx->pc = 0x163a70u;
}
