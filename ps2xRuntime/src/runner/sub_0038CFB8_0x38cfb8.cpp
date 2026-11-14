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

// Function: sub_0038CFB8
// Address: 0x38cfb8 - 0x38d008
void sub_0038CFB8_0x38cfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CFB8_0x38cfb8");
#endif

    switch (ctx->pc) {
        case 0x38cff0u: goto label_38cff0;
        default: break;
    }

    ctx->pc = 0x38cfb8u;

    // 0x38cfb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38cfbc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x38cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x38cfc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38cfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38cfc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38cfc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cfcc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x38cfccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38cfd0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x38cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x38cfd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38CFD4u;
    {
        const bool branch_taken_0x38cfd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFD4u;
        // 0x38cfd8: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cfd4) {
            ctx->pc = 0x38CFF4u;
            goto label_38cff4;
        }
    }
    ctx->pc = 0x38CFDCu;
    // 0x38cfdc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x38cfe0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CFE0u;
    {
        const bool branch_taken_0x38cfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CFE0u;
        // 0x38cfe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cfe0) {
            ctx->pc = 0x38CFF8u;
            goto label_38cff8;
        }
    }
    ctx->pc = 0x38CFE8u;
    // 0x38cfe8: 0xc0e4052  jal         func_390148
    ctx->pc = 0x38CFE8u;
    SET_GPR_U32(ctx, 31, 0x38CFF0u);
    ctx->pc = 0x390148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390148u, 0x38CFE8u, 0x38CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CFF0u;
label_38cff0:
    // 0x38cff0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x38cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_38cff4:
    // 0x38cff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38cff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cff8:
    // 0x38cff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38cff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cffc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38cffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d000: 0x3e00008  jr          $ra
    ctx->pc = 0x38D000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D000u;
        // 0x38d004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D008u;
}
