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

// Function: sub_0046B480
// Address: 0x46b480 - 0x46b520
void sub_0046B480_0x46b480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B480_0x46b480");
#endif

    switch (ctx->pc) {
        case 0x46b480u: goto label_46b480;
        case 0x46b484u: goto label_46b484;
        case 0x46b488u: goto label_46b488;
        case 0x46b48cu: goto label_46b48c;
        case 0x46b490u: goto label_46b490;
        case 0x46b494u: goto label_46b494;
        case 0x46b498u: goto label_46b498;
        case 0x46b49cu: goto label_46b49c;
        case 0x46b4a0u: goto label_46b4a0;
        case 0x46b4a4u: goto label_46b4a4;
        case 0x46b4a8u: goto label_46b4a8;
        case 0x46b4acu: goto label_46b4ac;
        case 0x46b4b0u: goto label_46b4b0;
        case 0x46b4b4u: goto label_46b4b4;
        case 0x46b4b8u: goto label_46b4b8;
        case 0x46b4bcu: goto label_46b4bc;
        case 0x46b4c0u: goto label_46b4c0;
        case 0x46b4c4u: goto label_46b4c4;
        case 0x46b4c8u: goto label_46b4c8;
        case 0x46b4ccu: goto label_46b4cc;
        case 0x46b4d0u: goto label_46b4d0;
        case 0x46b4d4u: goto label_46b4d4;
        case 0x46b4d8u: goto label_46b4d8;
        case 0x46b4dcu: goto label_46b4dc;
        case 0x46b4e0u: goto label_46b4e0;
        case 0x46b4e4u: goto label_46b4e4;
        case 0x46b4e8u: goto label_46b4e8;
        case 0x46b4ecu: goto label_46b4ec;
        case 0x46b4f0u: goto label_46b4f0;
        case 0x46b4f4u: goto label_46b4f4;
        case 0x46b4f8u: goto label_46b4f8;
        case 0x46b4fcu: goto label_46b4fc;
        case 0x46b500u: goto label_46b500;
        case 0x46b504u: goto label_46b504;
        case 0x46b508u: goto label_46b508;
        case 0x46b50cu: goto label_46b50c;
        case 0x46b510u: goto label_46b510;
        case 0x46b514u: goto label_46b514;
        case 0x46b518u: goto label_46b518;
        case 0x46b51cu: goto label_46b51c;
        default: break;
    }

    ctx->pc = 0x46b480u;

label_46b480:
    // 0x46b480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46b484:
    // 0x46b484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46b484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_46b488:
    // 0x46b488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46b488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_46b48c:
    // 0x46b48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_46b490:
    // 0x46b490: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x46b490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_46b494:
    // 0x46b494: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46b498:
    // 0x46b498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_46b49c:
    if (ctx->pc == 0x46B49Cu) {
        ctx->pc = 0x46B4A0u;
        goto label_46b4a0;
    }
    ctx->pc = 0x46B498u;
    {
        const bool branch_taken_0x46b498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b498) {
            ctx->pc = 0x46B4A8u;
            goto label_46b4a8;
        }
    }
    ctx->pc = 0x46B4A0u;
label_46b4a0:
    // 0x46b4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46b4a4:
    // 0x46b4a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x46b4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_46b4a8:
    // 0x46b4a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x46b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_46b4ac:
    // 0x46b4ac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x46b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_46b4b0:
    // 0x46b4b0: 0xc119b68  jal         func_466DA0
label_46b4b4:
    if (ctx->pc == 0x46B4B4u) {
        ctx->pc = 0x46B4B8u;
        goto label_46b4b8;
    }
    ctx->pc = 0x46B4B0u;
    SET_GPR_U32(ctx, 31, 0x46B4B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x46B4B0u, 0x46B4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B4B8u;
label_46b4b8:
    // 0x46b4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x46b4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b4bc:
    // 0x46b4bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_46b4c0:
    if (ctx->pc == 0x46B4C0u) {
        ctx->pc = 0x46B4C4u;
        goto label_46b4c4;
    }
    ctx->pc = 0x46B4BCu;
    {
        const bool branch_taken_0x46b4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b4bc) {
            ctx->pc = 0x46B4D0u;
            goto label_46b4d0;
        }
    }
    ctx->pc = 0x46B4C4u;
label_46b4c4:
    // 0x46b4c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46b4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_46b4c8:
    // 0x46b4c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_46b4cc:
    if (ctx->pc == 0x46B4CCu) {
        ctx->pc = 0x46B4D0u;
        goto label_46b4d0;
    }
    ctx->pc = 0x46B4C8u;
    {
        const bool branch_taken_0x46b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b4c8) {
            ctx->pc = 0x46B504u;
            goto label_46b504;
        }
    }
    ctx->pc = 0x46B4D0u;
label_46b4d0:
    // 0x46b4d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x46b4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46b4d4:
    // 0x46b4d4: 0xc0ba088  jal         func_2E8220
label_46b4d8:
    if (ctx->pc == 0x46B4D8u) {
        ctx->pc = 0x46B4DCu;
        goto label_46b4dc;
    }
    ctx->pc = 0x46B4D4u;
    SET_GPR_U32(ctx, 31, 0x46B4DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x46B4D4u, 0x46B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B4DCu;
label_46b4dc:
    // 0x46b4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46b4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46b4e0:
    // 0x46b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46b4e4:
    // 0x46b4e4: 0xc0ba088  jal         func_2E8220
label_46b4e8:
    if (ctx->pc == 0x46B4E8u) {
        ctx->pc = 0x46B4ECu;
        goto label_46b4ec;
    }
    ctx->pc = 0x46B4E4u;
    SET_GPR_U32(ctx, 31, 0x46B4ECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x46B4E4u, 0x46B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B4ECu;
label_46b4ec:
    // 0x46b4ec: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_46b4f0:
    if (ctx->pc == 0x46B4F0u) {
        ctx->pc = 0x46B4F4u;
        goto label_46b4f4;
    }
    ctx->pc = 0x46B4ECu;
    {
        const bool branch_taken_0x46b4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b4ec) {
            ctx->pc = 0x46B4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b4a8;
        }
    }
    ctx->pc = 0x46B4F4u;
label_46b4f4:
    // 0x46b4f4: 0x200f809  jalr        $s0
label_46b4f8:
    if (ctx->pc == 0x46B4F8u) {
        ctx->pc = 0x46B4FCu;
        goto label_46b4fc;
    }
    ctx->pc = 0x46B4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x46B4FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B4F4u, 0x46B4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46B4FCu;
label_46b4fc:
    // 0x46b4fc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_46b500:
    if (ctx->pc == 0x46B500u) {
        ctx->pc = 0x46B504u;
        goto label_46b504;
    }
    ctx->pc = 0x46B4FCu;
    {
        const bool branch_taken_0x46b4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b4fc) {
            ctx->pc = 0x46B4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b4a8;
        }
    }
    ctx->pc = 0x46B504u;
label_46b504:
    // 0x46b504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_46b508:
    // 0x46b508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46b508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46b50c:
    // 0x46b50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_46b510:
    // 0x46b510: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x46b510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_46b514:
    // 0x46b514: 0x3e00008  jr          $ra
label_46b518:
    if (ctx->pc == 0x46B518u) {
        ctx->pc = 0x46B51Cu;
        goto label_46b51c;
    }
    ctx->pc = 0x46B514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B51Cu;
label_46b51c:
    // 0x46b51c: 0x0  nop
    ctx->pc = 0x46b51cu;
    // NOP
    ctx->pc = 0x46b520u;
}
