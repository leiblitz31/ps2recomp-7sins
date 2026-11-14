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

// Function: sub_001A1AE0
// Address: 0x1a1ae0 - 0x1a1b20
void sub_001A1AE0_0x1a1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1AE0_0x1a1ae0");
#endif

    switch (ctx->pc) {
        case 0x1a1b00u: goto label_1a1b00;
        default: break;
    }

    ctx->pc = 0x1a1ae0u;

    // 0x1a1ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a1ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a1ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1aec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1a1aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1a1af0: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x1a1af0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1af4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1af8: 0xc069ecc  jal         func_1A7B30
    ctx->pc = 0x1A1AF8u;
    SET_GPR_U32(ctx, 31, 0x1A1B00u);
    ctx->pc = 0x1A7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7B30u, 0x1A1AF8u, 0x1A1B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B00u;
label_1a1b00:
    // 0x1a1b00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1b0c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1a1b0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a1b10: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1B18u;
    // 0x1a1b18: 0x0  nop
    ctx->pc = 0x1a1b18u;
    // NOP
    // 0x1a1b1c: 0x0  nop
    ctx->pc = 0x1a1b1cu;
    // NOP
    ctx->pc = 0x1a1b20u;
}
