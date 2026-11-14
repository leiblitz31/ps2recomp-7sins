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

// Function: sub_003CD5D0
// Address: 0x3cd5d0 - 0x3cd7e8
void sub_003CD5D0_0x3cd5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD5D0_0x3cd5d0");
#endif

    switch (ctx->pc) {
        case 0x3cd694u: goto label_3cd694;
        case 0x3cd70cu: goto label_3cd70c;
        case 0x3cd74cu: goto label_3cd74c;
        default: break;
    }

    ctx->pc = 0x3cd5d0u;

    // 0x3cd5d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3cd5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3cd5d4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cd5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3cd5d8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3cd5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3cd5dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3cd5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3cd5e0: 0x2450b298  addiu       $s0, $v0, -0x4D68
    ctx->pc = 0x3cd5e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x3cd5e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3cd5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3cd5e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3cd5e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5ec: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3cd5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3cd5f0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3cd5f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5f4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3cd5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3cd5f8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3cd5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd5fc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3cd5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3cd600: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cd600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3cd604: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3cd604u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3cd608: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x3cd608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3cd60c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x3cd60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3cd610: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3cd610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3cd614: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3cd614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd618: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3cd618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd61c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3cd61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3cd620: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x3cd620u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DB384u));
    // 0x3cd624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cd628: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x3cd628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3cd62c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x3cd62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3cd630: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x3cd630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3cd634: 0xb3a40013  sdl         $a0, 0x13($sp)
    ctx->pc = 0x3cd634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd638: 0xb7a4000c  sdr         $a0, 0xC($sp)
    ctx->pc = 0x3cd638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cd63c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3cd63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3cd640: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3CD640u;
    {
        const bool branch_taken_0x3cd640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD640u;
        // 0x3cd644: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd640) {
            ctx->pc = 0x3CD6B8u;
            goto label_3cd6b8;
        }
    }
    ctx->pc = 0x3CD648u;
    // 0x3cd648: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3cd648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cd64c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x3cd64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cd650: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3cd650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3cd654: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3cd654u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3cd658: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3cd658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3cd65c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3cd65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd660: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x3cd660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3cd664: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3cd664u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x3cd668: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3cd668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3cd66c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3cd66cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3cd670: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x3cd670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3cd674: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x3cd674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3cd678: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cd678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd67c: 0x8e0600e0  lw          $a2, 0xE0($s0)
    ctx->pc = 0x3cd67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x3cd680: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3cd680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3cd684: 0x8e0700e4  lw          $a3, 0xE4($s0)
    ctx->pc = 0x3cd684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x3cd688: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x3cd688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cd68c: 0xc0f14a0  jal         func_3C5280
    ctx->pc = 0x3CD68Cu;
    SET_GPR_U32(ctx, 31, 0x3CD694u);
    ctx->pc = 0x3CD690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD68Cu;
    // 0x3cd690: 0x8e0800e8  lw          $t0, 0xE8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5280u, 0x3CD68Cu, 0x3CD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD694u;
label_3cd694:
    // 0x3cd694: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CD694u;
    {
        const bool branch_taken_0x3cd694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cd694) {
            ctx->pc = 0x3CD6B8u;
            goto label_3cd6b8;
        }
    }
    ctx->pc = 0x3CD69Cu;
    // 0x3cd69c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x3cd69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x3cd6a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD6A0u;
    {
        const bool branch_taken_0x3cd6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6A0u;
        // 0x3cd6a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6a0) {
            ctx->pc = 0x3CD6B8u;
            goto label_3cd6b8;
        }
    }
    ctx->pc = 0x3CD6A8u;
    // 0x3cd6a8: 0x8e0300ec  lw          $v1, 0xEC($s0)
    ctx->pc = 0x3cd6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x3cd6ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3cd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cd6b0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3CD6B0u;
    {
        const bool branch_taken_0x3cd6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6B0u;
        // 0x3cd6b4: 0xae0300ec  sw          $v1, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6b0) {
            ctx->pc = 0x3CD79Cu;
            goto label_3cd79c;
        }
    }
    ctx->pc = 0x3CD6B8u;
label_3cd6b8:
    // 0x3cd6b8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CD6B8u;
    {
        const bool branch_taken_0x3cd6b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6B8u;
        // 0x3cd6bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6b8) {
            ctx->pc = 0x3CD6D4u;
            goto label_3cd6d4;
        }
    }
    ctx->pc = 0x3CD6C0u;
    // 0x3cd6c0: 0x92280001  lbu         $t0, 0x1($s1)
    ctx->pc = 0x3cd6c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3cd6c4: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD6C4u;
    {
        const bool branch_taken_0x3cd6c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CD6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6C4u;
        // 0x3cd6c8: 0x26a2b298  addiu       $v0, $s5, -0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6c4) {
            ctx->pc = 0x3CD6D8u;
            goto label_3cd6d8;
        }
    }
    ctx->pc = 0x3CD6CCu;
    // 0x3cd6cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3CD6CCu;
    {
        const bool branch_taken_0x3cd6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD6CCu;
        // 0x3cd6d0: 0xac4800a0  sw          $t0, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd6cc) {
            ctx->pc = 0x3CD6DCu;
            goto label_3cd6dc;
        }
    }
    ctx->pc = 0x3CD6D4u;
label_3cd6d4:
    // 0x3cd6d4: 0x26a2b298  addiu       $v0, $s5, -0x4D68
    ctx->pc = 0x3cd6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947480));
label_3cd6d8:
    // 0x3cd6d8: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x3cd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
label_3cd6dc:
    // 0x3cd6dc: 0x26b1b298  addiu       $s1, $s5, -0x4D68
    ctx->pc = 0x3cd6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947480));
    // 0x3cd6e0: 0x27b40034  addiu       $s4, $sp, 0x34
    ctx->pc = 0x3cd6e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x3cd6e4: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x3cd6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd6e8: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3cd6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3cd6ec: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x3cd6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x3cd6f0: 0x24c6d8b0  addiu       $a2, $a2, -0x2750
    ctx->pc = 0x3cd6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957232));
    // 0x3cd6f4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3cd6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3cd6f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd6fc: 0xae3300ac  sw          $s3, 0xAC($s1)
    ctx->pc = 0x3cd6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 19));
    // 0x3cd700: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cd700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd704: 0xc0c6d5c  jal         func_31B570
    ctx->pc = 0x3CD704u;
    SET_GPR_U32(ctx, 31, 0x3CD70Cu);
    ctx->pc = 0x3CD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD704u;
    // 0x3cd708: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B570u, 0x3CD704u, 0x3CD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD70Cu;
label_3cd70c:
    // 0x3cd70c: 0xc7b40034  lwc1        $f20, 0x34($sp)
    ctx->pc = 0x3cd70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cd710: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x3cd710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd714: 0x8e3200a0  lw          $s2, 0xA0($s1)
    ctx->pc = 0x3cd714u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3cd718: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3cd718u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cd71c: 0x0  nop
    ctx->pc = 0x3cd71cu;
    // NOP
    // 0x3cd720: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3CD720u;
    {
        const bool branch_taken_0x3cd720 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD720u;
        // 0x3cd724: 0xae3000ac  sw          $s0, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd720) {
            ctx->pc = 0x3CD734u;
            goto label_3cd734;
        }
    }
    ctx->pc = 0x3CD728u;
    // 0x3cd728: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x3cd728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3cd72c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3CD72Cu;
    {
        const bool branch_taken_0x3cd72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD72Cu;
        // 0x3cd730: 0x26a2b298  addiu       $v0, $s5, -0x4D68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd72c) {
            ctx->pc = 0x3CD770u;
            goto label_3cd770;
        }
    }
    ctx->pc = 0x3CD734u;
label_3cd734:
    // 0x3cd734: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x3cd734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x3cd738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cd738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd73c: 0x24c6d800  addiu       $a2, $a2, -0x2800
    ctx->pc = 0x3cd73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957056));
    // 0x3cd740: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3cd740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd744: 0xc0c6d0c  jal         func_31B430
    ctx->pc = 0x3CD744u;
    SET_GPR_U32(ctx, 31, 0x3CD74Cu);
    ctx->pc = 0x3CD748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD744u;
    // 0x3cd748: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B430u, 0x3CD744u, 0x3CD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD74Cu;
label_3cd74c:
    // 0x3cd74c: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x3cd74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3cd750: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3cd750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3cd754: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CD754u;
    {
        const bool branch_taken_0x3cd754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD754u;
        // 0x3cd758: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd754) {
            ctx->pc = 0x3CD76Cu;
            goto label_3cd76c;
        }
    }
    ctx->pc = 0x3CD75Cu;
    // 0x3cd75c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cd75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cd760: 0x0  nop
    ctx->pc = 0x3cd760u;
    // NOP
    // 0x3cd764: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3CD764u;
    {
        const bool branch_taken_0x3cd764 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cd764) {
            ctx->pc = 0x3CD768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD764u;
            // 0x3cd768: 0xae3200a0  sw          $s2, 0xA0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD76Cu;
            goto label_3cd76c;
        }
    }
    ctx->pc = 0x3CD76Cu;
label_3cd76c:
    // 0x3cd76c: 0x26a2b298  addiu       $v0, $s5, -0x4D68
    ctx->pc = 0x3cd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947480));
label_3cd770:
    // 0x3cd770: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3cd770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cd774: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x3cd774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cd778: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cd778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cd77c: 0x0  nop
    ctx->pc = 0x3cd77cu;
    // NOP
    // 0x3cd780: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x3CD780u;
    {
        const bool branch_taken_0x3cd780 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cd780) {
            ctx->pc = 0x3CD784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CD780u;
            // 0x3cd784: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CD79Cu;
            goto label_3cd79c;
        }
    }
    ctx->pc = 0x3CD788u;
    // 0x3cd788: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x3cd788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x3cd78c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3cd78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3cd790: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CD790u;
    {
        const bool branch_taken_0x3cd790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CD794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD790u;
        // 0x3cd794: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cd790) {
            ctx->pc = 0x3CD79Cu;
            goto label_3cd79c;
        }
    }
    ctx->pc = 0x3CD798u;
    // 0x3cd798: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3cd798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cd79c:
    // 0x3cd79c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3cd79cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3cd7a0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3cd7a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3cd7a4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3cd7a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cd7a8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3cd7a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cd7ac: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3cd7acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cd7b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3cd7b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cd7b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cd7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cd7b8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3cd7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cd7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7BCu;
        // 0x3cd7c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD7C4u;
    // 0x3cd7c4: 0x0  nop
    ctx->pc = 0x3cd7c4u;
    // NOP
    // 0x3cd7c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3cd7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7CCu;
        // 0x3cd7d0: 0xe44cb340  swc1        $f12, -0x4CC0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947648), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD7D4u;
    // 0x3cd7d4: 0x0  nop
    ctx->pc = 0x3cd7d4u;
    // NOP
    // 0x3cd7d8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3cd7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3cd7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD7DCu;
        // 0x3cd7e0: 0xc440b340  lwc1        $f0, -0x4CC0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD7E4u;
    // 0x3cd7e4: 0x0  nop
    ctx->pc = 0x3cd7e4u;
    // NOP
    ctx->pc = 0x3cd7e8u;
}
