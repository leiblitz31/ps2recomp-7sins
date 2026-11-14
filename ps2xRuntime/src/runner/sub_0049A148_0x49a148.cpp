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

// Function: sub_0049A148
// Address: 0x49a148 - 0x49a210
void sub_0049A148_0x49a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A148_0x49a148");
#endif

    switch (ctx->pc) {
        case 0x49a190u: goto label_49a190;
        case 0x49a1e8u: goto label_49a1e8;
        case 0x49a200u: goto label_49a200;
        default: break;
    }

    ctx->pc = 0x49a148u;

    // 0x49a148: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49a14c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x49a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x49a150: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49a154: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x49a154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a158: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x49a158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x49a15c: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x49a15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x49a160: 0x68a3000f  ldl         $v1, 0xF($a1)
    ctx->pc = 0x49a160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x49a164: 0x6ca30008  ldr         $v1, 0x8($a1)
    ctx->pc = 0x49a164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x49a168: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x49a168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49a16c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x49a16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49a170: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x49a170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49a174: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49a174u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x49a178: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x49a178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x49a17c: 0x24c6abd8  addiu       $a2, $a2, -0x5428
    ctx->pc = 0x49a17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945752));
    // 0x49a180: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x49a180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x49a184: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x49a184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a188: 0xc1269c6  jal         func_49A718
    ctx->pc = 0x49A188u;
    SET_GPR_U32(ctx, 31, 0x49A190u);
    ctx->pc = 0x49A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A188u;
    // 0x49a18c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x49A188u, 0x49A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A190u;
label_49a190:
    // 0x49a190: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A190u;
    {
        const bool branch_taken_0x49a190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A190u;
        // 0x49a194: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a190) {
            ctx->pc = 0x49A1A0u;
            goto label_49a1a0;
        }
    }
    ctx->pc = 0x49A198u;
    // 0x49a198: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x49a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a19c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x49a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_49a1a0:
    // 0x49a1a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x49a1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49a1a4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x49a1a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49a1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x49A1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A1ACu;
        // 0x49a1b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A1B4u;
    // 0x49a1b4: 0x0  nop
    ctx->pc = 0x49a1b4u;
    // NOP
    // 0x49a1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49a1bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49a1c0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x49a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x49a1c4: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x49A1C4u;
    {
        const bool branch_taken_0x49a1c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A1C4u;
        // 0x49a1c8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a1c4) {
            ctx->pc = 0x49A1F0u;
            goto label_49a1f0;
        }
    }
    ctx->pc = 0x49A1CCu;
    // 0x49a1cc: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x49a1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x49a1d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1d4: 0x24c6ac00  addiu       $a2, $a2, -0x5400
    ctx->pc = 0x49a1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945792));
    // 0x49a1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1dc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x49a1dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1e0: 0xc1269c6  jal         func_49A718
    ctx->pc = 0x49A1E0u;
    SET_GPR_U32(ctx, 31, 0x49A1E8u);
    ctx->pc = 0x49A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A1E0u;
    // 0x49a1e4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A718u, 0x49A1E0u, 0x49A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A1E8u;
label_49a1e8:
    // 0x49a1e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49A1E8u;
    {
        const bool branch_taken_0x49a1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A1E8u;
        // 0x49a1ec: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a1e8) {
            ctx->pc = 0x49A204u;
            goto label_49a204;
        }
    }
    ctx->pc = 0x49A1F0u;
label_49a1f0:
    // 0x49a1f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x49a1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x49a1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a1f8: 0xc126b00  jal         func_49AC00
    ctx->pc = 0x49A1F8u;
    SET_GPR_U32(ctx, 31, 0x49A200u);
    ctx->pc = 0x49A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A1F8u;
    // 0x49a1fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49AC00u, 0x49A1F8u, 0x49A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A200u;
label_49a200:
    // 0x49a200: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x49a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_49a204:
    // 0x49a204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a208: 0x3e00008  jr          $ra
    ctx->pc = 0x49A208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A208u;
        // 0x49a20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A210u;
}
