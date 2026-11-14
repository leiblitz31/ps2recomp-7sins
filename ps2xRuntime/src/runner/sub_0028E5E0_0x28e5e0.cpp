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

// Function: sub_0028E5E0
// Address: 0x28e5e0 - 0x28e640
void sub_0028E5E0_0x28e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E5E0_0x28e5e0");
#endif

    switch (ctx->pc) {
        case 0x28e604u: goto label_28e604;
        case 0x28e620u: goto label_28e620;
        default: break;
    }

    ctx->pc = 0x28e5e0u;

    // 0x28e5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28e5e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28e5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28e5ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28e5f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x28e5f4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x28e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28e5f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28e5fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x28E5FCu;
    SET_GPR_U32(ctx, 31, 0x28E604u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x28E5FCu, 0x28E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E604u;
label_28e604:
    // 0x28e604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e608: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E608u;
    {
        const bool branch_taken_0x28e608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e608) {
            ctx->pc = 0x28E624u;
            goto label_28e624;
        }
    }
    ctx->pc = 0x28E610u;
    // 0x28e610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e614: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28e614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28e618: 0xc0a3a08  jal         func_28E820
    ctx->pc = 0x28E618u;
    SET_GPR_U32(ctx, 31, 0x28E620u);
    ctx->pc = 0x28E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E820u, 0x28E618u, 0x28E620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E620u;
label_28e620:
    // 0x28e620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e624:
    // 0x28e624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28e628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28e628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e62c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x28e62cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28e630: 0x3e00008  jr          $ra
    ctx->pc = 0x28E630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E638u;
    // 0x28e638: 0x0  nop
    ctx->pc = 0x28e638u;
    // NOP
    // 0x28e63c: 0x0  nop
    ctx->pc = 0x28e63cu;
    // NOP
    ctx->pc = 0x28e640u;
}
