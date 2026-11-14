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

// Function: sub_0022CB50
// Address: 0x22cb50 - 0x22cea0
void sub_0022CB50_0x22cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022CB50_0x22cb50");
#endif

    switch (ctx->pc) {
        case 0x22cb90u: goto label_22cb90;
        case 0x22cba4u: goto label_22cba4;
        case 0x22cbb8u: goto label_22cbb8;
        case 0x22cbccu: goto label_22cbcc;
        case 0x22cbdcu: goto label_22cbdc;
        case 0x22cbfcu: goto label_22cbfc;
        case 0x22cc28u: goto label_22cc28;
        case 0x22cc78u: goto label_22cc78;
        case 0x22cc8cu: goto label_22cc8c;
        case 0x22cc98u: goto label_22cc98;
        case 0x22ccd0u: goto label_22ccd0;
        case 0x22cce0u: goto label_22cce0;
        case 0x22cd00u: goto label_22cd00;
        case 0x22cd0cu: goto label_22cd0c;
        case 0x22cd28u: goto label_22cd28;
        case 0x22cd40u: goto label_22cd40;
        case 0x22cd50u: goto label_22cd50;
        case 0x22cd5cu: goto label_22cd5c;
        case 0x22cd70u: goto label_22cd70;
        case 0x22cd84u: goto label_22cd84;
        case 0x22cd9cu: goto label_22cd9c;
        case 0x22cdacu: goto label_22cdac;
        case 0x22cdb8u: goto label_22cdb8;
        case 0x22cdf0u: goto label_22cdf0;
        case 0x22ce00u: goto label_22ce00;
        case 0x22ce20u: goto label_22ce20;
        case 0x22ce2cu: goto label_22ce2c;
        case 0x22ce44u: goto label_22ce44;
        case 0x22ce5cu: goto label_22ce5c;
        case 0x22ce68u: goto label_22ce68;
        default: break;
    }

    ctx->pc = 0x22cb50u;

    // 0x22cb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22cb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cb58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22cb5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x22cb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x22cb60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cb64: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22CB64u;
    {
        const bool branch_taken_0x22cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cb64) {
            ctx->pc = 0x22CBFCu;
            goto label_22cbfc;
        }
    }
    ctx->pc = 0x22CB6Cu;
    // 0x22cb6c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x22cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x22cb70: 0x24635350  addiu       $v1, $v1, 0x5350
    ctx->pc = 0x22cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21328));
    // 0x22cb74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cb78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22cb78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22cb7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cb80: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x22cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x22cb84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22cb84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cb88: 0xc08af18  jal         func_22BC60
    ctx->pc = 0x22CB88u;
    SET_GPR_U32(ctx, 31, 0x22CB90u);
    ctx->pc = 0x22BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BC60u, 0x22CB88u, 0x22CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CB90u;
label_22cb90:
    // 0x22cb90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cb94: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x22cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22cb98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22cb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cb9c: 0xc08afa0  jal         func_22BE80
    ctx->pc = 0x22CB9Cu;
    SET_GPR_U32(ctx, 31, 0x22CBA4u);
    ctx->pc = 0x22BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BE80u, 0x22CB9Cu, 0x22CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBA4u;
label_22cba4:
    // 0x22cba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cba8: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x22cbac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cbb0: 0xc08b03c  jal         func_22C0F0
    ctx->pc = 0x22CBB0u;
    SET_GPR_U32(ctx, 31, 0x22CBB8u);
    ctx->pc = 0x22C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C0F0u, 0x22CBB0u, 0x22CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBB8u;
label_22cbb8:
    // 0x22cbb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cbbc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x22cbc0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cbc4: 0xc08b0d8  jal         func_22C360
    ctx->pc = 0x22CBC4u;
    SET_GPR_U32(ctx, 31, 0x22CBCCu);
    ctx->pc = 0x22C360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C360u, 0x22CBC4u, 0x22CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBCCu;
label_22cbcc:
    // 0x22cbcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cbd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cbd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cbd4: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x22CBD4u;
    SET_GPR_U32(ctx, 31, 0x22CBDCu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x22CBD4u, 0x22CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBDCu;
label_22cbdc:
    // 0x22cbdc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x22cbdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22cbe0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x22cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x22cbe4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x22cbe4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22cbe8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22CBE8u;
    {
        const bool branch_taken_0x22cbe8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22cbe8) {
            ctx->pc = 0x22CBFCu;
            goto label_22cbfc;
        }
    }
    ctx->pc = 0x22CBF0u;
    // 0x22cbf0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cbf4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x22CBF4u;
    SET_GPR_U32(ctx, 31, 0x22CBFCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x22CBF4u, 0x22CBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CBFCu;
label_22cbfc:
    // 0x22cbfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cc00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cc04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22cc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22cc08: 0x3e00008  jr          $ra
    ctx->pc = 0x22CC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CC10u;
    // 0x22cc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22cc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22cc18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22cc1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22cc20: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x22CC20u;
    SET_GPR_U32(ctx, 31, 0x22CC28u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x22CC20u, 0x22CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC28u;
label_22cc28:
    // 0x22cc28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22cc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22cc2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22cc2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22cc30: 0x3e00008  jr          $ra
    ctx->pc = 0x22CC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CC30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CC38u;
    // 0x22cc38: 0x0  nop
    ctx->pc = 0x22cc38u;
    // NOP
    // 0x22cc3c: 0x0  nop
    ctx->pc = 0x22cc3cu;
    // NOP
    // 0x22cc40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x22cc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x22cc44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22cc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x22cc48: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22cc4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22cc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x22cc50: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22cc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x22cc54: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22cc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22cc58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22cc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22cc5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22cc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22cc60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22cc64: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x22cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x22cc68: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22cc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cc6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x22cc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22cc70: 0xc08c910  jal         func_232440
    ctx->pc = 0x22CC70u;
    SET_GPR_U32(ctx, 31, 0x22CC78u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x22CC70u, 0x22CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC78u;
label_22cc78:
    // 0x22cc78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x22cc78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc7c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cc80: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22cc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x22cc84: 0xc08b51c  jal         func_22D470
    ctx->pc = 0x22CC84u;
    SET_GPR_U32(ctx, 31, 0x22CC8Cu);
    ctx->pc = 0x22D470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D470u, 0x22CC84u, 0x22CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CC8Cu;
label_22cc8c:
    // 0x22cc8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22cc8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc90: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x22CC90u;
    {
        const bool branch_taken_0x22cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cc90) {
            ctx->pc = 0x22CD18u;
            goto label_22cd18;
        }
    }
    ctx->pc = 0x22CC98u;
label_22cc98:
    // 0x22cc98: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22cc98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cc9c: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x22cc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cca0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22cca4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x22cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22cca8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22CCA8u;
    {
        const bool branch_taken_0x22cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cca8) {
            ctx->pc = 0x22CCE8u;
            goto label_22cce8;
        }
    }
    ctx->pc = 0x22CCB0u;
    // 0x22ccb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ccb4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x22ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22ccb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22CCB8u;
    {
        const bool branch_taken_0x22ccb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ccb8) {
            ctx->pc = 0x22CCE8u;
            goto label_22cce8;
        }
    }
    ctx->pc = 0x22CCC0u;
    // 0x22ccc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ccc4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x22ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22ccc8: 0xc04e87c  jal         func_13A1F0
    ctx->pc = 0x22CCC8u;
    SET_GPR_U32(ctx, 31, 0x22CCD0u);
    ctx->pc = 0x13A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1F0u, 0x22CCC8u, 0x22CCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCD0u;
label_22ccd0:
    // 0x22ccd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ccd4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x22ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22ccd8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x22CCD8u;
    SET_GPR_U32(ctx, 31, 0x22CCE0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22CCD8u, 0x22CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CCE0u;
label_22cce0:
    // 0x22cce0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22cce4: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x22cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_22cce8:
    // 0x22cce8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ccec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CCECu;
    {
        const bool branch_taken_0x22ccec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ccec) {
            ctx->pc = 0x22CD10u;
            goto label_22cd10;
        }
    }
    ctx->pc = 0x22CCF4u;
    // 0x22ccf4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22ccf8: 0xc04e888  jal         func_13A220
    ctx->pc = 0x22CCF8u;
    SET_GPR_U32(ctx, 31, 0x22CD00u);
    ctx->pc = 0x13A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A220u, 0x22CCF8u, 0x22CD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD00u;
label_22cd00:
    // 0x22cd00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22cd04: 0xc119c5c  jal         func_467170
    ctx->pc = 0x22CD04u;
    SET_GPR_U32(ctx, 31, 0x22CD0Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22CD04u, 0x22CD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD0Cu;
label_22cd0c:
    // 0x22cd0c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_22cd10:
    // 0x22cd10: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x22cd10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x22cd14: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x22cd14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_22cd18:
    // 0x22cd18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22cd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cd1c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x22cd20: 0xc08b514  jal         func_22D450
    ctx->pc = 0x22CD20u;
    SET_GPR_U32(ctx, 31, 0x22CD28u);
    ctx->pc = 0x22D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D450u, 0x22CD20u, 0x22CD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD28u;
label_22cd28:
    // 0x22cd28: 0x1682ffdb  bne         $s4, $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x22CD28u;
    {
        const bool branch_taken_0x22cd28 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x22cd28) {
            ctx->pc = 0x22CC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cc98;
        }
    }
    ctx->pc = 0x22CD30u;
    // 0x22cd30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22cd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cd34: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x22cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x22cd38: 0xc08b498  jal         func_22D260
    ctx->pc = 0x22CD38u;
    SET_GPR_U32(ctx, 31, 0x22CD40u);
    ctx->pc = 0x22D260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D260u, 0x22CD38u, 0x22CD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD40u;
label_22cd40:
    // 0x22cd40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cd44: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x22cd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x22cd48: 0xc08b490  jal         func_22D240
    ctx->pc = 0x22CD48u;
    SET_GPR_U32(ctx, 31, 0x22CD50u);
    ctx->pc = 0x22D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D240u, 0x22CD48u, 0x22CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD50u;
label_22cd50:
    // 0x22cd50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22cd50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22CD54u;
    {
        const bool branch_taken_0x22cd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cd54) {
            ctx->pc = 0x22CD74u;
            goto label_22cd74;
        }
    }
    ctx->pc = 0x22CD5Cu;
label_22cd5c:
    // 0x22cd5c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22cd5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd60: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x22cd60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22cd64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22cd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cd68: 0xc11c254  jal         func_470950
    ctx->pc = 0x22CD68u;
    SET_GPR_U32(ctx, 31, 0x22CD70u);
    ctx->pc = 0x470950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470950u, 0x22CD68u, 0x22CD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD70u;
label_22cd70:
    // 0x22cd70: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22cd70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_22cd74:
    // 0x22cd74: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cd78: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x22cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x22cd7c: 0xc08b488  jal         func_22D220
    ctx->pc = 0x22CD7Cu;
    SET_GPR_U32(ctx, 31, 0x22CD84u);
    ctx->pc = 0x22D220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D220u, 0x22CD7Cu, 0x22CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD84u;
label_22cd84:
    // 0x22cd84: 0x1642fff5  bne         $s2, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22CD84u;
    {
        const bool branch_taken_0x22cd84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x22cd84) {
            ctx->pc = 0x22CD5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cd5c;
        }
    }
    ctx->pc = 0x22CD8Cu;
    // 0x22cd8c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22cd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cd90: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x22cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x22cd94: 0xc08b444  jal         func_22D110
    ctx->pc = 0x22CD94u;
    SET_GPR_U32(ctx, 31, 0x22CD9Cu);
    ctx->pc = 0x22D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D110u, 0x22CD94u, 0x22CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CD9Cu;
label_22cd9c:
    // 0x22cd9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22cda0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x22cda4: 0xc08b43c  jal         func_22D0F0
    ctx->pc = 0x22CDA4u;
    SET_GPR_U32(ctx, 31, 0x22CDACu);
    ctx->pc = 0x22D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D0F0u, 0x22CDA4u, 0x22CDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDACu;
label_22cdac:
    // 0x22cdac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22cdacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdb0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x22CDB0u;
    {
        const bool branch_taken_0x22cdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cdb0) {
            ctx->pc = 0x22CE34u;
            goto label_22ce34;
        }
    }
    ctx->pc = 0x22CDB8u;
label_22cdb8:
    // 0x22cdb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22cdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdbc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x22cdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22cdc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cdc4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x22cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22cdc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22CDC8u;
    {
        const bool branch_taken_0x22cdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cdc8) {
            ctx->pc = 0x22CE08u;
            goto label_22ce08;
        }
    }
    ctx->pc = 0x22CDD0u;
    // 0x22cdd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cdd4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x22cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22cdd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22CDD8u;
    {
        const bool branch_taken_0x22cdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22cdd8) {
            ctx->pc = 0x22CE08u;
            goto label_22ce08;
        }
    }
    ctx->pc = 0x22CDE0u;
    // 0x22cde0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cde4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x22cde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22cde8: 0xc04e87c  jal         func_13A1F0
    ctx->pc = 0x22CDE8u;
    SET_GPR_U32(ctx, 31, 0x22CDF0u);
    ctx->pc = 0x13A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1F0u, 0x22CDE8u, 0x22CDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CDF0u;
label_22cdf0:
    // 0x22cdf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22cdf4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x22cdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x22cdf8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x22CDF8u;
    SET_GPR_U32(ctx, 31, 0x22CE00u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22CDF8u, 0x22CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE00u;
label_22ce00:
    // 0x22ce00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22ce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ce04: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x22ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_22ce08:
    // 0x22ce08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ce0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22CE0Cu;
    {
        const bool branch_taken_0x22ce0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ce0c) {
            ctx->pc = 0x22CE30u;
            goto label_22ce30;
        }
    }
    ctx->pc = 0x22CE14u;
    // 0x22ce14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ce18: 0xc08b42c  jal         func_22D0B0
    ctx->pc = 0x22CE18u;
    SET_GPR_U32(ctx, 31, 0x22CE20u);
    ctx->pc = 0x22D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D0B0u, 0x22CE18u, 0x22CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE20u;
label_22ce20:
    // 0x22ce20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ce24: 0xc119c5c  jal         func_467170
    ctx->pc = 0x22CE24u;
    SET_GPR_U32(ctx, 31, 0x22CE2Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x22CE24u, 0x22CE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE2Cu;
label_22ce2c:
    // 0x22ce2c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x22ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_22ce30:
    // 0x22ce30: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x22ce30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_22ce34:
    // 0x22ce34: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ce38: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x22ce3c: 0xc08b424  jal         func_22D090
    ctx->pc = 0x22CE3Cu;
    SET_GPR_U32(ctx, 31, 0x22CE44u);
    ctx->pc = 0x22D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D090u, 0x22CE3Cu, 0x22CE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE44u;
label_22ce44:
    // 0x22ce44: 0x1662ffdc  bne         $s3, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x22CE44u;
    {
        const bool branch_taken_0x22ce44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x22ce44) {
            ctx->pc = 0x22CDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22cdb8;
        }
    }
    ctx->pc = 0x22CE4Cu;
    // 0x22ce4c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x22ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ce50: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x22ce50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x22ce54: 0xc08b3a8  jal         func_22CEA0
    ctx->pc = 0x22CE54u;
    SET_GPR_U32(ctx, 31, 0x22CE5Cu);
    ctx->pc = 0x22CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEA0u, 0x22CE54u, 0x22CE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE5Cu;
label_22ce5c:
    // 0x22ce5c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22ce5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ce60: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x22CE60u;
    SET_GPR_U32(ctx, 31, 0x22CE68u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x22CE60u, 0x22CE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CE68u;
label_22ce68:
    // 0x22ce68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22ce68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ce6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22ce6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ce70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22ce70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ce74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22ce74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ce78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22ce78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ce7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22ce7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ce80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ce80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ce84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ce84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ce88: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x22ce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22ce8c: 0x3e00008  jr          $ra
    ctx->pc = 0x22CE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22CE94u;
    // 0x22ce94: 0x0  nop
    ctx->pc = 0x22ce94u;
    // NOP
    // 0x22ce98: 0x0  nop
    ctx->pc = 0x22ce98u;
    // NOP
    // 0x22ce9c: 0x0  nop
    ctx->pc = 0x22ce9cu;
    // NOP
    ctx->pc = 0x22cea0u;
}
