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

// Function: sub_00180470
// Address: 0x180470 - 0x1804d0
void sub_00180470_0x180470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180470_0x180470");
#endif

    switch (ctx->pc) {
        case 0x180494u: goto label_180494;
        case 0x1804b0u: goto label_1804b0;
        default: break;
    }

    ctx->pc = 0x180470u;

    // 0x180470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x180470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x180474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x180474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18047c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18047cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x180480: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x180480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x180484: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x180484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x180488: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x180488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18048c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x18048Cu;
    SET_GPR_U32(ctx, 31, 0x180494u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x18048Cu, 0x180494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180494u;
label_180494:
    // 0x180494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180498: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x180498u;
    {
        const bool branch_taken_0x180498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x180498) {
            ctx->pc = 0x1804B4u;
            goto label_1804b4;
        }
    }
    ctx->pc = 0x1804A0u;
    // 0x1804a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1804a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1804a4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1804a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1804a8: 0xc060134  jal         func_1804D0
    ctx->pc = 0x1804A8u;
    SET_GPR_U32(ctx, 31, 0x1804B0u);
    ctx->pc = 0x1804D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1804D0u, 0x1804A8u, 0x1804B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804B0u;
label_1804b0:
    // 0x1804b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1804b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1804b4:
    // 0x1804b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1804b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1804b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1804b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1804bc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1804bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1804c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1804C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1804C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1804C8u;
    // 0x1804c8: 0x0  nop
    ctx->pc = 0x1804c8u;
    // NOP
    // 0x1804cc: 0x0  nop
    ctx->pc = 0x1804ccu;
    // NOP
    ctx->pc = 0x1804d0u;
}
