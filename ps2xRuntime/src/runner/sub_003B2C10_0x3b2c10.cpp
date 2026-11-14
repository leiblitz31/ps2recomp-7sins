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

// Function: sub_003B2C10
// Address: 0x3b2c10 - 0x3b34a0
void sub_003B2C10_0x3b2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2C10_0x3b2c10");
#endif

    switch (ctx->pc) {
        case 0x3b2c70u: goto label_3b2c70;
        case 0x3b2c84u: goto label_3b2c84;
        case 0x3b2d10u: goto label_3b2d10;
        case 0x3b2d2cu: goto label_3b2d2c;
        case 0x3b2df8u: goto label_3b2df8;
        case 0x3b2e10u: goto label_3b2e10;
        case 0x3b2e40u: goto label_3b2e40;
        case 0x3b2e90u: goto label_3b2e90;
        case 0x3b3258u: goto label_3b3258;
        case 0x3b3280u: goto label_3b3280;
        case 0x3b32a4u: goto label_3b32a4;
        case 0x3b32c8u: goto label_3b32c8;
        case 0x3b32e0u: goto label_3b32e0;
        case 0x3b3308u: goto label_3b3308;
        case 0x3b3320u: goto label_3b3320;
        case 0x3b3344u: goto label_3b3344;
        case 0x3b3368u: goto label_3b3368;
        case 0x3b339cu: goto label_3b339c;
        case 0x3b33b8u: goto label_3b33b8;
        case 0x3b33e8u: goto label_3b33e8;
        case 0x3b33f8u: goto label_3b33f8;
        case 0x3b3434u: goto label_3b3434;
        default: break;
    }

    ctx->pc = 0x3b2c10u;

    // 0x3b2c10: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x3b2c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x3b2c14: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x3b2c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x3b2c18: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3b2c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x3b2c1c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3b2c1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2c20: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3b2c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x3b2c24: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3b2c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x3b2c28: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3b2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x3b2c2c: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3b2c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x3b2c30: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3b2c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x3b2c34: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x3b2c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x3b2c38: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3b2c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x3b2c3c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3b2c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3b2c40: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x3b2c40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3b2c44: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3b2c44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3b2c48: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3b2c48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3b2c4c: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3b2c4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3b2c50: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3b2c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x3b2c54: 0x8ec2006c  lw          $v0, 0x6C($s6)
    ctx->pc = 0x3b2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x3b2c58: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x3b2c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x3b2c5c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x3b2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x3b2c60: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3B2C60u;
    {
        const bool branch_taken_0x3b2c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C60u;
        // 0x3b2c64: 0xafa8004c  sw          $t0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c60) {
            ctx->pc = 0x3B2CE4u;
            goto label_3b2ce4;
        }
    }
    ctx->pc = 0x3B2C68u;
    // 0x3b2c68: 0xc0e3992  jal         func_38E648
    ctx->pc = 0x3B2C68u;
    SET_GPR_U32(ctx, 31, 0x3B2C70u);
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x3B2C68u, 0x3B2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2C70u;
label_3b2c70:
    // 0x3b2c70: 0x8ec50068  lw          $a1, 0x68($s6)
    ctx->pc = 0x3b2c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
    // 0x3b2c74: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2C74u;
    {
        const bool branch_taken_0x3b2c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C74u;
        // 0x3b2c78: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c74) {
            ctx->pc = 0x3B2C84u;
            goto label_3b2c84;
        }
    }
    ctx->pc = 0x3B2C7Cu;
    // 0x3b2c7c: 0xc0e39e0  jal         func_38E780
    ctx->pc = 0x3B2C7Cu;
    SET_GPR_U32(ctx, 31, 0x3B2C84u);
    ctx->pc = 0x3B2C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2C7Cu;
    // 0x3b2c80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x3B2C7Cu, 0x3B2C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2C84u;
label_3b2c84:
    // 0x3b2c84: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x3b2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x3b2c88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b2c8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B2C8Cu;
    {
        const bool branch_taken_0x3b2c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2C8Cu;
        // 0x3b2c90: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c8c) {
            ctx->pc = 0x3B2CC4u;
            goto label_3b2cc4;
        }
    }
    ctx->pc = 0x3B2C94u;
    // 0x3b2c94: 0x24469aa8  addiu       $a2, $v0, -0x6558
    ctx->pc = 0x3b2c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941352));
    // 0x3b2c98: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x3b2c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x3b2c9c: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x3b2c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x3b2ca0: 0xaba30033  swl         $v1, 0x33($sp)
    ctx->pc = 0x3b2ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b2ca4: 0xbba30030  swr         $v1, 0x30($sp)
    ctx->pc = 0x3b2ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b2ca8: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x3b2ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b2cac: 0x8bab0033  lwl         $t3, 0x33($sp)
    ctx->pc = 0x3b2cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
    // 0x3b2cb0: 0x9bab0030  lwr         $t3, 0x30($sp)
    ctx->pc = 0x3b2cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
    // 0x3b2cb4: 0xa94b0007  swl         $t3, 0x7($t2)
    ctx->pc = 0x3b2cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b2cb8: 0xb94b0004  swr         $t3, 0x4($t2)
    ctx->pc = 0x3b2cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b2cbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2CBCu;
    {
        const bool branch_taken_0x3b2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CBCu;
        // 0x3b2cc0: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2cbc) {
            ctx->pc = 0x3B2CDCu;
            goto label_3b2cdc;
        }
    }
    ctx->pc = 0x3B2CC4u;
label_3b2cc4:
    // 0x3b2cc4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3b2cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b2cc8: 0x8ac60063  lwl         $a2, 0x63($s6)
    ctx->pc = 0x3b2cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x3b2ccc: 0x9ac60060  lwr         $a2, 0x60($s6)
    ctx->pc = 0x3b2cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x3b2cd0: 0xa8a60007  swl         $a2, 0x7($a1)
    ctx->pc = 0x3b2cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b2cd4: 0xb8a60004  swr         $a2, 0x4($a1)
    ctx->pc = 0x3b2cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3b2cd8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3b2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3b2cdc:
    // 0x3b2cdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2CDCu;
    {
        const bool branch_taken_0x3b2cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2CDCu;
        // 0x3b2ce0: 0xaec3006c  sw          $v1, 0x6C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2cdc) {
            ctx->pc = 0x3B2CF8u;
            goto label_3b2cf8;
        }
    }
    ctx->pc = 0x3B2CE4u;
label_3b2ce4:
    // 0x3b2ce4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x3b2ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x3b2ce8: 0x94420018  lhu         $v0, 0x18($v0)
    ctx->pc = 0x3b2ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x3b2cec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3b2cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b2cf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b2cf4: 0xa4820018  sh          $v0, 0x18($a0)
    ctx->pc = 0x3b2cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
label_3b2cf8:
    // 0x3b2cf8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3b2cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2cfc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3b2cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b2d00: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3b2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3b2d04: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3b2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x3b2d08: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x3b2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x3b2d0c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3b2d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_3b2d10:
    // 0x3b2d10: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x3b2d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2d14: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3b2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3b2d18: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2D18u;
    {
        const bool branch_taken_0x3b2d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D18u;
        // 0x3b2d1c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d18) {
            ctx->pc = 0x3B2D30u;
            goto label_3b2d30;
        }
    }
    ctx->pc = 0x3B2D20u;
    // 0x3b2d20: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x3b2d20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2d24: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B2D24u;
    SET_GPR_U32(ctx, 31, 0x3B2D2Cu);
    ctx->pc = 0x3B2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2D24u;
    // 0x3b2d28: 0x8d440000  lw          $a0, 0x0($t2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B2D24u, 0x3B2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D2Cu;
label_3b2d2c:
    // 0x3b2d2c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b2d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d30:
    // 0x3b2d30: 0x8fab0064  lw          $t3, 0x64($sp)
    ctx->pc = 0x3b2d30u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3b2d34: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x3b2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3b2d38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3b2d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2d3c: 0x2562fffe  addiu       $v0, $t3, -0x2
    ctx->pc = 0x3b2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x3b2d40: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x3b2d40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b2d44: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x3b2d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3b2d48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b2d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3b2d4c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x3b2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x3b2d50: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x3b2d50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3b2d54: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3b2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x3b2d58: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3b2d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2d5c: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x3b2d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3b2d60: 0x1486ffeb  bne         $a0, $a2, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3B2D60u;
    {
        const bool branch_taken_0x3b2d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3B2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D60u;
        // 0x3b2d64: 0xafaa0060  sw          $t2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d60) {
            ctx->pc = 0x3B2D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2d10;
        }
    }
    ctx->pc = 0x3B2D68u;
    // 0x3b2d68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b2d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3b2d6c: 0x8fab0064  lw          $t3, 0x64($sp)
    ctx->pc = 0x3b2d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3b2d70: 0x2442ce80  addiu       $v0, $v0, -0x3180
    ctx->pc = 0x3b2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3b2d74: 0xc6d60070  lwc1        $f22, 0x70($s6)
    ctx->pc = 0x3b2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b2d78: 0x116001ac  beqz        $t3, . + 4 + (0x1AC << 2)
    ctx->pc = 0x3B2D78u;
    {
        const bool branch_taken_0x3b2d78 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D78u;
        // 0x3b2d7c: 0xc45506f8  lwc1        $f21, 0x6F8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d78) {
            ctx->pc = 0x3B342Cu;
            goto label_3b342c;
        }
    }
    ctx->pc = 0x3B2D80u;
    // 0x3b2d80: 0x114001aa  beqz        $t2, . + 4 + (0x1AA << 2)
    ctx->pc = 0x3B2D80u;
    {
        const bool branch_taken_0x3b2d80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D80u;
        // 0x3b2d84: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d80) {
            ctx->pc = 0x3B342Cu;
            goto label_3b342c;
        }
    }
    ctx->pc = 0x3B2D88u;
    // 0x3b2d88: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3b2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3b2d8c: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x3b2d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b2d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b2d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2d94: 0x8d45005c  lw          $a1, 0x5C($t2)
    ctx->pc = 0x3b2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 92)));
    // 0x3b2d98: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x3b2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x3b2d9c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x3b2d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2da0: 0x8fab004c  lw          $t3, 0x4C($sp)
    ctx->pc = 0x3b2da0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3b2da4: 0x45080  sll         $t2, $a0, 2
    ctx->pc = 0x3b2da4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b2da8: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x3b2da8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x3b2dac: 0x438c0  sll         $a3, $a0, 3
    ctx->pc = 0x3b2dacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3b2db0: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x3b2db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b2db4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b2db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2db8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3b2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b2dbc: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x3b2dbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3b2dc0: 0x8ca9002c  lw          $t1, 0x2C($a1)
    ctx->pc = 0x3b2dc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x3b2dc4: 0x8ca60030  lw          $a2, 0x30($a1)
    ctx->pc = 0x3b2dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3b2dc8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3b2dcc: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x3b2dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x3b2dd0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x3b2dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3b2dd4: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3b2dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3b2dd8: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x3b2dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
    // 0x3b2ddc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3b2ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3b2de0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b2de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3b2de4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b2de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x3b2de8: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x3b2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x3b2dec: 0xafa6006c  sw          $a2, 0x6C($sp)
    ctx->pc = 0x3b2decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
    // 0x3b2df0: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x3b2df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x3b2df4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x3b2df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b2df8:
    // 0x3b2df8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x3b2df8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b2dfc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3b2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3b2e00: 0x144a0005  bne         $v0, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2E00u;
    {
        const bool branch_taken_0x3b2e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        ctx->pc = 0x3B2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E00u;
        // 0x3b2e04: 0xc4d40010  lwc1        $f20, 0x10($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e00) {
            ctx->pc = 0x3B2E18u;
            goto label_3b2e18;
        }
    }
    ctx->pc = 0x3B2E08u;
    // 0x3b2e08: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B2E08u;
    SET_GPR_U32(ctx, 31, 0x3B2E10u);
    ctx->pc = 0x3B2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E08u;
    // 0x3b2e0c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B2E08u, 0x3B2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E10u;
label_3b2e10:
    // 0x3b2e10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2E10u;
    {
        const bool branch_taken_0x3b2e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E10u;
        // 0x3b2e14: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e10) {
            ctx->pc = 0x3B2E20u;
            goto label_3b2e20;
        }
    }
    ctx->pc = 0x3B2E18u;
label_3b2e18:
    // 0x3b2e18: 0x8fab0050  lw          $t3, 0x50($sp)
    ctx->pc = 0x3b2e18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2e1c: 0x8d700000  lw          $s0, 0x0($t3)
    ctx->pc = 0x3b2e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_3b2e20:
    // 0x3b2e20: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3b2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2e24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b2e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b2e28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3b2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3b2e2c: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2E2Cu;
    {
        const bool branch_taken_0x3b2e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3B2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E2Cu;
        // 0x3b2e30: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e2c) {
            ctx->pc = 0x3B2E44u;
            goto label_3b2e44;
        }
    }
    ctx->pc = 0x3B2E34u;
    // 0x3b2e34: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3b2e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2e38: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B2E38u;
    SET_GPR_U32(ctx, 31, 0x3B2E40u);
    ctx->pc = 0x3B2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2E38u;
    // 0x3b2e3c: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B2E38u, 0x3B2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2E40u;
label_3b2e40:
    // 0x3b2e40: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b2e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2e44:
    // 0x3b2e44: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3b2e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3b2e48: 0x2504ffff  addiu       $a0, $t0, -0x1
    ctx->pc = 0x3b2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3b2e4c: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x3b2e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3b2e50: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3b2e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x3b2e54: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x3b2e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x3b2e58: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3b2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3b2e5c: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x3b2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3b2e60: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x3b2e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2e64: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x3b2e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x3b2e68: 0x4600b9c3  div.s       $f7, $f23, $f0
    ctx->pc = 0x3b2e68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
    // 0x3b2e6c: 0x110000e0  beqz        $t0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x3B2E6Cu;
    {
        const bool branch_taken_0x3b2e6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2E6Cu;
        // 0x3b2e70: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2e6c) {
            ctx->pc = 0x3B31F0u;
            goto label_3b31f0;
        }
    }
    ctx->pc = 0x3B2E74u;
    // 0x3b2e74: 0x4614b200  add.s       $f8, $f22, $f20
    ctx->pc = 0x3b2e74u;
    ctx->f[8] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
    // 0x3b2e78: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x3b2e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3b2e7c: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x3b2e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b2e80: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x3b2e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3b2e84: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x3b2e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3b2e88: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x3b2e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3b2e8c: 0x0  nop
    ctx->pc = 0x3b2e8cu;
    // NOP
label_3b2e90:
    // 0x3b2e90: 0xc482fff8  lwc1        $f2, -0x8($a0)
    ctx->pc = 0x3b2e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2e94: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x3b2e94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x3b2e98: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b2e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b2e9c: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x3b2e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2ea0: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x3b2ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3b2ea4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3b2ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b2ea8: 0xc481fff0  lwc1        $f1, -0x10($a0)
    ctx->pc = 0x3b2ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2eac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b2eacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b2eb0: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3b2eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3b2eb4: 0xc482fff4  lwc1        $f2, -0xC($a0)
    ctx->pc = 0x3b2eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2eb8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2ebc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3b2ebcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3b2ec0: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x3b2ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3b2ec4: 0xe4d50008  swc1        $f21, 0x8($a2)
    ctx->pc = 0x3b2ec4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3b2ec8: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x3b2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x3b2ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b2eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b2ed0: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x3B2ED0u;
    {
        const bool branch_taken_0x3b2ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2ed0) {
            ctx->pc = 0x3B2ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2ED0u;
            // 0x3b2ed4: 0xa0a90000  sb          $t1, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2FA0u;
            goto label_3b2fa0;
        }
    }
    ctx->pc = 0x3B2ED8u;
    // 0x3b2ed8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b2ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2edc: 0xc6c10018  lwc1        $f1, 0x18($s6)
    ctx->pc = 0x3b2edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2ee0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b2ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b2ee4: 0xc6c4001c  lwc1        $f4, 0x1C($s6)
    ctx->pc = 0x3b2ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b2ee8: 0xc6c50020  lwc1        $f5, 0x20($s6)
    ctx->pc = 0x3b2ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3b2eec: 0xc6c60024  lwc1        $f6, 0x24($s6)
    ctx->pc = 0x3b2eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3b2ef0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b2ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b2ef4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3b2ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b2ef8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b2ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2efc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b2efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b2f00: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3b2f00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3b2f04: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x3b2f04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b2f08: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2f0c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b2f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b2f10: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3b2f10u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3b2f14: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x3b2f14u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3b2f18: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2f1c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b2f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b2f20: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3b2f20u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3b2f24: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x3b2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b2f28: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3b2f28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3b2f2c: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x3b2f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2f30: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x3b2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2f34: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x3b2f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2f38: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3b2f38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x3b2f3c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3b2f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3b2f40: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3b2f40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b2f44: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3b2f44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3b2f48: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3b2f48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b2f4c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3b2f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3b2f50: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3b2f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3b2f54: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2f54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b2f58: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b2f58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b2f5c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3b2f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b2f60: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3b2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3b2f64: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3b2f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2f68: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3b2f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3b2f6c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3b2f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x3b2f70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b2f74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3b2f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b2f78: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3b2f78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b2f7c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3b2f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2f80: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b2f84: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3b2f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b2f88: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3b2f88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b2f8c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3b2f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2f90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b2f90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b2f94: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3b2f94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b2f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2F98u;
    {
        const bool branch_taken_0x3b2f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F98u;
        // 0x3b2f9c: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f98) {
            ctx->pc = 0x3B2FB8u;
            goto label_3b2fb8;
        }
    }
    ctx->pc = 0x3B2FA0u;
label_3b2fa0:
    // 0x3b2fa0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3b2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3b2fa4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3b2fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3b2fa8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3b2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x3b2fac: 0xa0a90001  sb          $t1, 0x1($a1)
    ctx->pc = 0x3b2facu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x3b2fb0: 0xa0a90002  sb          $t1, 0x2($a1)
    ctx->pc = 0x3b2fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x3b2fb4: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x3b2fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
label_3b2fb8:
    // 0x3b2fb8: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x3b2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x3b2fbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b2fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b2fc0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B2FC0u;
    {
        const bool branch_taken_0x3b2fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2FC0u;
        // 0x3b2fc4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2fc0) {
            ctx->pc = 0x3B3020u;
            goto label_3b3020;
        }
    }
    ctx->pc = 0x3B2FC8u;
    // 0x3b2fc8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b2fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2fcc: 0xc6c20028  lwc1        $f2, 0x28($s6)
    ctx->pc = 0x3b2fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b2fd0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b2fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b2fd4: 0xc6c3002c  lwc1        $f3, 0x2C($s6)
    ctx->pc = 0x3b2fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b2fd8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b2fd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b2fdc: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3b2fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3b2fe0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b2fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2fe4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b2fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b2fe8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b2fe8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b2fec: 0xc6c10010  lwc1        $f1, 0x10($s6)
    ctx->pc = 0x3b2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2ff0: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x3b2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b2ff4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b2ff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b2ff8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3b2ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3b2ffc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3b2ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3b3000: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3b3000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3b3004: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x3b3004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3b3008: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x3b3008u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b300c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3b300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3010: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x3b3010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3b3014: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x3b3014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
    // 0x3b3018: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3b3018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3b301c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b301cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3b3020:
    // 0x3b3020: 0x8fab0068  lw          $t3, 0x68($sp)
    ctx->pc = 0x3b3020u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3b3024: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3b3024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3b3028: 0x256b000c  addiu       $t3, $t3, 0xC
    ctx->pc = 0x3b3028u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x3b302c: 0xafab0068  sw          $t3, 0x68($sp)
    ctx->pc = 0x3b302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 11));
    // 0x3b3030: 0x4614b041  sub.s       $f1, $f22, $f20
    ctx->pc = 0x3b3030u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x3b3034: 0xc482fff8  lwc1        $f2, -0x8($a0)
    ctx->pc = 0x3b3034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b3038: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3b3038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b303c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3b303cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b3040: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x3b3040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3044: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3b3044u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3b3048: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3b3048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b304c: 0xc481fff0  lwc1        $f1, -0x10($a0)
    ctx->pc = 0x3b304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b3050: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b3050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b3054: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x3b3054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3b3058: 0xc482fff4  lwc1        $f2, -0xC($a0)
    ctx->pc = 0x3b3058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b305c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3b305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3060: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3b3060u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3b3064: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x3b3064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x3b3068: 0xe4d50008  swc1        $f21, 0x8($a2)
    ctx->pc = 0x3b3068u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x3b306c: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x3b306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x3b3070: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b3074: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3B3074u;
    {
        const bool branch_taken_0x3b3074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3074) {
            ctx->pc = 0x3B3078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3074u;
            // 0x3b3078: 0xa0a90000  sb          $t1, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3148u;
            goto label_3b3148;
        }
    }
    ctx->pc = 0x3B307Cu;
    // 0x3b307c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3080: 0xc6c10048  lwc1        $f1, 0x48($s6)
    ctx->pc = 0x3b3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b3084: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b3084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b3088: 0xc6c4004c  lwc1        $f4, 0x4C($s6)
    ctx->pc = 0x3b3088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b308c: 0xc6c50050  lwc1        $f5, 0x50($s6)
    ctx->pc = 0x3b308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3b3090: 0xc6c60054  lwc1        $f6, 0x54($s6)
    ctx->pc = 0x3b3090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3b3094: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b3094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b3098: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3b3098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b309c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b30a0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b30a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b30a4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3b30a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3b30a8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x3b30a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b30ac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b30b0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b30b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b30b4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3b30b4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3b30b8: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x3b30b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3b30bc: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b30bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b30c0: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b30c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b30c4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3b30c4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3b30c8: 0xc6c30030  lwc1        $f3, 0x30($s6)
    ctx->pc = 0x3b30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b30cc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3b30ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x3b30d0: 0xc6c20034  lwc1        $f2, 0x34($s6)
    ctx->pc = 0x3b30d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b30d4: 0xc6c00038  lwc1        $f0, 0x38($s6)
    ctx->pc = 0x3b30d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b30d8: 0xc6c1003c  lwc1        $f1, 0x3C($s6)
    ctx->pc = 0x3b30d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b30dc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3b30dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x3b30e0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3b30e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x3b30e4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x3b30e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b30e8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3b30e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3b30ec: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x3b30ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b30f0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3b30f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3b30f4: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x3b30f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3b30f8: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b30f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b30fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b30fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b3100: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3b3100u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3104: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3b3104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3b3108: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3b3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b310c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3b310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3b3110: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3b3110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x3b3114: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3118: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3b3118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b311c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x3b311cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3120: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3b3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3124: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3124u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3128: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3b3128u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b312c: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x3b312cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3130: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x3b3130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3134: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3134u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3138: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3b3138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b313c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B313Cu;
    {
        const bool branch_taken_0x3b313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B313Cu;
        // 0x3b3140: 0xa0a20003  sb          $v0, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b313c) {
            ctx->pc = 0x3B3160u;
            goto label_3b3160;
        }
    }
    ctx->pc = 0x3B3144u;
    // 0x3b3144: 0x0  nop
    ctx->pc = 0x3b3144u;
    // NOP
label_3b3148:
    // 0x3b3148: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x3b3148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3b314c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3b314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3b3150: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x3b3150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x3b3154: 0xa0a90001  sb          $t1, 0x1($a1)
    ctx->pc = 0x3b3154u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 9));
    // 0x3b3158: 0xa0a90002  sb          $t1, 0x2($a1)
    ctx->pc = 0x3b3158u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 9));
    // 0x3b315c: 0xa0a90003  sb          $t1, 0x3($a1)
    ctx->pc = 0x3b315cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 9));
label_3b3160:
    // 0x3b3160: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x3b3160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x3b3164: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b3164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b3168: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B3168u;
    {
        const bool branch_taken_0x3b3168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3168u;
        // 0x3b316c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3168) {
            ctx->pc = 0x3B31C8u;
            goto label_3b31c8;
        }
    }
    ctx->pc = 0x3B3170u;
    // 0x3b3170: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b3170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3174: 0xc6c20058  lwc1        $f2, 0x58($s6)
    ctx->pc = 0x3b3174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b3178: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b3178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b317c: 0xc6c3005c  lwc1        $f3, 0x5C($s6)
    ctx->pc = 0x3b317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b3180: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b3180u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b3184: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3b3184u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3b3188: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3b3188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b318c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x3b318cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3b3190: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b3190u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b3194: 0xc6c10040  lwc1        $f1, 0x40($s6)
    ctx->pc = 0x3b3194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b3198: 0xc6c00044  lwc1        $f0, 0x44($s6)
    ctx->pc = 0x3b3198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b319c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b319cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b31a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3b31a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3b31a4: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3b31a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3b31a8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3b31a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3b31ac: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x3b31acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x3b31b0: 0x8faa0070  lw          $t2, 0x70($sp)
    ctx->pc = 0x3b31b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b31b4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x3b31b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b31b8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x3b31b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3b31bc: 0xafaa0070  sw          $t2, 0x70($sp)
    ctx->pc = 0x3b31bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
    // 0x3b31c0: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x3b31c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x3b31c4: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x3b31c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_3b31c8:
    // 0x3b31c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3b31c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3b31cc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x3b31ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x3b31d0: 0x8fab005c  lw          $t3, 0x5C($sp)
    ctx->pc = 0x3b31d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3b31d4: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3b31d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3b31d8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3b31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3b31dc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3b31dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3b31e0: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x3b31e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x3b31e4: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x3b31e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3b31e8: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x3B31E8u;
    {
        const bool branch_taken_0x3b31e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B31ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B31E8u;
        // 0x3b31ec: 0xafab005c  sw          $t3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b31e8) {
            ctx->pc = 0x3B2E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2e90;
        }
    }
    ctx->pc = 0x3B31F0u;
label_3b31f0:
    // 0x3b31f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b31f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b31f4: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x3b31f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b31f8: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x3b31f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x3b31fc: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x3b31fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3b3200: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x3B3200u;
    {
        const bool branch_taken_0x3b3200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3200u;
        // 0x3b3204: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3200) {
            ctx->pc = 0x3B340Cu;
            goto label_3b340c;
        }
    }
    ctx->pc = 0x3B3208u;
    // 0x3b3208: 0x26640003  addiu       $a0, $s3, 0x3
    ctx->pc = 0x3b3208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x3b320c: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x3b320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3b3210: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x3b3210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x3b3214: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x3b3214u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x3b3218: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x3b3218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x3b321c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B321Cu;
    {
        const bool branch_taken_0x3b321c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B3220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B321Cu;
        // 0x3b3220: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b321c) {
            ctx->pc = 0x3B322Cu;
            goto label_3b322c;
        }
    }
    ctx->pc = 0x3B3224u;
    // 0x3b3224: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3B3224u;
    {
        const bool branch_taken_0x3b3224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3224u;
        // 0x3b3228: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3224) {
            ctx->pc = 0x3B32E0u;
            goto label_3b32e0;
        }
    }
    ctx->pc = 0x3B322Cu;
label_3b322c:
    // 0x3b322c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x3b322cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b3230: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x3b3230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3234: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b3234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b3238: 0x3212ffff  andi        $s2, $s0, 0xFFFF
    ctx->pc = 0x3b3238u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b323c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b323cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b3240: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x3b3240u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3b3244: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3b3244u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3248: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3b3248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b324c: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x3b324cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3b3250: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x3B3250u;
    SET_GPR_U32(ctx, 31, 0x3B3258u);
    ctx->pc = 0x3B3254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3250u;
    // 0x3b3254: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3B3250u, 0x3B3258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3258u;
label_3b3258:
    // 0x3b3258: 0x26770004  addiu       $s7, $s3, 0x4
    ctx->pc = 0x3b3258u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x3b325c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b325cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b3260: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3b3260u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3264: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b3264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b3268: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3b3268u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b326c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x3b326cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b3270: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x3b3270u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x3b3274: 0xafaa005c  sw          $t2, 0x5C($sp)
    ctx->pc = 0x3b3274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 10));
    // 0x3b3278: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x3B3278u;
    SET_GPR_U32(ctx, 31, 0x3B3280u);
    ctx->pc = 0x3B327Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3278u;
    // 0x3b327c: 0xafab0054  sw          $t3, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3B3278u, 0x3B3280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3280u;
label_3b3280:
    // 0x3b3280: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x3b3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x3b3284: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x3b3284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x3b3288: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b3288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b328c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b328cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3290: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b3290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b3294: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3b3294u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3b3298: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3b3298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x3b329c: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x3B329Cu;
    SET_GPR_U32(ctx, 31, 0x3B32A4u);
    ctx->pc = 0x3B32A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B329Cu;
    // 0x3b32a0: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3B329Cu, 0x3B32A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32A4u;
label_3b32a4:
    // 0x3b32a4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b32a8: 0x26640005  addiu       $a0, $s3, 0x5
    ctx->pc = 0x3b32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x3b32ac: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x3b32acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
    // 0x3b32b0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3b32b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b32b4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b32b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b32b8: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x3b32b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x3b32bc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x3b32bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b32c0: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x3B32C0u;
    SET_GPR_U32(ctx, 31, 0x3B32C8u);
    ctx->pc = 0x3B32C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32C0u;
    // 0x3b32c4: 0xafaa0054  sw          $t2, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3B32C0u, 0x3B32C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32C8u;
label_3b32c8:
    // 0x3b32c8: 0x8fab005c  lw          $t3, 0x5C($sp)
    ctx->pc = 0x3b32c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3b32cc: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x3b32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3b32d0: 0x163102b  sltu        $v0, $t3, $v1
    ctx->pc = 0x3b32d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b32d4: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x3B32D4u;
    {
        const bool branch_taken_0x3b32d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b32d4) {
            ctx->pc = 0x3B32D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B32D4u;
            // 0x3b32d8: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3410u;
            goto label_3b3410;
        }
    }
    ctx->pc = 0x3B32DCu;
    // 0x3b32dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x3b32dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_3b32e0:
    // 0x3b32e0: 0x32f0ffff  andi        $s0, $s7, 0xFFFF
    ctx->pc = 0x3b32e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x3b32e4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b32e8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b32e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b32ec: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x3b32ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3b32f0: 0x33c6ffff  andi        $a2, $fp, 0xFFFF
    ctx->pc = 0x3b32f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x3b32f4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b32f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b32f8: 0x24b20008  addiu       $s2, $a1, 0x8
    ctx->pc = 0x3b32f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3b32fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3b32fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3300: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x3B3300u;
    SET_GPR_U32(ctx, 31, 0x3B3308u);
    ctx->pc = 0x3B3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3300u;
    // 0x3b3304: 0x26f40002  addiu       $s4, $s7, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3B3300u, 0x3B3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3308u;
label_3b3308:
    // 0x3b3308: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x3b3308u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b330c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b330cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b3310: 0x27d70004  addiu       $s7, $fp, 0x4
    ctx->pc = 0x3b3310u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x3b3314: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b3314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b3318: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x3B3318u;
    SET_GPR_U32(ctx, 31, 0x3B3320u);
    ctx->pc = 0x3B331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3318u;
    // 0x3b331c: 0x8fa60058  lw          $a2, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3B3318u, 0x3B3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3320u;
label_3b3320:
    // 0x3b3320: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x3b3320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b3324: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3b3324u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3328: 0x8faa007c  lw          $t2, 0x7C($sp)
    ctx->pc = 0x3b3328u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x3b332c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b332cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3330: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b3330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b3334: 0x24b30010  addiu       $s3, $a1, 0x10
    ctx->pc = 0x3b3334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3b3338: 0x3147ffff  andi        $a3, $t2, 0xFFFF
    ctx->pc = 0x3b3338u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x3b333c: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x3B333Cu;
    SET_GPR_U32(ctx, 31, 0x3B3344u);
    ctx->pc = 0x3B3340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B333Cu;
    // 0x3b3340: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3B333Cu, 0x3B3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3344u;
label_3b3344:
    // 0x3b3344: 0x3291ffff  andi        $s1, $s4, 0xFFFF
    ctx->pc = 0x3b3344u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x3b3348: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x3b3348u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b334c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b334cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3350: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x3b3350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x3b3354: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b3354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b3358: 0x25750018  addiu       $s5, $t3, 0x18
    ctx->pc = 0x3b3358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
    // 0x3b335c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x3b335cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b3360: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x3B3360u;
    SET_GPR_U32(ctx, 31, 0x3B3368u);
    ctx->pc = 0x3B3364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3360u;
    // 0x3b3364: 0x24520002  addiu       $s2, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3B3360u, 0x3B3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3368u;
label_3b3368:
    // 0x3b3368: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x3b3368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b336c: 0x33c6ffff  andi        $a2, $fp, 0xFFFF
    ctx->pc = 0x3b336cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x3b3370: 0x8faa005c  lw          $t2, 0x5C($sp)
    ctx->pc = 0x3b3370u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3b3374: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3b3374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3378: 0x24700002  addiu       $s0, $v1, 0x2
    ctx->pc = 0x3b3378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3b337c: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b337cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b3380: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x3b3380u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x3b3384: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3b3384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x3b3388: 0xafaa005c  sw          $t2, 0x5C($sp)
    ctx->pc = 0x3b3388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 10));
    // 0x3b338c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3b338cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3390: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b3390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3394: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x3B3394u;
    SET_GPR_U32(ctx, 31, 0x3B339Cu);
    ctx->pc = 0x3B3398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3394u;
    // 0x3b3398: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3B3394u, 0x3B339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B339Cu;
label_3b339c:
    // 0x3b339c: 0x8fab0054  lw          $t3, 0x54($sp)
    ctx->pc = 0x3b339cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x3b33a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b33a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33a4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b33a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b33a8: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x3b33a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b33ac: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x3b33acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x3b33b0: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x3B33B0u;
    SET_GPR_U32(ctx, 31, 0x3B33B8u);
    ctx->pc = 0x3B33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33B0u;
    // 0x3b33b4: 0xafab0054  sw          $t3, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3B33B0u, 0x3B33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33B8u;
label_3b33b8:
    // 0x3b33b8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x3b33b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x3b33bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b33bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x3b33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b33c4: 0x3247ffff  andi        $a3, $s2, 0xFFFF
    ctx->pc = 0x3b33c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x3b33c8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b33c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b33cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3b33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3b33d0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3b33d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3b33d4: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x3b33d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x3b33d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x3b33d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b33dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33e0: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x3B33E0u;
    SET_GPR_U32(ctx, 31, 0x3B33E8u);
    ctx->pc = 0x3B33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33E0u;
    // 0x3b33e4: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x3B33E0u, 0x3B33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33E8u;
label_3b33e8:
    // 0x3b33e8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3b33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3b33ec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b33ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33f0: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x3B33F0u;
    SET_GPR_U32(ctx, 31, 0x3B33F8u);
    ctx->pc = 0x3B33F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33F0u;
    // 0x3b33f4: 0x8fa60058  lw          $a2, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x3B33F0u, 0x3B33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33F8u;
label_3b33f8:
    // 0x3b33f8: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x3b33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3b33fc: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x3b33fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x3b3400: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x3b3400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3b3404: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x3B3404u;
    {
        const bool branch_taken_0x3b3404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3404u;
        // 0x3b3408: 0x8fa40080  lw          $a0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3404) {
            ctx->pc = 0x3B32E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b32e0;
        }
    }
    ctx->pc = 0x3B340Cu;
label_3b340c:
    // 0x3b340c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x3b340cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3410:
    // 0x3b3410: 0x8faa0040  lw          $t2, 0x40($sp)
    ctx->pc = 0x3b3410u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b3414: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x3b3414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3b3418: 0x8fb30078  lw          $s3, 0x78($sp)
    ctx->pc = 0x3b3418u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3b341c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x3b341cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x3b3420: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x3b3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x3b3424: 0x14c2fe74  bne         $a2, $v0, . + 4 + (-0x18C << 2)
    ctx->pc = 0x3B3424u;
    {
        const bool branch_taken_0x3b3424 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B3428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3424u;
        // 0x3b3428: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3424) {
            ctx->pc = 0x3B2DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2df8;
        }
    }
    ctx->pc = 0x3B342Cu;
label_3b342c:
    // 0x3b342c: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x3B342Cu;
    SET_GPR_U32(ctx, 31, 0x3B3434u);
    ctx->pc = 0x3B3430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B342Cu;
    // 0x3b3430: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x3B342Cu, 0x3B3434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3434u;
label_3b3434:
    // 0x3b3434: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x3b3434u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3b3438: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x3b3438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b343c: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x3b343cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3b3440: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3b3440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b3444: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3b3444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3b3448: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x3b3448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3b344c: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x3b344cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x3b3450: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3b3450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3b3454: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x3b3454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3b3458: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b3458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b345c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x3b345cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3b3460: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b3460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3b3464: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3b3464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3b3468: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3b3468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3b346c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3b346cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3b3470: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3b3470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3b3474: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x3b3474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3b3478: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x3b3478u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3b347c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3b347cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b3480: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3b3480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b3484: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x3b3484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3b3488: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x3b3488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b348c: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x3b348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b3490: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3b3490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b3494: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3b3494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3b3498: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3498u;
        // 0x3b349c: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B34A0u;
}
