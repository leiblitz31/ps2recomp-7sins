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

// Function: sub_003D1B78
// Address: 0x3d1b78 - 0x3d1c50
void sub_003D1B78_0x3d1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1B78_0x3d1b78");
#endif

    switch (ctx->pc) {
        case 0x3d1b98u: goto label_3d1b98;
        default: break;
    }

    ctx->pc = 0x3d1b78u;

    // 0x3d1b78: 0x94820082  lhu         $v0, 0x82($a0)
    ctx->pc = 0x3d1b78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x3d1b7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d1b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d1b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d1b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1b84: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3D1B84u;
    {
        const bool branch_taken_0x3d1b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1B84u;
        // 0x3d1b88: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1b84) {
            ctx->pc = 0x3D1C44u;
            goto label_3d1c44;
        }
    }
    ctx->pc = 0x3D1B8Cu;
    // 0x3d1b8c: 0xc78180f4  lwc1        $f1, -0x7F0C($gp)
    ctx->pc = 0x3d1b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d1b90: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3d1b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1b94: 0x0  nop
    ctx->pc = 0x3d1b94u;
    // NOP
label_3d1b98:
    // 0x3d1b98: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3d1b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d1b9c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3d1b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d1ba0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3d1ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1ba4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3d1ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1ba8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d1bac: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x3d1bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3d1bb0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1BB0u;
    {
        const bool branch_taken_0x3d1bb0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3D1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BB0u;
        // 0x3d1bb4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1bb0) {
            ctx->pc = 0x3D1BC8u;
            goto label_3d1bc8;
        }
    }
    ctx->pc = 0x3D1BB8u;
    // 0x3d1bb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1bbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1bc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D1BC0u;
    {
        const bool branch_taken_0x3d1bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BC0u;
        // 0x3d1bc4: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1bc0) {
            ctx->pc = 0x3D1BE0u;
            goto label_3d1be0;
        }
    }
    ctx->pc = 0x3D1BC8u;
label_3d1bc8:
    // 0x3d1bc8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3d1bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3d1bcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1bd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1bd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1bd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1bd8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d1bd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3d1bdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d1bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d1be0:
    // 0x3d1be0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d1be4: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x3d1be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3d1be8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1BE8u;
    {
        const bool branch_taken_0x3d1be8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3D1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BE8u;
        // 0x3d1bec: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1be8) {
            ctx->pc = 0x3D1C00u;
            goto label_3d1c00;
        }
    }
    ctx->pc = 0x3D1BF0u;
    // 0x3d1bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d1bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1bf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1bf8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D1BF8u;
    {
        const bool branch_taken_0x3d1bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1BF8u;
        // 0x3d1bfc: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1bf8) {
            ctx->pc = 0x3D1C1Cu;
            goto label_3d1c1c;
        }
    }
    ctx->pc = 0x3D1C00u;
label_3d1c00:
    // 0x3d1c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d1c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d1c04: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3d1c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3d1c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d1c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3d1c0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d1c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d1c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3d1c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3d1c14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3d1c14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3d1c18: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d1c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d1c1c:
    // 0x3d1c1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d1c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d1c20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3d1c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3d1c24: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3d1c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d1c28: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3d1c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d1c2c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3d1c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1c30: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3d1c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d1c34: 0x94820082  lhu         $v0, 0x82($a0)
    ctx->pc = 0x3d1c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 130)));
    // 0x3d1c38: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3d1c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d1c3c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x3D1C3Cu;
    {
        const bool branch_taken_0x3d1c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C3Cu;
        // 0x3d1c40: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1c3c) {
            ctx->pc = 0x3D1B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d1b98;
        }
    }
    ctx->pc = 0x3D1C44u;
label_3d1c44:
    // 0x3d1c44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d1c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d1c48: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1C48u;
        // 0x3d1c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1C50u;
}
