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

// Function: sub_004586A0
// Address: 0x4586a0 - 0x458700
void sub_004586A0_0x4586a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004586A0_0x4586a0");
#endif

    switch (ctx->pc) {
        case 0x4586c4u: goto label_4586c4;
        case 0x4586e0u: goto label_4586e0;
        default: break;
    }

    ctx->pc = 0x4586a0u;

    // 0x4586a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4586a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4586a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4586a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4586a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4586a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4586ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4586acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4586b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x4586b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x4586b4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x4586b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4586b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4586b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4586bc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x4586BCu;
    SET_GPR_U32(ctx, 31, 0x4586C4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x4586BCu, 0x4586C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4586C4u;
label_4586c4:
    // 0x4586c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4586c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4586c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4586C8u;
    {
        const bool branch_taken_0x4586c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4586c8) {
            ctx->pc = 0x4586E4u;
            goto label_4586e4;
        }
    }
    ctx->pc = 0x4586D0u;
    // 0x4586d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4586d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4586d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4586d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4586d8: 0xc1161c0  jal         func_458700
    ctx->pc = 0x4586D8u;
    SET_GPR_U32(ctx, 31, 0x4586E0u);
    ctx->pc = 0x458700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x458700u, 0x4586D8u, 0x4586E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4586E0u;
label_4586e0:
    // 0x4586e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4586e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4586e4:
    // 0x4586e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4586e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4586e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4586e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4586ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4586ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4586f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4586F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4586F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4586F8u;
    // 0x4586f8: 0x0  nop
    ctx->pc = 0x4586f8u;
    // NOP
    // 0x4586fc: 0x0  nop
    ctx->pc = 0x4586fcu;
    // NOP
    ctx->pc = 0x458700u;
}
