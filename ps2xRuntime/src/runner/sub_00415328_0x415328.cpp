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

// Function: sub_00415328
// Address: 0x415328 - 0x4154d0
void sub_00415328_0x415328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415328_0x415328");
#endif

    switch (ctx->pc) {
        case 0x415358u: goto label_415358;
        case 0x415374u: goto label_415374;
        case 0x415394u: goto label_415394;
        case 0x4153e8u: goto label_4153e8;
        case 0x4153fcu: goto label_4153fc;
        case 0x41545cu: goto label_41545c;
        case 0x415474u: goto label_415474;
        case 0x415484u: goto label_415484;
        case 0x4154a4u: goto label_4154a4;
        default: break;
    }

    ctx->pc = 0x415328u;

    // 0x415328: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x415328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41532c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x41532cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x415330: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x415330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x415334: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x415334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x415338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x415338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41533c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x415340: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x415340u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415344: 0x2452c898  addiu       $s2, $v0, -0x3768
    ctx->pc = 0x415344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953112));
    // 0x415348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41534c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x415350: 0xc104aec  jal         func_412BB0
    ctx->pc = 0x415350u;
    SET_GPR_U32(ctx, 31, 0x415358u);
    ctx->pc = 0x415354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415350u;
    // 0x415354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412BB0u, 0x415350u, 0x415358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415358u;
label_415358:
    // 0x415358: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x415358u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x41535c: 0x24460038  addiu       $a2, $v0, 0x38
    ctx->pc = 0x41535cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x415360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x415360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415364: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x415364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x415368: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x415368u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x41536c: 0xc103404  jal         func_40D010
    ctx->pc = 0x41536Cu;
    SET_GPR_U32(ctx, 31, 0x415374u);
    ctx->pc = 0x415370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41536Cu;
    // 0x415370: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x41536Cu, 0x415374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415374u;
label_415374:
    // 0x415374: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x415374u;
    {
        const bool branch_taken_0x415374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415374u;
        // 0x415378: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415374) {
            ctx->pc = 0x415408u;
            goto label_415408;
        }
    }
    ctx->pc = 0x41537Cu;
    // 0x41537c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x415380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415384: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x415384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x415388: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x415388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x41538c: 0xc103404  jal         func_40D010
    ctx->pc = 0x41538Cu;
    SET_GPR_U32(ctx, 31, 0x415394u);
    ctx->pc = 0x415390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41538Cu;
    // 0x415390: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x41538Cu, 0x415394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415394u;
label_415394:
    // 0x415394: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x415394u;
    {
        const bool branch_taken_0x415394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415394u;
        // 0x415398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415394) {
            ctx->pc = 0x415408u;
            goto label_415408;
        }
    }
    ctx->pc = 0x41539Cu;
    // 0x41539c: 0xc6020080  lwc1        $f2, 0x80($s0)
    ctx->pc = 0x41539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4153a0: 0xc6010084  lwc1        $f1, 0x84($s0)
    ctx->pc = 0x4153a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4153a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4153a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4153a8: 0xc6000088  lwc1        $f0, 0x88($s0)
    ctx->pc = 0x4153a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4153ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4153acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4153b0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4153b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4153b4: 0x6a03006f  ldl         $v1, 0x6F($s0)
    ctx->pc = 0x4153b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4153b8: 0x6e030068  ldr         $v1, 0x68($s0)
    ctx->pc = 0x4153b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4153bc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x4153bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4153c0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x4153c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4153c4: 0x6a03007f  ldl         $v1, 0x7F($s0)
    ctx->pc = 0x4153c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4153c8: 0x6e030078  ldr         $v1, 0x78($s0)
    ctx->pc = 0x4153c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4153cc: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4153ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4153d0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4153d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4153d4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x4153d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4153d8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x4153d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4153dc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x4153dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4153e0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x4153E0u;
    SET_GPR_U32(ctx, 31, 0x4153E8u);
    ctx->pc = 0x4153E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4153E0u;
    // 0x4153e4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x4153E0u, 0x4153E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4153E8u;
label_4153e8:
    // 0x4153e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4153E8u;
    {
        const bool branch_taken_0x4153e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4153ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4153E8u;
        // 0x4153ec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4153e8) {
            ctx->pc = 0x415408u;
            goto label_415408;
        }
    }
    ctx->pc = 0x4153F0u;
    // 0x4153f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4153f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4153f4: 0xc104a72  jal         func_4129C8
    ctx->pc = 0x4153F4u;
    SET_GPR_U32(ctx, 31, 0x4153FCu);
    ctx->pc = 0x4153F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4153F4u;
    // 0x4153f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4129C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4129C8u, 0x4153F4u, 0x4153FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4153FCu;
label_4153fc:
    // 0x4153fc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4153fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x415400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x415400u;
    {
        const bool branch_taken_0x415400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415400u;
        // 0x415404: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415400) {
            ctx->pc = 0x41540Cu;
            goto label_41540c;
        }
    }
    ctx->pc = 0x415408u;
label_415408:
    // 0x415408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x415408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41540c:
    // 0x41540c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41540cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x415410: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x415410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x415414: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x415414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x415418: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x415418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41541c: 0x3e00008  jr          $ra
    ctx->pc = 0x41541Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41541Cu;
        // 0x415420: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41541Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x415424u;
    // 0x415424: 0x0  nop
    ctx->pc = 0x415424u;
    // NOP
    // 0x415428: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x415428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x41542c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x41542cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415430: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x415430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x415434: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x415434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x415438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x415438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41543c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41543cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x415440: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x415440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415444: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x415444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415448: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x415448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x41544c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41544cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x415450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x415450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x415454: 0xc103322  jal         func_40CC88
    ctx->pc = 0x415454u;
    SET_GPR_U32(ctx, 31, 0x41545Cu);
    ctx->pc = 0x415458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415454u;
    // 0x415458: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x415454u, 0x41545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41545Cu;
label_41545c:
    // 0x41545c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x41545Cu;
    {
        const bool branch_taken_0x41545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x415460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41545Cu;
        // 0x415460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41545c) {
            ctx->pc = 0x4154ACu;
            goto label_4154ac;
        }
    }
    ctx->pc = 0x415464u;
    // 0x415464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x415464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415468: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x415468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x41546c: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x41546Cu;
    SET_GPR_U32(ctx, 31, 0x415474u);
    ctx->pc = 0x415470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41546Cu;
    // 0x415470: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x41546Cu, 0x415474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415474u;
label_415474:
    // 0x415474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x415474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415478: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x415478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41547c: 0xc10480a  jal         func_412028
    ctx->pc = 0x41547Cu;
    SET_GPR_U32(ctx, 31, 0x415484u);
    ctx->pc = 0x415480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41547Cu;
    // 0x415480: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x41547Cu, 0x415484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415484u;
label_415484:
    // 0x415484: 0x5450000a  bnel        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x415484u;
    {
        const bool branch_taken_0x415484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x415484) {
            ctx->pc = 0x415488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415484u;
            // 0x415488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4154B0u;
            goto label_4154b0;
        }
    }
    ctx->pc = 0x41548Cu;
    // 0x41548c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x41548cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x415490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x415490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x415494: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x415494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x415498: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x415498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
    // 0x41549c: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x41549Cu;
    SET_GPR_U32(ctx, 31, 0x4154A4u);
    ctx->pc = 0x4154A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41549Cu;
    // 0x4154a0: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x41549Cu, 0x4154A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4154A4u;
label_4154a4:
    // 0x4154a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4154A4u;
    {
        const bool branch_taken_0x4154a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4154A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154A4u;
        // 0x4154a8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4154a4) {
            ctx->pc = 0x4154B0u;
            goto label_4154b0;
        }
    }
    ctx->pc = 0x4154ACu;
label_4154ac:
    // 0x4154ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4154acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4154b0:
    // 0x4154b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4154b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4154b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4154b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4154b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4154b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4154bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4154bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4154c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4154c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4154c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4154C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4154C4u;
        // 0x4154c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4154C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4154CCu;
    // 0x4154cc: 0x0  nop
    ctx->pc = 0x4154ccu;
    // NOP
    ctx->pc = 0x4154d0u;
}
