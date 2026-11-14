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

// Function: sub_001A3950
// Address: 0x1a3950 - 0x1a39b0
void sub_001A3950_0x1a3950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3950_0x1a3950");
#endif

    switch (ctx->pc) {
        case 0x1a396cu: goto label_1a396c;
        case 0x1a397cu: goto label_1a397c;
        case 0x1a3990u: goto label_1a3990;
        default: break;
    }

    ctx->pc = 0x1a3950u;

    // 0x1a3950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a3950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a3954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a395c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1a395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1a3960: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3964: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x1A3964u;
    SET_GPR_U32(ctx, 31, 0x1A396Cu);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x1A3964u, 0x1A396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A396Cu;
label_1a396c:
    // 0x1a396c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a396cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3970: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a3970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3974: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x1A3974u;
    SET_GPR_U32(ctx, 31, 0x1A397Cu);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x1A3974u, 0x1A397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A397Cu;
label_1a397c:
    // 0x1a397c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1a397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a3980: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a3980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3984: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a3984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3988: 0xc068e6c  jal         func_1A39B0
    ctx->pc = 0x1A3988u;
    SET_GPR_U32(ctx, 31, 0x1A3990u);
    ctx->pc = 0x1A39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A39B0u, 0x1A3988u, 0x1A3990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3990u;
label_1a3990:
    // 0x1a3990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3998: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a3998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a399c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A399Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A39A4u;
    // 0x1a39a4: 0x0  nop
    ctx->pc = 0x1a39a4u;
    // NOP
    // 0x1a39a8: 0x0  nop
    ctx->pc = 0x1a39a8u;
    // NOP
    // 0x1a39ac: 0x0  nop
    ctx->pc = 0x1a39acu;
    // NOP
    ctx->pc = 0x1a39b0u;
}
