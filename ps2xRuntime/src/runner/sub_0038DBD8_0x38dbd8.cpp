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

// Function: sub_0038DBD8
// Address: 0x38dbd8 - 0x38dc20
void sub_0038DBD8_0x38dbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038DBD8_0x38dbd8");
#endif

    switch (ctx->pc) {
        case 0x38dc10u: goto label_38dc10;
        default: break;
    }

    ctx->pc = 0x38dbd8u;

    // 0x38dbd8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x38dbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dbdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38dbdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38dbe0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x38dbe0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dbe4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x38dbe4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dbe8: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x38dbe8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dbec: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x38dbecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dbf0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x38dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x38dbf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38dbf8: 0x2484ade8  addiu       $a0, $a0, -0x5218
    ctx->pc = 0x38dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946280));
    // 0x38dbfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x38dbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x38dc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc04: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x38dc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38dc08: 0xc104b72  jal         func_412DC8
    ctx->pc = 0x38DC08u;
    SET_GPR_U32(ctx, 31, 0x38DC10u);
    ctx->pc = 0x38DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38DC08u;
    // 0x38dc0c: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412DC8u, 0x38DC08u, 0x38DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38DC10u;
label_38dc10:
    // 0x38dc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38dc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38dc14: 0x3e00008  jr          $ra
    ctx->pc = 0x38DC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38DC14u;
        // 0x38dc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38DC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38DC1Cu;
    // 0x38dc1c: 0x0  nop
    ctx->pc = 0x38dc1cu;
    // NOP
    ctx->pc = 0x38dc20u;
}
