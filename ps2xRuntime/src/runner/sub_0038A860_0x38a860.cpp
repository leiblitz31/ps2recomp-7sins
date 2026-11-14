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

// Function: sub_0038A860
// Address: 0x38a860 - 0x38a8f8
void sub_0038A860_0x38a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A860_0x38a860");
#endif

    switch (ctx->pc) {
        case 0x38a888u: goto label_38a888;
        case 0x38a8a8u: goto label_38a8a8;
        case 0x38a8bcu: goto label_38a8bc;
        case 0x38a8d0u: goto label_38a8d0;
        default: break;
    }

    ctx->pc = 0x38a860u;

    // 0x38a860: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38a864: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38a864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38a868: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x38a868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a86c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38a870: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38a870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a87c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x38a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x38a880: 0xc10571c  jal         func_415C70
    ctx->pc = 0x38A880u;
    SET_GPR_U32(ctx, 31, 0x38A888u);
    ctx->pc = 0x38A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A880u;
    // 0x38a884: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C70u, 0x38A880u, 0x38A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A888u;
label_38a888:
    // 0x38a888: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38A888u;
    {
        const bool branch_taken_0x38a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A888u;
        // 0x38a88c: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a888) {
            ctx->pc = 0x38A8D8u;
            goto label_38a8d8;
        }
    }
    ctx->pc = 0x38A890u;
    // 0x38a890: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38a890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a894: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38a894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a898: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38a898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38a89c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38a89cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38a8a0: 0xc103404  jal         func_40D010
    ctx->pc = 0x38A8A0u;
    SET_GPR_U32(ctx, 31, 0x38A8A8u);
    ctx->pc = 0x38A8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A8A0u;
    // 0x38a8a4: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38A8A0u, 0x38A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A8A8u;
label_38a8a8:
    // 0x38a8a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38A8A8u;
    {
        const bool branch_taken_0x38a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8A8u;
        // 0x38a8ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8a8) {
            ctx->pc = 0x38A8D8u;
            goto label_38a8d8;
        }
    }
    ctx->pc = 0x38A8B0u;
    // 0x38a8b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a8b4: 0xc103440  jal         func_40D100
    ctx->pc = 0x38A8B4u;
    SET_GPR_U32(ctx, 31, 0x38A8BCu);
    ctx->pc = 0x38A8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A8B4u;
    // 0x38a8b8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38A8B4u, 0x38A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A8BCu;
label_38a8bc:
    // 0x38a8bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A8BCu;
    {
        const bool branch_taken_0x38a8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a8bc) {
            ctx->pc = 0x38A8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A8BCu;
            // 0x38a8c0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A8DCu;
            goto label_38a8dc;
        }
    }
    ctx->pc = 0x38A8C4u;
    // 0x38a8c4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a8c8: 0xc0e368e  jal         func_38DA38
    ctx->pc = 0x38A8C8u;
    SET_GPR_U32(ctx, 31, 0x38A8D0u);
    ctx->pc = 0x38A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A8C8u;
    // 0x38a8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DA38u, 0x38A8C8u, 0x38A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A8D0u;
label_38a8d0:
    // 0x38a8d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A8D0u;
    {
        const bool branch_taken_0x38a8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8D0u;
        // 0x38a8d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8d0) {
            ctx->pc = 0x38A8E0u;
            goto label_38a8e0;
        }
    }
    ctx->pc = 0x38A8D8u;
label_38a8d8:
    // 0x38a8d8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x38a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_38a8dc:
    // 0x38a8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38a8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a8e0:
    // 0x38a8e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38a8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a8e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38a8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a8e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x38A8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8ECu;
        // 0x38a8f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A8F4u;
    // 0x38a8f4: 0x0  nop
    ctx->pc = 0x38a8f4u;
    // NOP
    ctx->pc = 0x38a8f8u;
}
