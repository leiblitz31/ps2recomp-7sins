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

// Function: sub_00376AC0
// Address: 0x376ac0 - 0x376d48
void sub_00376AC0_0x376ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376AC0_0x376ac0");
#endif

    switch (ctx->pc) {
        case 0x376b1cu: goto label_376b1c;
        case 0x376b34u: goto label_376b34;
        case 0x376b68u: goto label_376b68;
        case 0x376bb0u: goto label_376bb0;
        case 0x376bfcu: goto label_376bfc;
        case 0x376c3cu: goto label_376c3c;
        case 0x376c94u: goto label_376c94;
        case 0x376cb4u: goto label_376cb4;
        case 0x376cc8u: goto label_376cc8;
        case 0x376ce8u: goto label_376ce8;
        case 0x376cf8u: goto label_376cf8;
        case 0x376d10u: goto label_376d10;
        default: break;
    }

    ctx->pc = 0x376ac0u;

    // 0x376ac0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x376ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x376ac4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x376ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x376ac8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x376ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x376acc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x376accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x376ad0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x376ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ad4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x376ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x376ad8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x376ad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376adc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x376adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x376ae0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x376ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x376ae4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x376ae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376ae8: 0x8c44c430  lw          $a0, -0x3BD0($v0)
    ctx->pc = 0x376ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C430u));
    // 0x376aec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x376aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376af0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x376af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x376af4: 0x2442c430  addiu       $v0, $v0, -0x3BD0
    ctx->pc = 0x376af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
    // 0x376af8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x376af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x376afc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x376afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x376b00: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x376b00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x376b04: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x376b04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x376b08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x376b08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C434u));
    // 0x376b0c: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x376B0Cu;
    {
        const bool branch_taken_0x376b0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x376B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B0Cu;
        // 0x376b10: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b0c) {
            ctx->pc = 0x376B34u;
            goto label_376b34;
        }
    }
    ctx->pc = 0x376B14u;
    // 0x376b14: 0xc0c524c  jal         func_314930
    ctx->pc = 0x376B14u;
    SET_GPR_U32(ctx, 31, 0x376B1Cu);
    ctx->pc = 0x314930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314930u, 0x376B14u, 0x376B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B1Cu;
label_376b1c:
    // 0x376b1c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x376b1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b20: 0x56a00005  bnel        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x376B20u;
    {
        const bool branch_taken_0x376b20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x376b20) {
            ctx->pc = 0x376B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376B20u;
            // 0x376b24: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376B38u;
            goto label_376b38;
        }
    }
    ctx->pc = 0x376B28u;
    // 0x376b28: 0x8e44c430  lw          $a0, -0x3BD0($s2)
    ctx->pc = 0x376b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376b2c: 0xc0c5508  jal         func_315420
    ctx->pc = 0x376B2Cu;
    SET_GPR_U32(ctx, 31, 0x376B34u);
    ctx->pc = 0x376B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B2Cu;
    // 0x376b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315420u, 0x376B2Cu, 0x376B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B34u;
label_376b34:
    // 0x376b34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x376b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_376b38:
    // 0x376b38: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x376B38u;
    {
        const bool branch_taken_0x376b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376B38u;
        // 0x376b3c: 0x2650c430  addiu       $s0, $s2, -0x3BD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376b38) {
            ctx->pc = 0x376B74u;
            goto label_376b74;
        }
    }
    ctx->pc = 0x376B40u;
    // 0x376b40: 0x8e50c430  lw          $s0, -0x3BD0($s2)
    ctx->pc = 0x376b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376b44: 0x2642c430  addiu       $v0, $s2, -0x3BD0
    ctx->pc = 0x376b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951984));
    // 0x376b48: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x376b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x376b4c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x376b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376b54: 0x24a52ea8  addiu       $a1, $a1, 0x2EA8
    ctx->pc = 0x376b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11944));
    // 0x376b58: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x376b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x376b5c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x376b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x376b60: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x376B60u;
    SET_GPR_U32(ctx, 31, 0x376B68u);
    ctx->pc = 0x376B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376B60u;
    // 0x376b64: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x376B60u, 0x376B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B68u;
label_376b68:
    // 0x376b68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376b6c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x376b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x376b70: 0x2650c430  addiu       $s0, $s2, -0x3BD0
    ctx->pc = 0x376b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951984));
label_376b74:
    // 0x376b74: 0x8e44c430  lw          $a0, -0x3BD0($s2)
    ctx->pc = 0x376b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376b78: 0x6a630007  ldl         $v1, 0x7($s3)
    ctx->pc = 0x376b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x376b7c: 0x6e630000  ldr         $v1, 0x0($s3)
    ctx->pc = 0x376b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x376b80: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x376b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x376b84: 0xb203002b  sdl         $v1, 0x2B($s0)
    ctx->pc = 0x376b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376b88: 0xb6030024  sdr         $v1, 0x24($s0)
    ctx->pc = 0x376b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376b8c: 0xae06002c  sw          $a2, 0x2C($s0)
    ctx->pc = 0x376b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 6));
    // 0x376b90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x376b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376b94: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x376b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x376b98: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x376b98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x376b9c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x376b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x376ba0: 0x24a57710  addiu       $a1, $a1, 0x7710
    ctx->pc = 0x376ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30480));
    // 0x376ba4: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x376ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x376ba8: 0xc0e6984  jal         func_39A610
    ctx->pc = 0x376BA8u;
    SET_GPR_U32(ctx, 31, 0x376BB0u);
    ctx->pc = 0x376BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376BA8u;
    // 0x376bac: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A610u, 0x376BA8u, 0x376BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BB0u;
label_376bb0:
    // 0x376bb0: 0x1280004f  beqz        $s4, . + 4 + (0x4F << 2)
    ctx->pc = 0x376BB0u;
    {
        const bool branch_taken_0x376bb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x376BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376BB0u;
        // 0x376bb4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376bb0) {
            ctx->pc = 0x376CF0u;
            goto label_376cf0;
        }
    }
    ctx->pc = 0x376BB8u;
    // 0x376bb8: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x376bb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376bbc: 0xc78080f4  lwc1        $f0, -0x7F0C($gp)
    ctx->pc = 0x376bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376bc0: 0xafb60018  sw          $s6, 0x18($sp)
    ctx->pc = 0x376bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 22));
    // 0x376bc4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x376bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x376bc8: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x376bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x376bcc: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x376bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x376bd0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x376bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x376bd4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x376bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376bd8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x376bd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376bdc: 0x24c67700  addiu       $a2, $a2, 0x7700
    ctx->pc = 0x376bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30464));
    // 0x376be0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x376be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x376be4: 0x8e44c430  lw          $a0, -0x3BD0($s2)
    ctx->pc = 0x376be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376be8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x376be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376bec: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x376becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x376bf0: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x376bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x376bf4: 0xc0c6d5c  jal         func_31B570
    ctx->pc = 0x376BF4u;
    SET_GPR_U32(ctx, 31, 0x376BFCu);
    ctx->pc = 0x376BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376BF4u;
    // 0x376bf8: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B570u, 0x376BF4u, 0x376BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BFCu;
label_376bfc:
    // 0x376bfc: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x376bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x376c00: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x376c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x376c04: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x376c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376c08: 0xc7828124  lwc1        $f2, -0x7EDC($gp)
    ctx->pc = 0x376c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x376c0c: 0xc7818048  lwc1        $f1, -0x7FB8($gp)
    ctx->pc = 0x376c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376c10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x376c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x376c14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x376c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x376c18: 0x46011d42  mul.s       $f21, $f3, $f1
    ctx->pc = 0x376c18u;
    ctx->f[21] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x376c1c: 0x4600ad68  max.s       $f21, $f21, $f0
    ctx->pc = 0x376c1cu;
    ctx->f[21] = std::max(ctx->f[21], ctx->f[0]);
    // 0x376c20: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x376C20u;
    {
        const bool branch_taken_0x376c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C20u;
        // 0x376c24: 0xe7b5000c  swc1        $f21, 0xC($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c20) {
            ctx->pc = 0x376CF8u;
            goto label_376cf8;
        }
    }
    ctx->pc = 0x376C28u;
    // 0x376c28: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x376c28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x376c2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x376c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x376c30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x376c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c34: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x376C34u;
    SET_GPR_U32(ctx, 31, 0x376C3Cu);
    ctx->pc = 0x376C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C34u;
    // 0x376c38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x376C34u, 0x376C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C3Cu;
label_376c3c:
    // 0x376c3c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x376c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376c40: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x376c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376c44: 0x0  nop
    ctx->pc = 0x376c44u;
    // NOP
    // 0x376c48: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x376C48u;
    {
        const bool branch_taken_0x376c48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x376C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376C48u;
        // 0x376c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376c48) {
            ctx->pc = 0x376CB4u;
            goto label_376cb4;
        }
    }
    ctx->pc = 0x376C50u;
    // 0x376c50: 0x4615ad02  mul.s       $f20, $f21, $f21
    ctx->pc = 0x376c50u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x376c54: 0xae360018  sw          $s6, 0x18($s1)
    ctx->pc = 0x376c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 22));
    // 0x376c58: 0x6a680007  ldl         $t0, 0x7($s3)
    ctx->pc = 0x376c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x376c5c: 0x6e680000  ldr         $t0, 0x0($s3)
    ctx->pc = 0x376c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x376c60: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x376c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x376c64: 0xb3a80027  sdl         $t0, 0x27($sp)
    ctx->pc = 0x376c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376c68: 0xb7a80020  sdr         $t0, 0x20($sp)
    ctx->pc = 0x376c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x376c6c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x376c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x376c70: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x376c70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x376c74: 0x8e44c430  lw          $a0, -0x3BD0($s2)
    ctx->pc = 0x376c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    // 0x376c78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x376c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376c7c: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x376c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x376c80: 0x24c674e8  addiu       $a2, $a2, 0x74E8
    ctx->pc = 0x376c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29928));
    // 0x376c84: 0xe7b5002c  swc1        $f21, 0x2C($sp)
    ctx->pc = 0x376c84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x376c88: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x376c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x376c8c: 0xc0c6d5c  jal         func_31B570
    ctx->pc = 0x376C8Cu;
    SET_GPR_U32(ctx, 31, 0x376C94u);
    ctx->pc = 0x376C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376C8Cu;
    // 0x376c90: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B570u, 0x376C8Cu, 0x376C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376C94u;
label_376c94:
    // 0x376c94: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x376c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376c98: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x376c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376c9c: 0x0  nop
    ctx->pc = 0x376c9cu;
    // NOP
    // 0x376ca0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x376CA0u;
    {
        const bool branch_taken_0x376ca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x376CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CA0u;
        // 0x376ca4: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ca0) {
            ctx->pc = 0x376CB4u;
            goto label_376cb4;
        }
    }
    ctx->pc = 0x376CA8u;
    // 0x376ca8: 0x4615ab00  add.s       $f12, $f21, $f21
    ctx->pc = 0x376ca8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x376cac: 0xc0ddd88  jal         func_377620
    ctx->pc = 0x376CACu;
    SET_GPR_U32(ctx, 31, 0x376CB4u);
    ctx->pc = 0x376CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CACu;
    // 0x376cb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377620u, 0x376CACu, 0x376CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CB4u;
label_376cb4:
    // 0x376cb4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x376CB4u;
    {
        const bool branch_taken_0x376cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CB4u;
        // 0x376cb8: 0x2642c430  addiu       $v0, $s2, -0x3BD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294951984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376cb4) {
            ctx->pc = 0x376CD0u;
            goto label_376cd0;
        }
    }
    ctx->pc = 0x376CBCu;
    // 0x376cbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x376cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376cc0: 0xc0dd0b4  jal         func_3742D0
    ctx->pc = 0x376CC0u;
    SET_GPR_U32(ctx, 31, 0x376CC8u);
    ctx->pc = 0x376CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CC0u;
    // 0x376cc4: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3742D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3742D0u, 0x376CC0u, 0x376CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CC8u;
label_376cc8:
    // 0x376cc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x376CC8u;
    {
        const bool branch_taken_0x376cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376cc8) {
            ctx->pc = 0x376CF8u;
            goto label_376cf8;
        }
    }
    ctx->pc = 0x376CD0u;
label_376cd0:
    // 0x376cd0: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x376CD0u;
    {
        const bool branch_taken_0x376cd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x376CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CD0u;
        // 0x376cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376cd0) {
            ctx->pc = 0x376D14u;
            goto label_376d14;
        }
    }
    ctx->pc = 0x376CD8u;
    // 0x376cd8: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x376CD8u;
    {
        const bool branch_taken_0x376cd8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x376CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CD8u;
        // 0x376cdc: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376cd8) {
            ctx->pc = 0x376D18u;
            goto label_376d18;
        }
    }
    ctx->pc = 0x376CE0u;
    // 0x376ce0: 0xc0c5258  jal         func_314960
    ctx->pc = 0x376CE0u;
    SET_GPR_U32(ctx, 31, 0x376CE8u);
    ctx->pc = 0x376CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CE0u;
    // 0x376ce4: 0x8e44c430  lw          $a0, -0x3BD0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314960u, 0x376CE0u, 0x376CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CE8u;
label_376ce8:
    // 0x376ce8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x376CE8u;
    {
        const bool branch_taken_0x376ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CE8u;
        // 0x376cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ce8) {
            ctx->pc = 0x376D14u;
            goto label_376d14;
        }
    }
    ctx->pc = 0x376CF0u;
label_376cf0:
    // 0x376cf0: 0xc0dd0b4  jal         func_3742D0
    ctx->pc = 0x376CF0u;
    SET_GPR_U32(ctx, 31, 0x376CF8u);
    ctx->pc = 0x376CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376CF0u;
    // 0x376cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3742D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3742D0u, 0x376CF0u, 0x376CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376CF8u;
label_376cf8:
    // 0x376cf8: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x376CF8u;
    {
        const bool branch_taken_0x376cf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x376CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376CF8u;
        // 0x376cfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376cf8) {
            ctx->pc = 0x376D14u;
            goto label_376d14;
        }
    }
    ctx->pc = 0x376D00u;
    // 0x376d00: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x376D00u;
    {
        const bool branch_taken_0x376d00 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x376D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D00u;
        // 0x376d04: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d00) {
            ctx->pc = 0x376D18u;
            goto label_376d18;
        }
    }
    ctx->pc = 0x376D08u;
    // 0x376d08: 0xc0c5258  jal         func_314960
    ctx->pc = 0x376D08u;
    SET_GPR_U32(ctx, 31, 0x376D10u);
    ctx->pc = 0x376D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376D08u;
    // 0x376d0c: 0x8e44c430  lw          $a0, -0x3BD0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314960u, 0x376D08u, 0x376D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376D10u;
label_376d10:
    // 0x376d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x376d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376d14:
    // 0x376d14: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x376d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_376d18:
    // 0x376d18: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x376d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x376d1c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x376d1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x376d20: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x376d20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x376d24: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x376d24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x376d28: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x376d28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x376d2c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x376d2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x376d30: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x376d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x376d34: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x376d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x376d38: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x376d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x376d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x376D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376D3Cu;
        // 0x376d40: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376D44u;
    // 0x376d44: 0x0  nop
    ctx->pc = 0x376d44u;
    // NOP
    ctx->pc = 0x376d48u;
}
