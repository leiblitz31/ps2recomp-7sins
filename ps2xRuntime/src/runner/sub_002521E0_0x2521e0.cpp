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

// Function: sub_002521E0
// Address: 0x2521e0 - 0x252270
void sub_002521E0_0x2521e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002521E0_0x2521e0");
#endif

    switch (ctx->pc) {
        case 0x252224u: goto label_252224;
        case 0x252234u: goto label_252234;
        default: break;
    }

    ctx->pc = 0x2521e0u;

    // 0x2521e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2521e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2521e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2521e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2521e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2521e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2521ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2521ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2521f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2521f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2521f4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2521f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2521f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2521f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2521fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252200: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x252200u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252204: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x252204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x252208: 0x38143  sra         $s0, $v1, 5
    ctx->pc = 0x252208u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 5));
    // 0x25220c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25220Cu;
    {
        const bool branch_taken_0x25220c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25220c) {
            ctx->pc = 0x25221Cu;
            goto label_25221c;
        }
    }
    ctx->pc = 0x252214u;
    // 0x252214: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x252214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x252218: 0x28143  sra         $s0, $v0, 5
    ctx->pc = 0x252218u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 5));
label_25221c:
    // 0x25221c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x25221Cu;
    {
        const bool branch_taken_0x25221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25221c) {
            ctx->pc = 0x252250u;
            goto label_252250;
        }
    }
    ctx->pc = 0x252224u;
label_252224:
    // 0x252224: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x252224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252228: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x252228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25222c: 0xc09489c  jal         func_252270
    ctx->pc = 0x25222Cu;
    SET_GPR_U32(ctx, 31, 0x252234u);
    ctx->pc = 0x252270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252270u, 0x25222Cu, 0x252234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252234u;
label_252234:
    // 0x252234: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x252234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252238: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x252238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x25223c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x25223cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x252240: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252244: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x252244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x252248: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x252248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x25224c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x25224cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_252250:
    // 0x252250: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x252250u;
    {
        const bool branch_taken_0x252250 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x252250) {
            ctx->pc = 0x252224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_252224;
        }
    }
    ctx->pc = 0x252258u;
    // 0x252258: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25225c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25225cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252260: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252264: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x252264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x252268: 0x3e00008  jr          $ra
    ctx->pc = 0x252268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252270u;
}
