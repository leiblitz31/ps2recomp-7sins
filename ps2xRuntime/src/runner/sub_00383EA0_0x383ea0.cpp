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

// Function: sub_00383EA0
// Address: 0x383ea0 - 0x384038
void sub_00383EA0_0x383ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383EA0_0x383ea0");
#endif

    switch (ctx->pc) {
        case 0x383ee8u: goto label_383ee8;
        case 0x383f14u: goto label_383f14;
        default: break;
    }

    ctx->pc = 0x383ea0u;

    // 0x383ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x383ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x383ea4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x383ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x383ea8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x383ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x383eac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x383eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x383eb0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x383eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383eb4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x383eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x383eb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x383eb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x383ec0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x383ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ec4: 0x8c44ad40  lw          $a0, -0x52C0($v0)
    ctx->pc = 0x383ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DAD40u));
    // 0x383ec8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x383ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x383ecc: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x383eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x383ed0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x383ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383ed4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x383ED4u;
    {
        const bool branch_taken_0x383ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x383ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383ED4u;
        // 0x383ed8: 0xe60c0004  swc1        $f12, 0x4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ed4) {
            ctx->pc = 0x383EF0u;
            goto label_383ef0;
        }
    }
    ctx->pc = 0x383EDCu;
    // 0x383edc: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x383edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x383ee0: 0xc0e10aa  jal         func_3842A8
    ctx->pc = 0x383EE0u;
    SET_GPR_U32(ctx, 31, 0x383EE8u);
    ctx->pc = 0x383EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EE0u;
    // 0x383ee4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3842A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3842A8u, 0x383EE0u, 0x383EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383EE8u;
label_383ee8:
    // 0x383ee8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x383EE8u;
    {
        const bool branch_taken_0x383ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EE8u;
        // 0x383eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ee8) {
            ctx->pc = 0x383F24u;
            goto label_383f24;
        }
    }
    ctx->pc = 0x383EF0u;
label_383ef0:
    // 0x383ef0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x383ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x383ef4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x383ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x383ef8: 0x8c44ad70  lw          $a0, -0x5290($v0)
    ctx->pc = 0x383ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DAD70u));
    // 0x383efc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x383efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x383f00: 0x54640008  bnel        $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x383F00u;
    {
        const bool branch_taken_0x383f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x383f00) {
            ctx->pc = 0x383F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383F00u;
            // 0x383f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383F24u;
            goto label_383f24;
        }
    }
    ctx->pc = 0x383F08u;
    // 0x383f08: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x383f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x383f0c: 0xc0e1168  jal         func_3845A0
    ctx->pc = 0x383F0Cu;
    SET_GPR_U32(ctx, 31, 0x383F14u);
    ctx->pc = 0x383F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F0Cu;
    // 0x383f10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3845A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3845A0u, 0x383F0Cu, 0x383F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F14u;
label_383f14:
    // 0x383f14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x383f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f18: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x383F18u;
    {
        const bool branch_taken_0x383f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F18u;
        // 0x383f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383f18) {
            ctx->pc = 0x383F24u;
            goto label_383f24;
        }
    }
    ctx->pc = 0x383F20u;
    // 0x383f20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x383f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383f24:
    // 0x383f24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x383f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383f28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x383f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383f2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x383f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383f34: 0x3e00008  jr          $ra
    ctx->pc = 0x383F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F34u;
        // 0x383f38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383F3Cu;
    // 0x383f3c: 0x0  nop
    ctx->pc = 0x383f3cu;
    // NOP
    // 0x383f40: 0xc4ab0008  lwc1        $f11, 0x8($a1)
    ctx->pc = 0x383f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x383f44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x383f48: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x383f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x383f4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x383f4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x383f50: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x383f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x383f54: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x383f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x383f58: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x383f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x383f5c: 0x46065842  mul.s       $f1, $f11, $f6
    ctx->pc = 0x383f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x383f60: 0x46042802  mul.s       $f0, $f5, $f4
    ctx->pc = 0x383f60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x383f64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x383f64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x383f68: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x383f68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x383f6c: 0x0  nop
    ctx->pc = 0x383f6cu;
    // NOP
    // 0x383f70: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x383F70u;
    {
        const bool branch_taken_0x383f70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x383F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F70u;
        // 0x383f74: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383f70) {
            ctx->pc = 0x38400Cu;
            goto label_38400c;
        }
    }
    ctx->pc = 0x383F78u;
    // 0x383f78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x383f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x383f7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x383f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x383f80: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x383f80u;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x383f84: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x383f84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x383f88: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x383f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x383f8c: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x383f8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x383f90: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x383f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x383f94: 0xc4480004  lwc1        $f8, 0x4($v0)
    ctx->pc = 0x383f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x383f98: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x383f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x383f9c: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x383f9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x383fa0: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x383fa0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x383fa4: 0xe7a80014  swc1        $f8, 0x14($sp)
    ctx->pc = 0x383fa4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x383fa8: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x383fa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x383fac: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x383facu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x383fb0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x383fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x383fb4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x383fb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x383fb8: 0x46040982  mul.s       $f6, $f1, $f4
    ctx->pc = 0x383fb8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x383fbc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x383fbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x383fc0: 0x46071242  mul.s       $f9, $f2, $f7
    ctx->pc = 0x383fc0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x383fc4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x383fc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x383fc8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x383fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x383fcc: 0x46050282  mul.s       $f10, $f0, $f5
    ctx->pc = 0x383fccu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x383fd0: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x383fd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x383fd4: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x383fd4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x383fd8: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x383fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x383fdc: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x383fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x383fe0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x383fe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x383fe4: 0x46093180  add.s       $f6, $f6, $f9
    ctx->pc = 0x383fe4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x383fe8: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x383fe8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x383fec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x383fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x383ff0: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x383ff0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x383ff4: 0xe4860008  swc1        $f6, 0x8($a0)
    ctx->pc = 0x383ff4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x383ff8: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x383ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x383ffc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x383ffcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x384000: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x384000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x384004: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x384004u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x384008: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x384008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_38400c:
    // 0x38400c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x38400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384010: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x384010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x384014: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x384014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x384018: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x384018u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x38401c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x38401cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x384020: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x384020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x384024: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x384024u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x384028: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x384028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x38402c: 0x3e00008  jr          $ra
    ctx->pc = 0x38402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38402Cu;
        // 0x384030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384034u;
    // 0x384034: 0x0  nop
    ctx->pc = 0x384034u;
    // NOP
    ctx->pc = 0x384038u;
}
