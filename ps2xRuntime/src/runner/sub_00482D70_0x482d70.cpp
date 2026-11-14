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

// Function: sub_00482D70
// Address: 0x482d70 - 0x482df0
void sub_00482D70_0x482d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482D70_0x482d70");
#endif

    switch (ctx->pc) {
        case 0x482d94u: goto label_482d94;
        case 0x482dd8u: goto label_482dd8;
        default: break;
    }

    ctx->pc = 0x482d70u;

    // 0x482d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x482d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x482d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x482d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x482d7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x482d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482d80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482d84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x482d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x482d88: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x482d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x482d8c: 0xc120a10  jal         func_482840
    ctx->pc = 0x482D8Cu;
    SET_GPR_U32(ctx, 31, 0x482D94u);
    ctx->pc = 0x482840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482840u, 0x482D8Cu, 0x482D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482D94u;
label_482d94:
    // 0x482d94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482d98: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x482d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482d9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482da0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x482da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x482da4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482da8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x482da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x482dac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x482dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x482db0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x482db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x482db4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x482db4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x482db8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x482DB8u;
    {
        const bool branch_taken_0x482db8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x482db8) {
            ctx->pc = 0x482DC8u;
            goto label_482dc8;
        }
    }
    ctx->pc = 0x482DC0u;
    // 0x482dc0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x482dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x482dc4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x482dc4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_482dc8:
    // 0x482dc8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x482dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x482dcc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x482dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x482dd0: 0xc121478  jal         func_4851E0
    ctx->pc = 0x482DD0u;
    SET_GPR_U32(ctx, 31, 0x482DD8u);
    ctx->pc = 0x4851E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4851E0u, 0x482DD0u, 0x482DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482DD8u;
label_482dd8:
    // 0x482dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482ddc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x482ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x482de0: 0x3e00008  jr          $ra
    ctx->pc = 0x482DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482DE8u;
    // 0x482de8: 0x0  nop
    ctx->pc = 0x482de8u;
    // NOP
    // 0x482dec: 0x0  nop
    ctx->pc = 0x482decu;
    // NOP
    ctx->pc = 0x482df0u;
}
