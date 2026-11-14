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

// Function: sub_0040FDA8
// Address: 0x40fda8 - 0x40fe60
void sub_0040FDA8_0x40fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040FDA8_0x40fda8");
#endif

    switch (ctx->pc) {
        case 0x40fde0u: goto label_40fde0;
        case 0x40fe3cu: goto label_40fe3c;
        default: break;
    }

    ctx->pc = 0x40fda8u;

    // 0x40fda8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40fda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40fdac: 0xaf85bdc0  sw          $a1, -0x4240($gp)
    ctx->pc = 0x40fdacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950336), GPR_U32(ctx, 5));
    // 0x40fdb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40fdb4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x40fdb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x40fdb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40fdb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fdbc: 0x8f85ad20  lw          $a1, -0x52E0($gp)
    ctx->pc = 0x40fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946080)));
    // 0x40fdc0: 0x8f87ad24  lw          $a3, -0x52DC($gp)
    ctx->pc = 0x40fdc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946084)));
    // 0x40fdc4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x40fdc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x40fdc8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x40fdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x40fdcc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x40fdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x40fdd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40fdd4: 0x2508e790  addiu       $t0, $t0, -0x1870
    ctx->pc = 0x40fdd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961040));
    // 0x40fdd8: 0xc10408c  jal         func_410230
    ctx->pc = 0x40FDD8u;
    SET_GPR_U32(ctx, 31, 0x40FDE0u);
    ctx->pc = 0x40FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FDD8u;
    // 0x40fddc: 0x3529000d  ori         $t1, $t1, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x40FDD8u, 0x40FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FDE0u;
label_40fde0:
    // 0x40fde0: 0x8f84bdc0  lw          $a0, -0x4240($gp)
    ctx->pc = 0x40fde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950336)));
    // 0x40fde4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x40fde8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x40fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x40fdec: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x40fdecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x40fdf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40FDF0u;
    {
        const bool branch_taken_0x40fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FDF0u;
        // 0x40fdf4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fdf0) {
            ctx->pc = 0x40FE00u;
            goto label_40fe00;
        }
    }
    ctx->pc = 0x40FDF8u;
    // 0x40fdf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x40FDF8u;
    {
        const bool branch_taken_0x40fdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FDF8u;
        // 0x40fdfc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fdf8) {
            ctx->pc = 0x40FE48u;
            goto label_40fe48;
        }
    }
    ctx->pc = 0x40FE00u;
label_40fe00:
    // 0x40fe00: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x40fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x40fe04: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x40fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x40fe08: 0x2442de58  addiu       $v0, $v0, -0x21A8
    ctx->pc = 0x40fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958680));
    // 0x40fe0c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x40fe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x40fe10: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x40fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x40fe14: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x40fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x40fe18: 0x24a70618  addiu       $a3, $a1, 0x618
    ctx->pc = 0x40fe18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1560));
    // 0x40fe1c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x40fe1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40fe20: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x40fe20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40fe24: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x40fe24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600620u));
    // 0x40fe28: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x40fe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40fe2c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x40fe2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40fe30: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x40fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x40fe34: 0xc103d92  jal         func_40F648
    ctx->pc = 0x40FE34u;
    SET_GPR_U32(ctx, 31, 0x40FE3Cu);
    ctx->pc = 0x40FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FE34u;
    // 0x40fe38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F648u, 0x40FE34u, 0x40FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FE3Cu;
label_40fe3c:
    // 0x40fe3c: 0x8f83bdc4  lw          $v1, -0x423C($gp)
    ctx->pc = 0x40fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950340)));
    // 0x40fe40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40fe44: 0xaf83bdc4  sw          $v1, -0x423C($gp)
    ctx->pc = 0x40fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950340), GPR_U32(ctx, 3));
label_40fe48:
    // 0x40fe48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40fe48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fe4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40fe4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40fe50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40fe50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40fe54: 0x3e00008  jr          $ra
    ctx->pc = 0x40FE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FE54u;
        // 0x40fe58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40FE5Cu;
    // 0x40fe5c: 0x0  nop
    ctx->pc = 0x40fe5cu;
    // NOP
    ctx->pc = 0x40fe60u;
}
