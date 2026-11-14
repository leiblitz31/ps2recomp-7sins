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

// Function: sub_00314AD8
// Address: 0x314ad8 - 0x314b20
void sub_00314AD8_0x314ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314AD8_0x314ad8");
#endif

    switch (ctx->pc) {
        case 0x314b04u: goto label_314b04;
        default: break;
    }

    ctx->pc = 0x314ad8u;

    // 0x314ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x314ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x314adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x314adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x314ae0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x314ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x314ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x314ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314aec: 0x2258021  addu        $s0, $s1, $a1
    ctx->pc = 0x314aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x314af0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x314af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x314af4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x314AF4u;
    {
        const bool branch_taken_0x314af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AF4u;
        // 0x314af8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314af4) {
            ctx->pc = 0x314B0Cu;
            goto label_314b0c;
        }
    }
    ctx->pc = 0x314AFCu;
    // 0x314afc: 0xc0c4b5a  jal         func_312D68
    ctx->pc = 0x314AFCu;
    SET_GPR_U32(ctx, 31, 0x314B04u);
    ctx->pc = 0x312D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312D68u, 0x314AFCu, 0x314B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314B04u;
label_314b04:
    // 0x314b04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x314b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x314b08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x314b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314b0c:
    // 0x314b0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x314b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314b10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x314b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314b18: 0x3e00008  jr          $ra
    ctx->pc = 0x314B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B18u;
        // 0x314b1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314B20u;
}
