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

// Function: sub_00314BD8
// Address: 0x314bd8 - 0x314d60
void sub_00314BD8_0x314bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314BD8_0x314bd8");
#endif

    switch (ctx->pc) {
        case 0x314c04u: goto label_314c04;
        case 0x314c2cu: goto label_314c2c;
        case 0x314cfcu: goto label_314cfc;
        case 0x314d20u: goto label_314d20;
        case 0x314d38u: goto label_314d38;
        default: break;
    }

    ctx->pc = 0x314bd8u;

    // 0x314bd8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x314bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x314bdc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x314bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x314be0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x314be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x314be4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x314be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x314be8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x314be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x314becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x314bf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314bf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x314bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x314bf8: 0x2079021  addu        $s2, $s0, $a3
    ctx->pc = 0x314bf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x314bfc: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x314BFCu;
    SET_GPR_U32(ctx, 31, 0x314C04u);
    ctx->pc = 0x314C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BFCu;
    // 0x314c00: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x314BFCu, 0x314C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C04u;
label_314c04:
    // 0x314c04: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x314C04u;
    {
        const bool branch_taken_0x314c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C04u;
        // 0x314c08: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c04) {
            ctx->pc = 0x314D28u;
            goto label_314d28;
        }
    }
    ctx->pc = 0x314C0Cu;
    // 0x314c0c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x314c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x314c10: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x314c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x314c14: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x314c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x314c18: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x314C18u;
    {
        const bool branch_taken_0x314c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C18u;
        // 0x314c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c18) {
            ctx->pc = 0x314D10u;
            goto label_314d10;
        }
    }
    ctx->pc = 0x314C20u;
    // 0x314c20: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x314c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x314c24: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x314C24u;
    SET_GPR_U32(ctx, 31, 0x314C2Cu);
    ctx->pc = 0x314C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C24u;
    // 0x314c28: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x314C24u, 0x314C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314C2Cu;
label_314c2c:
    // 0x314c2c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x314C2Cu;
    {
        const bool branch_taken_0x314c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C2Cu;
        // 0x314c30: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c2c) {
            ctx->pc = 0x314D28u;
            goto label_314d28;
        }
    }
    ctx->pc = 0x314C34u;
    // 0x314c34: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x314c34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x314c38: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x314C38u;
    {
        const bool branch_taken_0x314c38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x314c38) {
            ctx->pc = 0x314CACu;
            goto label_314cac;
        }
    }
    ctx->pc = 0x314C40u;
    // 0x314c40: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x314c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x314c44: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x314c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x314c48: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x314c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314c4c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x314c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314c50: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314c50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314c54: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x314c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x314c58: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x314c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314c5c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x314c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314c60: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x314c60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x314c64: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x314c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x314c68: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x314c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314c6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x314c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314c70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x314c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x314c74: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x314c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x314c78: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x314c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314c7c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x314c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314c80: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x314c80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x314c84: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x314c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x314c88: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x314c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314c8c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x314c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314c90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314c94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x314c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x314c98: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x314c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314c9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x314c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314ca0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x314ca0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x314ca4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x314CA4u;
    {
        const bool branch_taken_0x314ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CA4u;
        // 0x314ca8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ca4) {
            ctx->pc = 0x314CDCu;
            goto label_314cdc;
        }
    }
    ctx->pc = 0x314CACu;
label_314cac:
    // 0x314cac: 0x6a020067  ldl         $v0, 0x67($s0)
    ctx->pc = 0x314cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x314cb0: 0x6e020060  ldr         $v0, 0x60($s0)
    ctx->pc = 0x314cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x314cb4: 0x6a03006f  ldl         $v1, 0x6F($s0)
    ctx->pc = 0x314cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x314cb8: 0x6e030068  ldr         $v1, 0x68($s0)
    ctx->pc = 0x314cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x314cbc: 0x6a040077  ldl         $a0, 0x77($s0)
    ctx->pc = 0x314cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x314cc0: 0x6e040070  ldr         $a0, 0x70($s0)
    ctx->pc = 0x314cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x314cc4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x314cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314cc8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x314cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314ccc: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x314cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314cd0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x314cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314cd4: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x314cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314cd8: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x314cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_314cdc:
    // 0x314cdc: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x314cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ce4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x314ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x314ce8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x314ce8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314cec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x314cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x314cf0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x314cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x314cf4: 0xc0c4a06  jal         func_312818
    ctx->pc = 0x314CF4u;
    SET_GPR_U32(ctx, 31, 0x314CFCu);
    ctx->pc = 0x314CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314CF4u;
    // 0x314cf8: 0x27a80028  addiu       $t0, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312818u, 0x314CF4u, 0x314CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314CFCu;
label_314cfc:
    // 0x314cfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x314cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x314d00: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x314D00u;
    {
        const bool branch_taken_0x314d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D00u;
        // 0x314d04: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d00) {
            ctx->pc = 0x314D3Cu;
            goto label_314d3c;
        }
    }
    ctx->pc = 0x314D08u;
    // 0x314d08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x314D08u;
    {
        const bool branch_taken_0x314d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D08u;
        // 0x314d0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d08) {
            ctx->pc = 0x314D48u;
            goto label_314d48;
        }
    }
    ctx->pc = 0x314D10u;
label_314d10:
    // 0x314d10: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x314d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x314d14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x314d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d18: 0xc103322  jal         func_40CC88
    ctx->pc = 0x314D18u;
    SET_GPR_U32(ctx, 31, 0x314D20u);
    ctx->pc = 0x314D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D18u;
    // 0x314d1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x314D18u, 0x314D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D20u;
label_314d20:
    // 0x314d20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x314D20u;
    {
        const bool branch_taken_0x314d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314d20) {
            ctx->pc = 0x314D30u;
            goto label_314d30;
        }
    }
    ctx->pc = 0x314D28u;
label_314d28:
    // 0x314d28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x314D28u;
    {
        const bool branch_taken_0x314d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D28u;
        // 0x314d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314d28) {
            ctx->pc = 0x314D48u;
            goto label_314d48;
        }
    }
    ctx->pc = 0x314D30u;
label_314d30:
    // 0x314d30: 0xc0c495a  jal         func_312568
    ctx->pc = 0x314D30u;
    SET_GPR_U32(ctx, 31, 0x314D38u);
    ctx->pc = 0x314D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314D30u;
    // 0x314d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312568u, 0x314D30u, 0x314D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314D38u;
label_314d38:
    // 0x314d38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x314d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_314d3c:
    // 0x314d3c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x314d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x314d40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x314d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314d44: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x314d44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_314d48:
    // 0x314d48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x314d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314d4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x314d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314d50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x314d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314d54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x314d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314d58: 0x3e00008  jr          $ra
    ctx->pc = 0x314D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314D58u;
        // 0x314d5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314D60u;
}
