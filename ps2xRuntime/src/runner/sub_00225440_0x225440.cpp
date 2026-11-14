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

// Function: sub_00225440
// Address: 0x225440 - 0x2254e0
void sub_00225440_0x225440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225440_0x225440");
#endif

    switch (ctx->pc) {
        case 0x225440u: goto label_225440;
        case 0x225444u: goto label_225444;
        case 0x225448u: goto label_225448;
        case 0x22544cu: goto label_22544c;
        case 0x225450u: goto label_225450;
        case 0x225454u: goto label_225454;
        case 0x225458u: goto label_225458;
        case 0x22545cu: goto label_22545c;
        case 0x225460u: goto label_225460;
        case 0x225464u: goto label_225464;
        case 0x225468u: goto label_225468;
        case 0x22546cu: goto label_22546c;
        case 0x225470u: goto label_225470;
        case 0x225474u: goto label_225474;
        case 0x225478u: goto label_225478;
        case 0x22547cu: goto label_22547c;
        case 0x225480u: goto label_225480;
        case 0x225484u: goto label_225484;
        case 0x225488u: goto label_225488;
        case 0x22548cu: goto label_22548c;
        case 0x225490u: goto label_225490;
        case 0x225494u: goto label_225494;
        case 0x225498u: goto label_225498;
        case 0x22549cu: goto label_22549c;
        case 0x2254a0u: goto label_2254a0;
        case 0x2254a4u: goto label_2254a4;
        case 0x2254a8u: goto label_2254a8;
        case 0x2254acu: goto label_2254ac;
        case 0x2254b0u: goto label_2254b0;
        case 0x2254b4u: goto label_2254b4;
        case 0x2254b8u: goto label_2254b8;
        case 0x2254bcu: goto label_2254bc;
        case 0x2254c0u: goto label_2254c0;
        case 0x2254c4u: goto label_2254c4;
        case 0x2254c8u: goto label_2254c8;
        case 0x2254ccu: goto label_2254cc;
        case 0x2254d0u: goto label_2254d0;
        case 0x2254d4u: goto label_2254d4;
        case 0x2254d8u: goto label_2254d8;
        case 0x2254dcu: goto label_2254dc;
        default: break;
    }

    ctx->pc = 0x225440u;

label_225440:
    // 0x225440: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x225440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_225444:
    // 0x225444: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_225448:
    // 0x225448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22544c:
    // 0x22544c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22544cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225450:
    // 0x225450: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x225450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_225454:
    // 0x225454: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225458:
    // 0x225458: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22545c:
    if (ctx->pc == 0x22545Cu) {
        ctx->pc = 0x225460u;
        goto label_225460;
    }
    ctx->pc = 0x225458u;
    {
        const bool branch_taken_0x225458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225458) {
            ctx->pc = 0x225468u;
            goto label_225468;
        }
    }
    ctx->pc = 0x225460u;
label_225460:
    // 0x225460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225464:
    // 0x225464: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x225464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_225468:
    // 0x225468: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22546c:
    // 0x22546c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x22546cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_225470:
    // 0x225470: 0xc119b68  jal         func_466DA0
label_225474:
    if (ctx->pc == 0x225474u) {
        ctx->pc = 0x225478u;
        goto label_225478;
    }
    ctx->pc = 0x225470u;
    SET_GPR_U32(ctx, 31, 0x225478u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x225470u, 0x225478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225478u;
label_225478:
    // 0x225478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22547c:
    // 0x22547c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_225480:
    if (ctx->pc == 0x225480u) {
        ctx->pc = 0x225484u;
        goto label_225484;
    }
    ctx->pc = 0x22547Cu;
    {
        const bool branch_taken_0x22547c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22547c) {
            ctx->pc = 0x225490u;
            goto label_225490;
        }
    }
    ctx->pc = 0x225484u;
label_225484:
    // 0x225484: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225488:
    // 0x225488: 0x1000000e  b           . + 4 + (0xE << 2)
label_22548c:
    if (ctx->pc == 0x22548Cu) {
        ctx->pc = 0x225490u;
        goto label_225490;
    }
    ctx->pc = 0x225488u;
    {
        const bool branch_taken_0x225488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225488) {
            ctx->pc = 0x2254C4u;
            goto label_2254c4;
        }
    }
    ctx->pc = 0x225490u;
label_225490:
    // 0x225490: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x225490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225494:
    // 0x225494: 0xc0ba088  jal         func_2E8220
label_225498:
    if (ctx->pc == 0x225498u) {
        ctx->pc = 0x22549Cu;
        goto label_22549c;
    }
    ctx->pc = 0x225494u;
    SET_GPR_U32(ctx, 31, 0x22549Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x225494u, 0x22549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22549Cu;
label_22549c:
    // 0x22549c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22549cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2254a0:
    // 0x2254a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2254a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2254a4:
    // 0x2254a4: 0xc0ba088  jal         func_2E8220
label_2254a8:
    if (ctx->pc == 0x2254A8u) {
        ctx->pc = 0x2254ACu;
        goto label_2254ac;
    }
    ctx->pc = 0x2254A4u;
    SET_GPR_U32(ctx, 31, 0x2254ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2254A4u, 0x2254ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2254ACu;
label_2254ac:
    // 0x2254ac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2254b0:
    if (ctx->pc == 0x2254B0u) {
        ctx->pc = 0x2254B4u;
        goto label_2254b4;
    }
    ctx->pc = 0x2254ACu;
    {
        const bool branch_taken_0x2254ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254ac) {
            ctx->pc = 0x225468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225468;
        }
    }
    ctx->pc = 0x2254B4u;
label_2254b4:
    // 0x2254b4: 0x200f809  jalr        $s0
label_2254b8:
    if (ctx->pc == 0x2254B8u) {
        ctx->pc = 0x2254BCu;
        goto label_2254bc;
    }
    ctx->pc = 0x2254B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2254BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2254B4u, 0x2254BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2254BCu;
label_2254bc:
    // 0x2254bc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2254c0:
    if (ctx->pc == 0x2254C0u) {
        ctx->pc = 0x2254C4u;
        goto label_2254c4;
    }
    ctx->pc = 0x2254BCu;
    {
        const bool branch_taken_0x2254bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2254bc) {
            ctx->pc = 0x225468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225468;
        }
    }
    ctx->pc = 0x2254C4u;
label_2254c4:
    // 0x2254c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2254c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2254c8:
    // 0x2254c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2254c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2254cc:
    // 0x2254cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2254ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2254d0:
    // 0x2254d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2254d4:
    // 0x2254d4: 0x3e00008  jr          $ra
label_2254d8:
    if (ctx->pc == 0x2254D8u) {
        ctx->pc = 0x2254DCu;
        goto label_2254dc;
    }
    ctx->pc = 0x2254D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2254D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2254DCu;
label_2254dc:
    // 0x2254dc: 0x0  nop
    ctx->pc = 0x2254dcu;
    // NOP
    ctx->pc = 0x2254e0u;
}
