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

// Function: sub_00308770
// Address: 0x308770 - 0x308880
void sub_00308770_0x308770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308770_0x308770");
#endif

    switch (ctx->pc) {
        case 0x308784u: goto label_308784;
        case 0x3087b0u: goto label_3087b0;
        case 0x3087ccu: goto label_3087cc;
        case 0x3087d4u: goto label_3087d4;
        case 0x3087dcu: goto label_3087dc;
        case 0x3087ecu: goto label_3087ec;
        case 0x308800u: goto label_308800;
        case 0x308814u: goto label_308814;
        case 0x308840u: goto label_308840;
        case 0x308858u: goto label_308858;
        case 0x308868u: goto label_308868;
        default: break;
    }

    ctx->pc = 0x308770u;

    // 0x308770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308778: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30877c: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x30877Cu;
    SET_GPR_U32(ctx, 31, 0x308784u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x30877Cu, 0x308784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308784u;
label_308784:
    // 0x308784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308788: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x308788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30878c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x30878cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x308790: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x308790u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x308794: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x308794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x308798: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x308798u;
    {
        const bool branch_taken_0x308798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308798) {
            ctx->pc = 0x3087B8u;
            goto label_3087b8;
        }
    }
    ctx->pc = 0x3087A0u;
    // 0x3087a0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3087A0u;
    {
        const bool branch_taken_0x3087a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087A0u;
        // 0x3087a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087a0) {
            ctx->pc = 0x3087F0u;
            goto label_3087f0;
        }
    }
    ctx->pc = 0x3087A8u;
    // 0x3087a8: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x3087A8u;
    SET_GPR_U32(ctx, 31, 0x3087B0u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x3087A8u, 0x3087B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087B0u;
label_3087b0:
    // 0x3087b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3087B0u;
    {
        const bool branch_taken_0x3087b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087B0u;
        // 0x3087b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087b0) {
            ctx->pc = 0x3087F0u;
            goto label_3087f0;
        }
    }
    ctx->pc = 0x3087B8u;
label_3087b8:
    // 0x3087b8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3087b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3087bc: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x3087bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x3087c0: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x3087c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3087c4: 0xc0c2144  jal         func_308510
    ctx->pc = 0x3087C4u;
    SET_GPR_U32(ctx, 31, 0x3087CCu);
    ctx->pc = 0x3087C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3087C4u;
    // 0x3087c8: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x3087C4u, 0x3087CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087CCu;
label_3087cc:
    // 0x3087cc: 0xc0c235e  jal         func_308D78
    ctx->pc = 0x3087CCu;
    SET_GPR_U32(ctx, 31, 0x3087D4u);
    ctx->pc = 0x308D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308D78u, 0x3087CCu, 0x3087D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087D4u;
label_3087d4:
    // 0x3087d4: 0xc0c2220  jal         func_308880
    ctx->pc = 0x3087D4u;
    SET_GPR_U32(ctx, 31, 0x3087DCu);
    ctx->pc = 0x3087D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3087D4u;
    // 0x3087d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308880u, 0x3087D4u, 0x3087DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087DCu;
label_3087dc:
    // 0x3087dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3087DCu;
    {
        const bool branch_taken_0x3087dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3087E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087DCu;
        // 0x3087e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3087dc) {
            ctx->pc = 0x3087F0u;
            goto label_3087f0;
        }
    }
    ctx->pc = 0x3087E4u;
    // 0x3087e4: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x3087E4u;
    SET_GPR_U32(ctx, 31, 0x3087ECu);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x3087E4u, 0x3087ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3087ECu;
label_3087ec:
    // 0x3087ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3087ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3087f0:
    // 0x3087f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3087f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3087f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3087f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3087f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3087F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3087FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3087F8u;
        // 0x3087fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3087F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308800u;
label_308800:
    // 0x308800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x308808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30880c: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x30880Cu;
    SET_GPR_U32(ctx, 31, 0x308814u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x30880Cu, 0x308814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308814u;
label_308814:
    // 0x308814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308818: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x308818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x30881c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x30881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x308820: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x308820u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x308824: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x308824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x308828: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x308828u;
    {
        const bool branch_taken_0x308828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308828) {
            ctx->pc = 0x308848u;
            goto label_308848;
        }
    }
    ctx->pc = 0x308830u;
    // 0x308830: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x308830u;
    {
        const bool branch_taken_0x308830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x308834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308830u;
        // 0x308834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308830) {
            ctx->pc = 0x30886Cu;
            goto label_30886c;
        }
    }
    ctx->pc = 0x308838u;
    // 0x308838: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x308838u;
    SET_GPR_U32(ctx, 31, 0x308840u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x308838u, 0x308840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308840u;
label_308840:
    // 0x308840: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x308840u;
    {
        const bool branch_taken_0x308840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308840u;
        // 0x308844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308840) {
            ctx->pc = 0x30886Cu;
            goto label_30886c;
        }
    }
    ctx->pc = 0x308848u;
label_308848:
    // 0x308848: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x308848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x30884c: 0x3484f37f  ori         $a0, $a0, 0xF37F
    ctx->pc = 0x30884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62335);
    // 0x308850: 0xc0c2144  jal         func_308510
    ctx->pc = 0x308850u;
    SET_GPR_U32(ctx, 31, 0x308858u);
    ctx->pc = 0x308854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308850u;
    // 0x308854: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308510u, 0x308850u, 0x308858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308858u;
label_308858:
    // 0x308858: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308858u;
    {
        const bool branch_taken_0x308858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308858u;
        // 0x30885c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308858) {
            ctx->pc = 0x30886Cu;
            goto label_30886c;
        }
    }
    ctx->pc = 0x308860u;
    // 0x308860: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x308860u;
    SET_GPR_U32(ctx, 31, 0x308868u);
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x308860u, 0x308868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308868u;
label_308868:
    // 0x308868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30886c:
    // 0x30886c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30886cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308870: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308874: 0x3e00008  jr          $ra
    ctx->pc = 0x308874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308874u;
        // 0x308878: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30887Cu;
    // 0x30887c: 0x0  nop
    ctx->pc = 0x30887cu;
    // NOP
    ctx->pc = 0x308880u;
}
