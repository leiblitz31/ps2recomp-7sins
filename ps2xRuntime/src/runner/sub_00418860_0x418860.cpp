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

// Function: sub_00418860
// Address: 0x418860 - 0x4188d0
void sub_00418860_0x418860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418860_0x418860");
#endif

    switch (ctx->pc) {
        case 0x418860u: goto label_418860;
        case 0x418864u: goto label_418864;
        case 0x418868u: goto label_418868;
        case 0x41886cu: goto label_41886c;
        case 0x418870u: goto label_418870;
        case 0x418874u: goto label_418874;
        case 0x418878u: goto label_418878;
        case 0x41887cu: goto label_41887c;
        case 0x418880u: goto label_418880;
        case 0x418884u: goto label_418884;
        case 0x418888u: goto label_418888;
        case 0x41888cu: goto label_41888c;
        case 0x418890u: goto label_418890;
        case 0x418894u: goto label_418894;
        case 0x418898u: goto label_418898;
        case 0x41889cu: goto label_41889c;
        case 0x4188a0u: goto label_4188a0;
        case 0x4188a4u: goto label_4188a4;
        case 0x4188a8u: goto label_4188a8;
        case 0x4188acu: goto label_4188ac;
        case 0x4188b0u: goto label_4188b0;
        case 0x4188b4u: goto label_4188b4;
        case 0x4188b8u: goto label_4188b8;
        case 0x4188bcu: goto label_4188bc;
        case 0x4188c0u: goto label_4188c0;
        case 0x4188c4u: goto label_4188c4;
        case 0x4188c8u: goto label_4188c8;
        case 0x4188ccu: goto label_4188cc;
        default: break;
    }

    ctx->pc = 0x418860u;

label_418860:
    // 0x418860: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x418860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_418864:
    // 0x418864: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x418864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_418868:
    // 0x418868: 0x8c62e894  lw          $v0, -0x176C($v1)
    ctx->pc = 0x418868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961300)));
label_41886c:
    // 0x41886c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x41886cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_418870:
    // 0x418870: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x418870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_418874:
    // 0x418874: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x418874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_418878:
    // 0x418878: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x418878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41887c:
    // 0x41887c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41887cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418880:
    // 0x418880: 0x40f809  jalr        $v0
label_418884:
    if (ctx->pc == 0x418884u) {
        ctx->pc = 0x418884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418880u;
        // 0x418884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418888u;
        goto label_418888;
    }
    ctx->pc = 0x418880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418888u);
        ctx->pc = 0x418884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418880u;
        // 0x418884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418880u, 0x418888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418888u;
label_418888:
    // 0x418888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41888c:
    // 0x41888c: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_418890:
    if (ctx->pc == 0x418890u) {
        ctx->pc = 0x418890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41888Cu;
        // 0x418890: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418894u;
        goto label_418894;
    }
    ctx->pc = 0x41888Cu;
    {
        const bool branch_taken_0x41888c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41888c) {
            ctx->pc = 0x418890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41888Cu;
            // 0x418890: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4188C0u;
            goto label_4188c0;
        }
    }
    ctx->pc = 0x418894u;
label_418894:
    // 0x418894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418898:
    // 0x418898: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_41889c:
    // 0x41889c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41889cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4188a0:
    // 0x4188a0: 0xc1035f6  jal         func_40D7D8
label_4188a4:
    if (ctx->pc == 0x4188A4u) {
        ctx->pc = 0x4188A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188A0u;
        // 0x4188a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4188A8u;
        goto label_4188a8;
    }
    ctx->pc = 0x4188A0u;
    SET_GPR_U32(ctx, 31, 0x4188A8u);
    ctx->pc = 0x4188A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4188A0u;
    // 0x4188a4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4188A0u, 0x4188A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4188A8u;
label_4188a8:
    // 0x4188a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4188a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4188ac:
    // 0x4188ac: 0xc103628  jal         func_40D8A0
label_4188b0:
    if (ctx->pc == 0x4188B0u) {
        ctx->pc = 0x4188B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188ACu;
        // 0x4188b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4188B4u;
        goto label_4188b4;
    }
    ctx->pc = 0x4188ACu;
    SET_GPR_U32(ctx, 31, 0x4188B4u);
    ctx->pc = 0x4188B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4188ACu;
    // 0x4188b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4188ACu, 0x4188B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4188B4u;
label_4188b4:
    // 0x4188b4: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_4188b8:
    if (ctx->pc == 0x4188B8u) {
        ctx->pc = 0x4188B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188B4u;
        // 0x4188b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4188BCu;
        goto label_4188bc;
    }
    ctx->pc = 0x4188B4u;
    {
        const bool branch_taken_0x4188b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4188B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188B4u;
        // 0x4188b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4188b4) {
            ctx->pc = 0x4188C0u;
            goto label_4188c0;
        }
    }
    ctx->pc = 0x4188BCu;
label_4188bc:
    // 0x4188bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4188bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4188c0:
    // 0x4188c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4188c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4188c4:
    // 0x4188c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4188c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4188c8:
    // 0x4188c8: 0x3e00008  jr          $ra
label_4188cc:
    if (ctx->pc == 0x4188CCu) {
        ctx->pc = 0x4188CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188C8u;
        // 0x4188cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4188D0u;
        goto label_fallthrough_0x4188c8;
    }
    ctx->pc = 0x4188C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4188CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4188C8u;
        // 0x4188cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4188C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4188c8:
    ctx->pc = 0x4188D0u;
}
