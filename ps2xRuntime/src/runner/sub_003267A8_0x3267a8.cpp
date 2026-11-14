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

// Function: sub_003267A8
// Address: 0x3267a8 - 0x326810
void sub_003267A8_0x3267a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003267A8_0x3267a8");
#endif

    switch (ctx->pc) {
        case 0x3267dcu: goto label_3267dc;
        case 0x3267f0u: goto label_3267f0;
        default: break;
    }

    ctx->pc = 0x3267a8u;

    // 0x3267a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3267a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3267ac: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x3267acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x3267b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3267b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3267b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3267b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3267b8: 0x247022c8  addiu       $s0, $v1, 0x22C8
    ctx->pc = 0x3267b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8904));
    // 0x3267bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3267bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3267c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3267c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3267c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3267c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4F22CCu));
    // 0x3267c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3267c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3267cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3267CCu;
    {
        const bool branch_taken_0x3267cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3267cc) {
            ctx->pc = 0x3267DCu;
            goto label_3267dc;
        }
    }
    ctx->pc = 0x3267D4u;
    // 0x3267d4: 0xc0c9bc6  jal         func_326F18
    ctx->pc = 0x3267D4u;
    SET_GPR_U32(ctx, 31, 0x3267DCu);
    ctx->pc = 0x326F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326F18u, 0x3267D4u, 0x3267DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3267DCu;
label_3267dc:
    // 0x3267dc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3267dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3267e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3267E0u;
    {
        const bool branch_taken_0x3267e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3267E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267E0u;
        // 0x3267e4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267e0) {
            ctx->pc = 0x3267F8u;
            goto label_3267f8;
        }
    }
    ctx->pc = 0x3267E8u;
    // 0x3267e8: 0xc104284  jal         func_410A10
    ctx->pc = 0x3267E8u;
    SET_GPR_U32(ctx, 31, 0x3267F0u);
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3267E8u, 0x3267F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3267F0u;
label_3267f0:
    // 0x3267f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3267f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3267f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3267f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3267f8:
    // 0x3267f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3267f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3267fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3267fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326804: 0x3e00008  jr          $ra
    ctx->pc = 0x326804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326804u;
        // 0x326808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32680Cu;
    // 0x32680c: 0x0  nop
    ctx->pc = 0x32680cu;
    // NOP
    ctx->pc = 0x326810u;
}
