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

// Function: sub_003D1A80
// Address: 0x3d1a80 - 0x3d1b78
void sub_003D1A80_0x3d1a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1A80_0x3d1a80");
#endif

    switch (ctx->pc) {
        case 0x3d1a98u: goto label_3d1a98;
        case 0x3d1ab0u: goto label_3d1ab0;
        case 0x3d1b64u: goto label_3d1b64;
        default: break;
    }

    ctx->pc = 0x3d1a80u;

    // 0x3d1a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d1a84: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3d1a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3d1a88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3d1a8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d1a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d1a90: 0xc0e33ee  jal         func_38CFB8
    ctx->pc = 0x3D1A90u;
    SET_GPR_U32(ctx, 31, 0x3D1A98u);
    ctx->pc = 0x3D1A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1A90u;
    // 0x3d1a94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CFB8u, 0x3D1A90u, 0x3D1A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1A98u;
label_3d1a98:
    // 0x3d1a98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3d1a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3d1a9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d1a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1aa0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3D1AA0u;
    {
        const bool branch_taken_0x3d1aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1AA0u;
        // 0x3d1aa4: 0x8e030038  lw          $v1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1aa0) {
            ctx->pc = 0x3D1B5Cu;
            goto label_3d1b5c;
        }
    }
    ctx->pc = 0x3D1AA8u;
    // 0x3d1aa8: 0xc78180f4  lwc1        $f1, -0x7F0C($gp)
    ctx->pc = 0x3d1aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1aac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3d1aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d1ab0:
    // 0x3d1ab0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3d1ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d1ab4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3d1ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d1ab8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3d1ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1abc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3d1abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1ac0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d1ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1ac4: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x3d1ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3d1ac8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1AC8u;
    {
        const bool branch_taken_0x3d1ac8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3D1ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1AC8u;
        // 0x3d1acc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ac8) {
            ctx->pc = 0x3D1AE0u;
            goto label_3d1ae0;
        }
    }
    ctx->pc = 0x3D1AD0u;
    // 0x3d1ad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1ad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1ad4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1ad8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1AD8u;
    {
        const bool branch_taken_0x3d1ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1AD8u;
        // 0x3d1adc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ad8) {
            ctx->pc = 0x3D1AF8u;
            goto label_3d1af8;
        }
    }
    ctx->pc = 0x3D1AE0u;
label_3d1ae0:
    // 0x3d1ae0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3d1ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3d1ae4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1aec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1af0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d1af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3d1af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d1af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d1af8:
    // 0x3d1af8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d1afc: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x3d1afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3d1b00: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1B00u;
    {
        const bool branch_taken_0x3d1b00 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3D1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B00u;
        // 0x3d1b04: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1b00) {
            ctx->pc = 0x3D1B18u;
            goto label_3d1b18;
        }
    }
    ctx->pc = 0x3D1B08u;
    // 0x3d1b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1b0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1b10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D1B10u;
    {
        const bool branch_taken_0x3d1b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B10u;
        // 0x3d1b14: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1b10) {
            ctx->pc = 0x3D1B34u;
            goto label_3d1b34;
        }
    }
    ctx->pc = 0x3D1B18u;
label_3d1b18:
    // 0x3d1b18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d1b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d1b1c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3d1b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3d1b20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1b28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1b2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d1b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3d1b30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d1b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d1b34:
    // 0x3d1b34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d1b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d1b38: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3d1b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3d1b3c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3d1b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d1b40: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3d1b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d1b44: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3d1b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1b48: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3d1b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1b4c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3d1b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3d1b50: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3d1b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d1b54: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3D1B54u;
    {
        const bool branch_taken_0x3d1b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B54u;
        // 0x3d1b58: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1b54) {
            ctx->pc = 0x3D1AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1ab0;
        }
    }
    ctx->pc = 0x3D1B5Cu;
label_3d1b5c:
    // 0x3d1b5c: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x3D1B5Cu;
    SET_GPR_U32(ctx, 31, 0x3D1B64u);
    ctx->pc = 0x3D1B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1B5Cu;
    // 0x3d1b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x3D1B5Cu, 0x3D1B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1B64u;
label_3d1b64:
    // 0x3d1b64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d1b64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1b68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d1b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d1b6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d1b6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d1b70: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B70u;
        // 0x3d1b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1B78u;
}
