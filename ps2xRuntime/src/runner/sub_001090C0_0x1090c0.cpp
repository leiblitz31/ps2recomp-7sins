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

// Function: sub_001090C0
// Address: 0x1090c0 - 0x109160
void sub_001090C0_0x1090c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001090C0_0x1090c0");
#endif

    switch (ctx->pc) {
        case 0x1090c0u: goto label_1090c0;
        case 0x1090c4u: goto label_1090c4;
        case 0x1090c8u: goto label_1090c8;
        case 0x1090ccu: goto label_1090cc;
        case 0x1090d0u: goto label_1090d0;
        case 0x1090d4u: goto label_1090d4;
        case 0x1090d8u: goto label_1090d8;
        case 0x1090dcu: goto label_1090dc;
        case 0x1090e0u: goto label_1090e0;
        case 0x1090e4u: goto label_1090e4;
        case 0x1090e8u: goto label_1090e8;
        case 0x1090ecu: goto label_1090ec;
        case 0x1090f0u: goto label_1090f0;
        case 0x1090f4u: goto label_1090f4;
        case 0x1090f8u: goto label_1090f8;
        case 0x1090fcu: goto label_1090fc;
        case 0x109100u: goto label_109100;
        case 0x109104u: goto label_109104;
        case 0x109108u: goto label_109108;
        case 0x10910cu: goto label_10910c;
        case 0x109110u: goto label_109110;
        case 0x109114u: goto label_109114;
        case 0x109118u: goto label_109118;
        case 0x10911cu: goto label_10911c;
        case 0x109120u: goto label_109120;
        case 0x109124u: goto label_109124;
        case 0x109128u: goto label_109128;
        case 0x10912cu: goto label_10912c;
        case 0x109130u: goto label_109130;
        case 0x109134u: goto label_109134;
        case 0x109138u: goto label_109138;
        case 0x10913cu: goto label_10913c;
        case 0x109140u: goto label_109140;
        case 0x109144u: goto label_109144;
        case 0x109148u: goto label_109148;
        case 0x10914cu: goto label_10914c;
        case 0x109150u: goto label_109150;
        case 0x109154u: goto label_109154;
        case 0x109158u: goto label_109158;
        case 0x10915cu: goto label_10915c;
        default: break;
    }

    ctx->pc = 0x1090c0u;

label_1090c0:
    // 0x1090c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1090c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1090c4:
    // 0x1090c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1090c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1090c8:
    // 0x1090c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1090c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1090cc:
    // 0x1090cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1090ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1090d0:
    // 0x1090d0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1090d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1090d4:
    // 0x1090d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1090d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1090d8:
    // 0x1090d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1090dc:
    if (ctx->pc == 0x1090DCu) {
        ctx->pc = 0x1090E0u;
        goto label_1090e0;
    }
    ctx->pc = 0x1090D8u;
    {
        const bool branch_taken_0x1090d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1090d8) {
            ctx->pc = 0x1090E8u;
            goto label_1090e8;
        }
    }
    ctx->pc = 0x1090E0u;
label_1090e0:
    // 0x1090e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1090e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1090e4:
    // 0x1090e4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1090e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1090e8:
    // 0x1090e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1090e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1090ec:
    // 0x1090ec: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1090ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1090f0:
    // 0x1090f0: 0xc119b68  jal         func_466DA0
label_1090f4:
    if (ctx->pc == 0x1090F4u) {
        ctx->pc = 0x1090F8u;
        goto label_1090f8;
    }
    ctx->pc = 0x1090F0u;
    SET_GPR_U32(ctx, 31, 0x1090F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1090F0u, 0x1090F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090F8u;
label_1090f8:
    // 0x1090f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1090f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1090fc:
    // 0x1090fc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_109100:
    if (ctx->pc == 0x109100u) {
        ctx->pc = 0x109104u;
        goto label_109104;
    }
    ctx->pc = 0x1090FCu;
    {
        const bool branch_taken_0x1090fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1090fc) {
            ctx->pc = 0x109110u;
            goto label_109110;
        }
    }
    ctx->pc = 0x109104u;
label_109104:
    // 0x109104: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x109104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109108:
    // 0x109108: 0x1000000e  b           . + 4 + (0xE << 2)
label_10910c:
    if (ctx->pc == 0x10910Cu) {
        ctx->pc = 0x109110u;
        goto label_109110;
    }
    ctx->pc = 0x109108u;
    {
        const bool branch_taken_0x109108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109108) {
            ctx->pc = 0x109144u;
            goto label_109144;
        }
    }
    ctx->pc = 0x109110u;
label_109110:
    // 0x109110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x109110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109114:
    // 0x109114: 0xc0ba088  jal         func_2E8220
label_109118:
    if (ctx->pc == 0x109118u) {
        ctx->pc = 0x10911Cu;
        goto label_10911c;
    }
    ctx->pc = 0x109114u;
    SET_GPR_U32(ctx, 31, 0x10911Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x109114u, 0x10911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10911Cu;
label_10911c:
    // 0x10911c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10911cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109120:
    // 0x109120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_109124:
    // 0x109124: 0xc0ba088  jal         func_2E8220
label_109128:
    if (ctx->pc == 0x109128u) {
        ctx->pc = 0x10912Cu;
        goto label_10912c;
    }
    ctx->pc = 0x109124u;
    SET_GPR_U32(ctx, 31, 0x10912Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x109124u, 0x10912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10912Cu;
label_10912c:
    // 0x10912c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_109130:
    if (ctx->pc == 0x109130u) {
        ctx->pc = 0x109134u;
        goto label_109134;
    }
    ctx->pc = 0x10912Cu;
    {
        const bool branch_taken_0x10912c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10912c) {
            ctx->pc = 0x1090E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1090e8;
        }
    }
    ctx->pc = 0x109134u;
label_109134:
    // 0x109134: 0x200f809  jalr        $s0
label_109138:
    if (ctx->pc == 0x109138u) {
        ctx->pc = 0x10913Cu;
        goto label_10913c;
    }
    ctx->pc = 0x109134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x10913Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109134u, 0x10913Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10913Cu;
label_10913c:
    // 0x10913c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_109140:
    if (ctx->pc == 0x109140u) {
        ctx->pc = 0x109144u;
        goto label_109144;
    }
    ctx->pc = 0x10913Cu;
    {
        const bool branch_taken_0x10913c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10913c) {
            ctx->pc = 0x1090E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1090e8;
        }
    }
    ctx->pc = 0x109144u;
label_109144:
    // 0x109144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x109144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_109148:
    // 0x109148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10914c:
    // 0x10914c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10914cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_109150:
    // 0x109150: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x109150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_109154:
    // 0x109154: 0x3e00008  jr          $ra
label_109158:
    if (ctx->pc == 0x109158u) {
        ctx->pc = 0x10915Cu;
        goto label_10915c;
    }
    ctx->pc = 0x109154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10915Cu;
label_10915c:
    // 0x10915c: 0x0  nop
    ctx->pc = 0x10915cu;
    // NOP
    ctx->pc = 0x109160u;
}
