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

// Function: sub_0038E648
// Address: 0x38e648 - 0x38e700
void sub_0038E648_0x38e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E648_0x38e648");
#endif

    switch (ctx->pc) {
        case 0x38e648u: goto label_38e648;
        case 0x38e64cu: goto label_38e64c;
        case 0x38e650u: goto label_38e650;
        case 0x38e654u: goto label_38e654;
        case 0x38e658u: goto label_38e658;
        case 0x38e65cu: goto label_38e65c;
        case 0x38e660u: goto label_38e660;
        case 0x38e664u: goto label_38e664;
        case 0x38e668u: goto label_38e668;
        case 0x38e66cu: goto label_38e66c;
        case 0x38e670u: goto label_38e670;
        case 0x38e674u: goto label_38e674;
        case 0x38e678u: goto label_38e678;
        case 0x38e67cu: goto label_38e67c;
        case 0x38e680u: goto label_38e680;
        case 0x38e684u: goto label_38e684;
        case 0x38e688u: goto label_38e688;
        case 0x38e68cu: goto label_38e68c;
        case 0x38e690u: goto label_38e690;
        case 0x38e694u: goto label_38e694;
        case 0x38e698u: goto label_38e698;
        case 0x38e69cu: goto label_38e69c;
        case 0x38e6a0u: goto label_38e6a0;
        case 0x38e6a4u: goto label_38e6a4;
        case 0x38e6a8u: goto label_38e6a8;
        case 0x38e6acu: goto label_38e6ac;
        case 0x38e6b0u: goto label_38e6b0;
        case 0x38e6b4u: goto label_38e6b4;
        case 0x38e6b8u: goto label_38e6b8;
        case 0x38e6bcu: goto label_38e6bc;
        case 0x38e6c0u: goto label_38e6c0;
        case 0x38e6c4u: goto label_38e6c4;
        case 0x38e6c8u: goto label_38e6c8;
        case 0x38e6ccu: goto label_38e6cc;
        case 0x38e6d0u: goto label_38e6d0;
        case 0x38e6d4u: goto label_38e6d4;
        case 0x38e6d8u: goto label_38e6d8;
        case 0x38e6dcu: goto label_38e6dc;
        case 0x38e6e0u: goto label_38e6e0;
        case 0x38e6e4u: goto label_38e6e4;
        case 0x38e6e8u: goto label_38e6e8;
        case 0x38e6ecu: goto label_38e6ec;
        case 0x38e6f0u: goto label_38e6f0;
        case 0x38e6f4u: goto label_38e6f4;
        case 0x38e6f8u: goto label_38e6f8;
        case 0x38e6fcu: goto label_38e6fc;
        default: break;
    }

    ctx->pc = 0x38e648u;

label_38e648:
    // 0x38e648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38e64c:
    // 0x38e64c: 0x8f83bd40  lw          $v1, -0x42C0($gp)
    ctx->pc = 0x38e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
label_38e650:
    // 0x38e650: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_38e654:
    // 0x38e654: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x38e654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_38e658:
    // 0x38e658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38e658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38e65c:
    // 0x38e65c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x38e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_38e660:
    // 0x38e660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x38e660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_38e664:
    // 0x38e664: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x38e664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_38e668:
    // 0x38e668: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x38e668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_38e66c:
    // 0x38e66c: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x38e66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
label_38e670:
    // 0x38e670: 0x40f809  jalr        $v0
label_38e674:
    if (ctx->pc == 0x38E674u) {
        ctx->pc = 0x38E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E670u;
        // 0x38e674: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E678u;
        goto label_38e678;
    }
    ctx->pc = 0x38E670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E678u);
        ctx->pc = 0x38E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E670u;
        // 0x38e674: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E670u, 0x38E678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E678u;
label_38e678:
    // 0x38e678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x38e678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38e67c:
    // 0x38e67c: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_38e680:
    if (ctx->pc == 0x38E680u) {
        ctx->pc = 0x38E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E67Cu;
        // 0x38e680: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E684u;
        goto label_38e684;
    }
    ctx->pc = 0x38E67Cu;
    {
        const bool branch_taken_0x38e67c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E67Cu;
        // 0x38e680: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e67c) {
            ctx->pc = 0x38E6ECu;
            goto label_38e6ec;
        }
    }
    ctx->pc = 0x38E684u;
label_38e684:
    // 0x38e684: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x38e684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_38e688:
    // 0x38e688: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x38e688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_38e68c:
    // 0x38e68c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x38e68cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
label_38e690:
    // 0x38e690: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x38e690u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_38e694:
    // 0x38e694: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38e694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_38e698:
    // 0x38e698: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x38e698u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_38e69c:
    // 0x38e69c: 0x2484ae00  addiu       $a0, $a0, -0x5200
    ctx->pc = 0x38e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
label_38e6a0:
    // 0x38e6a0: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x38e6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_38e6a4:
    // 0x38e6a4: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x38e6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
label_38e6a8:
    // 0x38e6a8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x38e6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_38e6ac:
    // 0x38e6ac: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x38e6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_38e6b0:
    // 0x38e6b0: 0xaa020007  swl         $v0, 0x7($s0)
    ctx->pc = 0x38e6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e6b4:
    // 0x38e6b4: 0xba020004  swr         $v0, 0x4($s0)
    ctx->pc = 0x38e6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_38e6b8:
    // 0x38e6b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x38e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_38e6bc:
    // 0x38e6bc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x38e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_38e6c0:
    // 0x38e6c0: 0x24c8ae18  addiu       $t0, $a2, -0x51E8
    ctx->pc = 0x38e6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946328));
label_38e6c4:
    // 0x38e6c4: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x38e6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_38e6c8:
    // 0x38e6c8: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x38e6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_38e6cc:
    // 0x38e6cc: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x38e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_38e6d0:
    // 0x38e6d0: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x38e6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38e6d4:
    // 0x38e6d4: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x38e6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38e6d8:
    // 0x38e6d8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x38e6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_38e6dc:
    // 0x38e6dc: 0xc104c80  jal         func_413200
label_38e6e0:
    if (ctx->pc == 0x38E6E0u) {
        ctx->pc = 0x38E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6DCu;
        // 0x38e6e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6E4u;
        goto label_38e6e4;
    }
    ctx->pc = 0x38E6DCu;
    SET_GPR_U32(ctx, 31, 0x38E6E4u);
    ctx->pc = 0x38E6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6DCu;
    // 0x38e6e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x38E6DCu, 0x38E6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6E4u;
label_38e6e4:
    // 0x38e6e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_38e6e8:
    if (ctx->pc == 0x38E6E8u) {
        ctx->pc = 0x38E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6E4u;
        // 0x38e6e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E6ECu;
        goto label_38e6ec;
    }
    ctx->pc = 0x38E6E4u;
    {
        const bool branch_taken_0x38e6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6E4u;
        // 0x38e6e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e6e4) {
            ctx->pc = 0x38E6F0u;
            goto label_38e6f0;
        }
    }
    ctx->pc = 0x38E6ECu;
label_38e6ec:
    // 0x38e6ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38e6ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e6f0:
    // 0x38e6f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e6f4:
    // 0x38e6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38e6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38e6f8:
    // 0x38e6f8: 0x3e00008  jr          $ra
label_38e6fc:
    if (ctx->pc == 0x38E6FCu) {
        ctx->pc = 0x38E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6F8u;
        // 0x38e6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E700u;
        goto label_fallthrough_0x38e6f8;
    }
    ctx->pc = 0x38E6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E6F8u;
        // 0x38e6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38e6f8:
    ctx->pc = 0x38E700u;
}
