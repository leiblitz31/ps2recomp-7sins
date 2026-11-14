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

// Function: sub_003400C0
// Address: 0x3400c0 - 0x340160
void sub_003400C0_0x3400c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003400C0_0x3400c0");
#endif

    switch (ctx->pc) {
        case 0x3400f4u: goto label_3400f4;
        case 0x34010cu: goto label_34010c;
        case 0x34011cu: goto label_34011c;
        case 0x34012cu: goto label_34012c;
        default: break;
    }

    ctx->pc = 0x3400c0u;

    // 0x3400c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3400c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3400c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3400c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3400c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3400c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3400cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3400ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3400d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3400d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3400d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3400d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3400d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3400dc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x3400dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x3400e0: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x3400e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x3400e4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3400e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3400e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3400e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3400ec: 0xc0d120c  jal         func_344830
    ctx->pc = 0x3400ECu;
    SET_GPR_U32(ctx, 31, 0x3400F4u);
    ctx->pc = 0x3400F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3400ECu;
    // 0x3400f0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x3400ECu, 0x3400F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3400F4u;
label_3400f4:
    // 0x3400f4: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3400F4u;
    {
        const bool branch_taken_0x3400f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3400F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3400F4u;
        // 0x3400f8: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3400f4) {
            ctx->pc = 0x340140u;
            goto label_340140;
        }
    }
    ctx->pc = 0x3400FCu;
    // 0x3400fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3400fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x340100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340104: 0xc103454  jal         func_40D150
    ctx->pc = 0x340104u;
    SET_GPR_U32(ctx, 31, 0x34010Cu);
    ctx->pc = 0x340108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340104u;
    // 0x340108: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x340104u, 0x34010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34010Cu;
label_34010c:
    // 0x34010c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34010cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340110: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x340110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x340114: 0xc103454  jal         func_40D150
    ctx->pc = 0x340114u;
    SET_GPR_U32(ctx, 31, 0x34011Cu);
    ctx->pc = 0x340118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340114u;
    // 0x340118: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x340114u, 0x34011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34011Cu;
label_34011c:
    // 0x34011c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340120: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x340120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340124: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x340124u;
    SET_GPR_U32(ctx, 31, 0x34012Cu);
    ctx->pc = 0x340128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340124u;
    // 0x340128: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x340124u, 0x34012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34012Cu;
label_34012c:
    // 0x34012c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x34012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340134: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x340134u;
    {
        const bool branch_taken_0x340134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x340134) {
            ctx->pc = 0x340138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340134u;
            // 0x340138: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340140u;
            goto label_340140;
        }
    }
    ctx->pc = 0x34013Cu;
    // 0x34013c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x34013cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_340140:
    // 0x340140: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x340140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340144: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x340144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x340148: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x340148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34014c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34014cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x340150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340154: 0x3e00008  jr          $ra
    ctx->pc = 0x340154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340154u;
        // 0x340158: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34015Cu;
    // 0x34015c: 0x0  nop
    ctx->pc = 0x34015cu;
    // NOP
    ctx->pc = 0x340160u;
}
