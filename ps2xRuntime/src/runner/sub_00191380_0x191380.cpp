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

// Function: sub_00191380
// Address: 0x191380 - 0x1913e0
void sub_00191380_0x191380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191380_0x191380");
#endif

    switch (ctx->pc) {
        case 0x1913a8u: goto label_1913a8;
        case 0x1913bcu: goto label_1913bc;
        default: break;
    }

    ctx->pc = 0x191380u;

    // 0x191380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x191384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x191384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19138c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19138cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x191390: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x191390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x191394: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x191394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191398: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x191398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19139c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19139cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913a0: 0xc0642d4  jal         func_190B50
    ctx->pc = 0x1913A0u;
    SET_GPR_U32(ctx, 31, 0x1913A8u);
    ctx->pc = 0x190B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190B50u, 0x1913A0u, 0x1913A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913A8u;
label_1913a8:
    // 0x1913a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1913a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913ac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1913b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1913b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1913b4: 0xc0421e0  jal         func_108780
    ctx->pc = 0x1913B4u;
    SET_GPR_U32(ctx, 31, 0x1913BCu);
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x1913B4u, 0x1913BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1913BCu;
label_1913bc:
    // 0x1913bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1913bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1913c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1913c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1913c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1913c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1913c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1913cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1913CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1913CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1913D4u;
    // 0x1913d4: 0x0  nop
    ctx->pc = 0x1913d4u;
    // NOP
    // 0x1913d8: 0x0  nop
    ctx->pc = 0x1913d8u;
    // NOP
    // 0x1913dc: 0x0  nop
    ctx->pc = 0x1913dcu;
    // NOP
    ctx->pc = 0x1913e0u;
}
