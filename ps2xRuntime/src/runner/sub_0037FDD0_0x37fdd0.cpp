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

// Function: sub_0037FDD0
// Address: 0x37fdd0 - 0x37fe60
void sub_0037FDD0_0x37fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FDD0_0x37fdd0");
#endif

    switch (ctx->pc) {
        case 0x37fdf8u: goto label_37fdf8;
        default: break;
    }

    ctx->pc = 0x37fdd0u;

    // 0x37fdd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37fdd4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37fdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37fdd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37fddc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37fddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fde0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37fde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37fde4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x37fde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37fdec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37fdecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fdf0: 0xc0dfc42  jal         func_37F108
    ctx->pc = 0x37FDF0u;
    SET_GPR_U32(ctx, 31, 0x37FDF8u);
    ctx->pc = 0x37FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDF0u;
    // 0x37fdf4: 0x8e050100  lw          $a1, 0x100($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F108u, 0x37FDF0u, 0x37FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDF8u;
label_37fdf8:
    // 0x37fdf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37fdf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fdfc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x37FDFCu;
    {
        const bool branch_taken_0x37fdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDFCu;
        // 0x37fe00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fdfc) {
            ctx->pc = 0x37FE48u;
            goto label_37fe48;
        }
    }
    ctx->pc = 0x37FE04u;
    // 0x37fe04: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x37fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x37fe08: 0x3c0438e3  lui         $a0, 0x38E3
    ctx->pc = 0x37fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14563 << 16));
    // 0x37fe0c: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x37fe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x37fe10: 0x34848e39  ori         $a0, $a0, 0x8E39
    ctx->pc = 0x37fe10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36409);
    // 0x37fe14: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x37fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x37fe18: 0x2785a900  addiu       $a1, $gp, -0x5700
    ctx->pc = 0x37fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945024));
    // 0x37fe1c: 0x231280b  movn        $a1, $s1, $s1
    ctx->pc = 0x37fe1cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x37fe20: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37fe20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe24: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x37fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x37fe28: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x37fe28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37fe2c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x37fe2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x37fe30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37fe34: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x37fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37fe38: 0x88a40003  lwl         $a0, 0x3($a1)
    ctx->pc = 0x37fe38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x37fe3c: 0x98a40000  lwr         $a0, 0x0($a1)
    ctx->pc = 0x37fe3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x37fe40: 0xa8640003  swl         $a0, 0x3($v1)
    ctx->pc = 0x37fe40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x37fe44: 0xb8640000  swr         $a0, 0x0($v1)
    ctx->pc = 0x37fe44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_37fe48:
    // 0x37fe48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37fe48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fe4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37fe4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fe50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37fe50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fe54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37fe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fe58: 0x3e00008  jr          $ra
    ctx->pc = 0x37FE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE58u;
        // 0x37fe5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FE60u;
}
