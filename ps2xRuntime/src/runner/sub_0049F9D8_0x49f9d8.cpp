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

// Function: sub_0049F9D8
// Address: 0x49f9d8 - 0x49fa28
void sub_0049F9D8_0x49f9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F9D8_0x49f9d8");
#endif

    switch (ctx->pc) {
        case 0x49fa08u: goto label_49fa08;
        case 0x49fa14u: goto label_49fa14;
        default: break;
    }

    ctx->pc = 0x49f9d8u;

    // 0x49f9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49f9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49f9dc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x49f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x49f9e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49f9e4: 0x2442f920  addiu       $v0, $v0, -0x6E0
    ctx->pc = 0x49f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965536));
    // 0x49f9e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f9ec: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49F9ECu;
    {
        const bool branch_taken_0x49f9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49F9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F9ECu;
        // 0x49f9f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f9ec) {
            ctx->pc = 0x49FA1Cu;
            goto label_49fa1c;
        }
    }
    ctx->pc = 0x49F9F4u;
    // 0x49f9f4: 0x8f82b818  lw          $v0, -0x47E8($gp)
    ctx->pc = 0x49f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    // 0x49f9f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49F9F8u;
    {
        const bool branch_taken_0x49f9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49f9f8) {
            ctx->pc = 0x49FA0Cu;
            goto label_49fa0c;
        }
    }
    ctx->pc = 0x49FA00u;
    // 0x49fa00: 0xc104280  jal         func_410A00
    ctx->pc = 0x49FA00u;
    SET_GPR_U32(ctx, 31, 0x49FA08u);
    ctx->pc = 0x410A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A00u, 0x49FA00u, 0x49FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FA08u;
label_49fa08:
    // 0x49fa08: 0xaf82b818  sw          $v0, -0x47E8($gp)
    ctx->pc = 0x49fa08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948888), GPR_U32(ctx, 2));
label_49fa0c:
    // 0x49fa0c: 0xc127c86  jal         func_49F218
    ctx->pc = 0x49FA0Cu;
    SET_GPR_U32(ctx, 31, 0x49FA14u);
    ctx->pc = 0x49FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FA0Cu;
    // 0x49fa10: 0x8f84b818  lw          $a0, -0x47E8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948888)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F218u, 0x49FA0Cu, 0x49FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FA14u;
label_49fa14:
    // 0x49fa14: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x49fa14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x49fa18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x49fa18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_49fa1c:
    // 0x49fa1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fa1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fa20: 0x3e00008  jr          $ra
    ctx->pc = 0x49FA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FA20u;
        // 0x49fa24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FA28u;
}
