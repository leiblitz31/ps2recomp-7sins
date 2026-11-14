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

// Function: sub_004993E8
// Address: 0x4993e8 - 0x499460
void sub_004993E8_0x4993e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004993E8_0x4993e8");
#endif

    switch (ctx->pc) {
        case 0x4993e8u: goto label_4993e8;
        case 0x4993ecu: goto label_4993ec;
        case 0x4993f0u: goto label_4993f0;
        case 0x4993f4u: goto label_4993f4;
        case 0x4993f8u: goto label_4993f8;
        case 0x4993fcu: goto label_4993fc;
        case 0x499400u: goto label_499400;
        case 0x499404u: goto label_499404;
        case 0x499408u: goto label_499408;
        case 0x49940cu: goto label_49940c;
        case 0x499410u: goto label_499410;
        case 0x499414u: goto label_499414;
        case 0x499418u: goto label_499418;
        case 0x49941cu: goto label_49941c;
        case 0x499420u: goto label_499420;
        case 0x499424u: goto label_499424;
        case 0x499428u: goto label_499428;
        case 0x49942cu: goto label_49942c;
        case 0x499430u: goto label_499430;
        case 0x499434u: goto label_499434;
        case 0x499438u: goto label_499438;
        case 0x49943cu: goto label_49943c;
        case 0x499440u: goto label_499440;
        case 0x499444u: goto label_499444;
        case 0x499448u: goto label_499448;
        case 0x49944cu: goto label_49944c;
        case 0x499450u: goto label_499450;
        case 0x499454u: goto label_499454;
        case 0x499458u: goto label_499458;
        case 0x49945cu: goto label_49945c;
        default: break;
    }

    ctx->pc = 0x4993e8u;

label_4993e8:
    // 0x4993e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4993e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4993ec:
    // 0x4993ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4993ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4993f0:
    // 0x4993f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4993f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4993f4:
    // 0x4993f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4993f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4993f8:
    // 0x4993f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4993f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4993fc:
    // 0x4993fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4993fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_499400:
    // 0x499400: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x499400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_499404:
    // 0x499404: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x499404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_499408:
    // 0x499408: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x499408u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_49940c:
    // 0x49940c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x49940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499410:
    // 0x499410: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x499410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_499414:
    // 0x499414: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x499414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_499418:
    // 0x499418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x499418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_49941c:
    // 0x49941c: 0x40f809  jalr        $v0
label_499420:
    if (ctx->pc == 0x499420u) {
        ctx->pc = 0x499420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49941Cu;
        // 0x499420: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499424u;
        goto label_499424;
    }
    ctx->pc = 0x49941Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x499424u);
        ctx->pc = 0x499420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49941Cu;
        // 0x499420: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49941Cu, 0x499424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x499424u;
label_499424:
    // 0x499424: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x499424u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_499428:
    // 0x499428: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_49942c:
    if (ctx->pc == 0x49942Cu) {
        ctx->pc = 0x49942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499428u;
        // 0x49942c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499430u;
        goto label_499430;
    }
    ctx->pc = 0x499428u;
    {
        const bool branch_taken_0x499428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499428u;
        // 0x49942c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499428) {
            ctx->pc = 0x499444u;
            goto label_499444;
        }
    }
    ctx->pc = 0x499430u;
label_499430:
    // 0x499430: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_499434:
    if (ctx->pc == 0x499434u) {
        ctx->pc = 0x499434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499430u;
        // 0x499434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499438u;
        goto label_499438;
    }
    ctx->pc = 0x499430u;
    {
        const bool branch_taken_0x499430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499430u;
        // 0x499434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499430) {
            ctx->pc = 0x499440u;
            goto label_499440;
        }
    }
    ctx->pc = 0x499438u;
label_499438:
    // 0x499438: 0x10000002  b           . + 4 + (0x2 << 2)
label_49943c:
    if (ctx->pc == 0x49943Cu) {
        ctx->pc = 0x49943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499438u;
        // 0x49943c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499440u;
        goto label_499440;
    }
    ctx->pc = 0x499438u;
    {
        const bool branch_taken_0x499438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499438u;
        // 0x49943c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499438) {
            ctx->pc = 0x499444u;
            goto label_499444;
        }
    }
    ctx->pc = 0x499440u;
label_499440:
    // 0x499440: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x499440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_499444:
    // 0x499444: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x499444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_499448:
    // 0x499448: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x499448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49944c:
    // 0x49944c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x49944cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499450:
    // 0x499450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x499450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_499454:
    // 0x499454: 0x3e00008  jr          $ra
label_499458:
    if (ctx->pc == 0x499458u) {
        ctx->pc = 0x499458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499454u;
        // 0x499458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49945Cu;
        goto label_49945c;
    }
    ctx->pc = 0x499454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499454u;
        // 0x499458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49945Cu;
label_49945c:
    // 0x49945c: 0x0  nop
    ctx->pc = 0x49945cu;
    // NOP
    ctx->pc = 0x499460u;
}
