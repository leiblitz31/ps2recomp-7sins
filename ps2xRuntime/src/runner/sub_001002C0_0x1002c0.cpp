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

// Function: sub_001002C0
// Address: 0x1002c0 - 0x100380
void sub_001002C0_0x1002c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001002C0_0x1002c0");
#endif

    switch (ctx->pc) {
        case 0x1002dcu: goto label_1002dc;
        case 0x1002ecu: goto label_1002ec;
        case 0x1002fcu: goto label_1002fc;
        case 0x100314u: goto label_100314;
        case 0x100328u: goto label_100328;
        case 0x100338u: goto label_100338;
        case 0x100350u: goto label_100350;
        default: break;
    }

    ctx->pc = 0x1002c0u;

    // 0x1002c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1002c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1002c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1002c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1002c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1002c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1002cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1002ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1002d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1002d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1002d4: 0xc119040  jal         func_464100
    ctx->pc = 0x1002D4u;
    SET_GPR_U32(ctx, 31, 0x1002DCu);
    ctx->pc = 0x464100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464100u, 0x1002D4u, 0x1002DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002DCu;
label_1002dc:
    // 0x1002dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1002dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002e0: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1002e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1002e4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1002E4u;
    SET_GPR_U32(ctx, 31, 0x1002ECu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1002E4u, 0x1002ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002ECu;
label_1002ec:
    // 0x1002ec: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1002ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1002f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1002f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002f4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1002F4u;
    SET_GPR_U32(ctx, 31, 0x1002FCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1002F4u, 0x1002FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1002FCu;
label_1002fc:
    // 0x1002fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1002fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100300: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x100300u;
    {
        const bool branch_taken_0x100300 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100300) {
            ctx->pc = 0x100318u;
            goto label_100318;
        }
    }
    ctx->pc = 0x100308u;
    // 0x100308: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10030c: 0xc085798  jal         func_215E60
    ctx->pc = 0x10030Cu;
    SET_GPR_U32(ctx, 31, 0x100314u);
    ctx->pc = 0x215E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215E60u, 0x10030Cu, 0x100314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100314u;
label_100314:
    // 0x100314: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100318:
    // 0x100318: 0xaf91bb70  sw          $s1, -0x4490($gp)
    ctx->pc = 0x100318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949744), GPR_U32(ctx, 17));
    // 0x10031c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x10031cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x100320: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x100320u;
    SET_GPR_U32(ctx, 31, 0x100328u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x100320u, 0x100328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100328u;
label_100328:
    // 0x100328: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x100328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10032c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10032cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100330: 0xc0400e0  jal         func_100380
    ctx->pc = 0x100330u;
    SET_GPR_U32(ctx, 31, 0x100338u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x100330u, 0x100338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100338u;
label_100338:
    // 0x100338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10033c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10033Cu;
    {
        const bool branch_taken_0x10033c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10033c) {
            ctx->pc = 0x100354u;
            goto label_100354;
        }
    }
    ctx->pc = 0x100344u;
    // 0x100344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100348: 0xc0b7380  jal         func_2DCE00
    ctx->pc = 0x100348u;
    SET_GPR_U32(ctx, 31, 0x100350u);
    ctx->pc = 0x2DCE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCE00u, 0x100348u, 0x100350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100350u;
label_100350:
    // 0x100350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100354:
    // 0x100354: 0xaf90bcc4  sw          $s0, -0x433C($gp)
    ctx->pc = 0x100354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950084), GPR_U32(ctx, 16));
    // 0x100358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10035c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10035cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10036c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10036cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x100370: 0x3e00008  jr          $ra
    ctx->pc = 0x100370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100378u;
    // 0x100378: 0x0  nop
    ctx->pc = 0x100378u;
    // NOP
    // 0x10037c: 0x0  nop
    ctx->pc = 0x10037cu;
    // NOP
    ctx->pc = 0x100380u;
}
