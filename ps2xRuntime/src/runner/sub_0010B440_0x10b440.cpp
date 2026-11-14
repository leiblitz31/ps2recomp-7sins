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

// Function: sub_0010B440
// Address: 0x10b440 - 0x10b4f0
void sub_0010B440_0x10b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B440_0x10b440");
#endif

    switch (ctx->pc) {
        case 0x10b440u: goto label_10b440;
        case 0x10b444u: goto label_10b444;
        case 0x10b448u: goto label_10b448;
        case 0x10b44cu: goto label_10b44c;
        case 0x10b450u: goto label_10b450;
        case 0x10b454u: goto label_10b454;
        case 0x10b458u: goto label_10b458;
        case 0x10b45cu: goto label_10b45c;
        case 0x10b460u: goto label_10b460;
        case 0x10b464u: goto label_10b464;
        case 0x10b468u: goto label_10b468;
        case 0x10b46cu: goto label_10b46c;
        case 0x10b470u: goto label_10b470;
        case 0x10b474u: goto label_10b474;
        case 0x10b478u: goto label_10b478;
        case 0x10b47cu: goto label_10b47c;
        case 0x10b480u: goto label_10b480;
        case 0x10b484u: goto label_10b484;
        case 0x10b488u: goto label_10b488;
        case 0x10b48cu: goto label_10b48c;
        case 0x10b490u: goto label_10b490;
        case 0x10b494u: goto label_10b494;
        case 0x10b498u: goto label_10b498;
        case 0x10b49cu: goto label_10b49c;
        case 0x10b4a0u: goto label_10b4a0;
        case 0x10b4a4u: goto label_10b4a4;
        case 0x10b4a8u: goto label_10b4a8;
        case 0x10b4acu: goto label_10b4ac;
        case 0x10b4b0u: goto label_10b4b0;
        case 0x10b4b4u: goto label_10b4b4;
        case 0x10b4b8u: goto label_10b4b8;
        case 0x10b4bcu: goto label_10b4bc;
        case 0x10b4c0u: goto label_10b4c0;
        case 0x10b4c4u: goto label_10b4c4;
        case 0x10b4c8u: goto label_10b4c8;
        case 0x10b4ccu: goto label_10b4cc;
        case 0x10b4d0u: goto label_10b4d0;
        case 0x10b4d4u: goto label_10b4d4;
        case 0x10b4d8u: goto label_10b4d8;
        case 0x10b4dcu: goto label_10b4dc;
        case 0x10b4e0u: goto label_10b4e0;
        case 0x10b4e4u: goto label_10b4e4;
        case 0x10b4e8u: goto label_10b4e8;
        case 0x10b4ecu: goto label_10b4ec;
        default: break;
    }

    ctx->pc = 0x10b440u;

label_10b440:
    // 0x10b440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_10b444:
    // 0x10b444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10b448:
    // 0x10b448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10b448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10b44c:
    // 0x10b44c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10b450:
    // 0x10b450: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x10b450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_10b454:
    // 0x10b454: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10b458:
    // 0x10b458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_10b45c:
    if (ctx->pc == 0x10B45Cu) {
        ctx->pc = 0x10B460u;
        goto label_10b460;
    }
    ctx->pc = 0x10B458u;
    {
        const bool branch_taken_0x10b458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b458) {
            ctx->pc = 0x10B468u;
            goto label_10b468;
        }
    }
    ctx->pc = 0x10B460u;
label_10b460:
    // 0x10b460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10b464:
    // 0x10b464: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x10b464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_10b468:
    // 0x10b468: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x10b468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_10b46c:
    // 0x10b46c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x10b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_10b470:
    // 0x10b470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10b470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10b474:
    // 0x10b474: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x10b474u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_10b478:
    // 0x10b478: 0xc119b68  jal         func_466DA0
label_10b47c:
    if (ctx->pc == 0x10B47Cu) {
        ctx->pc = 0x10B480u;
        goto label_10b480;
    }
    ctx->pc = 0x10B478u;
    SET_GPR_U32(ctx, 31, 0x10B480u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x10B478u, 0x10B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B480u;
label_10b480:
    // 0x10b480: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10b480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b484:
    // 0x10b484: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_10b488:
    if (ctx->pc == 0x10B488u) {
        ctx->pc = 0x10B48Cu;
        goto label_10b48c;
    }
    ctx->pc = 0x10B484u;
    {
        const bool branch_taken_0x10b484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b484) {
            ctx->pc = 0x10B498u;
            goto label_10b498;
        }
    }
    ctx->pc = 0x10B48Cu;
label_10b48c:
    // 0x10b48c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10b48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b490:
    // 0x10b490: 0x1000000e  b           . + 4 + (0xE << 2)
label_10b494:
    if (ctx->pc == 0x10B494u) {
        ctx->pc = 0x10B498u;
        goto label_10b498;
    }
    ctx->pc = 0x10B490u;
    {
        const bool branch_taken_0x10b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b490) {
            ctx->pc = 0x10B4CCu;
            goto label_10b4cc;
        }
    }
    ctx->pc = 0x10B498u;
label_10b498:
    // 0x10b498: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b49c:
    // 0x10b49c: 0xc0ba088  jal         func_2E8220
label_10b4a0:
    if (ctx->pc == 0x10B4A0u) {
        ctx->pc = 0x10B4A4u;
        goto label_10b4a4;
    }
    ctx->pc = 0x10B49Cu;
    SET_GPR_U32(ctx, 31, 0x10B4A4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x10B49Cu, 0x10B4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4A4u;
label_10b4a4:
    // 0x10b4a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10b4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b4a8:
    // 0x10b4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b4ac:
    // 0x10b4ac: 0xc0ba088  jal         func_2E8220
label_10b4b0:
    if (ctx->pc == 0x10B4B0u) {
        ctx->pc = 0x10B4B4u;
        goto label_10b4b4;
    }
    ctx->pc = 0x10B4ACu;
    SET_GPR_U32(ctx, 31, 0x10B4B4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x10B4ACu, 0x10B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B4B4u;
label_10b4b4:
    // 0x10b4b4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_10b4b8:
    if (ctx->pc == 0x10B4B8u) {
        ctx->pc = 0x10B4BCu;
        goto label_10b4bc;
    }
    ctx->pc = 0x10B4B4u;
    {
        const bool branch_taken_0x10b4b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b4b4) {
            ctx->pc = 0x10B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b468;
        }
    }
    ctx->pc = 0x10B4BCu;
label_10b4bc:
    // 0x10b4bc: 0x200f809  jalr        $s0
label_10b4c0:
    if (ctx->pc == 0x10B4C0u) {
        ctx->pc = 0x10B4C4u;
        goto label_10b4c4;
    }
    ctx->pc = 0x10B4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x10B4C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B4BCu, 0x10B4C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B4C4u;
label_10b4c4:
    // 0x10b4c4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_10b4c8:
    if (ctx->pc == 0x10B4C8u) {
        ctx->pc = 0x10B4CCu;
        goto label_10b4cc;
    }
    ctx->pc = 0x10B4C4u;
    {
        const bool branch_taken_0x10b4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b4c4) {
            ctx->pc = 0x10B468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10b468;
        }
    }
    ctx->pc = 0x10B4CCu;
label_10b4cc:
    // 0x10b4cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10b4d0:
    // 0x10b4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10b4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b4d4:
    // 0x10b4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10b4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10b4d8:
    // 0x10b4d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x10b4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10b4dc:
    // 0x10b4dc: 0x3e00008  jr          $ra
label_10b4e0:
    if (ctx->pc == 0x10B4E0u) {
        ctx->pc = 0x10B4E4u;
        goto label_10b4e4;
    }
    ctx->pc = 0x10B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B4E4u;
label_10b4e4:
    // 0x10b4e4: 0x0  nop
    ctx->pc = 0x10b4e4u;
    // NOP
label_10b4e8:
    // 0x10b4e8: 0x0  nop
    ctx->pc = 0x10b4e8u;
    // NOP
label_10b4ec:
    // 0x10b4ec: 0x0  nop
    ctx->pc = 0x10b4ecu;
    // NOP
    ctx->pc = 0x10b4f0u;
}
