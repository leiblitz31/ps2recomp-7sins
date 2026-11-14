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

// Function: sub_003AE168
// Address: 0x3ae168 - 0x3ae2f0
void sub_003AE168_0x3ae168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE168_0x3ae168");
#endif

    switch (ctx->pc) {
        case 0x3ae1d8u: goto label_3ae1d8;
        case 0x3ae204u: goto label_3ae204;
        case 0x3ae230u: goto label_3ae230;
        case 0x3ae26cu: goto label_3ae26c;
        case 0x3ae29cu: goto label_3ae29c;
        case 0x3ae2bcu: goto label_3ae2bc;
        case 0x3ae2ccu: goto label_3ae2cc;
        default: break;
    }

    ctx->pc = 0x3ae168u;

    // 0x3ae168: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3ae168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3ae16c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae170: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3ae170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3ae174: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3ae174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3ae178: 0x2451ce80  addiu       $s1, $v0, -0x3180
    ctx->pc = 0x3ae178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3ae17c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3ae17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3ae180: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x3ae180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3ae184: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ae184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3ae188: 0x8e2306f0  lw          $v1, 0x6F0($s1)
    ctx->pc = 0x3ae188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61D570u));
    // 0x3ae18c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x3AE18Cu;
    {
        const bool branch_taken_0x3ae18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE18Cu;
        // 0x3ae190: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae18c) {
            ctx->pc = 0x3AE2A8u;
            goto label_3ae2a8;
        }
    }
    ctx->pc = 0x3AE194u;
    // 0x3ae194: 0x8e220724  lw          $v0, 0x724($s1)
    ctx->pc = 0x3ae194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1828)));
    // 0x3ae198: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3ae198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae19c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ae19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ae1a0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ae1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3ae1a4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3ae1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3ae1a8: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3AE1A8u;
    {
        const bool branch_taken_0x3ae1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3ae1a8) {
            ctx->pc = 0x3AE1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE1A8u;
            // 0x3ae1ac: 0xc63506f8  lwc1        $f21, 0x6F8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE1B0u;
            goto label_3ae1b0;
        }
    }
    ctx->pc = 0x3AE1B0u;
label_3ae1b0:
    // 0x3ae1b0: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x3ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x3ae1b4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3ae1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ae1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1bc: 0x26260550  addiu       $a2, $s1, 0x550
    ctx->pc = 0x3ae1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x3ae1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ae1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ae1c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ae1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3ae1c8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3ae1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3ae1cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3ae1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3ae1d0: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x3AE1D0u;
    SET_GPR_U32(ctx, 31, 0x3AE1D8u);
    ctx->pc = 0x3AE1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1D0u;
    // 0x3ae1d4: 0x8c450590  lw          $a1, 0x590($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3AE1D0u, 0x3AE1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE1D8u;
label_3ae1d8:
    // 0x3ae1d8: 0x6a22061b  ldl         $v0, 0x61B($s1)
    ctx->pc = 0x3ae1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1563); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3ae1dc: 0x6e220614  ldr         $v0, 0x614($s1)
    ctx->pc = 0x3ae1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 1556); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3ae1e0: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x3ae1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ae1e4: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x3ae1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3ae1e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ae1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae1ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1f0: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x3ae1f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ae1f4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ae1f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ae1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae1fc: 0xc103c86  jal         func_40F218
    ctx->pc = 0x3AE1FCu;
    SET_GPR_U32(ctx, 31, 0x3AE204u);
    ctx->pc = 0x3AE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE1FCu;
    // 0x3ae200: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x3AE1FCu, 0x3AE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE204u;
label_3ae204:
    // 0x3ae204: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x3ae204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae208: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae20c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x3ae20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae214: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x3ae214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3ae218: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ae218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae21c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x3ae21cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x3ae220: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3ae220u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3ae224: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3ae224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3ae228: 0xc103c86  jal         func_40F218
    ctx->pc = 0x3AE228u;
    SET_GPR_U32(ctx, 31, 0x3AE230u);
    ctx->pc = 0x3AE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE228u;
    // 0x3ae22c: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x3AE228u, 0x3AE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE230u;
label_3ae230:
    // 0x3ae230: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ae230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3ae234: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3ae234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3ae238: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3ae238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ae23c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x3ae23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae240: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3ae240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3ae244: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x3ae244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x3ae248: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3ae248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae250: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3ae250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x3ae254: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ae254u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3ae258: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ae258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ae25c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3ae25cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3ae260: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3ae260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3ae264: 0xc103d16  jal         func_40F458
    ctx->pc = 0x3AE264u;
    SET_GPR_U32(ctx, 31, 0x3AE26Cu);
    ctx->pc = 0x3AE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE264u;
    // 0x3ae268: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x3AE264u, 0x3AE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE26Cu;
label_3ae26c:
    // 0x3ae26c: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x3ae26cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae270: 0x26230630  addiu       $v1, $s1, 0x630
    ctx->pc = 0x3ae270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1584));
    // 0x3ae274: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x3ae274u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ae278: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ae278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae27c: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x3ae27cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ae280: 0x26240670  addiu       $a0, $s1, 0x670
    ctx->pc = 0x3ae280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
    // 0x3ae284: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ae284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ae288: 0x7e270630  sq          $a3, 0x630($s1)
    ctx->pc = 0x3ae288u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1584), GPR_VEC(ctx, 7));
    // 0x3ae28c: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x3ae28cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x3ae290: 0x7c680010  sq          $t0, 0x10($v1)
    ctx->pc = 0x3ae290u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 8));
    // 0x3ae294: 0xc103c28  jal         func_40F0A0
    ctx->pc = 0x3AE294u;
    SET_GPR_U32(ctx, 31, 0x3AE29Cu);
    ctx->pc = 0x3AE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE294u;
    // 0x3ae298: 0x7c660020  sq          $a2, 0x20($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F0A0u, 0x3AE294u, 0x3AE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE29Cu;
label_3ae29c:
    // 0x3ae29c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ae29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae2a0: 0xae2306f0  sw          $v1, 0x6F0($s1)
    ctx->pc = 0x3ae2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1776), GPR_U32(ctx, 3));
    // 0x3ae2a4: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x3ae2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_3ae2a8:
    // 0x3ae2a8: 0x2610d530  addiu       $s0, $s0, -0x2AD0
    ctx->pc = 0x3ae2a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956336));
    // 0x3ae2ac: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3ae2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x3ae2b0: 0x2611ff80  addiu       $s1, $s0, -0x80
    ctx->pc = 0x3ae2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x3ae2b4: 0xc106784  jal         func_419E10
    ctx->pc = 0x3AE2B4u;
    SET_GPR_U32(ctx, 31, 0x3AE2BCu);
    ctx->pc = 0x3AE2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE2B4u;
    // 0x3ae2b8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3AE2B4u, 0x3AE2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE2BCu;
label_3ae2bc:
    // 0x3ae2bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ae2bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ae2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae2c4: 0xc103dd4  jal         func_40F750
    ctx->pc = 0x3AE2C4u;
    SET_GPR_U32(ctx, 31, 0x3AE2CCu);
    ctx->pc = 0x3AE2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE2C4u;
    // 0x3ae2c8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F750u, 0x3AE2C4u, 0x3AE2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE2CCu;
label_3ae2cc:
    // 0x3ae2cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ae2ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae2d0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3ae2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3ae2d4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3ae2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3ae2d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3ae2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3ae2dc: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x3ae2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3ae2e0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3ae2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ae2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE2E4u;
        // 0x3ae2e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE2ECu;
    // 0x3ae2ec: 0x0  nop
    ctx->pc = 0x3ae2ecu;
    // NOP
    ctx->pc = 0x3ae2f0u;
}
