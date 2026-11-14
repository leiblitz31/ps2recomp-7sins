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

// Function: sub_00485140
// Address: 0x485140 - 0x4851e0
void sub_00485140_0x485140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485140_0x485140");
#endif

    switch (ctx->pc) {
        case 0x485140u: goto label_485140;
        case 0x485144u: goto label_485144;
        case 0x485148u: goto label_485148;
        case 0x48514cu: goto label_48514c;
        case 0x485150u: goto label_485150;
        case 0x485154u: goto label_485154;
        case 0x485158u: goto label_485158;
        case 0x48515cu: goto label_48515c;
        case 0x485160u: goto label_485160;
        case 0x485164u: goto label_485164;
        case 0x485168u: goto label_485168;
        case 0x48516cu: goto label_48516c;
        case 0x485170u: goto label_485170;
        case 0x485174u: goto label_485174;
        case 0x485178u: goto label_485178;
        case 0x48517cu: goto label_48517c;
        case 0x485180u: goto label_485180;
        case 0x485184u: goto label_485184;
        case 0x485188u: goto label_485188;
        case 0x48518cu: goto label_48518c;
        case 0x485190u: goto label_485190;
        case 0x485194u: goto label_485194;
        case 0x485198u: goto label_485198;
        case 0x48519cu: goto label_48519c;
        case 0x4851a0u: goto label_4851a0;
        case 0x4851a4u: goto label_4851a4;
        case 0x4851a8u: goto label_4851a8;
        case 0x4851acu: goto label_4851ac;
        case 0x4851b0u: goto label_4851b0;
        case 0x4851b4u: goto label_4851b4;
        case 0x4851b8u: goto label_4851b8;
        case 0x4851bcu: goto label_4851bc;
        case 0x4851c0u: goto label_4851c0;
        case 0x4851c4u: goto label_4851c4;
        case 0x4851c8u: goto label_4851c8;
        case 0x4851ccu: goto label_4851cc;
        case 0x4851d0u: goto label_4851d0;
        case 0x4851d4u: goto label_4851d4;
        case 0x4851d8u: goto label_4851d8;
        case 0x4851dcu: goto label_4851dc;
        default: break;
    }

    ctx->pc = 0x485140u;

label_485140:
    // 0x485140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x485140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_485144:
    // 0x485144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x485144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_485148:
    // 0x485148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48514c:
    // 0x48514c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485150:
    // 0x485150: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x485150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_485154:
    // 0x485154: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x485154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_485158:
    // 0x485158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_48515c:
    if (ctx->pc == 0x48515Cu) {
        ctx->pc = 0x485160u;
        goto label_485160;
    }
    ctx->pc = 0x485158u;
    {
        const bool branch_taken_0x485158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x485158) {
            ctx->pc = 0x485168u;
            goto label_485168;
        }
    }
    ctx->pc = 0x485160u;
label_485160:
    // 0x485160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485164:
    // 0x485164: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x485164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_485168:
    // 0x485168: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x485168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48516c:
    // 0x48516c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x48516cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_485170:
    // 0x485170: 0xc119b68  jal         func_466DA0
label_485174:
    if (ctx->pc == 0x485174u) {
        ctx->pc = 0x485178u;
        goto label_485178;
    }
    ctx->pc = 0x485170u;
    SET_GPR_U32(ctx, 31, 0x485178u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x485170u, 0x485178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485178u;
label_485178:
    // 0x485178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x485178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48517c:
    // 0x48517c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_485180:
    if (ctx->pc == 0x485180u) {
        ctx->pc = 0x485184u;
        goto label_485184;
    }
    ctx->pc = 0x48517Cu;
    {
        const bool branch_taken_0x48517c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48517c) {
            ctx->pc = 0x485190u;
            goto label_485190;
        }
    }
    ctx->pc = 0x485184u;
label_485184:
    // 0x485184: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x485184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485188:
    // 0x485188: 0x1000000e  b           . + 4 + (0xE << 2)
label_48518c:
    if (ctx->pc == 0x48518Cu) {
        ctx->pc = 0x485190u;
        goto label_485190;
    }
    ctx->pc = 0x485188u;
    {
        const bool branch_taken_0x485188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485188) {
            ctx->pc = 0x4851C4u;
            goto label_4851c4;
        }
    }
    ctx->pc = 0x485190u;
label_485190:
    // 0x485190: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x485190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485194:
    // 0x485194: 0xc0ba088  jal         func_2E8220
label_485198:
    if (ctx->pc == 0x485198u) {
        ctx->pc = 0x48519Cu;
        goto label_48519c;
    }
    ctx->pc = 0x485194u;
    SET_GPR_U32(ctx, 31, 0x48519Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x485194u, 0x48519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48519Cu;
label_48519c:
    // 0x48519c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48519cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4851a0:
    // 0x4851a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4851a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4851a4:
    // 0x4851a4: 0xc0ba088  jal         func_2E8220
label_4851a8:
    if (ctx->pc == 0x4851A8u) {
        ctx->pc = 0x4851ACu;
        goto label_4851ac;
    }
    ctx->pc = 0x4851A4u;
    SET_GPR_U32(ctx, 31, 0x4851ACu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x4851A4u, 0x4851ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4851ACu;
label_4851ac:
    // 0x4851ac: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_4851b0:
    if (ctx->pc == 0x4851B0u) {
        ctx->pc = 0x4851B4u;
        goto label_4851b4;
    }
    ctx->pc = 0x4851ACu;
    {
        const bool branch_taken_0x4851ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4851ac) {
            ctx->pc = 0x485168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485168;
        }
    }
    ctx->pc = 0x4851B4u;
label_4851b4:
    // 0x4851b4: 0x200f809  jalr        $s0
label_4851b8:
    if (ctx->pc == 0x4851B8u) {
        ctx->pc = 0x4851BCu;
        goto label_4851bc;
    }
    ctx->pc = 0x4851B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x4851BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4851B4u, 0x4851BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4851BCu;
label_4851bc:
    // 0x4851bc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_4851c0:
    if (ctx->pc == 0x4851C0u) {
        ctx->pc = 0x4851C4u;
        goto label_4851c4;
    }
    ctx->pc = 0x4851BCu;
    {
        const bool branch_taken_0x4851bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4851bc) {
            ctx->pc = 0x485168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485168;
        }
    }
    ctx->pc = 0x4851C4u;
label_4851c4:
    // 0x4851c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4851c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4851c8:
    // 0x4851c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4851c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4851cc:
    // 0x4851cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4851ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4851d0:
    // 0x4851d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4851d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4851d4:
    // 0x4851d4: 0x3e00008  jr          $ra
label_4851d8:
    if (ctx->pc == 0x4851D8u) {
        ctx->pc = 0x4851DCu;
        goto label_4851dc;
    }
    ctx->pc = 0x4851D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4851D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4851DCu;
label_4851dc:
    // 0x4851dc: 0x0  nop
    ctx->pc = 0x4851dcu;
    // NOP
    ctx->pc = 0x4851e0u;
}
