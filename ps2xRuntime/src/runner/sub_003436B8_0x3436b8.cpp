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

// Function: sub_003436B8
// Address: 0x3436b8 - 0x343740
void sub_003436B8_0x3436b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003436B8_0x3436b8");
#endif

    switch (ctx->pc) {
        case 0x3436b8u: goto label_3436b8;
        case 0x3436bcu: goto label_3436bc;
        case 0x3436c0u: goto label_3436c0;
        case 0x3436c4u: goto label_3436c4;
        case 0x3436c8u: goto label_3436c8;
        case 0x3436ccu: goto label_3436cc;
        case 0x3436d0u: goto label_3436d0;
        case 0x3436d4u: goto label_3436d4;
        case 0x3436d8u: goto label_3436d8;
        case 0x3436dcu: goto label_3436dc;
        case 0x3436e0u: goto label_3436e0;
        case 0x3436e4u: goto label_3436e4;
        case 0x3436e8u: goto label_3436e8;
        case 0x3436ecu: goto label_3436ec;
        case 0x3436f0u: goto label_3436f0;
        case 0x3436f4u: goto label_3436f4;
        case 0x3436f8u: goto label_3436f8;
        case 0x3436fcu: goto label_3436fc;
        case 0x343700u: goto label_343700;
        case 0x343704u: goto label_343704;
        case 0x343708u: goto label_343708;
        case 0x34370cu: goto label_34370c;
        case 0x343710u: goto label_343710;
        case 0x343714u: goto label_343714;
        case 0x343718u: goto label_343718;
        case 0x34371cu: goto label_34371c;
        case 0x343720u: goto label_343720;
        case 0x343724u: goto label_343724;
        case 0x343728u: goto label_343728;
        case 0x34372cu: goto label_34372c;
        case 0x343730u: goto label_343730;
        case 0x343734u: goto label_343734;
        case 0x343738u: goto label_343738;
        case 0x34373cu: goto label_34373c;
        default: break;
    }

    ctx->pc = 0x3436b8u;

label_3436b8:
    // 0x3436b8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3436b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3436bc:
    // 0x3436bc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3436bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3436c0:
    // 0x3436c0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3436c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3436c4:
    // 0x3436c4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3436c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3436c8:
    // 0x3436c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3436c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3436cc:
    // 0x3436cc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3436ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3436d0:
    // 0x3436d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3436d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3436d4:
    // 0x3436d4: 0x40f809  jalr        $v0
label_3436d8:
    if (ctx->pc == 0x3436D8u) {
        ctx->pc = 0x3436D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436D4u;
        // 0x3436d8: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436DCu;
        goto label_3436dc;
    }
    ctx->pc = 0x3436D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3436DCu);
        ctx->pc = 0x3436D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436D4u;
        // 0x3436d8: 0x34a50130  ori         $a1, $a1, 0x130 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)304);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3436D4u, 0x3436DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3436DCu;
label_3436dc:
    // 0x3436dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3436dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3436e0:
    // 0x3436e0: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_3436e4:
    if (ctx->pc == 0x3436E4u) {
        ctx->pc = 0x3436E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436E0u;
        // 0x3436e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436E8u;
        goto label_3436e8;
    }
    ctx->pc = 0x3436E0u;
    {
        const bool branch_taken_0x3436e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3436E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436E0u;
        // 0x3436e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3436e0) {
            ctx->pc = 0x34372Cu;
            goto label_34372c;
        }
    }
    ctx->pc = 0x3436E8u;
label_3436e8:
    // 0x3436e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3436e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3436ec:
    // 0x3436ec: 0xc0bb7e6  jal         func_2EDF98
label_3436f0:
    if (ctx->pc == 0x3436F0u) {
        ctx->pc = 0x3436F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436ECu;
        // 0x3436f0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3436F4u;
        goto label_3436f4;
    }
    ctx->pc = 0x3436ECu;
    SET_GPR_U32(ctx, 31, 0x3436F4u);
    ctx->pc = 0x3436F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436ECu;
    // 0x3436f0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3436ECu, 0x3436F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436F4u;
label_3436f4:
    // 0x3436f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3436f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3436f8:
    // 0x3436f8: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x3436f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_3436fc:
    // 0x3436fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3436fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_343700:
    // 0x343700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343704:
    // 0x343704: 0x2463c2c8  addiu       $v1, $v1, -0x3D38
    ctx->pc = 0x343704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951624));
label_343708:
    // 0x343708: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x343708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_34370c:
    // 0x34370c: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x34370cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_343710:
    // 0x343710: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_343714:
    if (ctx->pc == 0x343714u) {
        ctx->pc = 0x343714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343710u;
        // 0x343714: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343718u;
        goto label_343718;
    }
    ctx->pc = 0x343710u;
    {
        const bool branch_taken_0x343710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343710u;
        // 0x343714: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343710) {
            ctx->pc = 0x343724u;
            goto label_343724;
        }
    }
    ctx->pc = 0x343718u;
label_343718:
    // 0x343718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34371c:
    // 0x34371c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34371cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_343720:
    // 0x343720: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x343720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_343724:
    // 0x343724: 0x2482c2c8  addiu       $v0, $a0, -0x3D38
    ctx->pc = 0x343724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
label_343728:
    // 0x343728: 0xac500064  sw          $s0, 0x64($v0)
    ctx->pc = 0x343728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 16));
label_34372c:
    // 0x34372c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x34372cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343730:
    // 0x343730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_343734:
    // 0x343734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x343734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_343738:
    // 0x343738: 0x3e00008  jr          $ra
label_34373c:
    if (ctx->pc == 0x34373Cu) {
        ctx->pc = 0x34373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343738u;
        // 0x34373c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x343740u;
        goto label_fallthrough_0x343738;
    }
    ctx->pc = 0x343738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343738u;
        // 0x34373c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x343738:
    ctx->pc = 0x343740u;
}
