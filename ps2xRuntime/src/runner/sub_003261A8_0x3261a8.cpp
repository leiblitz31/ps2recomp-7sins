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

// Function: sub_003261A8
// Address: 0x3261a8 - 0x326218
void sub_003261A8_0x3261a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003261A8_0x3261a8");
#endif

    switch (ctx->pc) {
        case 0x3261d0u: goto label_3261d0;
        case 0x326204u: goto label_326204;
        default: break;
    }

    ctx->pc = 0x3261a8u;

    // 0x3261a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3261a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3261ac: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x3261acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x3261b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3261b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3261b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3261b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3261b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3261b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3261bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3261c0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3261c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3261c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3261c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3261c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3261cc: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x3261ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_3261d0:
    // 0x3261d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3261d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3261d4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3261d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3261d8: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3261D8u;
    {
        const bool branch_taken_0x3261d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x3261d8) {
            ctx->pc = 0x3261DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3261D8u;
            // 0x3261dc: 0xac45000c  sw          $a1, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3261FCu;
            goto label_3261fc;
        }
    }
    ctx->pc = 0x3261E0u;
    // 0x3261e0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3261e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3261e4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3261e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3261e8: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x3261e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3261ec: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3261ECu;
    {
        const bool branch_taken_0x3261ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3261F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3261ECu;
        // 0x3261f0: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3261ec) {
            ctx->pc = 0x3261D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3261d0;
        }
    }
    ctx->pc = 0x3261F4u;
    // 0x3261f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3261f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3261f8: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x3261f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0xCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0xCu, _value); } while (0);
label_3261fc:
    // 0x3261fc: 0xc0c9b38  jal         func_326CE0
    ctx->pc = 0x3261FCu;
    SET_GPR_U32(ctx, 31, 0x326204u);
    ctx->pc = 0x326200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3261FCu;
    // 0x326200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326CE0u, 0x3261FCu, 0x326204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326204u;
label_326204:
    // 0x326204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x326204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32620c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32620cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326210: 0x3e00008  jr          $ra
    ctx->pc = 0x326210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326210u;
        // 0x326214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326218u;
}
