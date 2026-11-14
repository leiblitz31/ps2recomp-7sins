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

// Function: sub_001A80A0
// Address: 0x1a80a0 - 0x1a8140
void sub_001A80A0_0x1a80a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A80A0_0x1a80a0");
#endif

    switch (ctx->pc) {
        case 0x1a80a0u: goto label_1a80a0;
        case 0x1a80a4u: goto label_1a80a4;
        case 0x1a80a8u: goto label_1a80a8;
        case 0x1a80acu: goto label_1a80ac;
        case 0x1a80b0u: goto label_1a80b0;
        case 0x1a80b4u: goto label_1a80b4;
        case 0x1a80b8u: goto label_1a80b8;
        case 0x1a80bcu: goto label_1a80bc;
        case 0x1a80c0u: goto label_1a80c0;
        case 0x1a80c4u: goto label_1a80c4;
        case 0x1a80c8u: goto label_1a80c8;
        case 0x1a80ccu: goto label_1a80cc;
        case 0x1a80d0u: goto label_1a80d0;
        case 0x1a80d4u: goto label_1a80d4;
        case 0x1a80d8u: goto label_1a80d8;
        case 0x1a80dcu: goto label_1a80dc;
        case 0x1a80e0u: goto label_1a80e0;
        case 0x1a80e4u: goto label_1a80e4;
        case 0x1a80e8u: goto label_1a80e8;
        case 0x1a80ecu: goto label_1a80ec;
        case 0x1a80f0u: goto label_1a80f0;
        case 0x1a80f4u: goto label_1a80f4;
        case 0x1a80f8u: goto label_1a80f8;
        case 0x1a80fcu: goto label_1a80fc;
        case 0x1a8100u: goto label_1a8100;
        case 0x1a8104u: goto label_1a8104;
        case 0x1a8108u: goto label_1a8108;
        case 0x1a810cu: goto label_1a810c;
        case 0x1a8110u: goto label_1a8110;
        case 0x1a8114u: goto label_1a8114;
        case 0x1a8118u: goto label_1a8118;
        case 0x1a811cu: goto label_1a811c;
        case 0x1a8120u: goto label_1a8120;
        case 0x1a8124u: goto label_1a8124;
        case 0x1a8128u: goto label_1a8128;
        case 0x1a812cu: goto label_1a812c;
        case 0x1a8130u: goto label_1a8130;
        case 0x1a8134u: goto label_1a8134;
        case 0x1a8138u: goto label_1a8138;
        case 0x1a813cu: goto label_1a813c;
        default: break;
    }

    ctx->pc = 0x1a80a0u;

label_1a80a0:
    // 0x1a80a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a80a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a80a4:
    // 0x1a80a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a80a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a80a8:
    // 0x1a80a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a80a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a80ac:
    // 0x1a80ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a80acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a80b0:
    // 0x1a80b0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a80b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1a80b4:
    // 0x1a80b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a80b8:
    // 0x1a80b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a80bc:
    if (ctx->pc == 0x1A80BCu) {
        ctx->pc = 0x1A80C0u;
        goto label_1a80c0;
    }
    ctx->pc = 0x1A80B8u;
    {
        const bool branch_taken_0x1a80b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a80b8) {
            ctx->pc = 0x1A80C8u;
            goto label_1a80c8;
        }
    }
    ctx->pc = 0x1A80C0u;
label_1a80c0:
    // 0x1a80c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a80c4:
    // 0x1a80c4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1a80c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1a80c8:
    // 0x1a80c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a80c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a80cc:
    // 0x1a80cc: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x1a80ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a80d0:
    // 0x1a80d0: 0xc119b68  jal         func_466DA0
label_1a80d4:
    if (ctx->pc == 0x1A80D4u) {
        ctx->pc = 0x1A80D8u;
        goto label_1a80d8;
    }
    ctx->pc = 0x1A80D0u;
    SET_GPR_U32(ctx, 31, 0x1A80D8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1A80D0u, 0x1A80D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80D8u;
label_1a80d8:
    // 0x1a80d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a80d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a80dc:
    // 0x1a80dc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a80e0:
    if (ctx->pc == 0x1A80E0u) {
        ctx->pc = 0x1A80E4u;
        goto label_1a80e4;
    }
    ctx->pc = 0x1A80DCu;
    {
        const bool branch_taken_0x1a80dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a80dc) {
            ctx->pc = 0x1A80F0u;
            goto label_1a80f0;
        }
    }
    ctx->pc = 0x1A80E4u;
label_1a80e4:
    // 0x1a80e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a80e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a80e8:
    // 0x1a80e8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a80ec:
    if (ctx->pc == 0x1A80ECu) {
        ctx->pc = 0x1A80F0u;
        goto label_1a80f0;
    }
    ctx->pc = 0x1A80E8u;
    {
        const bool branch_taken_0x1a80e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a80e8) {
            ctx->pc = 0x1A8124u;
            goto label_1a8124;
        }
    }
    ctx->pc = 0x1A80F0u;
label_1a80f0:
    // 0x1a80f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a80f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a80f4:
    // 0x1a80f4: 0xc0ba088  jal         func_2E8220
label_1a80f8:
    if (ctx->pc == 0x1A80F8u) {
        ctx->pc = 0x1A80FCu;
        goto label_1a80fc;
    }
    ctx->pc = 0x1A80F4u;
    SET_GPR_U32(ctx, 31, 0x1A80FCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A80F4u, 0x1A80FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A80FCu;
label_1a80fc:
    // 0x1a80fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a80fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8100:
    // 0x1a8100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8104:
    // 0x1a8104: 0xc0ba088  jal         func_2E8220
label_1a8108:
    if (ctx->pc == 0x1A8108u) {
        ctx->pc = 0x1A810Cu;
        goto label_1a810c;
    }
    ctx->pc = 0x1A8104u;
    SET_GPR_U32(ctx, 31, 0x1A810Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A8104u, 0x1A810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A810Cu;
label_1a810c:
    // 0x1a810c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1a8110:
    if (ctx->pc == 0x1A8110u) {
        ctx->pc = 0x1A8114u;
        goto label_1a8114;
    }
    ctx->pc = 0x1A810Cu;
    {
        const bool branch_taken_0x1a810c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a810c) {
            ctx->pc = 0x1A80C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a80c8;
        }
    }
    ctx->pc = 0x1A8114u;
label_1a8114:
    // 0x1a8114: 0x200f809  jalr        $s0
label_1a8118:
    if (ctx->pc == 0x1A8118u) {
        ctx->pc = 0x1A811Cu;
        goto label_1a811c;
    }
    ctx->pc = 0x1A8114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1A811Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8114u, 0x1A811Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A811Cu;
label_1a811c:
    // 0x1a811c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1a8120:
    if (ctx->pc == 0x1A8120u) {
        ctx->pc = 0x1A8124u;
        goto label_1a8124;
    }
    ctx->pc = 0x1A811Cu;
    {
        const bool branch_taken_0x1a811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a811c) {
            ctx->pc = 0x1A80C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a80c8;
        }
    }
    ctx->pc = 0x1A8124u;
label_1a8124:
    // 0x1a8124: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8128:
    // 0x1a8128: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8128u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a812c:
    // 0x1a812c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a812cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8130:
    // 0x1a8130: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a8130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a8134:
    // 0x1a8134: 0x3e00008  jr          $ra
label_1a8138:
    if (ctx->pc == 0x1A8138u) {
        ctx->pc = 0x1A813Cu;
        goto label_1a813c;
    }
    ctx->pc = 0x1A8134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A813Cu;
label_1a813c:
    // 0x1a813c: 0x0  nop
    ctx->pc = 0x1a813cu;
    // NOP
    ctx->pc = 0x1a8140u;
}
