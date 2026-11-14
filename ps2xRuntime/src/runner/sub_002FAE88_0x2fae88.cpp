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

// Function: sub_002FAE88
// Address: 0x2fae88 - 0x2fafb0
void sub_002FAE88_0x2fae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAE88_0x2fae88");
#endif

    switch (ctx->pc) {
        case 0x2faea4u: goto label_2faea4;
        case 0x2faeb8u: goto label_2faeb8;
        case 0x2faed4u: goto label_2faed4;
        case 0x2faee0u: goto label_2faee0;
        case 0x2faefcu: goto label_2faefc;
        case 0x2faf10u: goto label_2faf10;
        case 0x2faf20u: goto label_2faf20;
        case 0x2faf30u: goto label_2faf30;
        case 0x2faf48u: goto label_2faf48;
        case 0x2faf64u: goto label_2faf64;
        case 0x2faf70u: goto label_2faf70;
        case 0x2faf88u: goto label_2faf88;
        default: break;
    }

    ctx->pc = 0x2fae88u;

    // 0x2fae88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fae88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fae8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fae90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fae94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fae98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2fae9c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2FAE9Cu;
    SET_GPR_U32(ctx, 31, 0x2FAEA4u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2FAE9Cu, 0x2FAEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEA4u;
label_2faea4:
    // 0x2faea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2faea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2faea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faeac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2faeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faeb0: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2FAEB0u;
    SET_GPR_U32(ctx, 31, 0x2FAEB8u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FAEB0u, 0x2FAEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEB8u;
label_2faeb8:
    // 0x2faeb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2faeb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faebc: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x2faebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x2faec0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2faec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2faec4: 0x4400034  bltz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2FAEC4u;
    {
        const bool branch_taken_0x2faec4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEC4u;
        // 0x2faec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faec4) {
            ctx->pc = 0x2FAF98u;
            goto label_2faf98;
        }
    }
    ctx->pc = 0x2FAECCu;
    // 0x2faecc: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2FAECCu;
    SET_GPR_U32(ctx, 31, 0x2FAED4u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FAECCu, 0x2FAED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAED4u;
label_2faed4:
    // 0x2faed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2faed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faed8: 0xc0bef62  jal         func_2FBD88
    ctx->pc = 0x2FAED8u;
    SET_GPR_U32(ctx, 31, 0x2FAEE0u);
    ctx->pc = 0x2FBD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD88u, 0x2FAED8u, 0x2FAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEE0u;
label_2faee0:
    // 0x2faee0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2faee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faee4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2faee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2faee8: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x2faee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x2faeec: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAEECu;
    {
        const bool branch_taken_0x2faeec = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2FAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAEECu;
        // 0x2faef0: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faeec) {
            ctx->pc = 0x2FAF08u;
            goto label_2faf08;
        }
    }
    ctx->pc = 0x2FAEF4u;
    // 0x2faef4: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x2FAEF4u;
    SET_GPR_U32(ctx, 31, 0x2FAEFCu);
    ctx->pc = 0x2FAEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAEF4u;
    // 0x2faef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x2FAEF4u, 0x2FAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAEFCu;
label_2faefc:
    // 0x2faefc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FAEFCu;
    {
        const bool branch_taken_0x2faefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faefc) {
            ctx->pc = 0x2FAF20u;
            goto label_2faf20;
        }
    }
    ctx->pc = 0x2FAF04u;
    // 0x2faf04: 0x0  nop
    ctx->pc = 0x2faf04u;
    // NOP
label_2faf08:
    // 0x2faf08: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x2FAF08u;
    SET_GPR_U32(ctx, 31, 0x2FAF10u);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x2FAF08u, 0x2FAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF10u;
label_2faf10:
    // 0x2faf10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2faf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2faf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf18: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2FAF18u;
    SET_GPR_U32(ctx, 31, 0x2FAF20u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2FAF18u, 0x2FAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF20u;
label_2faf20:
    // 0x2faf20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2faf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2faf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf28: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2FAF28u;
    SET_GPR_U32(ctx, 31, 0x2FAF30u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2FAF28u, 0x2FAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF30u;
label_2faf30:
    // 0x2faf30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2faf30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2faf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2faf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2faf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf40: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2FAF40u;
    SET_GPR_U32(ctx, 31, 0x2FAF48u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FAF40u, 0x2FAF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF48u;
label_2faf48:
    // 0x2faf48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2faf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2faf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf50: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FAF50u;
    {
        const bool branch_taken_0x2faf50 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2faf50) {
            ctx->pc = 0x2FAF80u;
            goto label_2faf80;
        }
    }
    ctx->pc = 0x2FAF58u;
    // 0x2faf58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2faf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf5c: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2FAF5Cu;
    SET_GPR_U32(ctx, 31, 0x2FAF64u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2FAF5Cu, 0x2FAF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF64u;
label_2faf64:
    // 0x2faf64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2faf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf68: 0xc0bef62  jal         func_2FBD88
    ctx->pc = 0x2FAF68u;
    SET_GPR_U32(ctx, 31, 0x2FAF70u);
    ctx->pc = 0x2FBD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD88u, 0x2FAF68u, 0x2FAF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF70u;
label_2faf70:
    // 0x2faf70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2faf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faf74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2faf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2faf78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FAF78u;
    {
        const bool branch_taken_0x2faf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF78u;
        // 0x2faf7c: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf78) {
            ctx->pc = 0x2FAF94u;
            goto label_2faf94;
        }
    }
    ctx->pc = 0x2FAF80u;
label_2faf80:
    // 0x2faf80: 0xc0bef62  jal         func_2FBD88
    ctx->pc = 0x2FAF80u;
    SET_GPR_U32(ctx, 31, 0x2FAF88u);
    ctx->pc = 0x2FBD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD88u, 0x2FAF80u, 0x2FAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAF88u;
label_2faf88:
    // 0x2faf88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2faf88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2faf8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2faf8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2faf90: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2faf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_2faf94:
    // 0x2faf94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2faf94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2faf98:
    // 0x2faf98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2faf98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2faf9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2faf9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fafa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fafa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fafa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fafa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fafa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFA8u;
        // 0x2fafac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAFB0u;
}
