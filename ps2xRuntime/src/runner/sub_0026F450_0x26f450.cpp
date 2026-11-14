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

// Function: sub_0026F450
// Address: 0x26f450 - 0x26f500
void sub_0026F450_0x26f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F450_0x26f450");
#endif

    switch (ctx->pc) {
        case 0x26f450u: goto label_26f450;
        case 0x26f454u: goto label_26f454;
        case 0x26f458u: goto label_26f458;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f460u: goto label_26f460;
        case 0x26f464u: goto label_26f464;
        case 0x26f468u: goto label_26f468;
        case 0x26f46cu: goto label_26f46c;
        case 0x26f470u: goto label_26f470;
        case 0x26f474u: goto label_26f474;
        case 0x26f478u: goto label_26f478;
        case 0x26f47cu: goto label_26f47c;
        case 0x26f480u: goto label_26f480;
        case 0x26f484u: goto label_26f484;
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        case 0x26f4f8u: goto label_26f4f8;
        case 0x26f4fcu: goto label_26f4fc;
        default: break;
    }

    ctx->pc = 0x26f450u;

label_26f450:
    // 0x26f450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_26f454:
    // 0x26f454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26f454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26f458:
    // 0x26f458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_26f45c:
    // 0x26f45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_26f460:
    // 0x26f460: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x26f460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_26f464:
    // 0x26f464: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26f468:
    // 0x26f468: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_26f46c:
    if (ctx->pc == 0x26F46Cu) {
        ctx->pc = 0x26F470u;
        goto label_26f470;
    }
    ctx->pc = 0x26F468u;
    {
        const bool branch_taken_0x26f468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f468) {
            ctx->pc = 0x26F478u;
            goto label_26f478;
        }
    }
    ctx->pc = 0x26F470u;
label_26f470:
    // 0x26f470: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f474:
    // 0x26f474: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x26f474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_26f478:
    // 0x26f478: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26f47c:
    // 0x26f47c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x26f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_26f480:
    // 0x26f480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26f480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26f484:
    // 0x26f484: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x26f484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26f488:
    // 0x26f488: 0xc119b68  jal         func_466DA0
label_26f48c:
    if (ctx->pc == 0x26F48Cu) {
        ctx->pc = 0x26F490u;
        goto label_26f490;
    }
    ctx->pc = 0x26F488u;
    SET_GPR_U32(ctx, 31, 0x26F490u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26F488u, 0x26F490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F490u;
label_26f490:
    // 0x26f490: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f494:
    // 0x26f494: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_26f498:
    if (ctx->pc == 0x26F498u) {
        ctx->pc = 0x26F49Cu;
        goto label_26f49c;
    }
    ctx->pc = 0x26F494u;
    {
        const bool branch_taken_0x26f494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f494) {
            ctx->pc = 0x26F4A8u;
            goto label_26f4a8;
        }
    }
    ctx->pc = 0x26F49Cu;
label_26f49c:
    // 0x26f49c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26f49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f4a0:
    // 0x26f4a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_26f4a4:
    if (ctx->pc == 0x26F4A4u) {
        ctx->pc = 0x26F4A8u;
        goto label_26f4a8;
    }
    ctx->pc = 0x26F4A0u;
    {
        const bool branch_taken_0x26f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4a0) {
            ctx->pc = 0x26F4DCu;
            goto label_26f4dc;
        }
    }
    ctx->pc = 0x26F4A8u;
label_26f4a8:
    // 0x26f4a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26f4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f4ac:
    // 0x26f4ac: 0xc0ba088  jal         func_2E8220
label_26f4b0:
    if (ctx->pc == 0x26F4B0u) {
        ctx->pc = 0x26F4B4u;
        goto label_26f4b4;
    }
    ctx->pc = 0x26F4ACu;
    SET_GPR_U32(ctx, 31, 0x26F4B4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x26F4ACu, 0x26F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4B4u;
label_26f4b4:
    // 0x26f4b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f4b8:
    // 0x26f4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f4bc:
    // 0x26f4bc: 0xc0ba088  jal         func_2E8220
label_26f4c0:
    if (ctx->pc == 0x26F4C0u) {
        ctx->pc = 0x26F4C4u;
        goto label_26f4c4;
    }
    ctx->pc = 0x26F4BCu;
    SET_GPR_U32(ctx, 31, 0x26F4C4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x26F4BCu, 0x26F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4C4u;
label_26f4c4:
    // 0x26f4c4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_26f4c8:
    if (ctx->pc == 0x26F4C8u) {
        ctx->pc = 0x26F4CCu;
        goto label_26f4cc;
    }
    ctx->pc = 0x26F4C4u;
    {
        const bool branch_taken_0x26f4c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4c4) {
            ctx->pc = 0x26F478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f478;
        }
    }
    ctx->pc = 0x26F4CCu;
label_26f4cc:
    // 0x26f4cc: 0x200f809  jalr        $s0
label_26f4d0:
    if (ctx->pc == 0x26F4D0u) {
        ctx->pc = 0x26F4D4u;
        goto label_26f4d4;
    }
    ctx->pc = 0x26F4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x26F4D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F4CCu, 0x26F4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F4D4u;
label_26f4d4:
    // 0x26f4d4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_26f4d8:
    if (ctx->pc == 0x26F4D8u) {
        ctx->pc = 0x26F4DCu;
        goto label_26f4dc;
    }
    ctx->pc = 0x26F4D4u;
    {
        const bool branch_taken_0x26f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f4d4) {
            ctx->pc = 0x26F478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f478;
        }
    }
    ctx->pc = 0x26F4DCu;
label_26f4dc:
    // 0x26f4dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26f4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26f4e0:
    // 0x26f4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26f4e4:
    // 0x26f4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26f4e8:
    // 0x26f4e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26f4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26f4ec:
    // 0x26f4ec: 0x3e00008  jr          $ra
label_26f4f0:
    if (ctx->pc == 0x26F4F0u) {
        ctx->pc = 0x26F4F4u;
        goto label_26f4f4;
    }
    ctx->pc = 0x26F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F4F4u;
label_26f4f4:
    // 0x26f4f4: 0x0  nop
    ctx->pc = 0x26f4f4u;
    // NOP
label_26f4f8:
    // 0x26f4f8: 0x0  nop
    ctx->pc = 0x26f4f8u;
    // NOP
label_26f4fc:
    // 0x26f4fc: 0x0  nop
    ctx->pc = 0x26f4fcu;
    // NOP
    ctx->pc = 0x26f500u;
}
