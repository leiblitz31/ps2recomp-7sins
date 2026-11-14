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

// Function: sub_00348D60
// Address: 0x348d60 - 0x348e68
void sub_00348D60_0x348d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348D60_0x348d60");
#endif

    switch (ctx->pc) {
        case 0x348d98u: goto label_348d98;
        default: break;
    }

    ctx->pc = 0x348d60u;

    // 0x348d60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x348d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x348d64: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x348d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x348d68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x348d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x348d6c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x348d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x348d70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x348d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x348d74: 0x2610c2c8  addiu       $s0, $s0, -0x3D38
    ctx->pc = 0x348d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951624));
    // 0x348d78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x348d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x348d7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x348d7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x348d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x348d84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x348d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348d88: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x348d88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C360u));
    // 0x348d8c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x348d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x348d90: 0xc106784  jal         func_419E10
    ctx->pc = 0x348D90u;
    SET_GPR_U32(ctx, 31, 0x348D98u);
    ctx->pc = 0x348D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D90u;
    // 0x348d94: 0x2629021  addu        $s2, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x348D90u, 0x348D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D98u;
label_348d98:
    // 0x348d98: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x348d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348d9c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x348d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348da0: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x348da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x348da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x348da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x348da8: 0xae4200a8  sw          $v0, 0xA8($s2)
    ctx->pc = 0x348da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 2));
    // 0x348dac: 0x4600026  bltz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x348DACu;
    {
        const bool branch_taken_0x348dac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x348DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DACu;
        // 0x348db0: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348dac) {
            ctx->pc = 0x348E48u;
            goto label_348e48;
        }
    }
    ctx->pc = 0x348DB4u;
    // 0x348db4: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x348db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x348db8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x348db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x348dbc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x348dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x348dc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x348dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x348dc4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x348DC4u;
    {
        const bool branch_taken_0x348dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DC4u;
        // 0x348dc8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348dc4) {
            ctx->pc = 0x348E4Cu;
            goto label_348e4c;
        }
    }
    ctx->pc = 0x348DCCu;
    // 0x348dcc: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x348dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x348dd0: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x348DD0u;
    {
        const bool branch_taken_0x348dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x348DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DD0u;
        // 0x348dd4: 0x8f82a858  lw          $v0, -0x57A8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348dd0) {
            ctx->pc = 0x348E48u;
            goto label_348e48;
        }
    }
    ctx->pc = 0x348DD8u;
    // 0x348dd8: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x348dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348ddc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x348ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348de0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x348de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x348de4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x348de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x348de8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x348de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x348dec: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x348decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348df0: 0xc46200c8  lwc1        $f2, 0xC8($v1)
    ctx->pc = 0x348df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x348df4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x348df4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x348df8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x348df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348dfc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x348DFCu;
    {
        const bool branch_taken_0x348dfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348dfc) {
            ctx->pc = 0x348E10u;
            goto label_348e10;
        }
    }
    ctx->pc = 0x348E04u;
    // 0x348e04: 0xc780824c  lwc1        $f0, -0x7DB4($gp)
    ctx->pc = 0x348e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348e08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x348E08u;
    {
        const bool branch_taken_0x348e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E08u;
        // 0x348e0c: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e08) {
            ctx->pc = 0x348E2Cu;
            goto label_348e2c;
        }
    }
    ctx->pc = 0x348E10u;
label_348e10:
    // 0x348e10: 0xc7808250  lwc1        $f0, -0x7DB0($gp)
    ctx->pc = 0x348e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348e14: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x348e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348e18: 0x0  nop
    ctx->pc = 0x348e18u;
    // NOP
    // 0x348e1c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x348E1Cu;
    {
        const bool branch_taken_0x348e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x348e1c) {
            ctx->pc = 0x348E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348E1Cu;
            // 0x348e20: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348E30u;
            goto label_348e30;
        }
    }
    ctx->pc = 0x348E24u;
    // 0x348e24: 0xc7808254  lwc1        $f0, -0x7DAC($gp)
    ctx->pc = 0x348e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348e28: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x348e28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_348e2c:
    // 0x348e2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x348e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_348e30:
    // 0x348e30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x348e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348e34: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x348e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x348e38: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x348e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x348e3c: 0xe46200c8  swc1        $f2, 0xC8($v1)
    ctx->pc = 0x348e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 200), bits); }
    // 0x348e40: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x348e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x348e44: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x348e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_348e48:
    // 0x348e48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x348e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348e4c:
    // 0x348e4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x348e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x348e50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x348e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x348e54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348e54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x348e58: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x348e58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x348e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x348e60: 0x3e00008  jr          $ra
    ctx->pc = 0x348E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E60u;
        // 0x348e64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348E68u;
}
