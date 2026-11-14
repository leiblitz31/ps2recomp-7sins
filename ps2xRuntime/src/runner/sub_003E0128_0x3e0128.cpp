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

// Function: sub_003E0128
// Address: 0x3e0128 - 0x3e0150
void sub_003E0128_0x3e0128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0128_0x3e0128");
#endif

    switch (ctx->pc) {
        case 0x3e0128u: goto label_3e0128;
        case 0x3e012cu: goto label_3e012c;
        case 0x3e0130u: goto label_3e0130;
        case 0x3e0134u: goto label_3e0134;
        case 0x3e0138u: goto label_3e0138;
        case 0x3e013cu: goto label_3e013c;
        case 0x3e0140u: goto label_3e0140;
        case 0x3e0144u: goto label_3e0144;
        case 0x3e0148u: goto label_3e0148;
        case 0x3e014cu: goto label_3e014c;
        default: break;
    }

    ctx->pc = 0x3e0128u;

label_3e0128:
    // 0x3e0128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e0128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e012c:
    // 0x3e012c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3e012cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0130:
    // 0x3e0130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e0130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e0134:
    // 0x3e0134: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3e0134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0138:
    // 0x3e0138: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3e0138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3e013c:
    // 0x3e013c: 0x40f809  jalr        $v0
label_3e0140:
    if (ctx->pc == 0x3E0140u) {
        ctx->pc = 0x3E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E013Cu;
        // 0x3e0140: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0144u;
        goto label_3e0144;
    }
    ctx->pc = 0x3E013Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E0144u);
        ctx->pc = 0x3E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E013Cu;
        // 0x3e0140: 0x8c640030  lw          $a0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E013Cu, 0x3E0144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E0144u;
label_3e0144:
    // 0x3e0144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e0144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0148:
    // 0x3e0148: 0x3e00008  jr          $ra
label_3e014c:
    if (ctx->pc == 0x3E014Cu) {
        ctx->pc = 0x3E014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0148u;
        // 0x3e014c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E0150u;
        goto label_fallthrough_0x3e0148;
    }
    ctx->pc = 0x3E0148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0148u;
        // 0x3e014c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e0148:
    ctx->pc = 0x3E0150u;
}
