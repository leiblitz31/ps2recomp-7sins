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

// Function: sub_003C4E78
// Address: 0x3c4e78 - 0x3c4ef0
void sub_003C4E78_0x3c4e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4E78_0x3c4e78");
#endif

    switch (ctx->pc) {
        case 0x3c4eacu: goto label_3c4eac;
        case 0x3c4ed8u: goto label_3c4ed8;
        case 0x3c4ee0u: goto label_3c4ee0;
        default: break;
    }

    ctx->pc = 0x3c4e78u;

    // 0x3c4e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c4e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c4e7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3c4e7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4e80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c4e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c4e84: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3c4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3c4e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c4e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c4e8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3c4e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c4e90: 0x8f84bd94  lw          $a0, -0x426C($gp)
    ctx->pc = 0x3c4e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    // 0x3c4e94: 0x2470e0c0  addiu       $s0, $v1, -0x1F40
    ctx->pc = 0x3c4e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959296));
    // 0x3c4e98: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x3c4e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x3c4e9c: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x3c4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x3c4ea0: 0xac65e0c0  sw          $a1, -0x1F40($v1)
    ctx->pc = 0x3c4ea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61E0C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E0C0u, _value); } while (0);
    // 0x3c4ea4: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x3C4EA4u;
    SET_GPR_U32(ctx, 31, 0x3C4EACu);
    ctx->pc = 0x3C4EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4EA4u;
    // 0x3c4ea8: 0xac460038  sw          $a2, 0x38($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x3C4EA4u, 0x3C4EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4EACu;
label_3c4eac:
    // 0x3c4eac: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3c4eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x3c4eb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c4eb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4eb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3c4eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c4eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c4eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ebc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x3c4ebcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c4ec0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c4ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ec4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c4ec4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ec8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c4ec8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ecc: 0x2484e088  addiu       $a0, $a0, -0x1F78
    ctx->pc = 0x3c4eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959240));
    // 0x3c4ed0: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x3C4ED0u;
    SET_GPR_U32(ctx, 31, 0x3C4ED8u);
    ctx->pc = 0x3C4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4ED0u;
    // 0x3c4ed4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x3C4ED0u, 0x3C4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4ED8u;
label_3c4ed8:
    // 0x3c4ed8: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x3C4ED8u;
    SET_GPR_U32(ctx, 31, 0x3C4EE0u);
    ctx->pc = 0x3C4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4ED8u;
    // 0x3c4edc: 0x8f84bd94  lw          $a0, -0x426C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x3C4ED8u, 0x3C4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4EE0u;
label_3c4ee0:
    // 0x3c4ee0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c4ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c4ee4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c4ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c4ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4EE8u;
        // 0x3c4eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4EF0u;
}
