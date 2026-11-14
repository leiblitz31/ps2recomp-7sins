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

// Function: sub_004B4EA8
// Address: 0x4b4ea8 - 0x4b4ee8
void sub_004B4EA8_0x4b4ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4EA8_0x4b4ea8");
#endif

    switch (ctx->pc) {
        case 0x4b4edcu: goto label_4b4edc;
        default: break;
    }

    ctx->pc = 0x4b4ea8u;

    // 0x4b4ea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b4ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b4eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b4eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b4eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b4eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b4eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4eb8: 0x90860008  lbu         $a2, 0x8($a0)
    ctx->pc = 0x4b4eb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b4ebc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b4ec0: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x4b4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x4b4ec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b4ec8: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x4b4ec8u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4b4ecc: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x4b4eccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b4ed0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4b4ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4b4ed4: 0xc12d3ba  jal         func_4B4EE8
    ctx->pc = 0x4B4ED4u;
    SET_GPR_U32(ctx, 31, 0x4B4EDCu);
    ctx->pc = 0x4B4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B4ED4u;
    // 0x4b4ed8: 0xc33006  srlv        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4EE8u, 0x4B4ED4u, 0x4B4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B4EDCu;
label_4b4edc:
    // 0x4b4edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b4edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B4EE0u;
        // 0x4b4ee4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B4EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B4EE8u;
}
