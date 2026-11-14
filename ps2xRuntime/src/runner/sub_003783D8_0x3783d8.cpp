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

// Function: sub_003783D8
// Address: 0x3783d8 - 0x378418
void sub_003783D8_0x3783d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003783D8_0x3783d8");
#endif

    switch (ctx->pc) {
        case 0x3783fcu: goto label_3783fc;
        default: break;
    }

    ctx->pc = 0x3783d8u;

    // 0x3783d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3783d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3783dc: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x3783dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x3783e0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x3783e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x3783e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3783e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3783e8: 0x24c68600  addiu       $a2, $a2, -0x7A00
    ctx->pc = 0x3783e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936064));
    // 0x3783ec: 0x24e785a0  addiu       $a3, $a3, -0x7A60
    ctx->pc = 0x3783ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935968));
    // 0x3783f0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3783f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3783f4: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x3783F4u;
    SET_GPR_U32(ctx, 31, 0x3783FCu);
    ctx->pc = 0x3783F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3783F4u;
    // 0x3783f8: 0x2405010c  addiu       $a1, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x3783F4u, 0x3783FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3783FCu;
label_3783fc:
    // 0x3783fc: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x3783fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x378400: 0xaf82a8a0  sw          $v0, -0x5760($gp)
    ctx->pc = 0x378400u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944928), GPR_U32(ctx, 2));
    // 0x378404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378408: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x378408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x37840c: 0x3e00008  jr          $ra
    ctx->pc = 0x37840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37840Cu;
        // 0x378410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378414u;
    // 0x378414: 0x0  nop
    ctx->pc = 0x378414u;
    // NOP
    ctx->pc = 0x378418u;
}
