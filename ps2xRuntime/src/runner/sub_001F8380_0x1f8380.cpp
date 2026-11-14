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

// Function: sub_001F8380
// Address: 0x1f8380 - 0x1f8400
void sub_001F8380_0x1f8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8380_0x1f8380");
#endif

    switch (ctx->pc) {
        case 0x1f83a0u: goto label_1f83a0;
        case 0x1f83acu: goto label_1f83ac;
        case 0x1f83ccu: goto label_1f83cc;
        case 0x1f83e4u: goto label_1f83e4;
        default: break;
    }

    ctx->pc = 0x1f8380u;

    // 0x1f8380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f8384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f8388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f838c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f838cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f8390: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1f8390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1f8394: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f8394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8398: 0xc041010  jal         func_104040
    ctx->pc = 0x1F8398u;
    SET_GPR_U32(ctx, 31, 0x1F83A0u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x1F8398u, 0x1F83A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F83A0u;
label_1f83a0:
    // 0x1f83a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f83a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F83A4u;
    {
        const bool branch_taken_0x1f83a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f83a4) {
            ctx->pc = 0x1F83D8u;
            goto label_1f83d8;
        }
    }
    ctx->pc = 0x1F83ACu;
label_1f83ac:
    // 0x1f83ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f83acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f83b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f83b4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F83B4u;
    {
        const bool branch_taken_0x1f83b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f83b4) {
            ctx->pc = 0x1F83D4u;
            goto label_1f83d4;
        }
    }
    ctx->pc = 0x1F83BCu;
    // 0x1f83bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f83bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f83c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f83c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f83c4: 0xc06fa28  jal         func_1BE8A0
    ctx->pc = 0x1F83C4u;
    SET_GPR_U32(ctx, 31, 0x1F83CCu);
    ctx->pc = 0x1BE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE8A0u, 0x1F83C4u, 0x1F83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F83CCu;
label_1f83cc:
    // 0x1f83cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F83CCu;
    {
        const bool branch_taken_0x1f83cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f83cc) {
            ctx->pc = 0x1F83ECu;
            goto label_1f83ec;
        }
    }
    ctx->pc = 0x1F83D4u;
label_1f83d4:
    // 0x1f83d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f83d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f83d8:
    // 0x1f83d8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f83dc: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x1F83DCu;
    SET_GPR_U32(ctx, 31, 0x1F83E4u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x1F83DCu, 0x1F83E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F83E4u;
label_1f83e4:
    // 0x1f83e4: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F83E4u;
    {
        const bool branch_taken_0x1f83e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f83e4) {
            ctx->pc = 0x1F83ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f83ac;
        }
    }
    ctx->pc = 0x1F83ECu;
label_1f83ec:
    // 0x1f83ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f83ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f83f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f83f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f83f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f83f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f83f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F83F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F83F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8400u;
}
