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

// Function: sub_00377C50
// Address: 0x377c50 - 0x377d50
void sub_00377C50_0x377c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377C50_0x377c50");
#endif

    switch (ctx->pc) {
        case 0x377c90u: goto label_377c90;
        case 0x377ca0u: goto label_377ca0;
        case 0x377cc0u: goto label_377cc0;
        case 0x377d04u: goto label_377d04;
        case 0x377d18u: goto label_377d18;
        case 0x377d2cu: goto label_377d2c;
        default: break;
    }

    ctx->pc = 0x377c50u;

    // 0x377c50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x377c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x377c54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x377c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x377c58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x377c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x377c5c: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x377c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    // 0x377c60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x377c64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x377c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x377c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x377c6c: 0x2653c430  addiu       $s3, $s2, -0x3BD0
    ctx->pc = 0x377c6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951984));
    // 0x377c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x377c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x377c74: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x377c74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377c78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x377c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x377c7c: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x377c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x61C434u));
    // 0x377c80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x377c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377c84: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x377c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x377c88: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x377C88u;
    SET_GPR_U32(ctx, 31, 0x377C90u);
    ctx->pc = 0x377C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C88u;
    // 0x377c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x377C88u, 0x377C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377C90u;
label_377c90:
    // 0x377c90: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x377c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x377c94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x377c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x377c98: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x377C98u;
    SET_GPR_U32(ctx, 31, 0x377CA0u);
    ctx->pc = 0x377C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C98u;
    // 0x377c9c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x377C98u, 0x377CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377CA0u;
label_377ca0:
    // 0x377ca0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x377ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x377ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ca8: 0xae51c430  sw          $s1, -0x3BD0($s2)
    ctx->pc = 0x377ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951984), GPR_U32(ctx, 17));
    // 0x377cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377cb0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x377cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x377cb4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x377cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x377cb8: 0xc0de0a2  jal         func_378288
    ctx->pc = 0x377CB8u;
    SET_GPR_U32(ctx, 31, 0x377CC0u);
    ctx->pc = 0x377CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377CB8u;
    // 0x377cbc: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378288u, 0x377CB8u, 0x377CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377CC0u;
label_377cc0:
    // 0x377cc0: 0x8e43c430  lw          $v1, -0x3BD0($s2)
    ctx->pc = 0x377cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x377cc4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x377cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377cc8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x377cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x377ccc: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x377cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x377cd0: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x377cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377cd4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x377cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377cd8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x377cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x377cdc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x377cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x377ce0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x377ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377ce4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x377ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377ce8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x377ce8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x377cec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x377cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x377cf0: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x377cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x377cf4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x377cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377cf8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x377cf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x377cfc: 0xc104d24  jal         func_413490
    ctx->pc = 0x377CFCu;
    SET_GPR_U32(ctx, 31, 0x377D04u);
    ctx->pc = 0x377D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377CFCu;
    // 0x377d00: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x377CFCu, 0x377D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D04u;
label_377d04:
    // 0x377d04: 0x8e45c430  lw          $a1, -0x3BD0($s2)
    ctx->pc = 0x377d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x377d08: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x377d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x377d0c: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x377d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x377d10: 0xc0dceb6  jal         func_373AD8
    ctx->pc = 0x377D10u;
    SET_GPR_U32(ctx, 31, 0x377D18u);
    ctx->pc = 0x377D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D10u;
    // 0x377d14: 0x24a50050  addiu       $a1, $a1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373AD8u, 0x377D10u, 0x377D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D18u;
label_377d18:
    // 0x377d18: 0x8e44c430  lw          $a0, -0x3BD0($s2)
    ctx->pc = 0x377d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x377d1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x377d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x377d20: 0x24a53c58  addiu       $a1, $a1, 0x3C58
    ctx->pc = 0x377d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15448));
    // 0x377d24: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x377D24u;
    SET_GPR_U32(ctx, 31, 0x377D2Cu);
    ctx->pc = 0x377D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D24u;
    // 0x377d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x377D24u, 0x377D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377D2Cu;
label_377d2c:
    // 0x377d2c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x377d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377d30: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x377d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x377d34: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x377d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x377d38: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x377d38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x377d3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377d3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x377d40: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x377d40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x377d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377d48: 0x3e00008  jr          $ra
    ctx->pc = 0x377D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D48u;
        // 0x377d4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377D50u;
}
