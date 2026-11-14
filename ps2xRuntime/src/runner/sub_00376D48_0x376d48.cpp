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

// Function: sub_00376D48
// Address: 0x376d48 - 0x376e50
void sub_00376D48_0x376d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376D48_0x376d48");
#endif

    switch (ctx->pc) {
        case 0x376dc0u: goto label_376dc0;
        case 0x376e04u: goto label_376e04;
        case 0x376e18u: goto label_376e18;
        case 0x376e2cu: goto label_376e2c;
        default: break;
    }

    ctx->pc = 0x376d48u;

    // 0x376d48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x376d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x376d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376d50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x376d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x376d54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x376d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376d58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x376d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x376d5c: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x376d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x376d60: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x376d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x376d64: 0x2651c430  addiu       $s1, $s2, -0x3BD0
    ctx->pc = 0x376d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951984));
    // 0x376d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x376d6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x376d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376d70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x376d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x376d74: 0xae53c430  sw          $s3, -0x3BD0($s2)
    ctx->pc = 0x376d74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x61C430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C430u, _value); } while (0);
    // 0x376d78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x376d78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C434u));
    // 0x376d7c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x376d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x376d80: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x376d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x376d84: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x376d84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x376d88: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x376d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x376d8c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x376d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x376d90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x376d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x376d94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x376d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x376d98: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x376d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x376d9c: 0xae250020  sw          $a1, 0x20($s1)
    ctx->pc = 0x376d9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61C450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C450u, _value); } while (0);
    // 0x376da0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x376da0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61C434u));
    // 0x376da4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x376da4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61C440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C440u, _value); } while (0);
    // 0x376da8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x376da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x376dac: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x376dacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x61C43Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C43Cu, _value); } while (0);
    // 0x376db0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x376db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x376db4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x376db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x376db8: 0xc0de0a2  jal         func_378288
    ctx->pc = 0x376DB8u;
    SET_GPR_U32(ctx, 31, 0x376DC0u);
    ctx->pc = 0x376DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376DB8u;
    // 0x376dbc: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378288u, 0x376DB8u, 0x376DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376DC0u;
label_376dc0:
    // 0x376dc0: 0x8e43c430  lw          $v1, -0x3BD0($s2)
    ctx->pc = 0x376dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376dc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x376dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376dc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x376dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x376dcc: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x376dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x376dd0: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x376dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376dd4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x376dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376dd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x376dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x376ddc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x376ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x376de0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x376de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376de4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x376de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376de8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x376de8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376dec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x376decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x376df0: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x376df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376df4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x376df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376df8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x376df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x376dfc: 0xc104d24  jal         func_413490
    ctx->pc = 0x376DFCu;
    SET_GPR_U32(ctx, 31, 0x376E04u);
    ctx->pc = 0x376E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376DFCu;
    // 0x376e00: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x376DFCu, 0x376E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E04u;
label_376e04:
    // 0x376e04: 0x8e45c430  lw          $a1, -0x3BD0($s2)
    ctx->pc = 0x376e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376e08: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x376e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x376e0c: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x376e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x376e10: 0xc0dceb6  jal         func_373AD8
    ctx->pc = 0x376E10u;
    SET_GPR_U32(ctx, 31, 0x376E18u);
    ctx->pc = 0x376E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E10u;
    // 0x376e14: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373AD8u, 0x376E10u, 0x376E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E18u;
label_376e18:
    // 0x376e18: 0x8e44c430  lw          $a0, -0x3BD0($s2)
    ctx->pc = 0x376e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376e1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x376e20: 0x24a53c58  addiu       $a1, $a1, 0x3C58
    ctx->pc = 0x376e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15448));
    // 0x376e24: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x376E24u;
    SET_GPR_U32(ctx, 31, 0x376E2Cu);
    ctx->pc = 0x376E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E24u;
    // 0x376e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x376E24u, 0x376E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E2Cu;
label_376e2c:
    // 0x376e2c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x376e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376e30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x376e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x376e34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x376e34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x376e38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x376e38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376e3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x376e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376e44: 0x3e00008  jr          $ra
    ctx->pc = 0x376E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E44u;
        // 0x376e48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376E4Cu;
    // 0x376e4c: 0x0  nop
    ctx->pc = 0x376e4cu;
    // NOP
    ctx->pc = 0x376e50u;
}
