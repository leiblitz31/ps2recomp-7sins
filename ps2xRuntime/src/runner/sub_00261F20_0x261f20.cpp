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

// Function: sub_00261F20
// Address: 0x261f20 - 0x262420
void sub_00261F20_0x261f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261F20_0x261f20");
#endif

    switch (ctx->pc) {
        case 0x261f60u: goto label_261f60;
        case 0x261f74u: goto label_261f74;
        case 0x261f88u: goto label_261f88;
        case 0x261f9cu: goto label_261f9c;
        case 0x261facu: goto label_261fac;
        case 0x261fccu: goto label_261fcc;
        case 0x261ffcu: goto label_261ffc;
        case 0x26203cu: goto label_26203c;
        case 0x262050u: goto label_262050;
        case 0x262080u: goto label_262080;
        case 0x2620b0u: goto label_2620b0;
        case 0x2620e0u: goto label_2620e0;
        case 0x262110u: goto label_262110;
        case 0x262140u: goto label_262140;
        case 0x262170u: goto label_262170;
        case 0x2621a0u: goto label_2621a0;
        case 0x2621d0u: goto label_2621d0;
        case 0x2621dcu: goto label_2621dc;
        case 0x2621ecu: goto label_2621ec;
        case 0x2621fcu: goto label_2621fc;
        case 0x26220cu: goto label_26220c;
        case 0x26221cu: goto label_26221c;
        case 0x26223cu: goto label_26223c;
        case 0x262270u: goto label_262270;
        case 0x2622a4u: goto label_2622a4;
        case 0x2622d8u: goto label_2622d8;
        case 0x26230cu: goto label_26230c;
        case 0x262340u: goto label_262340;
        case 0x262374u: goto label_262374;
        case 0x2623a8u: goto label_2623a8;
        case 0x2623dcu: goto label_2623dc;
        default: break;
    }

    ctx->pc = 0x261f20u;

    // 0x261f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261f2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x261f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x261f30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261f34: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x261F34u;
    {
        const bool branch_taken_0x261f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261f34) {
            ctx->pc = 0x261FCCu;
            goto label_261fcc;
        }
    }
    ctx->pc = 0x261F3Cu;
    // 0x261f3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x261f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x261f40: 0x246359c0  addiu       $v1, $v1, 0x59C0
    ctx->pc = 0x261f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22976));
    // 0x261f44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261f48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x261f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x261f4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261f50: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x261f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x261f54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x261f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261f58: 0xc0986e8  jal         func_261BA0
    ctx->pc = 0x261F58u;
    SET_GPR_U32(ctx, 31, 0x261F60u);
    ctx->pc = 0x261BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261BA0u, 0x261F58u, 0x261F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F60u;
label_261f60:
    // 0x261f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261f64: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x261f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x261f68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x261f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261f6c: 0xc0986e8  jal         func_261BA0
    ctx->pc = 0x261F6Cu;
    SET_GPR_U32(ctx, 31, 0x261F74u);
    ctx->pc = 0x261BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261BA0u, 0x261F6Cu, 0x261F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F74u;
label_261f74:
    // 0x261f74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261f78: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x261f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x261f7c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x261f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261f80: 0xc045280  jal         func_114A00
    ctx->pc = 0x261F80u;
    SET_GPR_U32(ctx, 31, 0x261F88u);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x261F80u, 0x261F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F88u;
label_261f88:
    // 0x261f88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261f8c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x261f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x261f90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x261f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261f94: 0xc045280  jal         func_114A00
    ctx->pc = 0x261F94u;
    SET_GPR_U32(ctx, 31, 0x261F9Cu);
    ctx->pc = 0x114A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114A00u, 0x261F94u, 0x261F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261F9Cu;
label_261f9c:
    // 0x261f9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261fa4: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x261FA4u;
    SET_GPR_U32(ctx, 31, 0x261FACu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x261FA4u, 0x261FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FACu;
label_261fac:
    // 0x261fac: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x261facu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261fb0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x261fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x261fb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x261fb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x261fb8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261FB8u;
    {
        const bool branch_taken_0x261fb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x261fb8) {
            ctx->pc = 0x261FCCu;
            goto label_261fcc;
        }
    }
    ctx->pc = 0x261FC0u;
    // 0x261fc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261fc4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x261FC4u;
    SET_GPR_U32(ctx, 31, 0x261FCCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x261FC4u, 0x261FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FCCu;
label_261fcc:
    // 0x261fcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261fd4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x261FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261FE0u;
    // 0x261fe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x261fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x261fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x261fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x261fec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x261fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x261ff0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x261ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261ff4: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x261FF4u;
    SET_GPR_U32(ctx, 31, 0x261FFCu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x261FF4u, 0x261FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261FFCu;
label_261ffc:
    // 0x261ffc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x261ffcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x262000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26200c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x26200cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x262010: 0x3e00008  jr          $ra
    ctx->pc = 0x262010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262018u;
    // 0x262018: 0x0  nop
    ctx->pc = 0x262018u;
    // NOP
    // 0x26201c: 0x0  nop
    ctx->pc = 0x26201cu;
    // NOP
    // 0x262020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x262024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x262024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x262028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x262028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26202c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x262030: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x262030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x262034: 0xc122430  jal         func_4890C0
    ctx->pc = 0x262034u;
    SET_GPR_U32(ctx, 31, 0x26203Cu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x262034u, 0x26203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26203Cu;
label_26203c:
    // 0x26203c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26203cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262044: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x262044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x262048: 0xc12089c  jal         func_482270
    ctx->pc = 0x262048u;
    SET_GPR_U32(ctx, 31, 0x262050u);
    ctx->pc = 0x482270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482270u, 0x262048u, 0x262050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262050u;
label_262050:
    // 0x262050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262054: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262058: 0x24a5c830  addiu       $a1, $a1, -0x37D0
    ctx->pc = 0x262058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953008));
    // 0x26205c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26205cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262060: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x262060u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x262064: 0x24e7c858  addiu       $a3, $a3, -0x37A8
    ctx->pc = 0x262064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953048));
    // 0x262068: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26206c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26206cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262070: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x262070u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262074: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262074u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262078: 0xc120c08  jal         func_483020
    ctx->pc = 0x262078u;
    SET_GPR_U32(ctx, 31, 0x262080u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x262078u, 0x262080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262080u;
label_262080:
    // 0x262080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262084: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262088: 0x24a5c870  addiu       $a1, $a1, -0x3790
    ctx->pc = 0x262088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953072));
    // 0x26208c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26208cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262090: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x262090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x262094: 0x24e7c898  addiu       $a3, $a3, -0x3768
    ctx->pc = 0x262094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953112));
    // 0x262098: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26209c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26209cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2620a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2620a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620a8: 0xc120c08  jal         func_483020
    ctx->pc = 0x2620A8u;
    SET_GPR_U32(ctx, 31, 0x2620B0u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x2620A8u, 0x2620B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2620B0u;
label_2620b0:
    // 0x2620b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2620b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620b4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2620b8: 0x24a5c8b0  addiu       $a1, $a1, -0x3750
    ctx->pc = 0x2620b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953136));
    // 0x2620bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2620bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620c0: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x2620c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x2620c4: 0x24e7c8d8  addiu       $a3, $a3, -0x3728
    ctx->pc = 0x2620c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953176));
    // 0x2620c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2620c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2620ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2620d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620d4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2620d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620d8: 0xc120c08  jal         func_483020
    ctx->pc = 0x2620D8u;
    SET_GPR_U32(ctx, 31, 0x2620E0u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x2620D8u, 0x2620E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2620E0u;
label_2620e0:
    // 0x2620e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2620e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620e4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2620e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2620e8: 0x24a5c8f0  addiu       $a1, $a1, -0x3710
    ctx->pc = 0x2620e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953200));
    // 0x2620ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2620ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620f0: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x2620f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x2620f4: 0x24e7c918  addiu       $a3, $a3, -0x36E8
    ctx->pc = 0x2620f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953240));
    // 0x2620f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2620f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2620fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x262100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262104: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262104u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262108: 0xc120c08  jal         func_483020
    ctx->pc = 0x262108u;
    SET_GPR_U32(ctx, 31, 0x262110u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x262108u, 0x262110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262110u;
label_262110:
    // 0x262110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262114: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262118: 0x24a5c930  addiu       $a1, $a1, -0x36D0
    ctx->pc = 0x262118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953264));
    // 0x26211c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26211cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262120: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x262120u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x262124: 0x24e7c958  addiu       $a3, $a3, -0x36A8
    ctx->pc = 0x262124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953304));
    // 0x262128: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262128u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26212c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26212cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262130: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x262130u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262134: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262134u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262138: 0xc120c08  jal         func_483020
    ctx->pc = 0x262138u;
    SET_GPR_U32(ctx, 31, 0x262140u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x262138u, 0x262140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262140u;
label_262140:
    // 0x262140: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262144: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262148: 0x24a5c970  addiu       $a1, $a1, -0x3690
    ctx->pc = 0x262148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953328));
    // 0x26214c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26214cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262150: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x262154: 0x24e7c998  addiu       $a3, $a3, -0x3668
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953368));
    // 0x262158: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26215c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26215cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262160: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x262160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262164: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262164u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262168: 0xc120c08  jal         func_483020
    ctx->pc = 0x262168u;
    SET_GPR_U32(ctx, 31, 0x262170u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x262168u, 0x262170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262170u;
label_262170:
    // 0x262170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262174: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262178: 0x24a5c9b0  addiu       $a1, $a1, -0x3650
    ctx->pc = 0x262178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953392));
    // 0x26217c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26217cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262180: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x262180u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x262184: 0x24e7c9d8  addiu       $a3, $a3, -0x3628
    ctx->pc = 0x262184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953432));
    // 0x262188: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x262188u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26218c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26218cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262190: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x262190u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262194: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x262194u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262198: 0xc120c08  jal         func_483020
    ctx->pc = 0x262198u;
    SET_GPR_U32(ctx, 31, 0x2621A0u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x262198u, 0x2621A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621A0u;
label_2621a0:
    // 0x2621a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2621a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2621a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2621a8: 0x24a5c9f0  addiu       $a1, $a1, -0x3610
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953456));
    // 0x2621ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2621acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621b0: 0x3c07004f  lui         $a3, 0x4F
    ctx->pc = 0x2621b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)79 << 16));
    // 0x2621b4: 0x24e7ca18  addiu       $a3, $a3, -0x35E8
    ctx->pc = 0x2621b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953496));
    // 0x2621b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2621b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2621bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2621c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2621c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2621c8: 0xc120c08  jal         func_483020
    ctx->pc = 0x2621C8u;
    SET_GPR_U32(ctx, 31, 0x2621D0u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x2621C8u, 0x2621D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621D0u;
label_2621d0:
    // 0x2621d0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2621d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2621d4: 0xc09950c  jal         func_265430
    ctx->pc = 0x2621D4u;
    SET_GPR_U32(ctx, 31, 0x2621DCu);
    ctx->pc = 0x265430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265430u, 0x2621D4u, 0x2621DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621DCu;
label_2621dc:
    // 0x2621dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2621dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2621e0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2621e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2621e4: 0xc09895c  jal         func_262570
    ctx->pc = 0x2621E4u;
    SET_GPR_U32(ctx, 31, 0x2621ECu);
    ctx->pc = 0x262570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262570u, 0x2621E4u, 0x2621ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621ECu;
label_2621ec:
    // 0x2621ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2621ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2621f0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2621f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2621f4: 0xc09895c  jal         func_262570
    ctx->pc = 0x2621F4u;
    SET_GPR_U32(ctx, 31, 0x2621FCu);
    ctx->pc = 0x262570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262570u, 0x2621F4u, 0x2621FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2621FCu;
label_2621fc:
    // 0x2621fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2621fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262200: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x262200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x262204: 0xc098908  jal         func_262420
    ctx->pc = 0x262204u;
    SET_GPR_U32(ctx, 31, 0x26220Cu);
    ctx->pc = 0x262420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262420u, 0x262204u, 0x26220Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26220Cu;
label_26220c:
    // 0x26220c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262210: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x262210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x262214: 0xc098908  jal         func_262420
    ctx->pc = 0x262214u;
    SET_GPR_U32(ctx, 31, 0x26221Cu);
    ctx->pc = 0x262420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262420u, 0x262214u, 0x26221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26221Cu;
label_26221c:
    // 0x26221c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262220: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x262220u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262224: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x262224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262228: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26222c: 0x24a5ca28  addiu       $a1, $a1, -0x35D8
    ctx->pc = 0x26222cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953512));
    // 0x262230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x262230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262234: 0xc098a88  jal         func_262A20
    ctx->pc = 0x262234u;
    SET_GPR_U32(ctx, 31, 0x26223Cu);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x262234u, 0x26223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26223Cu;
label_26223c:
    // 0x26223c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26223cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262240: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x262240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x262244: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x262248: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x262248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26224c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26224cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262250: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262254: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x262254u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262258: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x262258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26225c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26225cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262260: 0x24a5ca38  addiu       $a1, $a1, -0x35C8
    ctx->pc = 0x262260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953528));
    // 0x262264: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262268: 0xc098a88  jal         func_262A20
    ctx->pc = 0x262268u;
    SET_GPR_U32(ctx, 31, 0x262270u);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x262268u, 0x262270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262270u;
label_262270:
    // 0x262270: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x262270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262274: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x262274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x262278: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26227c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26227cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x262280: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262284: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262288: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x262288u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26228c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26228cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262290: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262294: 0x24a5ca48  addiu       $a1, $a1, -0x35B8
    ctx->pc = 0x262294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953544));
    // 0x262298: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26229c: 0xc098a88  jal         func_262A20
    ctx->pc = 0x26229Cu;
    SET_GPR_U32(ctx, 31, 0x2622A4u);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x26229Cu, 0x2622A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622A4u;
label_2622a4:
    // 0x2622a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2622a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2622a8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2622a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2622ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2622acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2622b0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2622b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2622b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2622b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2622b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2622b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2622bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2622bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2622c0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2622c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2622c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2622c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2622c8: 0x24a5ca58  addiu       $a1, $a1, -0x35A8
    ctx->pc = 0x2622c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953560));
    // 0x2622cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2622ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2622d0: 0xc098a88  jal         func_262A20
    ctx->pc = 0x2622D0u;
    SET_GPR_U32(ctx, 31, 0x2622D8u);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x2622D0u, 0x2622D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2622D8u;
label_2622d8:
    // 0x2622d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2622d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2622dc: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2622dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2622e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2622e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2622e4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2622e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2622e8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2622e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2622ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2622ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2622f0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2622f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2622f4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2622f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2622f8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2622f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2622fc: 0x24a5ca68  addiu       $a1, $a1, -0x3598
    ctx->pc = 0x2622fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953576));
    // 0x262300: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262304: 0xc098a88  jal         func_262A20
    ctx->pc = 0x262304u;
    SET_GPR_U32(ctx, 31, 0x26230Cu);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x262304u, 0x26230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26230Cu;
label_26230c:
    // 0x26230c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26230cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262310: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x262310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x262314: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x262318: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x262318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26231c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26231cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262320: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262324: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x262324u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262328: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x262328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26232c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26232cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262330: 0x24a5ca78  addiu       $a1, $a1, -0x3588
    ctx->pc = 0x262330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953592));
    // 0x262334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262338: 0xc098a88  jal         func_262A20
    ctx->pc = 0x262338u;
    SET_GPR_U32(ctx, 31, 0x262340u);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x262338u, 0x262340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262340u;
label_262340:
    // 0x262340: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x262340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262344: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x262344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x262348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26234c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26234cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x262350: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262358: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x262358u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26235c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x26235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262360: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262364: 0x24a5ca88  addiu       $a1, $a1, -0x3578
    ctx->pc = 0x262364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953608));
    // 0x262368: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x262368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26236c: 0xc098a88  jal         func_262A20
    ctx->pc = 0x26236Cu;
    SET_GPR_U32(ctx, 31, 0x262374u);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x26236Cu, 0x262374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262374u;
label_262374:
    // 0x262374: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x262374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262378: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x262378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x26237c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x262380: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x262380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x262384: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x262388: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x262388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26238c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26238cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x262390: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x262390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262394: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x262398: 0x24a5ca98  addiu       $a1, $a1, -0x3568
    ctx->pc = 0x262398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953624));
    // 0x26239c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26239cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2623a0: 0xc098a88  jal         func_262A20
    ctx->pc = 0x2623A0u;
    SET_GPR_U32(ctx, 31, 0x2623A8u);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x2623A0u, 0x2623A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623A8u;
label_2623a8:
    // 0x2623a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2623a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2623ac: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2623acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2623b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2623b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2623b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2623b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2623b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2623b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2623bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2623bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2623c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2623c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2623c4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2623c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2623c8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2623c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2623cc: 0x24a5caa8  addiu       $a1, $a1, -0x3558
    ctx->pc = 0x2623ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953640));
    // 0x2623d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2623d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2623d4: 0xc098a88  jal         func_262A20
    ctx->pc = 0x2623D4u;
    SET_GPR_U32(ctx, 31, 0x2623DCu);
    ctx->pc = 0x262A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A20u, 0x2623D4u, 0x2623DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2623DCu;
label_2623dc:
    // 0x2623dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2623dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2623e0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2623e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2623e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2623e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2623e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2623e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2623ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2623ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2623f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2623f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2623f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2623f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2623f8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2623f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2623fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2623fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x262400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x262400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26240c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26240cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262410: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x262410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x262414: 0x3e00008  jr          $ra
    ctx->pc = 0x262414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26241Cu;
    // 0x26241c: 0x0  nop
    ctx->pc = 0x26241cu;
    // NOP
    ctx->pc = 0x262420u;
}
