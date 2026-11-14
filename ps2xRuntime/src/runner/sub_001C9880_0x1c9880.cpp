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

// Function: sub_001C9880
// Address: 0x1c9880 - 0x1ca520
void sub_001C9880_0x1c9880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9880_0x1c9880");
#endif

    switch (ctx->pc) {
        case 0x1c989cu: goto label_1c989c;
        case 0x1c98bcu: goto label_1c98bc;
        case 0x1c98e4u: goto label_1c98e4;
        case 0x1c9950u: goto label_1c9950;
        case 0x1c9960u: goto label_1c9960;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c99e0u: goto label_1c99e0;
        case 0x1c9b2cu: goto label_1c9b2c;
        case 0x1c9b7cu: goto label_1c9b7c;
        case 0x1c9b94u: goto label_1c9b94;
        case 0x1c9bacu: goto label_1c9bac;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9be8u: goto label_1c9be8;
        case 0x1c9c04u: goto label_1c9c04;
        case 0x1c9c24u: goto label_1c9c24;
        case 0x1c9c3cu: goto label_1c9c3c;
        case 0x1c9c5cu: goto label_1c9c5c;
        case 0x1c9c74u: goto label_1c9c74;
        case 0x1c9c90u: goto label_1c9c90;
        case 0x1c9ca8u: goto label_1c9ca8;
        case 0x1c9cc4u: goto label_1c9cc4;
        case 0x1c9cdcu: goto label_1c9cdc;
        case 0x1c9cf8u: goto label_1c9cf8;
        case 0x1c9d10u: goto label_1c9d10;
        case 0x1c9d2cu: goto label_1c9d2c;
        case 0x1c9d44u: goto label_1c9d44;
        case 0x1c9d60u: goto label_1c9d60;
        case 0x1c9d78u: goto label_1c9d78;
        case 0x1c9d94u: goto label_1c9d94;
        case 0x1c9dacu: goto label_1c9dac;
        case 0x1c9dc8u: goto label_1c9dc8;
        case 0x1c9de0u: goto label_1c9de0;
        case 0x1c9dfcu: goto label_1c9dfc;
        case 0x1c9e14u: goto label_1c9e14;
        case 0x1c9e30u: goto label_1c9e30;
        case 0x1c9e48u: goto label_1c9e48;
        case 0x1c9e64u: goto label_1c9e64;
        case 0x1c9e7cu: goto label_1c9e7c;
        case 0x1c9e98u: goto label_1c9e98;
        case 0x1c9eb0u: goto label_1c9eb0;
        case 0x1c9eccu: goto label_1c9ecc;
        case 0x1c9ee4u: goto label_1c9ee4;
        case 0x1c9f00u: goto label_1c9f00;
        case 0x1c9f18u: goto label_1c9f18;
        case 0x1c9f34u: goto label_1c9f34;
        case 0x1c9f4cu: goto label_1c9f4c;
        case 0x1c9f6cu: goto label_1c9f6c;
        case 0x1c9f78u: goto label_1c9f78;
        case 0x1c9f84u: goto label_1c9f84;
        case 0x1c9f9cu: goto label_1c9f9c;
        case 0x1c9fb0u: goto label_1c9fb0;
        case 0x1c9fbcu: goto label_1c9fbc;
        case 0x1c9fd4u: goto label_1c9fd4;
        case 0x1ca028u: goto label_1ca028;
        case 0x1ca044u: goto label_1ca044;
        case 0x1ca050u: goto label_1ca050;
        case 0x1ca068u: goto label_1ca068;
        case 0x1ca08cu: goto label_1ca08c;
        case 0x1ca0a8u: goto label_1ca0a8;
        case 0x1ca0b4u: goto label_1ca0b4;
        case 0x1ca0d0u: goto label_1ca0d0;
        case 0x1ca0e4u: goto label_1ca0e4;
        case 0x1ca100u: goto label_1ca100;
        case 0x1ca118u: goto label_1ca118;
        case 0x1ca12cu: goto label_1ca12c;
        case 0x1ca138u: goto label_1ca138;
        case 0x1ca150u: goto label_1ca150;
        case 0x1ca164u: goto label_1ca164;
        case 0x1ca170u: goto label_1ca170;
        case 0x1ca188u: goto label_1ca188;
        case 0x1ca1a4u: goto label_1ca1a4;
        case 0x1ca1b0u: goto label_1ca1b0;
        case 0x1ca1c8u: goto label_1ca1c8;
        case 0x1ca1e0u: goto label_1ca1e0;
        case 0x1ca1ecu: goto label_1ca1ec;
        case 0x1ca208u: goto label_1ca208;
        case 0x1ca220u: goto label_1ca220;
        case 0x1ca230u: goto label_1ca230;
        case 0x1ca248u: goto label_1ca248;
        case 0x1ca264u: goto label_1ca264;
        case 0x1ca270u: goto label_1ca270;
        case 0x1ca288u: goto label_1ca288;
        case 0x1ca2a4u: goto label_1ca2a4;
        case 0x1ca2b8u: goto label_1ca2b8;
        case 0x1ca2f4u: goto label_1ca2f4;
        case 0x1ca314u: goto label_1ca314;
        case 0x1ca350u: goto label_1ca350;
        case 0x1ca370u: goto label_1ca370;
        case 0x1ca380u: goto label_1ca380;
        case 0x1ca3e0u: goto label_1ca3e0;
        case 0x1ca3f0u: goto label_1ca3f0;
        case 0x1ca408u: goto label_1ca408;
        case 0x1ca41cu: goto label_1ca41c;
        case 0x1ca430u: goto label_1ca430;
        case 0x1ca444u: goto label_1ca444;
        case 0x1ca4a0u: goto label_1ca4a0;
        case 0x1ca4b0u: goto label_1ca4b0;
        case 0x1ca4c8u: goto label_1ca4c8;
        case 0x1ca4d4u: goto label_1ca4d4;
        case 0x1ca4ecu: goto label_1ca4ec;
        case 0x1ca500u: goto label_1ca500;
        default: break;
    }

    ctx->pc = 0x1c9880u;

    // 0x1c9880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9888: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c9888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c988c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9890: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c9890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c9894: 0xc064924  jal         func_192490
    ctx->pc = 0x1C9894u;
    SET_GPR_U32(ctx, 31, 0x1C989Cu);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1C9894u, 0x1C989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C989Cu;
label_1c989c:
    // 0x1c989c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c98a0: 0x24634a00  addiu       $v1, $v1, 0x4A00
    ctx->pc = 0x1c98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18944));
    // 0x1c98a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c98a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c98a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c98ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c98acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c98b0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c98b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c98b4: 0xc056254  jal         func_158950
    ctx->pc = 0x1C98B4u;
    SET_GPR_U32(ctx, 31, 0x1C98BCu);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1C98B4u, 0x1C98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98BCu;
label_1c98bc:
    // 0x1c98bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c98c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c98c4: 0xa04300d8  sb          $v1, 0xD8($v0)
    ctx->pc = 0x1c98c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 216), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c98c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c98cc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1c98ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1c98d0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c98d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c98d4: 0x24a57810  addiu       $a1, $a1, 0x7810
    ctx->pc = 0x1c98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30736));
    // 0x1c98d8: 0x24460064  addiu       $a2, $v0, 0x64
    ctx->pc = 0x1c98d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1c98dc: 0xc08e514  jal         func_239450
    ctx->pc = 0x1C98DCu;
    SET_GPR_U32(ctx, 31, 0x1C98E4u);
    ctx->pc = 0x239450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239450u, 0x1C98DCu, 0x1C98E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98E4u;
label_1c98e4:
    // 0x1c98e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c98e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c98ec: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1c98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1c98f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c98f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c98f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c98f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c98f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c98fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C98FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C98FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9904u;
    // 0x1c9904: 0x0  nop
    ctx->pc = 0x1c9904u;
    // NOP
    // 0x1c9908: 0x0  nop
    ctx->pc = 0x1c9908u;
    // NOP
    // 0x1c990c: 0x0  nop
    ctx->pc = 0x1c990cu;
    // NOP
    // 0x1c9910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c9914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9918: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c9918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c991c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c991cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c9920: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c9920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9924: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C9924u;
    {
        const bool branch_taken_0x1c9924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9924) {
            ctx->pc = 0x1C9980u;
            goto label_1c9980;
        }
    }
    ctx->pc = 0x1C992Cu;
    // 0x1c992c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c992cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c9930: 0x24634a00  addiu       $v1, $v1, 0x4A00
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18944));
    // 0x1c9934: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c9934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9938: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1c9938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1c993c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9940: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9944: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c9944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9948: 0xc056094  jal         func_158250
    ctx->pc = 0x1C9948u;
    SET_GPR_U32(ctx, 31, 0x1C9950u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x1C9948u, 0x1C9950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9950u;
label_1c9950:
    // 0x1c9950: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c9950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9958: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1C9958u;
    SET_GPR_U32(ctx, 31, 0x1C9960u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1C9958u, 0x1C9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9960u;
label_1c9960:
    // 0x1c9960: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c9960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9964: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c9964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c9968: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c9968u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c996c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C996Cu;
    {
        const bool branch_taken_0x1c996c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c996c) {
            ctx->pc = 0x1C9980u;
            goto label_1c9980;
        }
    }
    ctx->pc = 0x1C9974u;
    // 0x1c9974: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c9974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9978: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1C9978u;
    SET_GPR_U32(ctx, 31, 0x1C9980u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C9978u, 0x1C9980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9980u;
label_1c9980:
    // 0x1c9980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9988: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c9988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c998c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C998Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C998Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9994u;
    // 0x1c9994: 0x0  nop
    ctx->pc = 0x1c9994u;
    // NOP
    // 0x1c9998: 0x0  nop
    ctx->pc = 0x1c9998u;
    // NOP
    // 0x1c999c: 0x0  nop
    ctx->pc = 0x1c999cu;
    // NOP
    // 0x1c99a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c99a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c99a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c99a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c99a8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c99a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c99ac: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c99acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c99b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c99b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c99b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c99b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c99b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c99b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c99bc: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1c99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1c99c0: 0xa3a500a0  sb          $a1, 0xA0($sp)
    ctx->pc = 0x1c99c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c99c4: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x1c99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x1c99c8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c99cc: 0x93b200a0  lbu         $s2, 0xA0($sp)
    ctx->pc = 0x1c99ccu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c99d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c99d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c99d4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1c99d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c99d8: 0xc064a4c  jal         func_192930
    ctx->pc = 0x1C99D8u;
    SET_GPR_U32(ctx, 31, 0x1C99E0u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x1C99D8u, 0x1C99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C99E0u;
label_1c99e0:
    // 0x1c99e0: 0x93a400a0  lbu         $a0, 0xA0($sp)
    ctx->pc = 0x1c99e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c99e4: 0x1080024d  beqz        $a0, . + 4 + (0x24D << 2)
    ctx->pc = 0x1C99E4u;
    {
        const bool branch_taken_0x1c99e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c99e4) {
            ctx->pc = 0x1CA31Cu;
            goto label_1ca31c;
        }
    }
    ctx->pc = 0x1C99ECu;
    // 0x1c99ec: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1c99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c99f0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1c99f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c99f4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C99F4u;
    {
        const bool branch_taken_0x1c99f4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1c99f4) {
            ctx->pc = 0x1C9A10u;
            goto label_1c9a10;
        }
    }
    ctx->pc = 0x1C99FCu;
    // 0x1c99fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1c99fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a00: 0x0  nop
    ctx->pc = 0x1c9a00u;
    // NOP
    // 0x1c9a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9a08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9A08u;
    {
        const bool branch_taken_0x1c9a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a08) {
            ctx->pc = 0x1C9A2Cu;
            goto label_1c9a2c;
        }
    }
    ctx->pc = 0x1C9A10u;
label_1c9a10:
    // 0x1c9a10: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x1c9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x1c9a14: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x1c9a14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1c9a18: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x1c9a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x1c9a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a20: 0x0  nop
    ctx->pc = 0x1c9a20u;
    // NOP
    // 0x1c9a24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9a28: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c9a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c9a2c:
    // 0x1c9a2c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c9a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1c9a30: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1c9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1c9a34: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1c9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c9a38: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C9A38u;
    {
        const bool branch_taken_0x1c9a38 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1c9a38) {
            ctx->pc = 0x1C9A54u;
            goto label_1c9a54;
        }
    }
    ctx->pc = 0x1C9A40u;
    // 0x1c9a40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9a40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a44: 0x0  nop
    ctx->pc = 0x1c9a44u;
    // NOP
    // 0x1c9a48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9a4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9A4Cu;
    {
        const bool branch_taken_0x1c9a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9a4c) {
            ctx->pc = 0x1C9A70u;
            goto label_1c9a70;
        }
    }
    ctx->pc = 0x1C9A54u;
label_1c9a54:
    // 0x1c9a54: 0x49042  srl         $s2, $a0, 1
    ctx->pc = 0x1c9a54u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1c9a58: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1c9a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1c9a5c: 0x2429025  or          $s2, $s2, $v0
    ctx->pc = 0x1c9a5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1c9a60: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c9a60u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a64: 0x0  nop
    ctx->pc = 0x1c9a64u;
    // NOP
    // 0x1c9a68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9a6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c9a6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c9a70:
    // 0x1c9a70: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1c9a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1c9a74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a78: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9a7c: 0xa0a400d8  sb          $a0, 0xD8($a1)
    ctx->pc = 0x1c9a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 216), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c9a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a84: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9a88: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1c9a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x1c9a8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a90: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9a94: 0xe4a000bc  swc1        $f0, 0xBC($a1)
    ctx->pc = 0x1c9a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 188), bits); }
    // 0x1c9a98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9a9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9aa0: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x1c9aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x1c9aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9aa8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9aac: 0xe48000c4  swc1        $f0, 0xC4($a0)
    ctx->pc = 0x1c9aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
    // 0x1c9ab0: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x1c9ab0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ab4: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x1c9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
    // 0x1c9ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9abc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ac0: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1c9ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1c9ac4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c9ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9ac8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9ac8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9acc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c9accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ad0: 0xe4a000e4  swc1        $f0, 0xE4($a1)
    ctx->pc = 0x1c9ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 228), bits); }
    // 0x1c9ad4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9ad4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ad8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9adc: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x1c9adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x1c9ae0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9ae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9ae4: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ae8: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x1c9ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
    // 0x1c9aec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c9aecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9af0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9af4: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x1c9af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x1c9af8: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x1c9afc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9afcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b00: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x1c9b00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b04: 0xe64000f4  swc1        $f0, 0xF4($s2)
    ctx->pc = 0x1c9b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 244), bits); }
    // 0x1c9b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9b0c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b10: 0xac8200fc  sw          $v0, 0xFC($a0)
    ctx->pc = 0x1c9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 2));
    // 0x1c9b14: 0xc7808308  lwc1        $f0, -0x7CF8($gp)
    ctx->pc = 0x1c9b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b18: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c9b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b1c: 0xe4a00100  swc1        $f0, 0x100($a1)
    ctx->pc = 0x1c9b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 256), bits); }
    // 0x1c9b20: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b24: 0xc0732a0  jal         func_1CCA80
    ctx->pc = 0x1C9B24u;
    SET_GPR_U32(ctx, 31, 0x1C9B2Cu);
    ctx->pc = 0x1CCA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA80u, 0x1C9B24u, 0x1C9B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B2Cu;
label_1c9b2c:
    // 0x1c9b2c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b30: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x1c9b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1c9b34: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1c9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1c9b38: 0x3c124080  lui         $s2, 0x4080
    ctx->pc = 0x1c9b38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16512 << 16));
    // 0x1c9b3c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1c9b3cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b40: 0x0  nop
    ctx->pc = 0x1c9b40u;
    // NOP
    // 0x1c9b44: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1c9b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1c9b48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c9b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9b50: 0x0  nop
    ctx->pc = 0x1c9b50u;
    // NOP
    // 0x1c9b54: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1c9b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c9b58: 0xc7808378  lwc1        $f0, -0x7C88($gp)
    ctx->pc = 0x1c9b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9b5c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1c9b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1c9b60: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b64: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1c9b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x1c9b68: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c9b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b6c: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x1c9b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x1c9b70: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1c9b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1c9b74: 0xc0735d8  jal         func_1CD760
    ctx->pc = 0x1C9B74u;
    SET_GPR_U32(ctx, 31, 0x1C9B7Cu);
    ctx->pc = 0x1CD760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD760u, 0x1C9B74u, 0x1C9B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B7Cu;
label_1c9b7c:
    // 0x1c9b7c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b80: 0x249200a4  addiu       $s2, $a0, 0xA4
    ctx->pc = 0x1c9b80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1c9b84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b88: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1c9b8c: 0xc056708  jal         func_159C20
    ctx->pc = 0x1C9B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B94u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x1C9B8Cu, 0x1C9B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B94u;
label_1c9b94:
    // 0x1c9b94: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9b98: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x1c9b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1c9b9c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9ba0: 0x24a57828  addiu       $a1, $a1, 0x7828
    ctx->pc = 0x1c9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30760));
    // 0x1c9ba4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9BA4u;
    SET_GPR_U32(ctx, 31, 0x1C9BACu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9BA4u, 0x1C9BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BACu;
label_1c9bac:
    // 0x1c9bac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bb0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9bb4: 0x249300a4  addiu       $s3, $a0, 0xA4
    ctx->pc = 0x1c9bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x1c9bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bc0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9BC0u;
    SET_GPR_U32(ctx, 31, 0x1C9BC8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9BC0u, 0x1C9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BC8u;
label_1c9bc8:
    // 0x1c9bc8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9bcc: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9bd0: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1c9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c9bd4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c9bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bd8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9bdc: 0x24a57838  addiu       $a1, $a1, 0x7838
    ctx->pc = 0x1c9bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30776));
    // 0x1c9be0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9BE0u;
    SET_GPR_U32(ctx, 31, 0x1C9BE8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9BE0u, 0x1C9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9BE8u;
label_1c9be8:
    // 0x1c9be8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9bf0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9bf4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c9bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9bf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c9bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9bfc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9BFCu;
    SET_GPR_U32(ctx, 31, 0x1C9C04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9BFCu, 0x1C9C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C04u;
label_1c9c04:
    // 0x1c9c04: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9c08: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9c0c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c9c10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c9c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c14: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9c18: 0x24a57848  addiu       $a1, $a1, 0x7848
    ctx->pc = 0x1c9c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30792));
    // 0x1c9c1c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C9C24u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9C1Cu, 0x1C9C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C24u;
label_1c9c24:
    // 0x1c9c24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c28: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9c2c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9c30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c9c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9c34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9C34u;
    SET_GPR_U32(ctx, 31, 0x1C9C3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9C34u, 0x1C9C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C3Cu;
label_1c9c3c:
    // 0x1c9c3c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9c40: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9c44: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9c48: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x1c9c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x1c9c4c: 0x24c67858  addiu       $a2, $a2, 0x7858
    ctx->pc = 0x1c9c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30808));
    // 0x1c9c50: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c9c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c54: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9C54u;
    SET_GPR_U32(ctx, 31, 0x1C9C5Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9C54u, 0x1C9C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C5Cu;
label_1c9c5c:
    // 0x1c9c5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c60: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9c64: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9c68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c9c6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9C6Cu;
    SET_GPR_U32(ctx, 31, 0x1C9C74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9C6Cu, 0x1C9C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C74u;
label_1c9c74:
    // 0x1c9c74: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9c78: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9c7c: 0x8c640030  lw          $a0, 0x30($v1)
    ctx->pc = 0x1c9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1c9c80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9c84: 0x24a57868  addiu       $a1, $a1, 0x7868
    ctx->pc = 0x1c9c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30824));
    // 0x1c9c88: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9C88u;
    SET_GPR_U32(ctx, 31, 0x1C9C90u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9C88u, 0x1C9C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9C90u;
label_1c9c90:
    // 0x1c9c90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c94: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9c98: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9c9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1c9c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9ca0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9CA0u;
    SET_GPR_U32(ctx, 31, 0x1C9CA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9CA0u, 0x1C9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CA8u;
label_1c9ca8:
    // 0x1c9ca8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9cac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9cb0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9cb4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9cb8: 0x24a57878  addiu       $a1, $a1, 0x7878
    ctx->pc = 0x1c9cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30840));
    // 0x1c9cbc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9CBCu;
    SET_GPR_U32(ctx, 31, 0x1C9CC4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9CBCu, 0x1C9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CC4u;
label_1c9cc4:
    // 0x1c9cc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9cc8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1c9cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ccc: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1c9cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
    // 0x1c9cd0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1c9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c9cd4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9CD4u;
    SET_GPR_U32(ctx, 31, 0x1C9CDCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9CD4u, 0x1C9CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CDCu;
label_1c9cdc:
    // 0x1c9cdc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9ce0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ce4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9ce8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9cec: 0x24a57888  addiu       $a1, $a1, 0x7888
    ctx->pc = 0x1c9cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30856));
    // 0x1c9cf0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9CF0u;
    SET_GPR_U32(ctx, 31, 0x1C9CF8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9CF0u, 0x1C9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9CF8u;
label_1c9cf8:
    // 0x1c9cf8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9cfc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9d00: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9d04: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c9d08: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9D08u;
    SET_GPR_U32(ctx, 31, 0x1C9D10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9D08u, 0x1C9D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D10u;
label_1c9d10:
    // 0x1c9d10: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9d14: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9d18: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9d1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9d20: 0x24a57898  addiu       $a1, $a1, 0x7898
    ctx->pc = 0x1c9d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30872));
    // 0x1c9d24: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9D24u;
    SET_GPR_U32(ctx, 31, 0x1C9D2Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9D24u, 0x1C9D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D2Cu;
label_1c9d2c:
    // 0x1c9d2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d30: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9d34: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9d38: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c9d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c9d3c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D44u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9D3Cu, 0x1C9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D44u;
label_1c9d44:
    // 0x1c9d44: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9d48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9d4c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9d50: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9d54: 0x24a578a8  addiu       $a1, $a1, 0x78A8
    ctx->pc = 0x1c9d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30888));
    // 0x1c9d58: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9D58u;
    SET_GPR_U32(ctx, 31, 0x1C9D60u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9D58u, 0x1C9D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D60u;
label_1c9d60:
    // 0x1c9d60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d64: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9d68: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9d6c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1c9d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1c9d70: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9D70u;
    SET_GPR_U32(ctx, 31, 0x1C9D78u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9D70u, 0x1C9D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D78u;
label_1c9d78:
    // 0x1c9d78: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9d7c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9d80: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9d84: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9d88: 0x24a578b8  addiu       $a1, $a1, 0x78B8
    ctx->pc = 0x1c9d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30904));
    // 0x1c9d8c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D94u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9D8Cu, 0x1C9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9D94u;
label_1c9d94:
    // 0x1c9d94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9d98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9d9c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9da0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1c9da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c9da4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9DA4u;
    SET_GPR_U32(ctx, 31, 0x1C9DACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9DA4u, 0x1C9DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DACu;
label_1c9dac:
    // 0x1c9dac: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9db0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9db4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9db8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9dbc: 0x24a578c8  addiu       $a1, $a1, 0x78C8
    ctx->pc = 0x1c9dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30920));
    // 0x1c9dc0: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9DC0u;
    SET_GPR_U32(ctx, 31, 0x1C9DC8u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9DC0u, 0x1C9DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DC8u;
label_1c9dc8:
    // 0x1c9dc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9dc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9dcc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9dd0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9dd4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1c9dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1c9dd8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9DD8u;
    SET_GPR_U32(ctx, 31, 0x1C9DE0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9DD8u, 0x1C9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DE0u;
label_1c9de0:
    // 0x1c9de0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9de4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9de8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9dec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9decu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9df0: 0x24a578d8  addiu       $a1, $a1, 0x78D8
    ctx->pc = 0x1c9df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30936));
    // 0x1c9df4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9DF4u;
    SET_GPR_U32(ctx, 31, 0x1C9DFCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9DF4u, 0x1C9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DFCu;
label_1c9dfc:
    // 0x1c9dfc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e00: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9e04: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9e08: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1c9e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c9e0c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9E0Cu, 0x1C9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E14u;
label_1c9e14:
    // 0x1c9e14: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9e18: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9e1c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9e20: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9e24: 0x24a578e8  addiu       $a1, $a1, 0x78E8
    ctx->pc = 0x1c9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30952));
    // 0x1c9e28: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9E28u;
    SET_GPR_U32(ctx, 31, 0x1C9E30u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9E28u, 0x1C9E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E30u;
label_1c9e30:
    // 0x1c9e30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e34: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9e38: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9e3c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1c9e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c9e40: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9E40u;
    SET_GPR_U32(ctx, 31, 0x1C9E48u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9E40u, 0x1C9E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E48u;
label_1c9e48:
    // 0x1c9e48: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9e4c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9e50: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9e54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9e58: 0x24a578f8  addiu       $a1, $a1, 0x78F8
    ctx->pc = 0x1c9e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30968));
    // 0x1c9e5c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9E64u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9E5Cu, 0x1C9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E64u;
label_1c9e64:
    // 0x1c9e64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e68: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9e6c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9e70: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1c9e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c9e74: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9E74u;
    SET_GPR_U32(ctx, 31, 0x1C9E7Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9E74u, 0x1C9E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E7Cu;
label_1c9e7c:
    // 0x1c9e7c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9e80: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9e84: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9e88: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9e8c: 0x24a57910  addiu       $a1, $a1, 0x7910
    ctx->pc = 0x1c9e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30992));
    // 0x1c9e90: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9E90u;
    SET_GPR_U32(ctx, 31, 0x1C9E98u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9E90u, 0x1C9E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E98u;
label_1c9e98:
    // 0x1c9e98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9e9c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ea0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9ea4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1c9ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c9ea8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9EA8u;
    SET_GPR_U32(ctx, 31, 0x1C9EB0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9EA8u, 0x1C9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EB0u;
label_1c9eb0:
    // 0x1c9eb0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9eb4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9eb8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9ebc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9ec0: 0x24a57920  addiu       $a1, $a1, 0x7920
    ctx->pc = 0x1c9ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31008));
    // 0x1c9ec4: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9EC4u;
    SET_GPR_U32(ctx, 31, 0x1C9ECCu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9EC4u, 0x1C9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ECCu;
label_1c9ecc:
    // 0x1c9ecc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9eccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ed0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ed4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9ed8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c9ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c9edc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9EDCu;
    SET_GPR_U32(ctx, 31, 0x1C9EE4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9EDCu, 0x1C9EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EE4u;
label_1c9ee4:
    // 0x1c9ee4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9ee8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9eec: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9ef0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9ef4: 0x24a57930  addiu       $a1, $a1, 0x7930
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31024));
    // 0x1c9ef8: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9EF8u;
    SET_GPR_U32(ctx, 31, 0x1C9F00u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9EF8u, 0x1C9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F00u;
label_1c9f00:
    // 0x1c9f00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f04: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9f08: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9f0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1c9f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c9f10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9F10u;
    SET_GPR_U32(ctx, 31, 0x1C9F18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9F10u, 0x1C9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F18u;
label_1c9f18:
    // 0x1c9f18: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9f1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9f20: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1c9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c9f24: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c9f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c9f28: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x1c9f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    // 0x1c9f2c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1C9F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C9F34u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1C9F2Cu, 0x1C9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F34u;
label_1c9f34:
    // 0x1c9f34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f38: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9f3c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9f40: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1c9f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c9f44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9F44u;
    SET_GPR_U32(ctx, 31, 0x1C9F4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9F44u, 0x1C9F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F4Cu;
label_1c9f4c:
    // 0x1c9f4c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1c9f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1c9f50: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x1c9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x1c9f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9f58: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9f5c: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1c9f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1c9f60: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9f64: 0xc073220  jal         func_1CC880
    ctx->pc = 0x1C9F64u;
    SET_GPR_U32(ctx, 31, 0x1C9F6Cu);
    ctx->pc = 0x1CC880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC880u, 0x1C9F64u, 0x1C9F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F6Cu;
label_1c9f6c:
    // 0x1c9f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c9f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f70: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C9F70u;
    {
        const bool branch_taken_0x1c9f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9f70) {
            ctx->pc = 0x1CA02Cu;
            goto label_1ca02c;
        }
    }
    ctx->pc = 0x1C9F78u;
label_1c9f78:
    // 0x1c9f78: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9f7c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C9F7Cu;
    SET_GPR_U32(ctx, 31, 0x1C9F84u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C9F7Cu, 0x1C9F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F84u;
label_1c9f84:
    // 0x1c9f84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f88: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9f8c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9f90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9f94: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9F94u;
    SET_GPR_U32(ctx, 31, 0x1C9F9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9F94u, 0x1C9F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F9Cu;
label_1c9f9c:
    // 0x1c9f9c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c9f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9fa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fa4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c9fa8: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1C9FA8u;
    SET_GPR_U32(ctx, 31, 0x1C9FB0u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1C9FA8u, 0x1C9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FB0u;
label_1c9fb0:
    // 0x1c9fb0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1c9fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9fb4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1C9FB4u;
    SET_GPR_U32(ctx, 31, 0x1C9FBCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1C9FB4u, 0x1C9FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FBCu;
label_1c9fbc:
    // 0x1c9fbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c9fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fc0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9fc4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1c9fc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c9fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9fcc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1C9FCCu;
    SET_GPR_U32(ctx, 31, 0x1C9FD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1C9FCCu, 0x1C9FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9FD4u;
label_1c9fd4:
    // 0x1c9fd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c9fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c9fd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c9fdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c9fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c9fe0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1c9fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9fe4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1c9fe4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c9fe8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1c9fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9fec: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1c9fecu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c9ff0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1c9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c9ff4: 0xc44100e8  lwc1        $f1, 0xE8($v0)
    ctx->pc = 0x1c9ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9ff8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c9ffc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca000: 0x0  nop
    ctx->pc = 0x1ca000u;
    // NOP
    // 0x1ca004: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1ca004u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ca008: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1ca008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca00c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1ca00cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ca010: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1ca010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca014: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x1ca014u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ca018: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca020: 0xc08c208  jal         func_230820
    ctx->pc = 0x1CA020u;
    SET_GPR_U32(ctx, 31, 0x1CA028u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CA020u, 0x1CA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA028u;
label_1ca028:
    // 0x1ca028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ca028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ca02c:
    // 0x1ca02c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1ca02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ca030: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x1CA030u;
    {
        const bool branch_taken_0x1ca030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca030) {
            ctx->pc = 0x1C9F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9f78;
        }
    }
    ctx->pc = 0x1CA038u;
    // 0x1ca038: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ca038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca03c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA03Cu;
    {
        const bool branch_taken_0x1ca03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca03c) {
            ctx->pc = 0x1CA090u;
            goto label_1ca090;
        }
    }
    ctx->pc = 0x1CA044u;
label_1ca044:
    // 0x1ca044: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca048: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA048u;
    SET_GPR_U32(ctx, 31, 0x1CA050u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA048u, 0x1CA050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA050u;
label_1ca050:
    // 0x1ca050: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca054: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca058: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1ca058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ca05c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ca05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ca060: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA060u;
    SET_GPR_U32(ctx, 31, 0x1CA068u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA060u, 0x1CA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA068u;
label_1ca068:
    // 0x1ca068: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ca068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca06c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca070: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1ca070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ca074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca078: 0xc78c832c  lwc1        $f12, -0x7CD4($gp)
    ctx->pc = 0x1ca078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ca07c: 0xc78d832c  lwc1        $f13, -0x7CD4($gp)
    ctx->pc = 0x1ca07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ca080: 0xc78e832c  lwc1        $f14, -0x7CD4($gp)
    ctx->pc = 0x1ca080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ca084: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x1CA084u;
    SET_GPR_U32(ctx, 31, 0x1CA08Cu);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1CA084u, 0x1CA08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA08Cu;
label_1ca08c:
    // 0x1ca08c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ca08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ca090:
    // 0x1ca090: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ca090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ca094: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CA094u;
    {
        const bool branch_taken_0x1ca094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca094) {
            ctx->pc = 0x1CA044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca044;
        }
    }
    ctx->pc = 0x1CA09Cu;
    // 0x1ca09c: 0x8fb00060  lw          $s0, 0x60($sp)
    ctx->pc = 0x1ca09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ca0a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CA0A0u;
    {
        const bool branch_taken_0x1ca0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0a0) {
            ctx->pc = 0x1CA0E8u;
            goto label_1ca0e8;
        }
    }
    ctx->pc = 0x1CA0A8u;
label_1ca0a8:
    // 0x1ca0a8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca0ac: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA0ACu;
    SET_GPR_U32(ctx, 31, 0x1CA0B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA0ACu, 0x1CA0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0B4u;
label_1ca0b4:
    // 0x1ca0b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca0b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0b8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x1ca0b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca0bc: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1ca0c0: 0x24c400a4  addiu       $a0, $a2, 0xA4
    ctx->pc = 0x1ca0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 164));
    // 0x1ca0c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ca0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA0C8u;
    SET_GPR_U32(ctx, 31, 0x1CA0D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA0C8u, 0x1CA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0D0u;
label_1ca0d0:
    // 0x1ca0d0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ca0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca0d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca0dc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA0DCu;
    SET_GPR_U32(ctx, 31, 0x1CA0E4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA0DCu, 0x1CA0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0E4u;
label_1ca0e4:
    // 0x1ca0e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ca0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ca0e8:
    // 0x1ca0e8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ca0e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ca0ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1CA0ECu;
    {
        const bool branch_taken_0x1ca0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0ec) {
            ctx->pc = 0x1CA0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca0a8;
        }
    }
    ctx->pc = 0x1CA0F4u;
    // 0x1ca0f4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca0f8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA0F8u;
    SET_GPR_U32(ctx, 31, 0x1CA100u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA0F8u, 0x1CA100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA100u;
label_1ca100:
    // 0x1ca100: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca104: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca108: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ca108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ca10c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1ca10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ca110: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA110u;
    SET_GPR_U32(ctx, 31, 0x1CA118u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA110u, 0x1CA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA118u;
label_1ca118:
    // 0x1ca118: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ca118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca11c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca124: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA124u;
    SET_GPR_U32(ctx, 31, 0x1CA12Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA124u, 0x1CA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA12Cu;
label_1ca12c:
    // 0x1ca12c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca130: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA130u;
    SET_GPR_U32(ctx, 31, 0x1CA138u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA130u, 0x1CA138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA138u;
label_1ca138:
    // 0x1ca138: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca13c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca140: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ca140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ca144: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ca144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ca148: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA148u;
    SET_GPR_U32(ctx, 31, 0x1CA150u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA148u, 0x1CA150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA150u;
label_1ca150:
    // 0x1ca150: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ca150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca15c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA15Cu;
    SET_GPR_U32(ctx, 31, 0x1CA164u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA15Cu, 0x1CA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA164u;
label_1ca164:
    // 0x1ca164: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca168: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA168u;
    SET_GPR_U32(ctx, 31, 0x1CA170u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA168u, 0x1CA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA170u;
label_1ca170:
    // 0x1ca170: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca174: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca178: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ca178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ca17c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ca17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ca180: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA180u;
    SET_GPR_U32(ctx, 31, 0x1CA188u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA180u, 0x1CA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA188u;
label_1ca188:
    // 0x1ca188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca18c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ca18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca194: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ca194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca19c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA19Cu;
    SET_GPR_U32(ctx, 31, 0x1CA1A4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA19Cu, 0x1CA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1A4u;
label_1ca1a4:
    // 0x1ca1a4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca1a8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA1A8u;
    SET_GPR_U32(ctx, 31, 0x1CA1B0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA1A8u, 0x1CA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1B0u;
label_1ca1b0:
    // 0x1ca1b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1b4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca1b8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ca1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ca1bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ca1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ca1c0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA1C0u;
    SET_GPR_U32(ctx, 31, 0x1CA1C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA1C0u, 0x1CA1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1C8u;
label_1ca1c8:
    // 0x1ca1c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1cc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ca1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1d8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA1D8u;
    SET_GPR_U32(ctx, 31, 0x1CA1E0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA1D8u, 0x1CA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1E0u;
label_1ca1e0:
    // 0x1ca1e0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca1e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA1E4u;
    SET_GPR_U32(ctx, 31, 0x1CA1ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA1E4u, 0x1CA1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1ECu;
label_1ca1ec:
    // 0x1ca1ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca1ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1f0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1ca1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca1f4: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1ca1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
    // 0x1ca1f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca1fc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ca1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca200: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA200u;
    SET_GPR_U32(ctx, 31, 0x1CA208u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA200u, 0x1CA208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA208u;
label_1ca208:
    // 0x1ca208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca20c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ca20cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ca210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ca210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca218: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA218u;
    SET_GPR_U32(ctx, 31, 0x1CA220u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA218u, 0x1CA220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA220u;
label_1ca220:
    // 0x1ca220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca224: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca228: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA228u;
    SET_GPR_U32(ctx, 31, 0x1CA230u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA228u, 0x1CA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA230u;
label_1ca230:
    // 0x1ca230: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ca230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca234: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca238: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ca23c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ca23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca240: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA240u;
    SET_GPR_U32(ctx, 31, 0x1CA248u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA240u, 0x1CA248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA248u;
label_1ca248:
    // 0x1ca248: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ca248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca24c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1ca24cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ca250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca254: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ca254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca25c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA25Cu;
    SET_GPR_U32(ctx, 31, 0x1CA264u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA25Cu, 0x1CA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA264u;
label_1ca264:
    // 0x1ca264: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca268: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1CA268u;
    SET_GPR_U32(ctx, 31, 0x1CA270u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA268u, 0x1CA270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA270u;
label_1ca270:
    // 0x1ca270: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ca270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca274: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca278: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1ca278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x1ca27c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ca27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ca280: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1CA280u;
    SET_GPR_U32(ctx, 31, 0x1CA288u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA280u, 0x1CA288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA288u;
label_1ca288:
    // 0x1ca288: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ca288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca28c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1ca28cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ca290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca294: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ca294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca298: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca29c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1CA29Cu;
    SET_GPR_U32(ctx, 31, 0x1CA2A4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA29Cu, 0x1CA2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2A4u;
label_1ca2a4:
    // 0x1ca2a4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x1ca2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1ca2a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ca2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ca2ac: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA2ACu;
    {
        const bool branch_taken_0x1ca2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2ac) {
            ctx->pc = 0x1CA2D4u;
            goto label_1ca2d4;
        }
    }
    ctx->pc = 0x1CA2B4u;
    // 0x1ca2b4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1ca2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1ca2b8:
    // 0x1ca2b8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ca2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ca2bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ca2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ca2c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ca2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ca2c4: 0x0  nop
    ctx->pc = 0x1ca2c4u;
    // NOP
    // 0x1ca2c8: 0x0  nop
    ctx->pc = 0x1ca2c8u;
    // NOP
    // 0x1ca2cc: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CA2CCu;
    {
        const bool branch_taken_0x1ca2cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2cc) {
            ctx->pc = 0x1CA2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca2b8;
        }
    }
    ctx->pc = 0x1CA2D4u;
label_1ca2d4:
    // 0x1ca2d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca2d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca2dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ca2e0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca2e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2e8: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1ca2ec: 0xc073398  jal         func_1CCE60
    ctx->pc = 0x1CA2ECu;
    SET_GPR_U32(ctx, 31, 0x1CA2F4u);
    ctx->pc = 0x1CCE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCE60u, 0x1CA2ECu, 0x1CA2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA2F4u;
label_1ca2f4:
    // 0x1ca2f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca2f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca2f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca2fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ca300: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ca300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ca304: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ca304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca308: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x1ca30c: 0xc073430  jal         func_1CD0C0
    ctx->pc = 0x1CA30Cu;
    SET_GPR_U32(ctx, 31, 0x1CA314u);
    ctx->pc = 0x1CD0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD0C0u, 0x1CA30Cu, 0x1CA314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA314u;
label_1ca314:
    // 0x1ca314: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA314u;
    {
        const bool branch_taken_0x1ca314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca314) {
            ctx->pc = 0x1CA394u;
            goto label_1ca394;
        }
    }
    ctx->pc = 0x1CA31Cu;
label_1ca31c:
    // 0x1ca31c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1ca31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca320: 0x906400d8  lbu         $a0, 0xD8($v1)
    ctx->pc = 0x1ca320u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x1ca324: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA324u;
    {
        const bool branch_taken_0x1ca324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca324) {
            ctx->pc = 0x1CA394u;
            goto label_1ca394;
        }
    }
    ctx->pc = 0x1CA32Cu;
    // 0x1ca32c: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x1ca32cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1ca330: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1ca330u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ca334: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1CA334u;
    {
        const bool branch_taken_0x1ca334 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca334) {
            ctx->pc = 0x1CA394u;
            goto label_1ca394;
        }
    }
    ctx->pc = 0x1CA33Cu;
    // 0x1ca33c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1ca33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1ca340: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ca340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca344: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1ca344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1ca348: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1CA348u;
    SET_GPR_U32(ctx, 31, 0x1CA350u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CA348u, 0x1CA350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA350u;
label_1ca350:
    // 0x1ca350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ca350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca354: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1CA354u;
    {
        const bool branch_taken_0x1ca354 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca354) {
            ctx->pc = 0x1CA394u;
            goto label_1ca394;
        }
    }
    ctx->pc = 0x1CA35Cu;
    // 0x1ca35c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ca35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ca360: 0xc4540050  lwc1        $f20, 0x50($v0)
    ctx->pc = 0x1ca360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca364: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca368: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x1CA368u;
    SET_GPR_U32(ctx, 31, 0x1CA370u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x1CA368u, 0x1CA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA370u;
label_1ca370:
    // 0x1ca370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca374: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ca378: 0xc040a90  jal         func_102A40
    ctx->pc = 0x1CA378u;
    SET_GPR_U32(ctx, 31, 0x1CA380u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x1CA378u, 0x1CA380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA380u;
label_1ca380:
    // 0x1ca380: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ca380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca384: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1ca384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ca388: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1ca388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ca38c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1ca38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ca390: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1ca390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ca394:
    // 0x1ca394: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ca394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ca398: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1ca398u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca39c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1ca39cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca3a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ca3a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca3a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca3a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1ca3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca3ac: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x1ca3acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ca3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA3B8u;
    // 0x1ca3b8: 0x0  nop
    ctx->pc = 0x1ca3b8u;
    // NOP
    // 0x1ca3bc: 0x0  nop
    ctx->pc = 0x1ca3bcu;
    // NOP
    // 0x1ca3c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca3c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ca3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ca3c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca3cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca3d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1ca3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1ca3d4: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1ca3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1ca3d8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1CA3D8u;
    SET_GPR_U32(ctx, 31, 0x1CA3E0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1CA3D8u, 0x1CA3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3E0u;
label_1ca3e0:
    // 0x1ca3e0: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x1ca3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x1ca3e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ca3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3e8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1CA3E8u;
    SET_GPR_U32(ctx, 31, 0x1CA3F0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1CA3E8u, 0x1CA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3F0u;
label_1ca3f0:
    // 0x1ca3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca3f4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA3F4u;
    {
        const bool branch_taken_0x1ca3f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca3f4) {
            ctx->pc = 0x1CA40Cu;
            goto label_1ca40c;
        }
    }
    ctx->pc = 0x1CA3FCu;
    // 0x1ca3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca400: 0xc073590  jal         func_1CD640
    ctx->pc = 0x1CA400u;
    SET_GPR_U32(ctx, 31, 0x1CA408u);
    ctx->pc = 0x1CD640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD640u, 0x1CA400u, 0x1CA408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA408u;
label_1ca408:
    // 0x1ca408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ca408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca40c:
    // 0x1ca40c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1ca40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca410: 0xac5000dc  sw          $s0, 0xDC($v0)
    ctx->pc = 0x1ca410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 16));
    // 0x1ca414: 0xc103db0  jal         func_40F6C0
    ctx->pc = 0x1CA414u;
    SET_GPR_U32(ctx, 31, 0x1CA41Cu);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x1CA414u, 0x1CA41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA41Cu;
label_1ca41c:
    // 0x1ca41c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ca41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca420: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x1ca420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    // 0x1ca424: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1ca424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca428: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1CA428u;
    SET_GPR_U32(ctx, 31, 0x1CA430u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1CA428u, 0x1CA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA430u;
label_1ca430:
    // 0x1ca430: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ca430u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca434: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1ca434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1ca438: 0x24847960  addiu       $a0, $a0, 0x7960
    ctx->pc = 0x1ca438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31072));
    // 0x1ca43c: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1CA43Cu;
    SET_GPR_U32(ctx, 31, 0x1CA444u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1CA43Cu, 0x1CA444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA444u;
label_1ca444:
    // 0x1ca444: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1ca444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca448: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1ca448u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1ca44c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ca44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ca450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca45c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ca460: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA468u;
    // 0x1ca468: 0x0  nop
    ctx->pc = 0x1ca468u;
    // NOP
    // 0x1ca46c: 0x0  nop
    ctx->pc = 0x1ca46cu;
    // NOP
    // 0x1ca470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca47c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ca47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ca480: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca484: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x1ca484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1ca488: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA488u;
    {
        const bool branch_taken_0x1ca488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca488) {
            ctx->pc = 0x1CA4B8u;
            goto label_1ca4b8;
        }
    }
    ctx->pc = 0x1CA490u;
    // 0x1ca490: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ca490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca494: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1ca498: 0xc072948  jal         func_1CA520
    ctx->pc = 0x1CA498u;
    SET_GPR_U32(ctx, 31, 0x1CA4A0u);
    ctx->pc = 0x1CA520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA520u, 0x1CA498u, 0x1CA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4A0u;
label_1ca4a0:
    // 0x1ca4a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca4a4: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x1ca4a8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1CA4A8u;
    SET_GPR_U32(ctx, 31, 0x1CA4B0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1CA4A8u, 0x1CA4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B0u;
label_1ca4b0:
    // 0x1ca4b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca4b4: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x1ca4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
label_1ca4b8:
    // 0x1ca4b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ca4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca4bc: 0x8c4400b0  lw          $a0, 0xB0($v0)
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1ca4c0: 0xc103da2  jal         func_40F688
    ctx->pc = 0x1CA4C0u;
    SET_GPR_U32(ctx, 31, 0x1CA4C8u);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x1CA4C0u, 0x1CA4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4C8u;
label_1ca4c8:
    // 0x1ca4c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ca4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca4cc: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1CA4CCu;
    SET_GPR_U32(ctx, 31, 0x1CA4D4u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1CA4CCu, 0x1CA4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4D4u;
label_1ca4d4:
    // 0x1ca4d4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1ca4d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca4d8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ca4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1ca4dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4e4: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1CA4E4u;
    SET_GPR_U32(ctx, 31, 0x1CA4ECu);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1CA4E4u, 0x1CA4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4ECu;
label_1ca4ec:
    // 0x1ca4ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ca4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca4f0: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1ca4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1ca4f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4f8: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1CA4F8u;
    SET_GPR_U32(ctx, 31, 0x1CA500u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1CA4F8u, 0x1CA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA500u;
label_1ca500:
    // 0x1ca500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ca500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca508: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca50c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ca50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ca510: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA518u;
    // 0x1ca518: 0x0  nop
    ctx->pc = 0x1ca518u;
    // NOP
    // 0x1ca51c: 0x0  nop
    ctx->pc = 0x1ca51cu;
    // NOP
    ctx->pc = 0x1ca520u;
}
