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

// Function: sub_00458450
// Address: 0x458450 - 0x4584e0
void sub_00458450_0x458450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458450_0x458450");
#endif

    switch (ctx->pc) {
        case 0x458488u: goto label_458488;
        case 0x4584b0u: goto label_4584b0;
        default: break;
    }

    ctx->pc = 0x458450u;

    // 0x458450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x458450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x458454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x458454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x458458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x458458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45845c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x45845cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x458460: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x458460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x458464: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x458464u;
    {
        const bool branch_taken_0x458464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458464) {
            ctx->pc = 0x458478u;
            goto label_458478;
        }
    }
    ctx->pc = 0x45846Cu;
    // 0x45846c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45846cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458470: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x458470u;
    {
        const bool branch_taken_0x458470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458470) {
            ctx->pc = 0x4584CCu;
            goto label_4584cc;
        }
    }
    ctx->pc = 0x458478u;
label_458478:
    // 0x458478: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x458478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45847c: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x45847cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x458480: 0xc0bc810  jal         func_2F2040
    ctx->pc = 0x458480u;
    SET_GPR_U32(ctx, 31, 0x458488u);
    ctx->pc = 0x2F2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2040u, 0x458480u, 0x458488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458488u;
label_458488:
    // 0x458488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x458488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45848c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45848Cu;
    {
        const bool branch_taken_0x45848c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45848c) {
            ctx->pc = 0x4584A0u;
            goto label_4584a0;
        }
    }
    ctx->pc = 0x458494u;
    // 0x458494: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x458494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x458498: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x458498u;
    {
        const bool branch_taken_0x458498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x458498) {
            ctx->pc = 0x4584CCu;
            goto label_4584cc;
        }
    }
    ctx->pc = 0x4584A0u;
label_4584a0:
    // 0x4584a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4584a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4584a4: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x4584a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x4584a8: 0xc0bc810  jal         func_2F2040
    ctx->pc = 0x4584A8u;
    SET_GPR_U32(ctx, 31, 0x4584B0u);
    ctx->pc = 0x2F2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2040u, 0x4584A8u, 0x4584B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4584B0u;
label_4584b0:
    // 0x4584b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4584b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4584b4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4584B4u;
    {
        const bool branch_taken_0x4584b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4584b4) {
            ctx->pc = 0x4584C8u;
            goto label_4584c8;
        }
    }
    ctx->pc = 0x4584BCu;
    // 0x4584bc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x4584bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4584c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4584C0u;
    {
        const bool branch_taken_0x4584c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4584c0) {
            ctx->pc = 0x4584CCu;
            goto label_4584cc;
        }
    }
    ctx->pc = 0x4584C8u;
label_4584c8:
    // 0x4584c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4584c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4584cc:
    // 0x4584cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4584ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4584d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4584d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4584d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4584d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4584d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4584D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4584D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4584E0u;
}
