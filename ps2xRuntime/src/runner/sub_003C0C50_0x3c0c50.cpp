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

// Function: sub_003C0C50
// Address: 0x3c0c50 - 0x3c0ed8
void sub_003C0C50_0x3c0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0C50_0x3c0c50");
#endif

    switch (ctx->pc) {
        case 0x3c0c98u: goto label_3c0c98;
        case 0x3c0cb4u: goto label_3c0cb4;
        case 0x3c0cc8u: goto label_3c0cc8;
        case 0x3c0cd4u: goto label_3c0cd4;
        case 0x3c0da8u: goto label_3c0da8;
        case 0x3c0db0u: goto label_3c0db0;
        case 0x3c0dbcu: goto label_3c0dbc;
        case 0x3c0dc8u: goto label_3c0dc8;
        case 0x3c0dd4u: goto label_3c0dd4;
        case 0x3c0e30u: goto label_3c0e30;
        case 0x3c0e3cu: goto label_3c0e3c;
        case 0x3c0e48u: goto label_3c0e48;
        default: break;
    }

    ctx->pc = 0x3c0c50u;

    // 0x3c0c50: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3c0c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3c0c54: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3c0c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x3c0c58: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3c0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x3c0c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c0c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0c60: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3c0c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x3c0c64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3c0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c0c68: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3c0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3c0c6c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3c0c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x3c0c70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3c0c74: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3c0c74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c0c78: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3c0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3c0c7c: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3c0c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x3c0c80: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c0c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3c0c84: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x3c0c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3c0c88: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3c0c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c0c8c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3c0c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c0c90: 0xc0ef26c  jal         func_3BC9B0
    ctx->pc = 0x3C0C90u;
    SET_GPR_U32(ctx, 31, 0x3C0C98u);
    ctx->pc = 0x3C0C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C90u;
    // 0x3c0c94: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC9B0u, 0x3C0C90u, 0x3C0C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C98u;
label_3c0c98:
    // 0x3c0c98: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x3c0c98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c0c9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3c0c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0ca0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3c0ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3c0ca4: 0x8e960010  lw          $s6, 0x10($s4)
    ctx->pc = 0x3c0ca4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3c0ca8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3c0ca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0cac: 0xc10540a  jal         func_415028
    ctx->pc = 0x3C0CACu;
    SET_GPR_U32(ctx, 31, 0x3C0CB4u);
    ctx->pc = 0x3C0CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0CACu;
    // 0x3c0cb0: 0x26250018  addiu       $a1, $s1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415028u, 0x3C0CACu, 0x3C0CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0CB4u;
label_3c0cb4:
    // 0x3c0cb4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3c0cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3c0cb8: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3c0cb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c0cbc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3C0CBCu;
    {
        const bool branch_taken_0x3c0cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CBCu;
        // 0x3c0cc0: 0x2630003c  addiu       $s0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0cbc) {
            ctx->pc = 0x3C0CE8u;
            goto label_3c0ce8;
        }
    }
    ctx->pc = 0x3C0CC4u;
    // 0x3c0cc4: 0x0  nop
    ctx->pc = 0x3c0cc4u;
    // NOP
label_3c0cc8:
    // 0x3c0cc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3c0cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0ccc: 0xc105418  jal         func_415060
    ctx->pc = 0x3C0CCCu;
    SET_GPR_U32(ctx, 31, 0x3C0CD4u);
    ctx->pc = 0x3C0CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0CCCu;
    // 0x3c0cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415060u, 0x3C0CCCu, 0x3C0CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0CD4u;
label_3c0cd4:
    // 0x3c0cd4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c0cd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c0cd8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3c0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3c0cdc: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3c0cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c0ce0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3C0CE0u;
    {
        const bool branch_taken_0x3c0ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CE0u;
        // 0x3c0ce4: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ce0) {
            ctx->pc = 0x3C0CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0cc8;
        }
    }
    ctx->pc = 0x3C0CE8u;
label_3c0ce8:
    // 0x3c0ce8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x3c0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0cec: 0xc7a6002c  lwc1        $f6, 0x2C($sp)
    ctx->pc = 0x3c0cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c0cf0: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x3c0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c0cf4: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x3c0cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c0cf8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3c0cf8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x3c0cfc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3c0cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0d00: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x3c0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c0d04: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x3c0d04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
    // 0x3c0d08: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x3c0d08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x3c0d0c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c0d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3c0d10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c0d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c0d14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c0d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c0d18: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3c0d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3c0d1c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3c0d1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3c0d20: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3c0d20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3c0d24: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3c0d24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3c0d28: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x3c0d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3c0d2c: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x3c0d2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x3c0d30: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x3c0d30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x3c0d34: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3c0d34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3c0d38: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3c0d38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3c0d3c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x3c0d3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3c0d40: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3c0d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3c0d44: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3c0d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3c0d48: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3c0d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3c0d4c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3c0d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3c0d50: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3c0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3c0d54: 0xb0620013  sdl         $v0, 0x13($v1)
    ctx->pc = 0x3c0d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c0d58: 0xb462000c  sdr         $v0, 0xC($v1)
    ctx->pc = 0x3c0d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c0d5c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x3c0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x3c0d60: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3c0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x3c0d64: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x3c0d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3c0d68: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x3c0d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3c0d6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3c0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3c0d70: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x3c0d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c0d74: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x3c0d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3c0d78: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x3c0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x3c0d7c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3c0d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3c0d80: 0x18600048  blez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x3C0D80u;
    {
        const bool branch_taken_0x3c0d80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3C0D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D80u;
        // 0x3c0d84: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d80) {
            ctx->pc = 0x3C0EA4u;
            goto label_3c0ea4;
        }
    }
    ctx->pc = 0x3C0D88u;
    // 0x3c0d88: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3c0d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0d8c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x3c0d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0d90: 0x3c1638e3  lui         $s6, 0x38E3
    ctx->pc = 0x3c0d90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)14563 << 16));
    // 0x3c0d94: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3c0d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3c0d98: 0x24170018  addiu       $s7, $zero, 0x18
    ctx->pc = 0x3c0d98u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3c0d9c: 0x36d68e39  ori         $s6, $s6, 0x8E39
    ctx->pc = 0x3c0d9cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)36409);
    // 0x3c0da0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x3c0da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0da4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3c0da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c0da8:
    // 0x3c0da8: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0DA8u;
    SET_GPR_U32(ctx, 31, 0x3C0DB0u);
    ctx->pc = 0x3C0DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0DA8u;
    // 0x3c0dac: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0DA8u, 0x3C0DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0DB0u;
label_3c0db0:
    // 0x3c0db0: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x3c0db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0db4: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0DB4u;
    SET_GPR_U32(ctx, 31, 0x3C0DBCu);
    ctx->pc = 0x3C0DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0DB4u;
    // 0x3c0db8: 0xa6220008  sh          $v0, 0x8($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0DB4u, 0x3C0DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0DBCu;
label_3c0dbc:
    // 0x3c0dbc: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x3c0dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0dc0: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0DC0u;
    SET_GPR_U32(ctx, 31, 0x3C0DC8u);
    ctx->pc = 0x3C0DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0DC0u;
    // 0x3c0dc4: 0xa622000a  sh          $v0, 0xA($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0DC0u, 0x3C0DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0DC8u;
label_3c0dc8:
    // 0x3c0dc8: 0xc60c0014  lwc1        $f12, 0x14($s0)
    ctx->pc = 0x3c0dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0dcc: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0DCCu;
    SET_GPR_U32(ctx, 31, 0x3C0DD4u);
    ctx->pc = 0x3C0DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0DCCu;
    // 0x3c0dd0: 0xa622000c  sh          $v0, 0xC($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0DCCu, 0x3C0DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0DD4u;
label_3c0dd4:
    // 0x3c0dd4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x3c0dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c0dd8: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x3c0dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c0ddc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3c0ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0de0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x3c0de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0de4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c0de4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c0de8: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x3c0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c0dec: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3c0decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c0df0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x3c0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0df4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3c0df4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3c0df8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3c0df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c0dfc: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x3c0dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c0e00: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3c0e00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x3c0e04: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3c0e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c0e08: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x3c0e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c0e0c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x3c0e0cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x3c0e10: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x3c0e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c0e14: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x3c0e14u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
    // 0x3c0e18: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x3c0e18u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x3c0e1c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x3c0e1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x3c0e20: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3c0e20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3c0e24: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3c0e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3c0e28: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0E28u;
    SET_GPR_U32(ctx, 31, 0x3C0E30u);
    ctx->pc = 0x3C0E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E28u;
    // 0x3c0e2c: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0E28u, 0x3C0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E30u;
label_3c0e30:
    // 0x3c0e30: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x3c0e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0e34: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0E34u;
    SET_GPR_U32(ctx, 31, 0x3C0E3Cu);
    ctx->pc = 0x3C0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E34u;
    // 0x3c0e38: 0xa6220010  sh          $v0, 0x10($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0E34u, 0x3C0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E3Cu;
label_3c0e3c:
    // 0x3c0e3c: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x3c0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c0e40: 0xc0efd02  jal         func_3BF408
    ctx->pc = 0x3C0E40u;
    SET_GPR_U32(ctx, 31, 0x3C0E48u);
    ctx->pc = 0x3C0E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0E40u;
    // 0x3c0e44: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF408u, 0x3C0E40u, 0x3C0E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0E48u;
label_3c0e48:
    // 0x3c0e48: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x3c0e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c0e4c: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x3c0e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c0e50: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x3c0e50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c0e54: 0x0  nop
    ctx->pc = 0x3c0e54u;
    // NOP
    // 0x3c0e58: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0E58u;
    {
        const bool branch_taken_0x3c0e58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E58u;
        // 0x3c0e5c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e58) {
            ctx->pc = 0x3C0E68u;
            goto label_3c0e68;
        }
    }
    ctx->pc = 0x3C0E60u;
    // 0x3c0e60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3C0E60u;
    {
        const bool branch_taken_0x3c0e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E60u;
        // 0x3c0e64: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e60) {
            ctx->pc = 0x3C0E84u;
            goto label_3c0e84;
        }
    }
    ctx->pc = 0x3C0E68u;
label_3c0e68:
    // 0x3c0e68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3c0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c0e6c: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x3c0e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3c0e70: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x3c0e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c0e74: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3c0e74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3c0e78: 0x571018  mult        $v0, $v0, $s7
    ctx->pc = 0x3c0e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c0e7c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x3c0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3c0e80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3c0e84:
    // 0x3c0e84: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3c0e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3c0e88: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c0e88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c0e8c: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x3c0e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x3c0e90: 0x26730024  addiu       $s3, $s3, 0x24
    ctx->pc = 0x3c0e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x3c0e94: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3c0e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c0e98: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3c0e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3c0e9c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3C0E9Cu;
    {
        const bool branch_taken_0x3c0e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E9Cu;
        // 0x3c0ea0: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e9c) {
            ctx->pc = 0x3C0DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0da8;
        }
    }
    ctx->pc = 0x3C0EA4u;
label_3c0ea4:
    // 0x3c0ea4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3c0ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0ea8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3c0ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3c0eac: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3c0eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3c0eb0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3c0eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3c0eb4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3c0eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c0eb8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3c0eb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c0ebc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3c0ebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c0ec0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c0ec0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c0ec4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3c0ec4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c0ec8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c0ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c0ecc: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x3c0eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c0ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0ED0u;
        // 0x3c0ed4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0ED8u;
}
