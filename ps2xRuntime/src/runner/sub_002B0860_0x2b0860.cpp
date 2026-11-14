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

// Function: sub_002B0860
// Address: 0x2b0860 - 0x2b0900
void sub_002B0860_0x2b0860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0860_0x2b0860");
#endif

    switch (ctx->pc) {
        case 0x2b0860u: goto label_2b0860;
        case 0x2b0864u: goto label_2b0864;
        case 0x2b0868u: goto label_2b0868;
        case 0x2b086cu: goto label_2b086c;
        case 0x2b0870u: goto label_2b0870;
        case 0x2b0874u: goto label_2b0874;
        case 0x2b0878u: goto label_2b0878;
        case 0x2b087cu: goto label_2b087c;
        case 0x2b0880u: goto label_2b0880;
        case 0x2b0884u: goto label_2b0884;
        case 0x2b0888u: goto label_2b0888;
        case 0x2b088cu: goto label_2b088c;
        case 0x2b0890u: goto label_2b0890;
        case 0x2b0894u: goto label_2b0894;
        case 0x2b0898u: goto label_2b0898;
        case 0x2b089cu: goto label_2b089c;
        case 0x2b08a0u: goto label_2b08a0;
        case 0x2b08a4u: goto label_2b08a4;
        case 0x2b08a8u: goto label_2b08a8;
        case 0x2b08acu: goto label_2b08ac;
        case 0x2b08b0u: goto label_2b08b0;
        case 0x2b08b4u: goto label_2b08b4;
        case 0x2b08b8u: goto label_2b08b8;
        case 0x2b08bcu: goto label_2b08bc;
        case 0x2b08c0u: goto label_2b08c0;
        case 0x2b08c4u: goto label_2b08c4;
        case 0x2b08c8u: goto label_2b08c8;
        case 0x2b08ccu: goto label_2b08cc;
        case 0x2b08d0u: goto label_2b08d0;
        case 0x2b08d4u: goto label_2b08d4;
        case 0x2b08d8u: goto label_2b08d8;
        case 0x2b08dcu: goto label_2b08dc;
        case 0x2b08e0u: goto label_2b08e0;
        case 0x2b08e4u: goto label_2b08e4;
        case 0x2b08e8u: goto label_2b08e8;
        case 0x2b08ecu: goto label_2b08ec;
        case 0x2b08f0u: goto label_2b08f0;
        case 0x2b08f4u: goto label_2b08f4;
        case 0x2b08f8u: goto label_2b08f8;
        case 0x2b08fcu: goto label_2b08fc;
        default: break;
    }

    ctx->pc = 0x2b0860u;

label_2b0860:
    // 0x2b0860: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b0860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b0864:
    // 0x2b0864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b0864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b0868:
    // 0x2b0868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b086c:
    // 0x2b086c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b0870:
    // 0x2b0870: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b0870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2b0874:
    // 0x2b0874: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b0874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b0878:
    // 0x2b0878: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b087c:
    if (ctx->pc == 0x2B087Cu) {
        ctx->pc = 0x2B0880u;
        goto label_2b0880;
    }
    ctx->pc = 0x2B0878u;
    {
        const bool branch_taken_0x2b0878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0878) {
            ctx->pc = 0x2B0888u;
            goto label_2b0888;
        }
    }
    ctx->pc = 0x2B0880u;
label_2b0880:
    // 0x2b0880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0884:
    // 0x2b0884: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2b0884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2b0888:
    // 0x2b0888: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b0888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b088c:
    // 0x2b088c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b088cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b0890:
    // 0x2b0890: 0xc119b68  jal         func_466DA0
label_2b0894:
    if (ctx->pc == 0x2B0894u) {
        ctx->pc = 0x2B0898u;
        goto label_2b0898;
    }
    ctx->pc = 0x2B0890u;
    SET_GPR_U32(ctx, 31, 0x2B0898u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B0890u, 0x2B0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0898u;
label_2b0898:
    // 0x2b0898: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b0898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b089c:
    // 0x2b089c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b08a0:
    if (ctx->pc == 0x2B08A0u) {
        ctx->pc = 0x2B08A4u;
        goto label_2b08a4;
    }
    ctx->pc = 0x2B089Cu;
    {
        const bool branch_taken_0x2b089c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b089c) {
            ctx->pc = 0x2B08B0u;
            goto label_2b08b0;
        }
    }
    ctx->pc = 0x2B08A4u;
label_2b08a4:
    // 0x2b08a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b08a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b08a8:
    // 0x2b08a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b08ac:
    if (ctx->pc == 0x2B08ACu) {
        ctx->pc = 0x2B08B0u;
        goto label_2b08b0;
    }
    ctx->pc = 0x2B08A8u;
    {
        const bool branch_taken_0x2b08a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b08a8) {
            ctx->pc = 0x2B08E4u;
            goto label_2b08e4;
        }
    }
    ctx->pc = 0x2B08B0u;
label_2b08b0:
    // 0x2b08b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b08b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b08b4:
    // 0x2b08b4: 0xc0ba088  jal         func_2E8220
label_2b08b8:
    if (ctx->pc == 0x2B08B8u) {
        ctx->pc = 0x2B08BCu;
        goto label_2b08bc;
    }
    ctx->pc = 0x2B08B4u;
    SET_GPR_U32(ctx, 31, 0x2B08BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2B08B4u, 0x2B08BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08BCu;
label_2b08bc:
    // 0x2b08bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b08bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b08c0:
    // 0x2b08c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b08c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b08c4:
    // 0x2b08c4: 0xc0ba088  jal         func_2E8220
label_2b08c8:
    if (ctx->pc == 0x2B08C8u) {
        ctx->pc = 0x2B08CCu;
        goto label_2b08cc;
    }
    ctx->pc = 0x2B08C4u;
    SET_GPR_U32(ctx, 31, 0x2B08CCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2B08C4u, 0x2B08CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B08CCu;
label_2b08cc:
    // 0x2b08cc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2b08d0:
    if (ctx->pc == 0x2B08D0u) {
        ctx->pc = 0x2B08D4u;
        goto label_2b08d4;
    }
    ctx->pc = 0x2B08CCu;
    {
        const bool branch_taken_0x2b08cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b08cc) {
            ctx->pc = 0x2B0888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0888;
        }
    }
    ctx->pc = 0x2B08D4u;
label_2b08d4:
    // 0x2b08d4: 0x200f809  jalr        $s0
label_2b08d8:
    if (ctx->pc == 0x2B08D8u) {
        ctx->pc = 0x2B08DCu;
        goto label_2b08dc;
    }
    ctx->pc = 0x2B08D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2B08DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B08D4u, 0x2B08DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B08DCu;
label_2b08dc:
    // 0x2b08dc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2b08e0:
    if (ctx->pc == 0x2B08E0u) {
        ctx->pc = 0x2B08E4u;
        goto label_2b08e4;
    }
    ctx->pc = 0x2B08DCu;
    {
        const bool branch_taken_0x2b08dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b08dc) {
            ctx->pc = 0x2B0888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0888;
        }
    }
    ctx->pc = 0x2B08E4u;
label_2b08e4:
    // 0x2b08e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b08e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b08e8:
    // 0x2b08e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b08e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b08ec:
    // 0x2b08ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b08ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b08f0:
    // 0x2b08f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b08f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2b08f4:
    // 0x2b08f4: 0x3e00008  jr          $ra
label_2b08f8:
    if (ctx->pc == 0x2B08F8u) {
        ctx->pc = 0x2B08FCu;
        goto label_2b08fc;
    }
    ctx->pc = 0x2B08F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B08F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B08FCu;
label_2b08fc:
    // 0x2b08fc: 0x0  nop
    ctx->pc = 0x2b08fcu;
    // NOP
    ctx->pc = 0x2b0900u;
}
