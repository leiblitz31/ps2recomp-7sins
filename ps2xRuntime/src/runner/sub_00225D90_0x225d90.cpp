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

// Function: sub_00225D90
// Address: 0x225d90 - 0x2269b0
void sub_00225D90_0x225d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225D90_0x225d90");
#endif

    switch (ctx->pc) {
        case 0x225ddcu: goto label_225ddc;
        case 0x225e98u: goto label_225e98;
        case 0x225ec0u: goto label_225ec0;
        case 0x225f48u: goto label_225f48;
        case 0x225f70u: goto label_225f70;
        case 0x226008u: goto label_226008;
        case 0x2260f4u: goto label_2260f4;
        case 0x2261c4u: goto label_2261c4;
        case 0x22627cu: goto label_22627c;
        case 0x22629cu: goto label_22629c;
        case 0x2262dcu: goto label_2262dc;
        case 0x2262ecu: goto label_2262ec;
        case 0x226340u: goto label_226340;
        case 0x226548u: goto label_226548;
        case 0x2265f4u: goto label_2265f4;
        case 0x226630u: goto label_226630;
        case 0x226658u: goto label_226658;
        case 0x226668u: goto label_226668;
        case 0x22667cu: goto label_22667c;
        case 0x22668cu: goto label_22668c;
        case 0x22669cu: goto label_22669c;
        case 0x226770u: goto label_226770;
        case 0x22678cu: goto label_22678c;
        case 0x226810u: goto label_226810;
        case 0x226850u: goto label_226850;
        case 0x2268d8u: goto label_2268d8;
        case 0x226960u: goto label_226960;
        case 0x22696cu: goto label_22696c;
        case 0x22697cu: goto label_22697c;
        case 0x22698cu: goto label_22698c;
        default: break;
    }

    ctx->pc = 0x225d90u;

    // 0x225d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225d9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x225d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x225da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225da4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x225DA4u;
    {
        const bool branch_taken_0x225da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225da4) {
            ctx->pc = 0x225DDCu;
            goto label_225ddc;
        }
    }
    ctx->pc = 0x225DACu;
    // 0x225dac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x225dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x225db0: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x225db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
    // 0x225db4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225db8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x225db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x225dbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x225dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225dc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x225dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x225dc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x225dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x225dc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x225DC8u;
    {
        const bool branch_taken_0x225dc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x225dc8) {
            ctx->pc = 0x225DDCu;
            goto label_225ddc;
        }
    }
    ctx->pc = 0x225DD0u;
    // 0x225dd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x225dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225dd4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x225DD4u;
    SET_GPR_U32(ctx, 31, 0x225DDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x225DD4u, 0x225DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225DDCu;
label_225ddc:
    // 0x225ddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225de4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x225de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225de8: 0x3e00008  jr          $ra
    ctx->pc = 0x225DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225DF0u;
    // 0x225df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225df4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225df8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x225df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x225dfc: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x225dfcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x225e00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225e04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x225e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225e08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225e10: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x225e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e14: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x225e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x225e18: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x225e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225e20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x225e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225e24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225e2c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x225e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x225e30: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x225e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e34: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x225e34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x225e38: 0x3e00008  jr          $ra
    ctx->pc = 0x225E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225E40u;
    // 0x225e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225e44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x225e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x225e48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x225e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x225e4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225e50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x225e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x225e54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x225e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225e5c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x225e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225e60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x225e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x225e64: 0x3e00008  jr          $ra
    ctx->pc = 0x225E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225E6Cu;
    // 0x225e6c: 0x0  nop
    ctx->pc = 0x225e6cu;
    // NOP
    // 0x225e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225e7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x225e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x225e80: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x225e80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x225e84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225e88: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x225e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x225e8c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x225e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225e90: 0xc041d58  jal         func_107560
    ctx->pc = 0x225E90u;
    SET_GPR_U32(ctx, 31, 0x225E98u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x225E90u, 0x225E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225E98u;
label_225e98:
    // 0x225e98: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x225e98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225e9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x225e9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x225ea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225ea4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x225EA4u;
    {
        const bool branch_taken_0x225ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x225ea4) {
            ctx->pc = 0x225EC0u;
            goto label_225ec0;
        }
    }
    ctx->pc = 0x225EACu;
    // 0x225eac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225eb0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x225eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x225eb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x225eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225eb8: 0xc041d58  jal         func_107560
    ctx->pc = 0x225EB8u;
    SET_GPR_U32(ctx, 31, 0x225EC0u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x225EB8u, 0x225EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225EC0u;
label_225ec0:
    // 0x225ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225ec4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x225ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x225ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x225EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225ED0u;
    // 0x225ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225ed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225edc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x225edcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x225ee0: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x225ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225ee4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225EE4u;
    {
        const bool branch_taken_0x225ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225ee4) {
            ctx->pc = 0x225EFCu;
            goto label_225efc;
        }
    }
    ctx->pc = 0x225EECu;
    // 0x225eec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225ef0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x225ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x225ef4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x225EF4u;
    {
        const bool branch_taken_0x225ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225ef4) {
            ctx->pc = 0x225F04u;
            goto label_225f04;
        }
    }
    ctx->pc = 0x225EFCu;
label_225efc:
    // 0x225efc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225f00: 0x24500014  addiu       $s0, $v0, 0x14
    ctx->pc = 0x225f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_225f04:
    // 0x225f04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225f08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225f08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x225f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225f10: 0x3e00008  jr          $ra
    ctx->pc = 0x225F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F18u;
    // 0x225f18: 0x0  nop
    ctx->pc = 0x225f18u;
    // NOP
    // 0x225f1c: 0x0  nop
    ctx->pc = 0x225f1cu;
    // NOP
    // 0x225f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225f2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x225f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x225f30: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x225f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x225f34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225f38: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x225f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x225f3c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x225f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225f40: 0xc041d58  jal         func_107560
    ctx->pc = 0x225F40u;
    SET_GPR_U32(ctx, 31, 0x225F48u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x225F40u, 0x225F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F48u;
label_225f48:
    // 0x225f48: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x225f48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x225f4c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x225f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x225f50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x225f54: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x225F54u;
    {
        const bool branch_taken_0x225f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x225f54) {
            ctx->pc = 0x225F70u;
            goto label_225f70;
        }
    }
    ctx->pc = 0x225F5Cu;
    // 0x225f5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225f60: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x225f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x225f64: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x225f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225f68: 0xc041d58  jal         func_107560
    ctx->pc = 0x225F68u;
    SET_GPR_U32(ctx, 31, 0x225F70u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x225F68u, 0x225F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225F70u;
label_225f70:
    // 0x225f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225f74: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x225f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x225f78: 0x3e00008  jr          $ra
    ctx->pc = 0x225F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225F80u;
    // 0x225f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x225f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225f88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225f8c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x225f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x225f90: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x225f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x225f94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x225F94u;
    {
        const bool branch_taken_0x225f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225f94) {
            ctx->pc = 0x225FACu;
            goto label_225fac;
        }
    }
    ctx->pc = 0x225F9Cu;
    // 0x225f9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225fa0: 0x24500020  addiu       $s0, $v0, 0x20
    ctx->pc = 0x225fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x225fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x225FA4u;
    {
        const bool branch_taken_0x225fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225fa4) {
            ctx->pc = 0x225FB4u;
            goto label_225fb4;
        }
    }
    ctx->pc = 0x225FACu;
label_225fac:
    // 0x225fac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x225facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225fb0: 0x2450002c  addiu       $s0, $v0, 0x2C
    ctx->pc = 0x225fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_225fb4:
    // 0x225fb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x225fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225fbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x225fbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x225fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x225FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225FC8u;
    // 0x225fc8: 0x0  nop
    ctx->pc = 0x225fc8u;
    // NOP
    // 0x225fcc: 0x0  nop
    ctx->pc = 0x225fccu;
    // NOP
    // 0x225fd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x225fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225fd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x225fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x225fdc: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x225fdcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x225fe0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x225fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x225fe4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x225fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225fe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225fec: 0x0  nop
    ctx->pc = 0x225fecu;
    // NOP
    // 0x225ff0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x225ff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225ff4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x225FF4u;
    {
        const bool branch_taken_0x225ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225ff4) {
            ctx->pc = 0x226014u;
            goto label_226014;
        }
    }
    ctx->pc = 0x225FFCu;
    // 0x225ffc: 0xc78c8214  lwc1        $f12, -0x7DEC($gp)
    ctx->pc = 0x225ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226000: 0xc0c3816  jal         func_30E058
    ctx->pc = 0x226000u;
    SET_GPR_U32(ctx, 31, 0x226008u);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x226000u, 0x226008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226008u;
label_226008:
    // 0x226008: 0xc7818184  lwc1        $f1, -0x7E7C($gp)
    ctx->pc = 0x226008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22600c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22600cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226010: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x226010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_226014:
    // 0x226014: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x226014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226018: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22601c: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x22601cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x226020: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x226020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226024: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x226024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x226028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22602c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22602Cu;
    {
        const bool branch_taken_0x22602c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22602c) {
            ctx->pc = 0x226040u;
            goto label_226040;
        }
    }
    ctx->pc = 0x226034u;
    // 0x226034: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x226034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226038: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x226038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22603c: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x22603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_226040:
    // 0x226040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226044: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x226044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x226048: 0x3e00008  jr          $ra
    ctx->pc = 0x226048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226050u;
    // 0x226050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226054: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x226054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x226058: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x226058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x22605c: 0x93a20020  lbu         $v0, 0x20($sp)
    ctx->pc = 0x22605cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226060: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x226060u;
    {
        const bool branch_taken_0x226060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226060) {
            ctx->pc = 0x22607Cu;
            goto label_22607c;
        }
    }
    ctx->pc = 0x226068u;
    // 0x226068: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22606c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x22606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226070: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x226070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x226074: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x226074u;
    {
        const bool branch_taken_0x226074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226074) {
            ctx->pc = 0x226088u;
            goto label_226088;
        }
    }
    ctx->pc = 0x22607Cu;
label_22607c:
    // 0x22607c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226080: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x226080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226084: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x226084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_226088:
    // 0x226088: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x226088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22608c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22608cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226090: 0x3e00008  jr          $ra
    ctx->pc = 0x226090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226098u;
    // 0x226098: 0x0  nop
    ctx->pc = 0x226098u;
    // NOP
    // 0x22609c: 0x0  nop
    ctx->pc = 0x22609cu;
    // NOP
    // 0x2260a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2260a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2260a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2260a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2260a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2260a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2260ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2260acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2260b0: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2260b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x2260b4: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x2260b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2260b8: 0x27a20088  addiu       $v0, $sp, 0x88
    ctx->pc = 0x2260b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2260bc: 0xc7819c70  lwc1        $f1, -0x6390($gp)
    ctx->pc = 0x2260bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2260c0: 0xc7809c74  lwc1        $f0, -0x638C($gp)
    ctx->pc = 0x2260c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294941812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2260c4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2260c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2260c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2260c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2260cc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2260ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2260d0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2260d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2260d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2260d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2260d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2260dc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2260dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2260e0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2260e0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2260e4: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x2260e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2260e8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2260e8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2260ec: 0xc0c39dc  jal         func_30E770
    ctx->pc = 0x2260ECu;
    SET_GPR_U32(ctx, 31, 0x2260F4u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x2260ECu, 0x2260F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260F4u;
label_2260f4:
    // 0x2260f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2260f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2260f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2260f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2260fc: 0x0  nop
    ctx->pc = 0x2260fcu;
    // NOP
    // 0x226100: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226100u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226104: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x226104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x226108: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22610c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x22610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x226110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226114: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x226114u;
    {
        const bool branch_taken_0x226114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226114) {
            ctx->pc = 0x2261B8u;
            goto label_2261b8;
        }
    }
    ctx->pc = 0x22611Cu;
    // 0x22611c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226120: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x226120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226124: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x226124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226128: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226128u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22612c: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x22612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x226130: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226134: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x226134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22613c: 0x0  nop
    ctx->pc = 0x22613cu;
    // NOP
    // 0x226140: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226144: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x226144u;
    {
        const bool branch_taken_0x226144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226144) {
            ctx->pc = 0x226178u;
            goto label_226178;
        }
    }
    ctx->pc = 0x22614Cu;
    // 0x22614c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22614cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226150: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226154: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x226154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x226158: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x226158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22615c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22615cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226160: 0x0  nop
    ctx->pc = 0x226160u;
    // NOP
    // 0x226164: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x226164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x226168: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22616c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x22616cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x226170: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x226170u;
    {
        const bool branch_taken_0x226170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226170) {
            ctx->pc = 0x2261B8u;
            goto label_2261b8;
        }
    }
    ctx->pc = 0x226178u;
label_226178:
    // 0x226178: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22617c: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x22617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226180: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x226180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226184: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x226184u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x226188: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x226188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x22618c: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x22618cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226190: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x226190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x226194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226198: 0x0  nop
    ctx->pc = 0x226198u;
    // NOP
    // 0x22619c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22619cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2261a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2261A0u;
    {
        const bool branch_taken_0x2261a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2261a0) {
            ctx->pc = 0x2261B8u;
            goto label_2261b8;
        }
    }
    ctx->pc = 0x2261A8u;
    // 0x2261a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2261a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2261ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2261acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2261b0: 0x0  nop
    ctx->pc = 0x2261b0u;
    // NOP
    // 0x2261b4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x2261b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2261b8:
    // 0x2261b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2261b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2261bc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2261BCu;
    {
        const bool branch_taken_0x2261bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2261bc) {
            ctx->pc = 0x2263D0u;
            goto label_2263d0;
        }
    }
    ctx->pc = 0x2261C4u;
label_2261c4:
    // 0x2261c4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2261c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2261c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2261c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2261cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2261ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2261d0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2261d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2261d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2261d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2261d8: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2261d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2261dc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2261dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2261e0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2261e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2261e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2261e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2261e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2261e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2261ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2261ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2261f0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2261f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2261f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2261f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2261f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2261f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2261fc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x2261fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226200: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226204: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226208: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22620c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226210: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x226210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226214: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226218: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22621c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22621cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226220: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226224: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226228: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x226228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22622c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22622cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226230: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x226230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x226234: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x226234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226238: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22623c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22623cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226240: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x226244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226248: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x226248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22624c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x22624cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x226250: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x226250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x226254: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x226254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x226258: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22625c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x226260: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x226260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226264: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226268: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x226268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22626c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x22626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x226270: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x226270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x226274: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x226274u;
    SET_GPR_U32(ctx, 31, 0x22627Cu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x226274u, 0x22627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22627Cu;
label_22627c:
    // 0x22627c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x226280: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x226280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x226284: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x226284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x226288: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x226288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x22628c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22628cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x226290: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226290u;
    {
        const bool branch_taken_0x226290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226290) {
            ctx->pc = 0x2262B8u;
            goto label_2262b8;
        }
    }
    ctx->pc = 0x226298u;
    // 0x226298: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x226298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_22629c:
    // 0x22629c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x22629cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2262a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2262a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2262a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2262a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2262a8: 0x0  nop
    ctx->pc = 0x2262a8u;
    // NOP
    // 0x2262ac: 0x0  nop
    ctx->pc = 0x2262acu;
    // NOP
    // 0x2262b0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2262B0u;
    {
        const bool branch_taken_0x2262b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2262b0) {
            ctx->pc = 0x22629Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22629c;
        }
    }
    ctx->pc = 0x2262B8u;
label_2262b8:
    // 0x2262b8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2262b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2262bc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2262bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2262c0: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2262c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2262c4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2262c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2262c8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2262c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2262cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2262ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2262d0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2262d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2262d4: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2262D4u;
    SET_GPR_U32(ctx, 31, 0x2262DCu);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2262D4u, 0x2262DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262DCu;
label_2262dc:
    // 0x2262dc: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x2262dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2262e0: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x2262e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2262e4: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x2262E4u;
    SET_GPR_U32(ctx, 31, 0x2262ECu);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x2262E4u, 0x2262ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2262ECu;
label_2262ec:
    // 0x2262ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2262ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2262f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2262f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2262f4: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2262f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2262f8: 0xc7a50068  lwc1        $f5, 0x68($sp)
    ctx->pc = 0x2262f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2262fc: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x2262fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x226300: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x226300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226304: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x226304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226308: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x226308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22630c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x22630cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226310: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226314: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226314u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226318: 0x0  nop
    ctx->pc = 0x226318u;
    // NOP
    // 0x22631c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22631cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x226320: 0x4602185c  madd.s      $f1, $f3, $f2
    ctx->pc = 0x226320u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x226324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226328: 0x0  nop
    ctx->pc = 0x226328u;
    // NOP
    // 0x22632c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22632cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x226330: 0x46042b5c  madd.s      $f13, $f5, $f4
    ctx->pc = 0x226330u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x226334: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x226334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226338: 0xc0c39d6  jal         func_30E758
    ctx->pc = 0x226338u;
    SET_GPR_U32(ctx, 31, 0x226340u);
    ctx->pc = 0x30E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E758u, 0x226338u, 0x226340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226340u;
label_226340:
    // 0x226340: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x226340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x226344: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x226344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x226348: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x226348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x22634c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22634cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x226350: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x226350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x226354: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x226354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22635c: 0x0  nop
    ctx->pc = 0x22635cu;
    // NOP
    // 0x226360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x226360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226364: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x226364u;
    {
        const bool branch_taken_0x226364 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226364) {
            ctx->pc = 0x22638Cu;
            goto label_22638c;
        }
    }
    ctx->pc = 0x22636Cu;
    // 0x22636c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22636cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x226370: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x226370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x226374: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x226374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226378: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x226378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22637c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22637cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226380: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x226380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x226384: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x226384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x226388: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x226388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_22638c:
    // 0x22638c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22638cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x226390: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x226390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x226394: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x226394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22639c: 0x0  nop
    ctx->pc = 0x22639cu;
    // NOP
    // 0x2263a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2263a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2263a4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2263A4u;
    {
        const bool branch_taken_0x2263a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2263a4) {
            ctx->pc = 0x2263CCu;
            goto label_2263cc;
        }
    }
    ctx->pc = 0x2263ACu;
    // 0x2263ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2263acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2263b0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2263b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2263b4: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x2263b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2263b8: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x2263b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2263bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2263bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2263c0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2263c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2263c4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2263c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x2263c8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2263c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_2263cc:
    // 0x2263cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2263ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2263d0:
    // 0x2263d0: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2263d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2263d4: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x2263D4u;
    {
        const bool branch_taken_0x2263d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2263d4) {
            ctx->pc = 0x2261C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2261c4;
        }
    }
    ctx->pc = 0x2263DCu;
    // 0x2263dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2263dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2263e0: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x2263e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2263e4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2263e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2263e8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2263e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2263ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2263ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2263f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2263f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2263f4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2263f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2263f8: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x2263f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2263fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2263fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226400: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x226400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226404: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226404u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226408: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x226408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x22640c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22640cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226410: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x226410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226414: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226418: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x226418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22641c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22641cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226420: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x226420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x226424: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x226424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226428: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x226428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22642c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22642cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226430: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x226430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x226434: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x226434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226438: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x226438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22643c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22643cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226440: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x226440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x226444: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x226444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226448: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x226448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22644c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22644cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226450: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x226450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x226454: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226458: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x226458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22645c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x22645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226460: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226460u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226464: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226468: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x226468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x22646c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226470: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x226470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226474: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x226474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226478: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22647c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226480: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x226480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x226484: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226488: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x226488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22648c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226494: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226498: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x226498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x22649c: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x22649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2264a0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2264a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264a4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2264a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264a8: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x2264a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2264ac: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2264acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2264b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2264b4: 0x0  nop
    ctx->pc = 0x2264b4u;
    // NOP
    // 0x2264b8: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2264b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2264bc: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2264bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2264c0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2264c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2264c4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2264c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264c8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2264c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2264ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2264d0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2264d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2264d4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2264d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2264d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2264dc: 0x0  nop
    ctx->pc = 0x2264dcu;
    // NOP
    // 0x2264e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2264e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2264e4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2264E4u;
    {
        const bool branch_taken_0x2264e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2264e4) {
            ctx->pc = 0x2264FCu;
            goto label_2264fc;
        }
    }
    ctx->pc = 0x2264ECu;
    // 0x2264ec: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2264ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2264f0: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x2264f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2264f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2264f8: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2264f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2264fc:
    // 0x2264fc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x2264fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226500: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x226500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226504: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226508: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x226508u;
    {
        const bool branch_taken_0x226508 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226508) {
            ctx->pc = 0x226520u;
            goto label_226520;
        }
    }
    ctx->pc = 0x226510u;
    // 0x226510: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x226510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226514: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x226514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226518: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22651c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x22651cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_226520:
    // 0x226520: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x226520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226524: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x226524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226528: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x226528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22652c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22652cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226530: 0x0  nop
    ctx->pc = 0x226530u;
    // NOP
    // 0x226534: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226534u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x226538: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x226538u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x22653c: 0xc78d8164  lwc1        $f13, -0x7E9C($gp)
    ctx->pc = 0x22653cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x226540: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x226540u;
    SET_GPR_U32(ctx, 31, 0x226548u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x226540u, 0x226548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226548u;
label_226548:
    // 0x226548: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x226548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x22654c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x22654cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226550: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x226550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226554: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226558: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x226558u;
    {
        const bool branch_taken_0x226558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226558) {
            ctx->pc = 0x226570u;
            goto label_226570;
        }
    }
    ctx->pc = 0x226560u;
    // 0x226560: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x226560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226564: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x226564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226568: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22656c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x22656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_226570:
    // 0x226570: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x226570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226574: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x226574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226578: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22657c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x226580: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x226580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226584: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226588: 0x0  nop
    ctx->pc = 0x226588u;
    // NOP
    // 0x22658c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22658cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226590: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x226590u;
    {
        const bool branch_taken_0x226590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226590) {
            ctx->pc = 0x2265A8u;
            goto label_2265a8;
        }
    }
    ctx->pc = 0x226598u;
    // 0x226598: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x226598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22659c: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x22659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2265a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2265a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2265a4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2265a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2265a8:
    // 0x2265a8: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2265a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265ac: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x2265acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2265b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2265b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2265b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2265B4u;
    {
        const bool branch_taken_0x2265b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2265b4) {
            ctx->pc = 0x2265CCu;
            goto label_2265cc;
        }
    }
    ctx->pc = 0x2265BCu;
    // 0x2265bc: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x2265bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265c0: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x2265c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2265c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2265c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2265c8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2265c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_2265cc:
    // 0x2265cc: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x2265ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2265d0: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x2265d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2265d4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2265d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2265d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2265dc: 0x0  nop
    ctx->pc = 0x2265dcu;
    // NOP
    // 0x2265e0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2265e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2265e4: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x2265e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2265e8: 0xc78d8164  lwc1        $f13, -0x7E9C($gp)
    ctx->pc = 0x2265e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2265ec: 0xc0c39e2  jal         func_30E788
    ctx->pc = 0x2265ECu;
    SET_GPR_U32(ctx, 31, 0x2265F4u);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x2265ECu, 0x2265F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2265F4u;
label_2265f4:
    // 0x2265f4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2265f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2265f8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2265f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265fc: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x2265fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226600: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x226600u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226604: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x226604u;
    {
        const bool branch_taken_0x226604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226604) {
            ctx->pc = 0x22661Cu;
            goto label_22661c;
        }
    }
    ctx->pc = 0x22660Cu;
    // 0x22660c: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x22660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226610: 0xc7808164  lwc1        $f0, -0x7E9C($gp)
    ctx->pc = 0x226610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226614: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226614u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226618: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x226618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_22661c:
    // 0x22661c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226620: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x226620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x226624: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226624u;
    {
        const bool branch_taken_0x226624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x226624) {
            ctx->pc = 0x22664Cu;
            goto label_22664c;
        }
    }
    ctx->pc = 0x22662Cu;
    // 0x22662c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x22662cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_226630:
    // 0x226630: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x226630u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x226634: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x226634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x226638: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x226638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22663c: 0x0  nop
    ctx->pc = 0x22663cu;
    // NOP
    // 0x226640: 0x0  nop
    ctx->pc = 0x226640u;
    // NOP
    // 0x226644: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x226644u;
    {
        const bool branch_taken_0x226644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x226644) {
            ctx->pc = 0x226630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226630;
        }
    }
    ctx->pc = 0x22664Cu;
label_22664c:
    // 0x22664c: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x22664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226650: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x226650u;
    SET_GPR_U32(ctx, 31, 0x226658u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x226650u, 0x226658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226658u;
label_226658:
    // 0x226658: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x226658u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22665c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x22665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226660: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x226660u;
    SET_GPR_U32(ctx, 31, 0x226668u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x226660u, 0x226668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226668u;
label_226668:
    // 0x226668: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x226668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x22666c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x22666cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x226670: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x226670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226674: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x226674u;
    SET_GPR_U32(ctx, 31, 0x22667Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x226674u, 0x22667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22667Cu;
label_22667c:
    // 0x22667c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22667cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x226680: 0xc7ac00a0  lwc1        $f12, 0xA0($sp)
    ctx->pc = 0x226680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226684: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x226684u;
    SET_GPR_U32(ctx, 31, 0x22668Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x226684u, 0x22668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22668Cu;
label_22668c:
    // 0x22668c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x22668cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x226690: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x226690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x226694: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x226694u;
    SET_GPR_U32(ctx, 31, 0x22669Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x226694u, 0x22669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22669Cu;
label_22669c:
    // 0x22669c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x22669cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2266a0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2266a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2266a4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2266a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2266a8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2266a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266ac: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2266acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2266b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2266b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2266b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2266b8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2266b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266bc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2266bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2266c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2266c4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2266c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2266c8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2266c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266cc: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2266ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2266d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2266d4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2266d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2266d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2266d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2266dc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2266dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266e0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2266e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2266e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2266e8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2266e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2266ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2266ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2266f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2266f4: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2266f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2266f8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2266f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2266fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2266fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226700: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226704: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x226704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x226708: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22670c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x22670cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226710: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x226710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226714: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226718: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22671c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x22671cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x226720: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226724: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x226724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226728: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22672c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x22672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226730: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x226730u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226734: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x226734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226738: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22673c: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x22673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226744: 0x0  nop
    ctx->pc = 0x226744u;
    // NOP
    // 0x226748: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226748u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x22674c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x22674cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x226750: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x226750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x226754: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226758: 0xc441003c  lwc1        $f1, 0x3C($v0)
    ctx->pc = 0x226758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22675c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x22675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226760: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x226760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226764: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x226764u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x226768: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x226768u;
    SET_GPR_U32(ctx, 31, 0x226770u);
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x226768u, 0x226770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226770u;
label_226770:
    // 0x226770: 0xc7818210  lwc1        $f1, -0x7DF0($gp)
    ctx->pc = 0x226770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226774: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x226774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x226778: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x226778u;
    {
        const bool branch_taken_0x226778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x226778) {
            ctx->pc = 0x22678Cu;
            goto label_22678c;
        }
    }
    ctx->pc = 0x226780u;
    // 0x226780: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x226780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226784: 0xc089a90  jal         func_226A40
    ctx->pc = 0x226784u;
    SET_GPR_U32(ctx, 31, 0x22678Cu);
    ctx->pc = 0x226A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A40u, 0x226784u, 0x22678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22678Cu;
label_22678c:
    // 0x22678c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22678cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226790: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x226790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226794: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x226794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x226798: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x226798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x22679c: 0x3e00008  jr          $ra
    ctx->pc = 0x22679Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22679Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2267A4u;
    // 0x2267a4: 0x0  nop
    ctx->pc = 0x2267a4u;
    // NOP
    // 0x2267a8: 0x0  nop
    ctx->pc = 0x2267a8u;
    // NOP
    // 0x2267ac: 0x0  nop
    ctx->pc = 0x2267acu;
    // NOP
    // 0x2267b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2267b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2267b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2267b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2267b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2267b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2267bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2267bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2267c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2267c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2267c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2267c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2267c8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2267c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2267cc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2267ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2267d0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2267d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2267d4: 0x1003006d  beq         $zero, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2267D4u;
    {
        const bool branch_taken_0x2267d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2267d4) {
            ctx->pc = 0x22698Cu;
            goto label_22698c;
        }
    }
    ctx->pc = 0x2267DCu;
    // 0x2267dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2267dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2267e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2267e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2267e4: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x2267e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2267e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2267e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2267ec: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x2267ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2267f0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2267f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2267f4: 0x24520020  addiu       $s2, $v0, 0x20
    ctx->pc = 0x2267f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2267f8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2267f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2267fc: 0x2451004c  addiu       $s1, $v0, 0x4C
    ctx->pc = 0x2267fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x226800: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x226800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x226804: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x226804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226808: 0xc041d58  jal         func_107560
    ctx->pc = 0x226808u;
    SET_GPR_U32(ctx, 31, 0x226810u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x226808u, 0x226810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226810u;
label_226810:
    // 0x226810: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x226810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226814: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x226814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226818: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226818u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22681c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x22681cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x226820: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x226820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226824: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x226824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226828: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22682c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x22682cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x226830: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x226830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226834: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x226834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226838: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x226838u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22683c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x22683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x226840: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x226840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x226844: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x226844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x226848: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x226848u;
    SET_GPR_U32(ctx, 31, 0x226850u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x226848u, 0x226850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226850u;
label_226850:
    // 0x226850: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x226850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226854: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x226854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226858: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x226858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22685c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x22685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226860: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226868: 0x0  nop
    ctx->pc = 0x226868u;
    // NOP
    // 0x22686c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22686cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x226870: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x226870u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x226874: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x226874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x226878: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x226878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22687c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x22687cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226880: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x226880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226884: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x226884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226888: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226888u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22688c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22688cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226890: 0x0  nop
    ctx->pc = 0x226890u;
    // NOP
    // 0x226894: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226894u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x226898: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x226898u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x22689c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x22689cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2268a0: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x2268a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2268a4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2268a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2268a8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x2268a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2268ac: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2268acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2268b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2268b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2268b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2268b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268b8: 0x0  nop
    ctx->pc = 0x2268b8u;
    // NOP
    // 0x2268bc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2268bcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2268c0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2268c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2268c4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2268c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2268c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2268c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2268ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2268d0: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x2268D0u;
    SET_GPR_U32(ctx, 31, 0x2268D8u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x2268D0u, 0x2268D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2268D8u;
label_2268d8:
    // 0x2268d8: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x2268d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2268dc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2268dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2268e0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2268e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2268e4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2268e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2268e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2268e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2268ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2268ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2268f0: 0x0  nop
    ctx->pc = 0x2268f0u;
    // NOP
    // 0x2268f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2268f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x2268f8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x2268f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2268fc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2268fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x226900: 0xc6030020  lwc1        $f3, 0x20($s0)
    ctx->pc = 0x226900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x226904: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x226904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226908: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x226908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22690c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x22690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226910: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226914: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x226914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226918: 0x0  nop
    ctx->pc = 0x226918u;
    // NOP
    // 0x22691c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x22691cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x226920: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x226920u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x226924: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x226924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x226928: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x226928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22692c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x22692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x226930: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x226930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226934: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x226934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226938: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x226938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22693c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22693cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226940: 0x0  nop
    ctx->pc = 0x226940u;
    // NOP
    // 0x226944: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x226944u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x226948: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x226948u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x22694c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x22694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x226950: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x226950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x226954: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x226954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x226958: 0xc104cf2  jal         func_4133C8
    ctx->pc = 0x226958u;
    SET_GPR_U32(ctx, 31, 0x226960u);
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x226958u, 0x226960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226960u;
label_226960:
    // 0x226960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226964: 0xc103eb2  jal         func_40FAC8
    ctx->pc = 0x226964u;
    SET_GPR_U32(ctx, 31, 0x22696Cu);
    ctx->pc = 0x40FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FAC8u, 0x226964u, 0x22696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22696Cu;
label_22696c:
    // 0x22696c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226974: 0xc103e64  jal         func_40F990
    ctx->pc = 0x226974u;
    SET_GPR_U32(ctx, 31, 0x22697Cu);
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x226974u, 0x22697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22697Cu;
label_22697c:
    // 0x22697c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x22697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x226980: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226984: 0xc106794  jal         func_419E50
    ctx->pc = 0x226984u;
    SET_GPR_U32(ctx, 31, 0x22698Cu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x226984u, 0x22698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22698Cu;
label_22698c:
    // 0x22698c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22698cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x226990: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x226990u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x226994: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x226994u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22699c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22699cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2269a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2269a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2269a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2269A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2269A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2269ACu;
    // 0x2269ac: 0x0  nop
    ctx->pc = 0x2269acu;
    // NOP
    ctx->pc = 0x2269b0u;
}
