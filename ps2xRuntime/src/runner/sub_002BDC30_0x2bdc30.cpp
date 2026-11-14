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

// Function: sub_002BDC30
// Address: 0x2bdc30 - 0x2bdd50
void sub_002BDC30_0x2bdc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDC30_0x2bdc30");
#endif

    switch (ctx->pc) {
        case 0x2bdca0u: goto label_2bdca0;
        case 0x2bdcb0u: goto label_2bdcb0;
        case 0x2bdcccu: goto label_2bdccc;
        case 0x2bdce0u: goto label_2bdce0;
        case 0x2bdcf4u: goto label_2bdcf4;
        case 0x2bdd08u: goto label_2bdd08;
        case 0x2bdd18u: goto label_2bdd18;
        case 0x2bdd38u: goto label_2bdd38;
        default: break;
    }

    ctx->pc = 0x2bdc30u;

    // 0x2bdc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bdc34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2bdc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2bdc38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2bdc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdc3c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2bdc3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bdc40: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDC48u;
    // 0x2bdc48: 0x0  nop
    ctx->pc = 0x2bdc48u;
    // NOP
    // 0x2bdc4c: 0x0  nop
    ctx->pc = 0x2bdc4cu;
    // NOP
    // 0x2bdc50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bdc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bdc54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bdc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bdc58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bdc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bdc5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2bdc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bdc60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdc64: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2BDC64u;
    {
        const bool branch_taken_0x2bdc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc64) {
            ctx->pc = 0x2BDD38u;
            goto label_2bdd38;
        }
    }
    ctx->pc = 0x2BDC6Cu;
    // 0x2bdc6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2bdc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2bdc70: 0x246367a0  addiu       $v1, $v1, 0x67A0
    ctx->pc = 0x2bdc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26528));
    // 0x2bdc74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdc78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2bdc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2bdc7c: 0xaf80bcb0  sw          $zero, -0x4350($gp)
    ctx->pc = 0x2bdc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950064), GPR_U32(ctx, 0));
    // 0x2bdc80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdc84: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x2bdc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2bdc88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BDC88u;
    {
        const bool branch_taken_0x2bdc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc88) {
            ctx->pc = 0x2BDCB8u;
            goto label_2bdcb8;
        }
    }
    ctx->pc = 0x2BDC90u;
    // 0x2bdc90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdc94: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2bdc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2bdc98: 0xc0962ac  jal         func_258AB0
    ctx->pc = 0x2BDC98u;
    SET_GPR_U32(ctx, 31, 0x2BDCA0u);
    ctx->pc = 0x258AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AB0u, 0x2BDC98u, 0x2BDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCA0u;
label_2bdca0:
    // 0x2bdca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdca4: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x2bdca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x2bdca8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2BDCA8u;
    SET_GPR_U32(ctx, 31, 0x2BDCB0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2BDCA8u, 0x2BDCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCB0u;
label_2bdcb0:
    // 0x2bdcb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdcb4: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x2bdcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
label_2bdcb8:
    // 0x2bdcb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdcbc: 0x244400a0  addiu       $a0, $v0, 0xA0
    ctx->pc = 0x2bdcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x2bdcc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bdcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bdcc4: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2BDCC4u;
    SET_GPR_U32(ctx, 31, 0x2BDCCCu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2BDCC4u, 0x2BDCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCCCu;
label_2bdccc:
    // 0x2bdccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdcd0: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2bdcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2bdcd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bdcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bdcd8: 0xc06877c  jal         func_1A1DF0
    ctx->pc = 0x2BDCD8u;
    SET_GPR_U32(ctx, 31, 0x2BDCE0u);
    ctx->pc = 0x1A1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DF0u, 0x2BDCD8u, 0x2BDCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCE0u;
label_2bdce0:
    // 0x2bdce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdce4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x2bdce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x2bdce8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bdce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bdcec: 0xc0af628  jal         func_2BD8A0
    ctx->pc = 0x2BDCECu;
    SET_GPR_U32(ctx, 31, 0x2BDCF4u);
    ctx->pc = 0x2BD8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD8A0u, 0x2BDCECu, 0x2BDCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDCF4u;
label_2bdcf4:
    // 0x2bdcf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdcf8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2bdcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2bdcfc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bdcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bdd00: 0xc058c38  jal         func_1630E0
    ctx->pc = 0x2BDD00u;
    SET_GPR_U32(ctx, 31, 0x2BDD08u);
    ctx->pc = 0x1630E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1630E0u, 0x2BDD00u, 0x2BDD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD08u;
label_2bdd08:
    // 0x2bdd08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bdd08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdd0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bdd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdd10: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x2BDD10u;
    SET_GPR_U32(ctx, 31, 0x2BDD18u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x2BDD10u, 0x2BDD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD18u;
label_2bdd18:
    // 0x2bdd18: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2bdd18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bdd1c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bdd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bdd20: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bdd20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bdd24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BDD24u;
    {
        const bool branch_taken_0x2bdd24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bdd24) {
            ctx->pc = 0x2BDD38u;
            goto label_2bdd38;
        }
    }
    ctx->pc = 0x2BDD2Cu;
    // 0x2bdd2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bdd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdd30: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BDD30u;
    SET_GPR_U32(ctx, 31, 0x2BDD38u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BDD30u, 0x2BDD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDD38u;
label_2bdd38:
    // 0x2bdd38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bdd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bdd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bdd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bdd40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bdd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bdd44: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDD4Cu;
    // 0x2bdd4c: 0x0  nop
    ctx->pc = 0x2bdd4cu;
    // NOP
    ctx->pc = 0x2bdd50u;
}
