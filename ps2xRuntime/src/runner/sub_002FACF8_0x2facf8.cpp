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

// Function: sub_002FACF8
// Address: 0x2facf8 - 0x2fae10
void sub_002FACF8_0x2facf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FACF8_0x2facf8");
#endif

    switch (ctx->pc) {
        case 0x2fad1cu: goto label_2fad1c;
        case 0x2fad38u: goto label_2fad38;
        case 0x2fad44u: goto label_2fad44;
        case 0x2fad60u: goto label_2fad60;
        case 0x2fad70u: goto label_2fad70;
        case 0x2fad80u: goto label_2fad80;
        case 0x2fad90u: goto label_2fad90;
        case 0x2fada8u: goto label_2fada8;
        case 0x2fadc4u: goto label_2fadc4;
        case 0x2fadd0u: goto label_2fadd0;
        case 0x2fade8u: goto label_2fade8;
        default: break;
    }

    ctx->pc = 0x2facf8u;

    // 0x2facf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2facf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2facfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2facfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fad00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fad04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fad04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fad0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fad0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fad10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fad10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2fad14: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2FAD14u;
    SET_GPR_U32(ctx, 31, 0x2FAD1Cu);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FAD14u, 0x2FAD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD1Cu;
label_2fad1c:
    // 0x2fad1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad20: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x2fad20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x2fad24: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x2fad24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x2fad28: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2FAD28u;
    {
        const bool branch_taken_0x2fad28 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FAD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD28u;
        // 0x2fad2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad28) {
            ctx->pc = 0x2FADF8u;
            goto label_2fadf8;
        }
    }
    ctx->pc = 0x2FAD30u;
    // 0x2fad30: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2FAD30u;
    SET_GPR_U32(ctx, 31, 0x2FAD38u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FAD30u, 0x2FAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD38u;
label_2fad38:
    // 0x2fad38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fad38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad3c: 0xc0bef62  jal         func_2FBD88
    ctx->pc = 0x2FAD3Cu;
    SET_GPR_U32(ctx, 31, 0x2FAD44u);
    ctx->pc = 0x2FBD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD88u, 0x2FAD3Cu, 0x2FAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD44u;
label_2fad44:
    // 0x2fad44: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x2fad44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fad48: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2fad48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2fad4c: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x2fad4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x2fad50: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAD50u;
    {
        const bool branch_taken_0x2fad50 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2FAD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD50u;
        // 0x2fad54: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fad50) {
            ctx->pc = 0x2FAD68u;
            goto label_2fad68;
        }
    }
    ctx->pc = 0x2FAD58u;
    // 0x2fad58: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x2FAD58u;
    SET_GPR_U32(ctx, 31, 0x2FAD60u);
    ctx->pc = 0x2FAD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAD58u;
    // 0x2fad5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x2FAD58u, 0x2FAD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD60u;
label_2fad60:
    // 0x2fad60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FAD60u;
    {
        const bool branch_taken_0x2fad60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fad60) {
            ctx->pc = 0x2FAD80u;
            goto label_2fad80;
        }
    }
    ctx->pc = 0x2FAD68u;
label_2fad68:
    // 0x2fad68: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x2FAD68u;
    SET_GPR_U32(ctx, 31, 0x2FAD70u);
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x2FAD68u, 0x2FAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD70u;
label_2fad70:
    // 0x2fad70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2fad74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad78: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2FAD78u;
    SET_GPR_U32(ctx, 31, 0x2FAD80u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2FAD78u, 0x2FAD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD80u;
label_2fad80:
    // 0x2fad80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fad80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fad84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad88: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2FAD88u;
    SET_GPR_U32(ctx, 31, 0x2FAD90u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2FAD88u, 0x2FAD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAD90u;
label_2fad90:
    // 0x2fad90: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2fad90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fad94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fad98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fad9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fad9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fada0: 0xc0beed6  jal         func_2FBB58
    ctx->pc = 0x2FADA0u;
    SET_GPR_U32(ctx, 31, 0x2FADA8u);
    ctx->pc = 0x2FBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBB58u, 0x2FADA0u, 0x2FADA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADA8u;
label_2fada8:
    // 0x2fada8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fada8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fadac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fadacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fadb0: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FADB0u;
    {
        const bool branch_taken_0x2fadb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fadb0) {
            ctx->pc = 0x2FADE0u;
            goto label_2fade0;
        }
    }
    ctx->pc = 0x2FADB8u;
    // 0x2fadb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fadb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fadbc: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x2FADBCu;
    SET_GPR_U32(ctx, 31, 0x2FADC4u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x2FADBCu, 0x2FADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADC4u;
label_2fadc4:
    // 0x2fadc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fadc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fadc8: 0xc0bef62  jal         func_2FBD88
    ctx->pc = 0x2FADC8u;
    SET_GPR_U32(ctx, 31, 0x2FADD0u);
    ctx->pc = 0x2FBD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD88u, 0x2FADC8u, 0x2FADD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADD0u;
label_2fadd0:
    // 0x2fadd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fadd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fadd4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fadd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fadd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FADD8u;
    {
        const bool branch_taken_0x2fadd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FADD8u;
        // 0x2faddc: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fadd8) {
            ctx->pc = 0x2FADF4u;
            goto label_2fadf4;
        }
    }
    ctx->pc = 0x2FADE0u;
label_2fade0:
    // 0x2fade0: 0xc0bef62  jal         func_2FBD88
    ctx->pc = 0x2FADE0u;
    SET_GPR_U32(ctx, 31, 0x2FADE8u);
    ctx->pc = 0x2FBD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD88u, 0x2FADE0u, 0x2FADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FADE8u;
label_2fade8:
    // 0x2fade8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2fade8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2fadec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fadecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fadf0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x2fadf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_2fadf4:
    // 0x2fadf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fadf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fadf8:
    // 0x2fadf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fadf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fadfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fadfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fae00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fae00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fae04: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fae04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fae08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAE08u;
        // 0x2fae0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAE10u;
}
