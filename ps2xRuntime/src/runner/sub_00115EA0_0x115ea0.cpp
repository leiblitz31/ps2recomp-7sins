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

// Function: sub_00115EA0
// Address: 0x115ea0 - 0x115f10
void sub_00115EA0_0x115ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115EA0_0x115ea0");
#endif

    switch (ctx->pc) {
        case 0x115ebcu: goto label_115ebc;
        case 0x115eccu: goto label_115ecc;
        case 0x115ef0u: goto label_115ef0;
        default: break;
    }

    ctx->pc = 0x115ea0u;

    // 0x115ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115eac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x115eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x115eb0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115eb4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x115EB4u;
    SET_GPR_U32(ctx, 31, 0x115EBCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x115EB4u, 0x115EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EBCu;
label_115ebc:
    // 0x115ebc: 0x8f84b9b0  lw          $a0, -0x4650($gp)
    ctx->pc = 0x115ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949296)));
    // 0x115ec0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ec4: 0xc044edc  jal         func_113B70
    ctx->pc = 0x115EC4u;
    SET_GPR_U32(ctx, 31, 0x115ECCu);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x115EC4u, 0x115ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115ECCu;
label_115ecc:
    // 0x115ecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ed0: 0x14100004  bne         $zero, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115ED0u;
    {
        const bool branch_taken_0x115ed0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x115ed0) {
            ctx->pc = 0x115EE4u;
            goto label_115ee4;
        }
    }
    ctx->pc = 0x115ED8u;
    // 0x115ed8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115edc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115EDCu;
    {
        const bool branch_taken_0x115edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115edc) {
            ctx->pc = 0x115EF0u;
            goto label_115ef0;
        }
    }
    ctx->pc = 0x115EE4u;
label_115ee4:
    // 0x115ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ee8: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x115EE8u;
    SET_GPR_U32(ctx, 31, 0x115EF0u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x115EE8u, 0x115EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EF0u;
label_115ef0:
    // 0x115ef0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x115ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115ef8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x115ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x115efc: 0x3e00008  jr          $ra
    ctx->pc = 0x115EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F04u;
    // 0x115f04: 0x0  nop
    ctx->pc = 0x115f04u;
    // NOP
    // 0x115f08: 0x0  nop
    ctx->pc = 0x115f08u;
    // NOP
    // 0x115f0c: 0x0  nop
    ctx->pc = 0x115f0cu;
    // NOP
    ctx->pc = 0x115f10u;
}
