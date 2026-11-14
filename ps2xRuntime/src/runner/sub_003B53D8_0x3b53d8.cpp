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

// Function: sub_003B53D8
// Address: 0x3b53d8 - 0x3b5418
void sub_003B53D8_0x3b53d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B53D8_0x3b53d8");
#endif

    switch (ctx->pc) {
        case 0x3b53f0u: goto label_3b53f0;
        case 0x3b53fcu: goto label_3b53fc;
        default: break;
    }

    ctx->pc = 0x3b53d8u;

    // 0x3b53d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b53d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b53dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b53dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b53e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b53e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3b53e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b53e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b53e8: 0xc0ed30a  jal         func_3B4C28
    ctx->pc = 0x3B53E8u;
    SET_GPR_U32(ctx, 31, 0x3B53F0u);
    ctx->pc = 0x3B53ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53E8u;
    // 0x3b53ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C28u, 0x3B53E8u, 0x3B53F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53F0u;
label_3b53f0:
    // 0x3b53f0: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x3b53f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3b53f4: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3B53F4u;
    SET_GPR_U32(ctx, 31, 0x3B53FCu);
    ctx->pc = 0x3B53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B53F4u;
    // 0x3b53f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3B53F4u, 0x3B53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B53FCu;
label_3b53fc:
    // 0x3b53fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3b53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3b5400: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b5400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b5404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b5408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b540c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B540Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B540Cu;
        // 0x3b5410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B540Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5414u;
    // 0x3b5414: 0x0  nop
    ctx->pc = 0x3b5414u;
    // NOP
    ctx->pc = 0x3b5418u;
}
