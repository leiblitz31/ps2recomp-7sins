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

// Function: sub_001464D0
// Address: 0x1464d0 - 0x146530
void sub_001464D0_0x1464d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001464D0_0x1464d0");
#endif

    switch (ctx->pc) {
        case 0x1464f4u: goto label_1464f4;
        case 0x146510u: goto label_146510;
        default: break;
    }

    ctx->pc = 0x1464d0u;

    // 0x1464d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1464d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1464d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1464d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1464d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1464d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1464dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1464dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1464e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1464e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1464e4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1464e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1464e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1464e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1464ec: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1464ECu;
    SET_GPR_U32(ctx, 31, 0x1464F4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1464ECu, 0x1464F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1464F4u;
label_1464f4:
    // 0x1464f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1464f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1464f8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1464F8u;
    {
        const bool branch_taken_0x1464f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1464f8) {
            ctx->pc = 0x146514u;
            goto label_146514;
        }
    }
    ctx->pc = 0x146500u;
    // 0x146500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146504: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x146504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146508: 0xc05194c  jal         func_146530
    ctx->pc = 0x146508u;
    SET_GPR_U32(ctx, 31, 0x146510u);
    ctx->pc = 0x146530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146530u, 0x146508u, 0x146510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146510u;
label_146510:
    // 0x146510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146514:
    // 0x146514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x146514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14651c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14651cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146520: 0x3e00008  jr          $ra
    ctx->pc = 0x146520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146528u;
    // 0x146528: 0x0  nop
    ctx->pc = 0x146528u;
    // NOP
    // 0x14652c: 0x0  nop
    ctx->pc = 0x14652cu;
    // NOP
    ctx->pc = 0x146530u;
}
