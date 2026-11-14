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

// Function: sub_003585A0
// Address: 0x3585a0 - 0x358678
void sub_003585A0_0x3585a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003585A0_0x3585a0");
#endif

    switch (ctx->pc) {
        case 0x3585bcu: goto label_3585bc;
        case 0x3585d0u: goto label_3585d0;
        case 0x3585e4u: goto label_3585e4;
        case 0x3585fcu: goto label_3585fc;
        case 0x358614u: goto label_358614;
        case 0x35861cu: goto label_35861c;
        case 0x358638u: goto label_358638;
        case 0x35864cu: goto label_35864c;
        case 0x35865cu: goto label_35865c;
        default: break;
    }

    ctx->pc = 0x3585a0u;

    // 0x3585a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3585a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3585a4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3585a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3585a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3585a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3585ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3585acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3585b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3585b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3585b4: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x3585B4u;
    SET_GPR_U32(ctx, 31, 0x3585BCu);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x3585B4u, 0x3585BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585BCu;
label_3585bc:
    // 0x3585bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3585bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585c0: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x3585C0u;
    {
        const bool branch_taken_0x3585c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3585C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3585C0u;
        // 0x3585c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585c0) {
            ctx->pc = 0x358660u;
            goto label_358660;
        }
    }
    ctx->pc = 0x3585C8u;
    // 0x3585c8: 0xc112074  jal         func_4481D0
    ctx->pc = 0x3585C8u;
    SET_GPR_U32(ctx, 31, 0x3585D0u);
    ctx->pc = 0x3585CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585C8u;
    // 0x3585cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x3585C8u, 0x3585D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585D0u;
label_3585d0:
    // 0x3585d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3585d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585d4: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3585D4u;
    {
        const bool branch_taken_0x3585d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3585d4) {
            ctx->pc = 0x358654u;
            goto label_358654;
        }
    }
    ctx->pc = 0x3585DCu;
    // 0x3585dc: 0xc0e855c  jal         func_3A1570
    ctx->pc = 0x3585DCu;
    SET_GPR_U32(ctx, 31, 0x3585E4u);
    ctx->pc = 0x3A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1570u, 0x3585DCu, 0x3585E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585E4u;
label_3585e4:
    // 0x3585e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3585e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3585e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3585ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3585f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3585f4: 0xc1120d8  jal         func_448360
    ctx->pc = 0x3585F4u;
    SET_GPR_U32(ctx, 31, 0x3585FCu);
    ctx->pc = 0x3585F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3585F4u;
    // 0x3585f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x3585F4u, 0x3585FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3585FCu;
label_3585fc:
    // 0x3585fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3585fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358600: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x358600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x358604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x358604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x358608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35860c: 0xc1125d8  jal         func_449760
    ctx->pc = 0x35860Cu;
    SET_GPR_U32(ctx, 31, 0x358614u);
    ctx->pc = 0x358610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35860Cu;
    // 0x358610: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x35860Cu, 0x358614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358614u;
label_358614:
    // 0x358614: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x358614u;
    SET_GPR_U32(ctx, 31, 0x35861Cu);
    ctx->pc = 0x358618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358614u;
    // 0x358618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x358614u, 0x35861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35861Cu;
label_35861c:
    // 0x35861c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35861cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358620: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x358620u;
    {
        const bool branch_taken_0x358620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x358624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358620u;
        // 0x358624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358620) {
            ctx->pc = 0x358654u;
            goto label_358654;
        }
    }
    ctx->pc = 0x358628u;
    // 0x358628: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x358628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35862c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358630: 0xc1125d8  jal         func_449760
    ctx->pc = 0x358630u;
    SET_GPR_U32(ctx, 31, 0x358638u);
    ctx->pc = 0x358634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358630u;
    // 0x358634: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x358630u, 0x358638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358638u;
label_358638:
    // 0x358638: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x358638u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x35863c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358640: 0x24c68010  addiu       $a2, $a2, -0x7FF0
    ctx->pc = 0x358640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934544));
    // 0x358644: 0xc0e8560  jal         func_3A1580
    ctx->pc = 0x358644u;
    SET_GPR_U32(ctx, 31, 0x35864Cu);
    ctx->pc = 0x358648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358644u;
    // 0x358648: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x358644u, 0x35864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35864Cu;
label_35864c:
    // 0x35864c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35864Cu;
    {
        const bool branch_taken_0x35864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35864Cu;
        // 0x358650: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35864c) {
            ctx->pc = 0x358660u;
            goto label_358660;
        }
    }
    ctx->pc = 0x358654u;
label_358654:
    // 0x358654: 0xc1116c6  jal         func_445B18
    ctx->pc = 0x358654u;
    SET_GPR_U32(ctx, 31, 0x35865Cu);
    ctx->pc = 0x358658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358654u;
    // 0x358658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x358654u, 0x35865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35865Cu;
label_35865c:
    // 0x35865c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35865cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358660:
    // 0x358660: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x358660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358664: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x358664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358668: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x358668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35866c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35866cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358670: 0x3e00008  jr          $ra
    ctx->pc = 0x358670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358670u;
        // 0x358674: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358678u;
}
