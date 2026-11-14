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

// Function: sub_001D6510
// Address: 0x1d6510 - 0x1d6570
void sub_001D6510_0x1d6510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6510_0x1d6510");
#endif

    switch (ctx->pc) {
        case 0x1d653cu: goto label_1d653c;
        case 0x1d655cu: goto label_1d655c;
        default: break;
    }

    ctx->pc = 0x1d6510u;

    // 0x1d6510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d651c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d651cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6520: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6524: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6524u;
    {
        const bool branch_taken_0x1d6524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6524) {
            ctx->pc = 0x1D655Cu;
            goto label_1d655c;
        }
    }
    ctx->pc = 0x1D652Cu;
    // 0x1d652c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d652cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6534: 0xc07595c  jal         func_1D6570
    ctx->pc = 0x1D6534u;
    SET_GPR_U32(ctx, 31, 0x1D653Cu);
    ctx->pc = 0x1D6570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6570u, 0x1D6534u, 0x1D653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D653Cu;
label_1d653c:
    // 0x1d653c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d653cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d6540: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d6540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d6544: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d6544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d6548: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6548u;
    {
        const bool branch_taken_0x1d6548 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6548) {
            ctx->pc = 0x1D655Cu;
            goto label_1d655c;
        }
    }
    ctx->pc = 0x1D6550u;
    // 0x1d6550: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6554: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D6554u;
    SET_GPR_U32(ctx, 31, 0x1D655Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D6554u, 0x1D655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D655Cu;
label_1d655c:
    // 0x1d655c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6564: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d6568: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6570u;
}
