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

// Function: sub_00485410
// Address: 0x485410 - 0x4854c0
void sub_00485410_0x485410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485410_0x485410");
#endif

    switch (ctx->pc) {
        case 0x485410u: goto label_485410;
        case 0x485414u: goto label_485414;
        case 0x485418u: goto label_485418;
        case 0x48541cu: goto label_48541c;
        case 0x485420u: goto label_485420;
        case 0x485424u: goto label_485424;
        case 0x485428u: goto label_485428;
        case 0x48542cu: goto label_48542c;
        case 0x485430u: goto label_485430;
        case 0x485434u: goto label_485434;
        case 0x485438u: goto label_485438;
        case 0x48543cu: goto label_48543c;
        case 0x485440u: goto label_485440;
        case 0x485444u: goto label_485444;
        case 0x485448u: goto label_485448;
        case 0x48544cu: goto label_48544c;
        case 0x485450u: goto label_485450;
        case 0x485454u: goto label_485454;
        case 0x485458u: goto label_485458;
        case 0x48545cu: goto label_48545c;
        case 0x485460u: goto label_485460;
        case 0x485464u: goto label_485464;
        case 0x485468u: goto label_485468;
        case 0x48546cu: goto label_48546c;
        case 0x485470u: goto label_485470;
        case 0x485474u: goto label_485474;
        case 0x485478u: goto label_485478;
        case 0x48547cu: goto label_48547c;
        case 0x485480u: goto label_485480;
        case 0x485484u: goto label_485484;
        case 0x485488u: goto label_485488;
        case 0x48548cu: goto label_48548c;
        case 0x485490u: goto label_485490;
        case 0x485494u: goto label_485494;
        case 0x485498u: goto label_485498;
        case 0x48549cu: goto label_48549c;
        case 0x4854a0u: goto label_4854a0;
        case 0x4854a4u: goto label_4854a4;
        case 0x4854a8u: goto label_4854a8;
        case 0x4854acu: goto label_4854ac;
        case 0x4854b0u: goto label_4854b0;
        case 0x4854b4u: goto label_4854b4;
        case 0x4854b8u: goto label_4854b8;
        case 0x4854bcu: goto label_4854bc;
        default: break;
    }

    ctx->pc = 0x485410u;

label_485410:
    // 0x485410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x485410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_485414:
    // 0x485414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x485414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_485418:
    // 0x485418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48541c:
    // 0x48541c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485420:
    // 0x485420: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x485420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_485424:
    // 0x485424: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x485424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_485428:
    // 0x485428: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_48542c:
    if (ctx->pc == 0x48542Cu) {
        ctx->pc = 0x485430u;
        goto label_485430;
    }
    ctx->pc = 0x485428u;
    {
        const bool branch_taken_0x485428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x485428) {
            ctx->pc = 0x485438u;
            goto label_485438;
        }
    }
    ctx->pc = 0x485430u;
label_485430:
    // 0x485430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x485430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485434:
    // 0x485434: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x485434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_485438:
    // 0x485438: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x485438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48543c:
    // 0x48543c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48543cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_485440:
    // 0x485440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x485440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_485444:
    // 0x485444: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x485444u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_485448:
    // 0x485448: 0xc119b68  jal         func_466DA0
label_48544c:
    if (ctx->pc == 0x48544Cu) {
        ctx->pc = 0x485450u;
        goto label_485450;
    }
    ctx->pc = 0x485448u;
    SET_GPR_U32(ctx, 31, 0x485450u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x485448u, 0x485450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485450u;
label_485450:
    // 0x485450: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x485450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485454:
    // 0x485454: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_485458:
    if (ctx->pc == 0x485458u) {
        ctx->pc = 0x48545Cu;
        goto label_48545c;
    }
    ctx->pc = 0x485454u;
    {
        const bool branch_taken_0x485454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x485454) {
            ctx->pc = 0x485468u;
            goto label_485468;
        }
    }
    ctx->pc = 0x48545Cu;
label_48545c:
    // 0x48545c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48545cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485460:
    // 0x485460: 0x1000000e  b           . + 4 + (0xE << 2)
label_485464:
    if (ctx->pc == 0x485464u) {
        ctx->pc = 0x485468u;
        goto label_485468;
    }
    ctx->pc = 0x485460u;
    {
        const bool branch_taken_0x485460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485460) {
            ctx->pc = 0x48549Cu;
            goto label_48549c;
        }
    }
    ctx->pc = 0x485468u;
label_485468:
    // 0x485468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x485468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48546c:
    // 0x48546c: 0xc0ba088  jal         func_2E8220
label_485470:
    if (ctx->pc == 0x485470u) {
        ctx->pc = 0x485474u;
        goto label_485474;
    }
    ctx->pc = 0x48546Cu;
    SET_GPR_U32(ctx, 31, 0x485474u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x48546Cu, 0x485474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485474u;
label_485474:
    // 0x485474: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x485474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485478:
    // 0x485478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48547c:
    // 0x48547c: 0xc0ba088  jal         func_2E8220
label_485480:
    if (ctx->pc == 0x485480u) {
        ctx->pc = 0x485484u;
        goto label_485484;
    }
    ctx->pc = 0x48547Cu;
    SET_GPR_U32(ctx, 31, 0x485484u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x48547Cu, 0x485484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485484u;
label_485484:
    // 0x485484: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_485488:
    if (ctx->pc == 0x485488u) {
        ctx->pc = 0x48548Cu;
        goto label_48548c;
    }
    ctx->pc = 0x485484u;
    {
        const bool branch_taken_0x485484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x485484) {
            ctx->pc = 0x485438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485438;
        }
    }
    ctx->pc = 0x48548Cu;
label_48548c:
    // 0x48548c: 0x200f809  jalr        $s0
label_485490:
    if (ctx->pc == 0x485490u) {
        ctx->pc = 0x485494u;
        goto label_485494;
    }
    ctx->pc = 0x48548Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x485494u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48548Cu, 0x485494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485494u;
label_485494:
    // 0x485494: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_485498:
    if (ctx->pc == 0x485498u) {
        ctx->pc = 0x48549Cu;
        goto label_48549c;
    }
    ctx->pc = 0x485494u;
    {
        const bool branch_taken_0x485494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x485494) {
            ctx->pc = 0x485438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485438;
        }
    }
    ctx->pc = 0x48549Cu;
label_48549c:
    // 0x48549c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4854a0:
    // 0x4854a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4854a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4854a4:
    // 0x4854a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4854a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4854a8:
    // 0x4854a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4854a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4854ac:
    // 0x4854ac: 0x3e00008  jr          $ra
label_4854b0:
    if (ctx->pc == 0x4854B0u) {
        ctx->pc = 0x4854B4u;
        goto label_4854b4;
    }
    ctx->pc = 0x4854ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4854ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4854B4u;
label_4854b4:
    // 0x4854b4: 0x0  nop
    ctx->pc = 0x4854b4u;
    // NOP
label_4854b8:
    // 0x4854b8: 0x0  nop
    ctx->pc = 0x4854b8u;
    // NOP
label_4854bc:
    // 0x4854bc: 0x0  nop
    ctx->pc = 0x4854bcu;
    // NOP
    ctx->pc = 0x4854c0u;
}
