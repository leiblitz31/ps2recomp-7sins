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

// Function: sub_0029B450
// Address: 0x29b450 - 0x29b4f0
void sub_0029B450_0x29b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B450_0x29b450");
#endif

    switch (ctx->pc) {
        case 0x29b450u: goto label_29b450;
        case 0x29b454u: goto label_29b454;
        case 0x29b458u: goto label_29b458;
        case 0x29b45cu: goto label_29b45c;
        case 0x29b460u: goto label_29b460;
        case 0x29b464u: goto label_29b464;
        case 0x29b468u: goto label_29b468;
        case 0x29b46cu: goto label_29b46c;
        case 0x29b470u: goto label_29b470;
        case 0x29b474u: goto label_29b474;
        case 0x29b478u: goto label_29b478;
        case 0x29b47cu: goto label_29b47c;
        case 0x29b480u: goto label_29b480;
        case 0x29b484u: goto label_29b484;
        case 0x29b488u: goto label_29b488;
        case 0x29b48cu: goto label_29b48c;
        case 0x29b490u: goto label_29b490;
        case 0x29b494u: goto label_29b494;
        case 0x29b498u: goto label_29b498;
        case 0x29b49cu: goto label_29b49c;
        case 0x29b4a0u: goto label_29b4a0;
        case 0x29b4a4u: goto label_29b4a4;
        case 0x29b4a8u: goto label_29b4a8;
        case 0x29b4acu: goto label_29b4ac;
        case 0x29b4b0u: goto label_29b4b0;
        case 0x29b4b4u: goto label_29b4b4;
        case 0x29b4b8u: goto label_29b4b8;
        case 0x29b4bcu: goto label_29b4bc;
        case 0x29b4c0u: goto label_29b4c0;
        case 0x29b4c4u: goto label_29b4c4;
        case 0x29b4c8u: goto label_29b4c8;
        case 0x29b4ccu: goto label_29b4cc;
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b4d4u: goto label_29b4d4;
        case 0x29b4d8u: goto label_29b4d8;
        case 0x29b4dcu: goto label_29b4dc;
        case 0x29b4e0u: goto label_29b4e0;
        case 0x29b4e4u: goto label_29b4e4;
        case 0x29b4e8u: goto label_29b4e8;
        case 0x29b4ecu: goto label_29b4ec;
        default: break;
    }

    ctx->pc = 0x29b450u;

label_29b450:
    // 0x29b450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29b454:
    // 0x29b454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29b454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29b458:
    // 0x29b458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29b45c:
    // 0x29b45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29b460:
    // 0x29b460: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x29b460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_29b464:
    // 0x29b464: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29b464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29b468:
    // 0x29b468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29b46c:
    if (ctx->pc == 0x29B46Cu) {
        ctx->pc = 0x29B470u;
        goto label_29b470;
    }
    ctx->pc = 0x29B468u;
    {
        const bool branch_taken_0x29b468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b468) {
            ctx->pc = 0x29B478u;
            goto label_29b478;
        }
    }
    ctx->pc = 0x29B470u;
label_29b470:
    // 0x29b470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29b474:
    // 0x29b474: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x29b474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_29b478:
    // 0x29b478: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29b478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29b47c:
    // 0x29b47c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x29b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29b480:
    // 0x29b480: 0xc119b68  jal         func_466DA0
label_29b484:
    if (ctx->pc == 0x29B484u) {
        ctx->pc = 0x29B488u;
        goto label_29b488;
    }
    ctx->pc = 0x29B480u;
    SET_GPR_U32(ctx, 31, 0x29B488u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x29B480u, 0x29B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B488u;
label_29b488:
    // 0x29b488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29b488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b48c:
    // 0x29b48c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_29b490:
    if (ctx->pc == 0x29B490u) {
        ctx->pc = 0x29B494u;
        goto label_29b494;
    }
    ctx->pc = 0x29B48Cu;
    {
        const bool branch_taken_0x29b48c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b48c) {
            ctx->pc = 0x29B4A0u;
            goto label_29b4a0;
        }
    }
    ctx->pc = 0x29B494u;
label_29b494:
    // 0x29b494: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x29b494u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29b498:
    // 0x29b498: 0x1000000e  b           . + 4 + (0xE << 2)
label_29b49c:
    if (ctx->pc == 0x29B49Cu) {
        ctx->pc = 0x29B4A0u;
        goto label_29b4a0;
    }
    ctx->pc = 0x29B498u;
    {
        const bool branch_taken_0x29b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b498) {
            ctx->pc = 0x29B4D4u;
            goto label_29b4d4;
        }
    }
    ctx->pc = 0x29B4A0u;
label_29b4a0:
    // 0x29b4a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29b4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29b4a4:
    // 0x29b4a4: 0xc0ba088  jal         func_2E8220
label_29b4a8:
    if (ctx->pc == 0x29B4A8u) {
        ctx->pc = 0x29B4ACu;
        goto label_29b4ac;
    }
    ctx->pc = 0x29B4A4u;
    SET_GPR_U32(ctx, 31, 0x29B4ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x29B4A4u, 0x29B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4ACu;
label_29b4ac:
    // 0x29b4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29b4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29b4b0:
    // 0x29b4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29b4b4:
    // 0x29b4b4: 0xc0ba088  jal         func_2E8220
label_29b4b8:
    if (ctx->pc == 0x29B4B8u) {
        ctx->pc = 0x29B4BCu;
        goto label_29b4bc;
    }
    ctx->pc = 0x29B4B4u;
    SET_GPR_U32(ctx, 31, 0x29B4BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x29B4B4u, 0x29B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4BCu;
label_29b4bc:
    // 0x29b4bc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_29b4c0:
    if (ctx->pc == 0x29B4C0u) {
        ctx->pc = 0x29B4C4u;
        goto label_29b4c4;
    }
    ctx->pc = 0x29B4BCu;
    {
        const bool branch_taken_0x29b4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4bc) {
            ctx->pc = 0x29B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b478;
        }
    }
    ctx->pc = 0x29B4C4u;
label_29b4c4:
    // 0x29b4c4: 0x200f809  jalr        $s0
label_29b4c8:
    if (ctx->pc == 0x29B4C8u) {
        ctx->pc = 0x29B4CCu;
        goto label_29b4cc;
    }
    ctx->pc = 0x29B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x29B4CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4C4u, 0x29B4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29B4CCu;
label_29b4cc:
    // 0x29b4cc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_29b4d0:
    if (ctx->pc == 0x29B4D0u) {
        ctx->pc = 0x29B4D4u;
        goto label_29b4d4;
    }
    ctx->pc = 0x29B4CCu;
    {
        const bool branch_taken_0x29b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4cc) {
            ctx->pc = 0x29B478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b478;
        }
    }
    ctx->pc = 0x29B4D4u;
label_29b4d4:
    // 0x29b4d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29b4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29b4d8:
    // 0x29b4d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29b4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29b4dc:
    // 0x29b4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29b4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29b4e0:
    // 0x29b4e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29b4e4:
    // 0x29b4e4: 0x3e00008  jr          $ra
label_29b4e8:
    if (ctx->pc == 0x29B4E8u) {
        ctx->pc = 0x29B4ECu;
        goto label_29b4ec;
    }
    ctx->pc = 0x29B4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B4ECu;
label_29b4ec:
    // 0x29b4ec: 0x0  nop
    ctx->pc = 0x29b4ecu;
    // NOP
    ctx->pc = 0x29b4f0u;
}
