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

// Function: sub_0047C480
// Address: 0x47c480 - 0x47c520
void sub_0047C480_0x47c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047C480_0x47c480");
#endif

    switch (ctx->pc) {
        case 0x47c480u: goto label_47c480;
        case 0x47c484u: goto label_47c484;
        case 0x47c488u: goto label_47c488;
        case 0x47c48cu: goto label_47c48c;
        case 0x47c490u: goto label_47c490;
        case 0x47c494u: goto label_47c494;
        case 0x47c498u: goto label_47c498;
        case 0x47c49cu: goto label_47c49c;
        case 0x47c4a0u: goto label_47c4a0;
        case 0x47c4a4u: goto label_47c4a4;
        case 0x47c4a8u: goto label_47c4a8;
        case 0x47c4acu: goto label_47c4ac;
        case 0x47c4b0u: goto label_47c4b0;
        case 0x47c4b4u: goto label_47c4b4;
        case 0x47c4b8u: goto label_47c4b8;
        case 0x47c4bcu: goto label_47c4bc;
        case 0x47c4c0u: goto label_47c4c0;
        case 0x47c4c4u: goto label_47c4c4;
        case 0x47c4c8u: goto label_47c4c8;
        case 0x47c4ccu: goto label_47c4cc;
        case 0x47c4d0u: goto label_47c4d0;
        case 0x47c4d4u: goto label_47c4d4;
        case 0x47c4d8u: goto label_47c4d8;
        case 0x47c4dcu: goto label_47c4dc;
        case 0x47c4e0u: goto label_47c4e0;
        case 0x47c4e4u: goto label_47c4e4;
        case 0x47c4e8u: goto label_47c4e8;
        case 0x47c4ecu: goto label_47c4ec;
        case 0x47c4f0u: goto label_47c4f0;
        case 0x47c4f4u: goto label_47c4f4;
        case 0x47c4f8u: goto label_47c4f8;
        case 0x47c4fcu: goto label_47c4fc;
        case 0x47c500u: goto label_47c500;
        case 0x47c504u: goto label_47c504;
        case 0x47c508u: goto label_47c508;
        case 0x47c50cu: goto label_47c50c;
        case 0x47c510u: goto label_47c510;
        case 0x47c514u: goto label_47c514;
        case 0x47c518u: goto label_47c518;
        case 0x47c51cu: goto label_47c51c;
        default: break;
    }

    ctx->pc = 0x47c480u;

label_47c480:
    // 0x47c480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_47c484:
    // 0x47c484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47c484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47c488:
    // 0x47c488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47c48c:
    // 0x47c48c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47c490:
    // 0x47c490: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x47c490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_47c494:
    // 0x47c494: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47c494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_47c498:
    // 0x47c498: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_47c49c:
    if (ctx->pc == 0x47C49Cu) {
        ctx->pc = 0x47C4A0u;
        goto label_47c4a0;
    }
    ctx->pc = 0x47C498u;
    {
        const bool branch_taken_0x47c498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47c498) {
            ctx->pc = 0x47C4A8u;
            goto label_47c4a8;
        }
    }
    ctx->pc = 0x47C4A0u;
label_47c4a0:
    // 0x47c4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47c4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47c4a4:
    // 0x47c4a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x47c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_47c4a8:
    // 0x47c4a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_47c4ac:
    // 0x47c4ac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x47c4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_47c4b0:
    // 0x47c4b0: 0xc119b68  jal         func_466DA0
label_47c4b4:
    if (ctx->pc == 0x47C4B4u) {
        ctx->pc = 0x47C4B8u;
        goto label_47c4b8;
    }
    ctx->pc = 0x47C4B0u;
    SET_GPR_U32(ctx, 31, 0x47C4B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x47C4B0u, 0x47C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C4B8u;
label_47c4b8:
    // 0x47c4b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47c4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c4bc:
    // 0x47c4bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_47c4c0:
    if (ctx->pc == 0x47C4C0u) {
        ctx->pc = 0x47C4C4u;
        goto label_47c4c4;
    }
    ctx->pc = 0x47C4BCu;
    {
        const bool branch_taken_0x47c4bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c4bc) {
            ctx->pc = 0x47C4D0u;
            goto label_47c4d0;
        }
    }
    ctx->pc = 0x47C4C4u;
label_47c4c4:
    // 0x47c4c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47c4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47c4c8:
    // 0x47c4c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_47c4cc:
    if (ctx->pc == 0x47C4CCu) {
        ctx->pc = 0x47C4D0u;
        goto label_47c4d0;
    }
    ctx->pc = 0x47C4C8u;
    {
        const bool branch_taken_0x47c4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c4c8) {
            ctx->pc = 0x47C504u;
            goto label_47c504;
        }
    }
    ctx->pc = 0x47C4D0u;
label_47c4d0:
    // 0x47c4d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x47c4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47c4d4:
    // 0x47c4d4: 0xc0ba088  jal         func_2E8220
label_47c4d8:
    if (ctx->pc == 0x47C4D8u) {
        ctx->pc = 0x47C4DCu;
        goto label_47c4dc;
    }
    ctx->pc = 0x47C4D4u;
    SET_GPR_U32(ctx, 31, 0x47C4DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x47C4D4u, 0x47C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C4DCu;
label_47c4dc:
    // 0x47c4dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x47c4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47c4e0:
    // 0x47c4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47c4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47c4e4:
    // 0x47c4e4: 0xc0ba088  jal         func_2E8220
label_47c4e8:
    if (ctx->pc == 0x47C4E8u) {
        ctx->pc = 0x47C4ECu;
        goto label_47c4ec;
    }
    ctx->pc = 0x47C4E4u;
    SET_GPR_U32(ctx, 31, 0x47C4ECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x47C4E4u, 0x47C4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47C4ECu;
label_47c4ec:
    // 0x47c4ec: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_47c4f0:
    if (ctx->pc == 0x47C4F0u) {
        ctx->pc = 0x47C4F4u;
        goto label_47c4f4;
    }
    ctx->pc = 0x47C4ECu;
    {
        const bool branch_taken_0x47c4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c4ec) {
            ctx->pc = 0x47C4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47c4a8;
        }
    }
    ctx->pc = 0x47C4F4u;
label_47c4f4:
    // 0x47c4f4: 0x200f809  jalr        $s0
label_47c4f8:
    if (ctx->pc == 0x47C4F8u) {
        ctx->pc = 0x47C4FCu;
        goto label_47c4fc;
    }
    ctx->pc = 0x47C4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x47C4FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C4F4u, 0x47C4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47C4FCu;
label_47c4fc:
    // 0x47c4fc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_47c500:
    if (ctx->pc == 0x47C500u) {
        ctx->pc = 0x47C504u;
        goto label_47c504;
    }
    ctx->pc = 0x47C4FCu;
    {
        const bool branch_taken_0x47c4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47c4fc) {
            ctx->pc = 0x47C4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47c4a8;
        }
    }
    ctx->pc = 0x47C504u;
label_47c504:
    // 0x47c504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47c508:
    // 0x47c508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47c508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47c50c:
    // 0x47c50c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47c50cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47c510:
    // 0x47c510: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x47c510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_47c514:
    // 0x47c514: 0x3e00008  jr          $ra
label_47c518:
    if (ctx->pc == 0x47C518u) {
        ctx->pc = 0x47C51Cu;
        goto label_47c51c;
    }
    ctx->pc = 0x47C514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47C514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47C51Cu;
label_47c51c:
    // 0x47c51c: 0x0  nop
    ctx->pc = 0x47c51cu;
    // NOP
    ctx->pc = 0x47c520u;
}
