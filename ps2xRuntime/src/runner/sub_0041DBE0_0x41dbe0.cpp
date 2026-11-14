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

// Function: sub_0041DBE0
// Address: 0x41dbe0 - 0x41de60
void sub_0041DBE0_0x41dbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DBE0_0x41dbe0");
#endif

    switch (ctx->pc) {
        case 0x41dc54u: goto label_41dc54;
        case 0x41dca0u: goto label_41dca0;
        case 0x41dcf0u: goto label_41dcf0;
        case 0x41dd08u: goto label_41dd08;
        case 0x41dd70u: goto label_41dd70;
        default: break;
    }

    ctx->pc = 0x41dbe0u;

    // 0x41dbe0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x41dbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x41dbe4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x41dbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x41dbe8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x41dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x41dbec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x41dbecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dbf0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x41dbf0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dbf4: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x41dbf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x41dbf8: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x41dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x41dbfc: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x41dbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x41dc00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x41dc00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x41dc04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41dc04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41dc08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41dc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x41dc0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x41dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x41dc10: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x41dc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x41dc14: 0x121c03  sra         $v1, $s2, 16
    ctx->pc = 0x41dc14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 16));
    // 0x41dc18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x41dc1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x41dc1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc20: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x41dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x41dc24: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x41dc24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc28: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x41dc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x41dc2c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x41dc2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc30: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x41dc30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x41dc34: 0x16bc03  sra         $s7, $s6, 16
    ctx->pc = 0x41dc34u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 22), 16));
    // 0x41dc38: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x41dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x41dc3c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x41dc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41dc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x41dc44: 0x1477000e  bne         $v1, $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x41DC44u;
    {
        const bool branch_taken_0x41dc44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x41DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DC44u;
        // 0x41dc48: 0x46140542  mul.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dc44) {
            ctx->pc = 0x41DC80u;
            goto label_41dc80;
        }
    }
    ctx->pc = 0x41DC4Cu;
    // 0x41dc4c: 0xc107638  jal         func_41D8E0
    ctx->pc = 0x41DC4Cu;
    SET_GPR_U32(ctx, 31, 0x41DC54u);
    ctx->pc = 0x41DC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DC4Cu;
    // 0x41dc50: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D8E0u, 0x41DC4Cu, 0x41DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DC54u;
label_41dc54:
    // 0x41dc54: 0x4600a9c6  mov.s       $f7, $f21
    ctx->pc = 0x41dc54u;
    ctx->f[7] = FPU_MOV_S(ctx->f[21]);
    // 0x41dc58: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41dc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dc5c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x41dc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41dc60: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x41dc60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x41dc64: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x41dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41dc68: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x41dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41dc6c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x41dc6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x41dc70: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x41dc70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x41dc74: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x41dc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x41dc78: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x41DC78u;
    {
        const bool branch_taken_0x41dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DC78u;
        // 0x41dc7c: 0x46071082  mul.s       $f2, $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dc78) {
            ctx->pc = 0x41DDE0u;
            goto label_41dde0;
        }
    }
    ctx->pc = 0x41DC80u;
label_41dc80:
    // 0x41dc80: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x41dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x41dc84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41dc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc88: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x41dc88u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x41dc8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41dc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41dc90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x41dc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dc98: 0xc107638  jal         func_41D8E0
    ctx->pc = 0x41DC98u;
    SET_GPR_U32(ctx, 31, 0x41DCA0u);
    ctx->pc = 0x41DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DC98u;
    // 0x41dc9c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D8E0u, 0x41DC98u, 0x41DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DCA0u;
label_41dca0:
    // 0x41dca0: 0x2321023  subu        $v0, $s1, $s2
    ctx->pc = 0x41dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x41dca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x41dca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41dca8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x41dca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x41dcac: 0x461409c2  mul.s       $f7, $f1, $f20
    ctx->pc = 0x41dcacu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x41dcb0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41dcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dcb4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x41dcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41dcb8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x41dcb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x41dcbc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x41dcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41dcc0: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x41dcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41dcc4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x41dcc4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x41dcc8: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x41dcc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x41dccc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x41dcccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x41dcd0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41dcd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41dcd4: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x41dcd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x41dcd8: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x41dcd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x41dcdc: 0x111403  sra         $v0, $s1, 16
    ctx->pc = 0x41dcdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x41dce0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x41dce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dce4: 0x1052001c  beq         $v0, $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x41DCE4u;
    {
        const bool branch_taken_0x41dce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x41DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DCE4u;
        // 0x41dce8: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dce4) {
            ctx->pc = 0x41DD58u;
            goto label_41dd58;
        }
    }
    ctx->pc = 0x41DCECu;
    // 0x41dcec: 0x3c170001  lui         $s7, 0x1
    ctx->pc = 0x41dcecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1 << 16));
label_41dcf0:
    // 0x41dcf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41dcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dcf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41dcf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dcf8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41dcf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dcfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x41dcfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dd00: 0xc107638  jal         func_41D8E0
    ctx->pc = 0x41DD00u;
    SET_GPR_U32(ctx, 31, 0x41DD08u);
    ctx->pc = 0x41DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DD00u;
    // 0x41dd04: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D8E0u, 0x41DD00u, 0x41DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DD08u;
label_41dd08:
    // 0x41dd08: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x41dd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41dd0c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dd10: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x41dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41dd14: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x41dd14u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x41dd18: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x41dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41dd1c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x41dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41dd20: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x41dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41dd24: 0xc6050008  lwc1        $f5, 0x8($s0)
    ctx->pc = 0x41dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x41dd28: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x41dd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x41dd2c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x41dd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x41dd30: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x41dd30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x41dd34: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x41dd34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x41dd38: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x41dd38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x41dd3c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x41dd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x41dd40: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x41dd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x41dd44: 0x2378821  addu        $s1, $s1, $s7
    ctx->pc = 0x41dd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x41dd48: 0x111403  sra         $v0, $s1, 16
    ctx->pc = 0x41dd48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 16));
    // 0x41dd4c: 0x1452ffe8  bne         $v0, $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x41DD4Cu;
    {
        const bool branch_taken_0x41dd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x41DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DD4Cu;
        // 0x41dd50: 0xe602000c  swc1        $f2, 0xC($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dd4c) {
            ctx->pc = 0x41DCF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41dcf0;
        }
    }
    ctx->pc = 0x41DD54u;
    // 0x41dd54: 0x0  nop
    ctx->pc = 0x41dd54u;
    // NOP
label_41dd58:
    // 0x41dd58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41dd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dd5c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41dd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dd60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41dd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dd64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x41dd64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dd68: 0xc107638  jal         func_41D8E0
    ctx->pc = 0x41DD68u;
    SET_GPR_U32(ctx, 31, 0x41DD70u);
    ctx->pc = 0x41DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DD68u;
    // 0x41dd6c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D8E0u, 0x41DD68u, 0x41DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DD70u;
label_41dd70:
    // 0x41dd70: 0x2d11023  subu        $v0, $s6, $s1
    ctx->pc = 0x41dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x41dd74: 0x3c013780  lui         $at, 0x3780
    ctx->pc = 0x41dd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14208 << 16));
    // 0x41dd78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x41dd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41dd7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41dd7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41dd80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x41dd80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x41dd84: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x41dd84u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x41dd88: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x41dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41dd8c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x41dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x41dd90: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41dd90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41dd94: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x41dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x41dd98: 0xc7a6000c  lwc1        $f6, 0xC($sp)
    ctx->pc = 0x41dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x41dd9c: 0x46072942  mul.s       $f5, $f5, $f7
    ctx->pc = 0x41dd9cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
    // 0x41dda0: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x41dda0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x41dda4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x41dda4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x41dda8: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x41dda8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x41ddac: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x41ddacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x41ddb0: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x41ddb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x41ddb4: 0xe7a6000c  swc1        $f6, 0xC($sp)
    ctx->pc = 0x41ddb4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x41ddb8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41ddbc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x41ddbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x41ddc0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x41ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41ddc4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x41ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41ddc8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x41ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41ddcc: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x41ddccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x41ddd0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x41ddd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x41ddd4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x41ddd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x41ddd8: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x41ddd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x41dddc: 0x0  nop
    ctx->pc = 0x41dddcu;
    // NOP
label_41dde0:
    // 0x41dde0: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x41dde0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x41dde4: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x41dde4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x41dde8: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x41dde8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x41ddec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x41ddecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x41ddf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x41ddf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x41ddf4: 0x461509c3  div.s       $f7, $f1, $f21
    ctx->pc = 0x41ddf4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[1], ctx->f[21]); }
    // 0x41ddf8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x41ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41ddfc: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x41ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x41de00: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x41de00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x41de04: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x41de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x41de08: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x41de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x41de0c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x41de0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x41de10: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x41de10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x41de14: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x41de14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x41de18: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x41de18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x41de1c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x41de1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x41de20: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x41de20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x41de24: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x41de24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x41de28: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x41de28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x41de2c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x41de2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x41de30: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x41de30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41de34: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x41de34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41de38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41de38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41de3c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x41de3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41de40: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x41de40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41de44: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x41de44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41de48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41de48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41de4c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x41de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x41de50: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x41de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x41de54: 0x3e00008  jr          $ra
    ctx->pc = 0x41DE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DE54u;
        // 0x41de58: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DE5Cu;
    // 0x41de5c: 0x0  nop
    ctx->pc = 0x41de5cu;
    // NOP
    ctx->pc = 0x41de60u;
}
