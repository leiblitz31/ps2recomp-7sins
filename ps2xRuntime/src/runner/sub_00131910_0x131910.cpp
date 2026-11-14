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

// Function: sub_00131910
// Address: 0x131910 - 0x131960
void sub_00131910_0x131910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131910_0x131910");
#endif

    switch (ctx->pc) {
        case 0x131940u: goto label_131940;
        default: break;
    }

    ctx->pc = 0x131910u;

    // 0x131910: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131914: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131918: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x131918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13191c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x13191cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131920: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x131920u;
    {
        const bool branch_taken_0x131920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131920) {
            ctx->pc = 0x131944u;
            goto label_131944;
        }
    }
    ctx->pc = 0x131928u;
    // 0x131928: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x131928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13192c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13192Cu;
    {
        const bool branch_taken_0x13192c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13192c) {
            ctx->pc = 0x131944u;
            goto label_131944;
        }
    }
    ctx->pc = 0x131934u;
    // 0x131934: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x131934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131938: 0xc119c5c  jal         func_467170
    ctx->pc = 0x131938u;
    SET_GPR_U32(ctx, 31, 0x131940u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x131938u, 0x131940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131940u;
label_131940:
    // 0x131940: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x131940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_131944:
    // 0x131944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131948: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13194c: 0x3e00008  jr          $ra
    ctx->pc = 0x13194Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13194Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131954u;
    // 0x131954: 0x0  nop
    ctx->pc = 0x131954u;
    // NOP
    // 0x131958: 0x0  nop
    ctx->pc = 0x131958u;
    // NOP
    // 0x13195c: 0x0  nop
    ctx->pc = 0x13195cu;
    // NOP
    ctx->pc = 0x131960u;
}
