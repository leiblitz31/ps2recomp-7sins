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

// Function: sub_002FAB68
// Address: 0x2fab68 - 0x2fac10
void sub_002FAB68_0x2fab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAB68_0x2fab68");
#endif

    switch (ctx->pc) {
        case 0x2fab90u: goto label_2fab90;
        case 0x2faba0u: goto label_2faba0;
        case 0x2fabb0u: goto label_2fabb0;
        case 0x2fabd0u: goto label_2fabd0;
        case 0x2fabecu: goto label_2fabec;
        case 0x2fabfcu: goto label_2fabfc;
        default: break;
    }

    ctx->pc = 0x2fab68u;

    // 0x2fab68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fab6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fab70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fab70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fab78: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x2fab78u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2fab7c: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x2fab7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x2fab80: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x2fab80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x2fab84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fab88: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2FAB88u;
    SET_GPR_U32(ctx, 31, 0x2FAB90u);
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2FAB88u, 0x2FAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB90u;
label_2fab90:
    // 0x2fab90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fab98: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2FAB98u;
    SET_GPR_U32(ctx, 31, 0x2FABA0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FAB98u, 0x2FABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABA0u;
label_2faba0:
    // 0x2faba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2faba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2faba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faba8: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2FABA8u;
    SET_GPR_U32(ctx, 31, 0x2FABB0u);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FABA8u, 0x2FABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABB0u;
label_2fabb0:
    // 0x2fabb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fabb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fabb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2fabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2fabb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2fabb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2fabbc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2fabbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2fabc0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2fabc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2fabc4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2fabc4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2fabc8: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2FABC8u;
    SET_GPR_U32(ctx, 31, 0x2FABD0u);
    ctx->pc = 0x2FABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABC8u;
    // 0x2fabcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2FABC8u, 0x2FABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABD0u;
label_2fabd0:
    // 0x2fabd0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2fabd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2fabd4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2fabd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2fabd8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FABD8u;
    {
        const bool branch_taken_0x2fabd8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2fabd8) {
            ctx->pc = 0x2FABECu;
            goto label_2fabec;
        }
    }
    ctx->pc = 0x2FABE0u;
    // 0x2fabe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fabe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fabe4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2FABE4u;
    SET_GPR_U32(ctx, 31, 0x2FABECu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2FABE4u, 0x2FABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABECu;
label_2fabec:
    // 0x2fabec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fabecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fabf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fabf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fabf4: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2FABF4u;
    SET_GPR_U32(ctx, 31, 0x2FABFCu);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2FABF4u, 0x2FABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABFCu;
label_2fabfc:
    // 0x2fabfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fabfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fac00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fac00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fac04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fac04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fac08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC08u;
        // 0x2fac0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAC10u;
}
