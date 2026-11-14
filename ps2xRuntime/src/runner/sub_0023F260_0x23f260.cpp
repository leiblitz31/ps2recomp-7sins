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

// Function: sub_0023F260
// Address: 0x23f260 - 0x23f2c0
void sub_0023F260_0x23f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F260_0x23f260");
#endif

    switch (ctx->pc) {
        case 0x23f284u: goto label_23f284;
        case 0x23f2a0u: goto label_23f2a0;
        default: break;
    }

    ctx->pc = 0x23f260u;

    // 0x23f260: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23f260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23f264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23f268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23f26c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x23f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23f270: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23f270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x23f274: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x23f274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23f278: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23f278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f27c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x23F27Cu;
    SET_GPR_U32(ctx, 31, 0x23F284u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x23F27Cu, 0x23F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F284u;
label_23f284:
    // 0x23f284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f288: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F288u;
    {
        const bool branch_taken_0x23f288 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f288) {
            ctx->pc = 0x23F2A4u;
            goto label_23f2a4;
        }
    }
    ctx->pc = 0x23F290u;
    // 0x23f290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f294: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x23f294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f298: 0xc08fcb0  jal         func_23F2C0
    ctx->pc = 0x23F298u;
    SET_GPR_U32(ctx, 31, 0x23F2A0u);
    ctx->pc = 0x23F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F2C0u, 0x23F298u, 0x23F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F2A0u;
label_23f2a0:
    // 0x23f2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23f2a4:
    // 0x23f2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23f2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f2ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x23f2acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23f2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x23F2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F2B8u;
    // 0x23f2b8: 0x0  nop
    ctx->pc = 0x23f2b8u;
    // NOP
    // 0x23f2bc: 0x0  nop
    ctx->pc = 0x23f2bcu;
    // NOP
    ctx->pc = 0x23f2c0u;
}
