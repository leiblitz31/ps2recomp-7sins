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

// Function: sub_003553E8
// Address: 0x3553e8 - 0x355670
void sub_003553E8_0x3553e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003553E8_0x3553e8");
#endif

    switch (ctx->pc) {
        case 0x355410u: goto label_355410;
        case 0x355424u: goto label_355424;
        case 0x35542cu: goto label_35542c;
        case 0x355450u: goto label_355450;
        case 0x355464u: goto label_355464;
        case 0x355588u: goto label_355588;
        case 0x355598u: goto label_355598;
        case 0x3555a8u: goto label_3555a8;
        case 0x3555b8u: goto label_3555b8;
        case 0x3555c8u: goto label_3555c8;
        case 0x3555d0u: goto label_3555d0;
        case 0x3555e8u: goto label_3555e8;
        case 0x3555f8u: goto label_3555f8;
        case 0x35560cu: goto label_35560c;
        case 0x355620u: goto label_355620;
        case 0x355634u: goto label_355634;
        case 0x355648u: goto label_355648;
        default: break;
    }

    ctx->pc = 0x3553e8u;

    // 0x3553e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3553e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3553ec: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3553ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3553f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3553f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3553f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3553f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3553f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3553f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3553fc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3553fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x355400: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x355400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x355404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x355404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x355408: 0xc1116a2  jal         func_445A88
    ctx->pc = 0x355408u;
    SET_GPR_U32(ctx, 31, 0x355410u);
    ctx->pc = 0x445A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445A88u, 0x355408u, 0x355410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355410u;
label_355410:
    // 0x355410: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x355410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355414: 0x1200008d  beqz        $s0, . + 4 + (0x8D << 2)
    ctx->pc = 0x355414u;
    {
        const bool branch_taken_0x355414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x355418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355414u;
        // 0x355418: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355414) {
            ctx->pc = 0x35564Cu;
            goto label_35564c;
        }
    }
    ctx->pc = 0x35541Cu;
    // 0x35541c: 0xc112074  jal         func_4481D0
    ctx->pc = 0x35541Cu;
    SET_GPR_U32(ctx, 31, 0x355424u);
    ctx->pc = 0x355420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35541Cu;
    // 0x355420: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x35541Cu, 0x355424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355424u;
label_355424:
    // 0x355424: 0xc0e94f0  jal         func_3A53C0
    ctx->pc = 0x355424u;
    SET_GPR_U32(ctx, 31, 0x35542Cu);
    ctx->pc = 0x355428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355424u;
    // 0x355428: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53C0u, 0x355424u, 0x35542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35542Cu;
label_35542c:
    // 0x35542c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35542cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355430: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x355430u;
    {
        const bool branch_taken_0x355430 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x355434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355430u;
        // 0x355434: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355430) {
            ctx->pc = 0x355440u;
            goto label_355440;
        }
    }
    ctx->pc = 0x355438u;
    // 0x355438: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x355438u;
    {
        const bool branch_taken_0x355438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355438u;
        // 0x35543c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355438) {
            ctx->pc = 0x35564Cu;
            goto label_35564c;
        }
    }
    ctx->pc = 0x355440u;
label_355440:
    // 0x355440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x355440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355444: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x355444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355448: 0xc1120d8  jal         func_448360
    ctx->pc = 0x355448u;
    SET_GPR_U32(ctx, 31, 0x355450u);
    ctx->pc = 0x35544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355448u;
    // 0x35544c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x448360u, 0x355448u, 0x355450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355450u;
label_355450:
    // 0x355450: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x355450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x355454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x355454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355458: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x355458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35545c: 0xc1125d8  jal         func_449760
    ctx->pc = 0x35545Cu;
    SET_GPR_U32(ctx, 31, 0x355464u);
    ctx->pc = 0x355460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35545Cu;
    // 0x355460: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x35545Cu, 0x355464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355464u;
label_355464:
    // 0x355464: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x355464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x355468: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x355468u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x35546c: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x35546cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
    // 0x355470: 0x2468b120  addiu       $t0, $v1, -0x4EE0
    ctx->pc = 0x355470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947104));
    // 0x355474: 0x2607c3d0  addiu       $a3, $s0, -0x3C30
    ctx->pc = 0x355474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951888));
    // 0x355478: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x355478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x35547c: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x35547cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x355480: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x355480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x355484: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x355484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x355488: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x355488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35548c: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x35548cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355490: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x355490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355494: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x355494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355498: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x355498u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x35549c: 0x3c0a0062  lui         $t2, 0x62
    ctx->pc = 0x35549cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)98 << 16));
    // 0x3554a0: 0x2563b140  addiu       $v1, $t3, -0x4EC0
    ctx->pc = 0x3554a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294947136));
    // 0x3554a4: 0x24cec3c0  addiu       $t6, $a2, -0x3C40
    ctx->pc = 0x3554a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951872));
    // 0x3554a8: 0x686c0007  ldl         $t4, 0x7($v1)
    ctx->pc = 0x3554a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3554ac: 0x6c6c0000  ldr         $t4, 0x0($v1)
    ctx->pc = 0x3554acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x3554b0: 0x686d000f  ldl         $t5, 0xF($v1)
    ctx->pc = 0x3554b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3554b4: 0x6c6d0008  ldr         $t5, 0x8($v1)
    ctx->pc = 0x3554b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x3554b8: 0xb1cc0007  sdl         $t4, 0x7($t6)
    ctx->pc = 0x3554b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3554bc: 0xb5cc0000  sdr         $t4, 0x0($t6)
    ctx->pc = 0x3554bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3554c0: 0xb1cd000f  sdl         $t5, 0xF($t6)
    ctx->pc = 0x3554c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3554c4: 0xb5cd0008  sdr         $t5, 0x8($t6)
    ctx->pc = 0x3554c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3554c8: 0x2610c3d0  addiu       $s0, $s0, -0x3C30
    ctx->pc = 0x3554c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294951888));
    // 0x3554cc: 0x24c6c3c0  addiu       $a2, $a2, -0x3C40
    ctx->pc = 0x3554ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951872));
    // 0x3554d0: 0x2551c3f0  addiu       $s1, $t2, -0x3C10
    ctx->pc = 0x3554d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), 4294951920));
    // 0x3554d4: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3554d4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x61C3D8u));
    // 0x3554d8: 0x3c046c00  lui         $a0, 0x6C00
    ctx->pc = 0x3554d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27648 << 16));
    // 0x3554dc: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x3554dcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x61C3C8u));
    // 0x3554e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3554e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3554e4: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3554e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x61C3F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C3F8u, _value); } while (0);
    // 0x3554e8: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3554e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x3554ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3554ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3554f0: 0x2562b140  addiu       $v0, $t3, -0x4EC0
    ctx->pc = 0x3554f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294947136));
    // 0x3554f4: 0x24aec3e0  addiu       $t6, $a1, -0x3C20
    ctx->pc = 0x3554f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951904));
    // 0x3554f8: 0x684c0007  ldl         $t4, 0x7($v0)
    ctx->pc = 0x3554f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x3554fc: 0x6c4c0000  ldr         $t4, 0x0($v0)
    ctx->pc = 0x3554fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x355500: 0x684d000f  ldl         $t5, 0xF($v0)
    ctx->pc = 0x355500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x355504: 0x6c4d0008  ldr         $t5, 0x8($v0)
    ctx->pc = 0x355504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x355508: 0xb1cc0007  sdl         $t4, 0x7($t6)
    ctx->pc = 0x355508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35550c: 0xb5cc0000  sdr         $t4, 0x0($t6)
    ctx->pc = 0x35550cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355510: 0xb1cd000f  sdl         $t5, 0xF($t6)
    ctx->pc = 0x355510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355514: 0xb5cd0008  sdr         $t5, 0x8($t6)
    ctx->pc = 0x355514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355518: 0x24b2c3e0  addiu       $s2, $a1, -0x3C20
    ctx->pc = 0x355518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951904));
    // 0x35551c: 0x3463dfff  ori         $v1, $v1, 0xDFFF
    ctx->pc = 0x35551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57343);
    // 0x355520: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x355520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x355524: 0x3529000d  ori         $t1, $t1, 0xD
    ctx->pc = 0x355524u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    // 0x355528: 0x248db150  addiu       $t5, $a0, -0x4EB0
    ctx->pc = 0x355528u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947152));
    // 0x35552c: 0x254cc3f0  addiu       $t4, $t2, -0x3C10
    ctx->pc = 0x35552cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294951920));
    // 0x355530: 0x69a50007  ldl         $a1, 0x7($t5)
    ctx->pc = 0x355530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x355534: 0x6da50000  ldr         $a1, 0x0($t5)
    ctx->pc = 0x355534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x355538: 0x69ab000f  ldl         $t3, 0xF($t5)
    ctx->pc = 0x355538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x35553c: 0x6dab0008  ldr         $t3, 0x8($t5)
    ctx->pc = 0x35553cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x355540: 0xb1850007  sdl         $a1, 0x7($t4)
    ctx->pc = 0x355540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355544: 0xb5850000  sdr         $a1, 0x0($t4)
    ctx->pc = 0x355544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355548: 0xb18b000f  sdl         $t3, 0xF($t4)
    ctx->pc = 0x355548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35554c: 0xb58b0008  sdr         $t3, 0x8($t4)
    ctx->pc = 0x35554cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355550: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x355550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x355554: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x355554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x355558: 0x34e7000d  ori         $a3, $a3, 0xD
    ctx->pc = 0x355558u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13);
    // 0x35555c: 0x3c086400  lui         $t0, 0x6400
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)25600 << 16));
    // 0x355560: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x355560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x355564: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x355564u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x355568: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x355568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x35556c: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x35556cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x355570: 0xae480008  sw          $t0, 0x8($s2)
    ctx->pc = 0x355570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 8));
    // 0x355574: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x355574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355578: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x355578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x35557c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35557cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355580: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x355580u;
    SET_GPR_U32(ctx, 31, 0x355588u);
    ctx->pc = 0x355584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355580u;
    // 0x355584: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x355580u, 0x355588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355588u;
label_355588:
    // 0x355588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x355588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35558c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355590: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x355590u;
    SET_GPR_U32(ctx, 31, 0x355598u);
    ctx->pc = 0x355594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355590u;
    // 0x355594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x355590u, 0x355598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355598u;
label_355598:
    // 0x355598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x355598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35559c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35559cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555a0: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x3555A0u;
    SET_GPR_U32(ctx, 31, 0x3555A8u);
    ctx->pc = 0x3555A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555A0u;
    // 0x3555a4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x3555A0u, 0x3555A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555A8u;
label_3555a8:
    // 0x3555a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3555a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3555acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555b0: 0xc0e9450  jal         func_3A5140
    ctx->pc = 0x3555B0u;
    SET_GPR_U32(ctx, 31, 0x3555B8u);
    ctx->pc = 0x3555B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555B0u;
    // 0x3555b4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5140u, 0x3555B0u, 0x3555B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555B8u;
label_3555b8:
    // 0x3555b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3555b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3555bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3555c0: 0xc0e958a  jal         func_3A5628
    ctx->pc = 0x3555C0u;
    SET_GPR_U32(ctx, 31, 0x3555C8u);
    ctx->pc = 0x3555C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555C0u;
    // 0x3555c4: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5628u, 0x3555C0u, 0x3555C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555C8u;
label_3555c8:
    // 0x3555c8: 0xc111dea  jal         func_4477A8
    ctx->pc = 0x3555C8u;
    SET_GPR_U32(ctx, 31, 0x3555D0u);
    ctx->pc = 0x3555CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555C8u;
    // 0x3555cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x3555C8u, 0x3555D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555D0u;
label_3555d0:
    // 0x3555d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3555d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555d4: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x3555d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3555d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3555d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3555dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555e0: 0xc1125d8  jal         func_449760
    ctx->pc = 0x3555E0u;
    SET_GPR_U32(ctx, 31, 0x3555E8u);
    ctx->pc = 0x3555E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555E0u;
    // 0x3555e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449760u, 0x3555E0u, 0x3555E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555E8u;
label_3555e8:
    // 0x3555e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3555e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555ec: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x3555ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x3555f0: 0xc0e95d2  jal         func_3A5748
    ctx->pc = 0x3555F0u;
    SET_GPR_U32(ctx, 31, 0x3555F8u);
    ctx->pc = 0x3555F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555F0u;
    // 0x3555f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5748u, 0x3555F0u, 0x3555F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3555F8u;
label_3555f8:
    // 0x3555f8: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3555f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x3555fc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3555fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355600: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x355600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355604: 0xc0e95de  jal         func_3A5778
    ctx->pc = 0x355604u;
    SET_GPR_U32(ctx, 31, 0x35560Cu);
    ctx->pc = 0x355608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355604u;
    // 0x355608: 0x24a580e0  addiu       $a1, $a1, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5778u, 0x355604u, 0x35560Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35560Cu;
label_35560c:
    // 0x35560c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x35560cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x355610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x355610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355614: 0x24c622c0  addiu       $a2, $a2, 0x22C0
    ctx->pc = 0x355614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8896));
    // 0x355618: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x355618u;
    SET_GPR_U32(ctx, 31, 0x355620u);
    ctx->pc = 0x35561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355618u;
    // 0x35561c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x355618u, 0x355620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355620u;
label_355620:
    // 0x355620: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x355620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x355624: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x355624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355628: 0x24c66430  addiu       $a2, $a2, 0x6430
    ctx->pc = 0x355628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25648));
    // 0x35562c: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x35562Cu;
    SET_GPR_U32(ctx, 31, 0x355634u);
    ctx->pc = 0x355630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35562Cu;
    // 0x355630: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x35562Cu, 0x355634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355634u;
label_355634:
    // 0x355634: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x355634u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x355638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x355638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35563c: 0x24c64e90  addiu       $a2, $a2, 0x4E90
    ctx->pc = 0x35563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20112));
    // 0x355640: 0xc0e95fe  jal         func_3A57F8
    ctx->pc = 0x355640u;
    SET_GPR_U32(ctx, 31, 0x355648u);
    ctx->pc = 0x355644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355640u;
    // 0x355644: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57F8u, 0x355640u, 0x355648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355648u;
label_355648:
    // 0x355648: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x355648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35564c:
    // 0x35564c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x35564cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x355650: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x355650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x355654: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x355654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x355658: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x355658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35565c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x35565cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x355660: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x355660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x355664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355668: 0x3e00008  jr          $ra
    ctx->pc = 0x355668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355668u;
        // 0x35566c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355670u;
}
