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

// Function: sub_00109250
// Address: 0x109250 - 0x1092a0
void sub_00109250_0x109250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109250_0x109250");
#endif

    switch (ctx->pc) {
        case 0x109280u: goto label_109280;
        default: break;
    }

    ctx->pc = 0x109250u;

    // 0x109250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x109254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109258: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x109258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10925c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109260: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x109260u;
    {
        const bool branch_taken_0x109260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x109260) {
            ctx->pc = 0x109284u;
            goto label_109284;
        }
    }
    ctx->pc = 0x109268u;
    // 0x109268: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x109268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10926c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10926Cu;
    {
        const bool branch_taken_0x10926c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10926c) {
            ctx->pc = 0x109284u;
            goto label_109284;
        }
    }
    ctx->pc = 0x109274u;
    // 0x109274: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x109274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109278: 0xc119c5c  jal         func_467170
    ctx->pc = 0x109278u;
    SET_GPR_U32(ctx, 31, 0x109280u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x109278u, 0x109280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109280u;
label_109280:
    // 0x109280: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x109280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_109284:
    // 0x109284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109288: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x109288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10928c: 0x3e00008  jr          $ra
    ctx->pc = 0x10928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10928Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109294u;
    // 0x109294: 0x0  nop
    ctx->pc = 0x109294u;
    // NOP
    // 0x109298: 0x0  nop
    ctx->pc = 0x109298u;
    // NOP
    // 0x10929c: 0x0  nop
    ctx->pc = 0x10929cu;
    // NOP
    ctx->pc = 0x1092a0u;
}
