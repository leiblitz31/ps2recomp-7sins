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

// Function: sub_003AE508
// Address: 0x3ae508 - 0x3ae670
void sub_003AE508_0x3ae508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE508_0x3ae508");
#endif

    switch (ctx->pc) {
        case 0x3ae580u: goto label_3ae580;
        case 0x3ae5b0u: goto label_3ae5b0;
        case 0x3ae5ecu: goto label_3ae5ec;
        case 0x3ae638u: goto label_3ae638;
        default: break;
    }

    ctx->pc = 0x3ae508u;

    // 0x3ae508: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3ae508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3ae50c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae510: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3ae510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3ae514: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ae514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae518: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3ae518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3ae51c: 0x2451ce80  addiu       $s1, $v0, -0x3180
    ctx->pc = 0x3ae51cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3ae520: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3ae520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3ae524: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3ae524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ae528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3ae52c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3ae52cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae530: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3ae530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3ae534: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3ae534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3ae538: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ae538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ae53c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ae53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ae540: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ae540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3ae544: 0x8e240724  lw          $a0, 0x724($s1)
    ctx->pc = 0x3ae544u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61D5A4u));
    // 0x3ae548: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3ae548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3ae54c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AE54Cu;
    {
        const bool branch_taken_0x3ae54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AE550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE54Cu;
        // 0x3ae550: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae54c) {
            ctx->pc = 0x3AE558u;
            goto label_3ae558;
        }
    }
    ctx->pc = 0x3AE554u;
    // 0x3ae554: 0xc63406f8  lwc1        $f20, 0x6F8($s1)
    ctx->pc = 0x3ae554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ae558:
    // 0x3ae558: 0x6a22061b  ldl         $v0, 0x61B($s1)
    ctx->pc = 0x3ae558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ae55c: 0x6e220614  ldr         $v0, 0x614($s1)
    ctx->pc = 0x3ae55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ae560: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x3ae560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ae564: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x3ae564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ae568: 0x6a220623  ldl         $v0, 0x623($s1)
    ctx->pc = 0x3ae568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1571); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ae56c: 0x6e22061c  ldr         $v0, 0x61C($s1)
    ctx->pc = 0x3ae56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1564); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ae570: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3ae570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ae574: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3ae574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ae578: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3AE578u;
    SET_GPR_U32(ctx, 31, 0x3AE580u);
    ctx->pc = 0x3AE57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE578u;
    // 0x3ae57c: 0x26300670  addiu       $s0, $s1, 0x670 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3AE578u, 0x3AE580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE580u;
label_3ae580:
    // 0x3ae580: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x3ae580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae584: 0x4600a087  neg.s       $f2, $f20
    ctx->pc = 0x3ae584u;
    ctx->f[2] = FPU_NEG_S(ctx->f[20]);
    // 0x3ae588: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3ae588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae58c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ae58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae590: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae594: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3ae594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3ae598: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3ae598u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3ae59c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3ae59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3ae5a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ae5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5a4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ae5a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ae5a8: 0xc104d84  jal         func_413610
    ctx->pc = 0x3AE5A8u;
    SET_GPR_U32(ctx, 31, 0x3AE5B0u);
    ctx->pc = 0x3AE5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE5A8u;
    // 0x3ae5ac: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x3AE5A8u, 0x3AE5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE5B0u;
label_3ae5b0:
    // 0x3ae5b0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x3ae5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae5b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ae5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5b8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3ae5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae5bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5c0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3ae5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ae5c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ae5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5c8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x3ae5c8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x3ae5cc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3ae5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae5d0: 0xe6430000  swc1        $f3, 0x0($s2)
    ctx->pc = 0x3ae5d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x3ae5d4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x3ae5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x3ae5d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3ae5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3ae5dc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3ae5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3ae5e0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3ae5e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3ae5e4: 0xc104d84  jal         func_413610
    ctx->pc = 0x3AE5E4u;
    SET_GPR_U32(ctx, 31, 0x3AE5ECu);
    ctx->pc = 0x3AE5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE5E4u;
    // 0x3ae5e8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x3AE5E4u, 0x3AE5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE5ECu;
label_3ae5ec:
    // 0x3ae5ec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3ae5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae5f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ae5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae5f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ae5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3ae5f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3ae5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3ae5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ae5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae600: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3ae600u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3ae604: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3ae604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae608: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3ae608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3ae60c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3ae60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ae610: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3ae610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3ae614: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae618: 0xe6630000  swc1        $f3, 0x0($s3)
    ctx->pc = 0x3ae618u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x3ae61c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3ae61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3ae620: 0xe6640004  swc1        $f4, 0x4($s3)
    ctx->pc = 0x3ae620u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x3ae624: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3ae624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3ae628: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3ae628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3ae62c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3ae62cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ae630: 0xc104d64  jal         func_413590
    ctx->pc = 0x3AE630u;
    SET_GPR_U32(ctx, 31, 0x3AE638u);
    ctx->pc = 0x3AE634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE630u;
    // 0x3ae634: 0xe7a20000  swc1        $f2, 0x0($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x3AE630u, 0x3AE638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE638u;
label_3ae638:
    // 0x3ae638: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3ae638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae640: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3ae640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae644: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x3ae644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x3ae648: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x3ae648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x3ae64c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3ae64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ae650: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3ae650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ae654: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3ae654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3ae658: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3ae658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae65c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ae65cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae660: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ae660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae664: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3ae664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ae668: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE668u;
        // 0x3ae66c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE670u;
}
