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

// Function: sub_002FAC10
// Address: 0x2fac10 - 0x2facf8
void sub_002FAC10_0x2fac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAC10_0x2fac10");
#endif

    switch (ctx->pc) {
        case 0x2fac6cu: goto label_2fac6c;
        case 0x2fac7cu: goto label_2fac7c;
        case 0x2fac94u: goto label_2fac94;
        case 0x2faca8u: goto label_2faca8;
        case 0x2facc4u: goto label_2facc4;
        case 0x2facd4u: goto label_2facd4;
        case 0x2face0u: goto label_2face0;
        default: break;
    }

    ctx->pc = 0x2fac10u;

    // 0x2fac10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fac14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fac18: 0x212fa  dsrl        $v0, $v0, 11
    ctx->pc = 0x2fac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 11);
    // 0x2fac1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fac1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fac20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fac20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac24: 0x222102d  daddu       $v0, $s1, $v0
    ctx->pc = 0x2fac24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2fac28: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2fac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fac2c: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x2fac2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
    // 0x2fac30: 0x31aba  dsrl        $v1, $v1, 10
    ctx->pc = 0x2fac30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 10);
    // 0x2fac34: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2fac34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2fac38: 0x322207ff  andi        $v0, $s1, 0x7FF
    ctx->pc = 0x2fac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2047);
    // 0x2fac3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fac40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fac44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FAC44u;
    {
        const bool branch_taken_0x2fac44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC44u;
        // 0x2fac48: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac44) {
            ctx->pc = 0x2FAC58u;
            goto label_2fac58;
        }
    }
    ctx->pc = 0x2FAC4Cu;
    // 0x2fac4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAC4Cu;
    {
        const bool branch_taken_0x2fac4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC4Cu;
        // 0x2fac50: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac4c) {
            ctx->pc = 0x2FAC58u;
            goto label_2fac58;
        }
    }
    ctx->pc = 0x2FAC54u;
    // 0x2fac54: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2fac54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2fac58:
    // 0x2fac58: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x2fac58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x2fac5c: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x2fac5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x2fac60: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x2fac60u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2fac64: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2FAC64u;
    SET_GPR_U32(ctx, 31, 0x2FAC6Cu);
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2FAC64u, 0x2FAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC6Cu;
label_2fac6c:
    // 0x2fac6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fac6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fac70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac74: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2FAC74u;
    SET_GPR_U32(ctx, 31, 0x2FAC7Cu);
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FAC74u, 0x2FAC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC7Cu;
label_2fac7c:
    // 0x2fac7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fac7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac80: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2fac80u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2fac84: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2fac84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2fac88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fac88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fac8c: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x2FAC8Cu;
    SET_GPR_U32(ctx, 31, 0x2FAC94u);
    ctx->pc = 0x2FAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC8Cu;
    // 0x2fac90: 0x2308024  and         $s0, $s1, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x2FAC8Cu, 0x2FAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC94u;
label_2fac94:
    // 0x2fac94: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2fac94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2fac98: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2fac98u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2fac9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fac9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faca0: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x2FACA0u;
    SET_GPR_U32(ctx, 31, 0x2FACA8u);
    ctx->pc = 0x2FACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACA0u;
    // 0x2faca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x2FACA0u, 0x2FACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACA8u;
label_2faca8:
    // 0x2faca8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x2faca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x2facac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x2facacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x2facb0: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FACB0u;
    {
        const bool branch_taken_0x2facb0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2facb0) {
            ctx->pc = 0x2FACC4u;
            goto label_2facc4;
        }
    }
    ctx->pc = 0x2FACB8u;
    // 0x2facb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2facb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2facbc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2FACBCu;
    SET_GPR_U32(ctx, 31, 0x2FACC4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2FACBCu, 0x2FACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACC4u;
label_2facc4:
    // 0x2facc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2facc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2facc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2facc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faccc: 0xc0bed6c  jal         func_2FB5B0
    ctx->pc = 0x2FACCCu;
    SET_GPR_U32(ctx, 31, 0x2FACD4u);
    ctx->pc = 0x2FB5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB5B0u, 0x2FACCCu, 0x2FACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACD4u;
label_2facd4:
    // 0x2facd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2facd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2facd8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2FACD8u;
    SET_GPR_U32(ctx, 31, 0x2FACE0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2FACD8u, 0x2FACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACE0u;
label_2face0:
    // 0x2face0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2face0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2face4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2face4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2face8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2face8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2facec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2facecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2facf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACF0u;
        // 0x2facf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FACF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FACF8u;
}
