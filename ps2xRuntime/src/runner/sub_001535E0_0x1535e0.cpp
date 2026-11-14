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

// Function: sub_001535E0
// Address: 0x1535e0 - 0x153640
void sub_001535E0_0x1535e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001535E0_0x1535e0");
#endif

    switch (ctx->pc) {
        case 0x153604u: goto label_153604;
        case 0x153620u: goto label_153620;
        default: break;
    }

    ctx->pc = 0x1535e0u;

    // 0x1535e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1535e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1535e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1535e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1535e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1535e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1535ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1535ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1535f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1535f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1535f4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1535f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1535f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1535f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1535fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1535FCu;
    SET_GPR_U32(ctx, 31, 0x153604u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1535FCu, 0x153604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153604u;
label_153604:
    // 0x153604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153608: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x153608u;
    {
        const bool branch_taken_0x153608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x153608) {
            ctx->pc = 0x153624u;
            goto label_153624;
        }
    }
    ctx->pc = 0x153610u;
    // 0x153610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153614: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x153614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153618: 0xc054d90  jal         func_153640
    ctx->pc = 0x153618u;
    SET_GPR_U32(ctx, 31, 0x153620u);
    ctx->pc = 0x153640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153640u, 0x153618u, 0x153620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153620u;
label_153620:
    // 0x153620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x153620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_153624:
    // 0x153624: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x153628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15362c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x153630: 0x3e00008  jr          $ra
    ctx->pc = 0x153630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153638u;
    // 0x153638: 0x0  nop
    ctx->pc = 0x153638u;
    // NOP
    // 0x15363c: 0x0  nop
    ctx->pc = 0x15363cu;
    // NOP
    ctx->pc = 0x153640u;
}
