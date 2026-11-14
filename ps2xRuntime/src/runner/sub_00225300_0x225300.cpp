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

// Function: sub_00225300
// Address: 0x225300 - 0x2253a0
void sub_00225300_0x225300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225300_0x225300");
#endif

    switch (ctx->pc) {
        case 0x225300u: goto label_225300;
        case 0x225304u: goto label_225304;
        case 0x225308u: goto label_225308;
        case 0x22530cu: goto label_22530c;
        case 0x225310u: goto label_225310;
        case 0x225314u: goto label_225314;
        case 0x225318u: goto label_225318;
        case 0x22531cu: goto label_22531c;
        case 0x225320u: goto label_225320;
        case 0x225324u: goto label_225324;
        case 0x225328u: goto label_225328;
        case 0x22532cu: goto label_22532c;
        case 0x225330u: goto label_225330;
        case 0x225334u: goto label_225334;
        case 0x225338u: goto label_225338;
        case 0x22533cu: goto label_22533c;
        case 0x225340u: goto label_225340;
        case 0x225344u: goto label_225344;
        case 0x225348u: goto label_225348;
        case 0x22534cu: goto label_22534c;
        case 0x225350u: goto label_225350;
        case 0x225354u: goto label_225354;
        case 0x225358u: goto label_225358;
        case 0x22535cu: goto label_22535c;
        case 0x225360u: goto label_225360;
        case 0x225364u: goto label_225364;
        case 0x225368u: goto label_225368;
        case 0x22536cu: goto label_22536c;
        case 0x225370u: goto label_225370;
        case 0x225374u: goto label_225374;
        case 0x225378u: goto label_225378;
        case 0x22537cu: goto label_22537c;
        case 0x225380u: goto label_225380;
        case 0x225384u: goto label_225384;
        case 0x225388u: goto label_225388;
        case 0x22538cu: goto label_22538c;
        case 0x225390u: goto label_225390;
        case 0x225394u: goto label_225394;
        case 0x225398u: goto label_225398;
        case 0x22539cu: goto label_22539c;
        default: break;
    }

    ctx->pc = 0x225300u;

label_225300:
    // 0x225300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x225300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_225304:
    // 0x225304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x225304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_225308:
    // 0x225308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22530c:
    // 0x22530c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_225310:
    // 0x225310: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x225310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_225314:
    // 0x225314: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225318:
    // 0x225318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22531c:
    if (ctx->pc == 0x22531Cu) {
        ctx->pc = 0x225320u;
        goto label_225320;
    }
    ctx->pc = 0x225318u;
    {
        const bool branch_taken_0x225318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x225318) {
            ctx->pc = 0x225328u;
            goto label_225328;
        }
    }
    ctx->pc = 0x225320u;
label_225320:
    // 0x225320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225324:
    // 0x225324: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x225324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_225328:
    // 0x225328: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22532c:
    // 0x22532c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x22532cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_225330:
    // 0x225330: 0xc119b68  jal         func_466DA0
label_225334:
    if (ctx->pc == 0x225334u) {
        ctx->pc = 0x225338u;
        goto label_225338;
    }
    ctx->pc = 0x225330u;
    SET_GPR_U32(ctx, 31, 0x225338u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x225330u, 0x225338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225338u;
label_225338:
    // 0x225338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22533c:
    // 0x22533c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_225340:
    if (ctx->pc == 0x225340u) {
        ctx->pc = 0x225344u;
        goto label_225344;
    }
    ctx->pc = 0x22533Cu;
    {
        const bool branch_taken_0x22533c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22533c) {
            ctx->pc = 0x225350u;
            goto label_225350;
        }
    }
    ctx->pc = 0x225344u;
label_225344:
    // 0x225344: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x225344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225348:
    // 0x225348: 0x1000000e  b           . + 4 + (0xE << 2)
label_22534c:
    if (ctx->pc == 0x22534Cu) {
        ctx->pc = 0x225350u;
        goto label_225350;
    }
    ctx->pc = 0x225348u;
    {
        const bool branch_taken_0x225348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225348) {
            ctx->pc = 0x225384u;
            goto label_225384;
        }
    }
    ctx->pc = 0x225350u;
label_225350:
    // 0x225350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x225350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225354:
    // 0x225354: 0xc0ba088  jal         func_2E8220
label_225358:
    if (ctx->pc == 0x225358u) {
        ctx->pc = 0x22535Cu;
        goto label_22535c;
    }
    ctx->pc = 0x225354u;
    SET_GPR_U32(ctx, 31, 0x22535Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x225354u, 0x22535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22535Cu;
label_22535c:
    // 0x22535c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22535cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225360:
    // 0x225360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225364:
    // 0x225364: 0xc0ba088  jal         func_2E8220
label_225368:
    if (ctx->pc == 0x225368u) {
        ctx->pc = 0x22536Cu;
        goto label_22536c;
    }
    ctx->pc = 0x225364u;
    SET_GPR_U32(ctx, 31, 0x22536Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x225364u, 0x22536Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22536Cu;
label_22536c:
    // 0x22536c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_225370:
    if (ctx->pc == 0x225370u) {
        ctx->pc = 0x225374u;
        goto label_225374;
    }
    ctx->pc = 0x22536Cu;
    {
        const bool branch_taken_0x22536c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22536c) {
            ctx->pc = 0x225328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225328;
        }
    }
    ctx->pc = 0x225374u;
label_225374:
    // 0x225374: 0x200f809  jalr        $s0
label_225378:
    if (ctx->pc == 0x225378u) {
        ctx->pc = 0x22537Cu;
        goto label_22537c;
    }
    ctx->pc = 0x225374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x22537Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225374u, 0x22537Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22537Cu;
label_22537c:
    // 0x22537c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_225380:
    if (ctx->pc == 0x225380u) {
        ctx->pc = 0x225384u;
        goto label_225384;
    }
    ctx->pc = 0x22537Cu;
    {
        const bool branch_taken_0x22537c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22537c) {
            ctx->pc = 0x225328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225328;
        }
    }
    ctx->pc = 0x225384u;
label_225384:
    // 0x225384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x225384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225388:
    // 0x225388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22538c:
    // 0x22538c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22538cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_225390:
    // 0x225390: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x225390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_225394:
    // 0x225394: 0x3e00008  jr          $ra
label_225398:
    if (ctx->pc == 0x225398u) {
        ctx->pc = 0x22539Cu;
        goto label_22539c;
    }
    ctx->pc = 0x225394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22539Cu;
label_22539c:
    // 0x22539c: 0x0  nop
    ctx->pc = 0x22539cu;
    // NOP
    ctx->pc = 0x2253a0u;
}
