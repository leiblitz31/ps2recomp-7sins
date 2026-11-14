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

// Function: sub_004A52B0
// Address: 0x4a52b0 - 0x4a5328
void sub_004A52B0_0x4a52b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A52B0_0x4a52b0");
#endif

    switch (ctx->pc) {
        case 0x4a52fcu: goto label_4a52fc;
        case 0x4a5318u: goto label_4a5318;
        default: break;
    }

    ctx->pc = 0x4a52b0u;

    // 0x4a52b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a52b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a52b4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4a52b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a52b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a52bc: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4a52bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4a52c0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x4a52c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a52c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a52c8: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x4a52c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x4a52cc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x4a52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a52d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a52d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a52d4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4a52d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a52d8: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x4a52d8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x4a52dc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A52DCu;
    {
        const bool branch_taken_0x4a52dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a52dc) {
            ctx->pc = 0x4A52E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A52DCu;
            // 0x4a52e0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A52E4u;
            goto label_4a52e4;
        }
    }
    ctx->pc = 0x4A52E4u;
label_4a52e4:
    // 0x4a52e4: 0x3012  mflo        $a2
    ctx->pc = 0x4a52e4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4a52e8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A52E8u;
    {
        const bool branch_taken_0x4a52e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52E8u;
        // 0x4a52ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a52e8) {
            ctx->pc = 0x4A5304u;
            goto label_4a5304;
        }
    }
    ctx->pc = 0x4A52F0u;
    // 0x4a52f0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4a52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a52f4: 0xc1294fa  jal         func_4A53E8
    ctx->pc = 0x4A52F4u;
    SET_GPR_U32(ctx, 31, 0x4A52FCu);
    ctx->pc = 0x4A52F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A52F4u;
    // 0x4a52f8: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A53E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A53E8u, 0x4A52F4u, 0x4A52FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A52FCu;
label_4a52fc:
    // 0x4a52fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A52FCu;
    {
        const bool branch_taken_0x4a52fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52FCu;
        // 0x4a5300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a52fc) {
            ctx->pc = 0x4A531Cu;
            goto label_4a531c;
        }
    }
    ctx->pc = 0x4A5304u;
label_4a5304:
    // 0x4a5304: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A5304u;
    {
        const bool branch_taken_0x4a5304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5304u;
        // 0x4a5308: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5304) {
            ctx->pc = 0x4A531Cu;
            goto label_4a531c;
        }
    }
    ctx->pc = 0x4A530Cu;
    // 0x4a530c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x4a530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5310: 0xc1292ac  jal         func_4A4AB0
    ctx->pc = 0x4A5310u;
    SET_GPR_U32(ctx, 31, 0x4A5318u);
    ctx->pc = 0x4A5314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5310u;
    // 0x4a5314: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4AB0u, 0x4A5310u, 0x4A5318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5318u;
label_4a5318:
    // 0x4a5318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a531c:
    // 0x4a531c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A531Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A531Cu;
        // 0x4a5320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A531Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A5324u;
    // 0x4a5324: 0x0  nop
    ctx->pc = 0x4a5324u;
    // NOP
    ctx->pc = 0x4a5328u;
}
