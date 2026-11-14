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

// Function: sub_00407058
// Address: 0x407058 - 0x4070c0
void sub_00407058_0x407058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407058_0x407058");
#endif

    switch (ctx->pc) {
        case 0x407094u: goto label_407094;
        default: break;
    }

    ctx->pc = 0x407058u;

    // 0x407058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x407058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40705c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x40705cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x407060: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x407060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x407064: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x407064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x407068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40706c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40706cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x407070: 0x92050210  lbu         $a1, 0x210($s0)
    ctx->pc = 0x407070u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x407074: 0x24499c70  addiu       $t1, $v0, -0x6390
    ctx->pc = 0x407074u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941808));
    // 0x407078: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x407078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x40707c: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x40707cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x407080: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x407080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x407084: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x407084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x407088: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x407088u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x40708c: 0xc0ff4b8  jal         func_3FD2E0
    ctx->pc = 0x40708Cu;
    SET_GPR_U32(ctx, 31, 0x407094u);
    ctx->pc = 0x407090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40708Cu;
    // 0x407090: 0x3a52821  addu        $a1, $sp, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FD2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FD2E0u, 0x40708Cu, 0x407094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407094u;
label_407094:
    // 0x407094: 0x92020210  lbu         $v0, 0x210($s0)
    ctx->pc = 0x407094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x407098: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x407098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x40709c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40709Cu;
    {
        const bool branch_taken_0x40709c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4070A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40709Cu;
        // 0x4070a0: 0x24031000  addiu       $v1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40709c) {
            ctx->pc = 0x4070B0u;
            goto label_4070b0;
        }
    }
    ctx->pc = 0x4070A4u;
    // 0x4070a4: 0xde0200f8  ld          $v0, 0xF8($s0)
    ctx->pc = 0x4070a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x4070a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4070a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4070ac: 0xfe0200f8  sd          $v0, 0xF8($s0)
    ctx->pc = 0x4070acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 248), GPR_U64(ctx, 2));
label_4070b0:
    // 0x4070b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4070b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4070b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4070b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4070b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4070B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4070BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4070B8u;
        // 0x4070bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4070B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4070C0u;
}
