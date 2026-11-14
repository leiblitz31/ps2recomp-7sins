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

// Function: sub_00230120
// Address: 0x230120 - 0x2301b0
void sub_00230120_0x230120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230120_0x230120");
#endif

    switch (ctx->pc) {
        case 0x23015cu: goto label_23015c;
        case 0x23019cu: goto label_23019c;
        default: break;
    }

    ctx->pc = 0x230120u;

    // 0x230120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x230120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x230124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x230128: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x230128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23012c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23012cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x230130: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x230130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230134: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x230134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x230138: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x230138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23013c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x23013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x230140: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x230140u;
    {
        const bool branch_taken_0x230140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x230140) {
            ctx->pc = 0x230174u;
            goto label_230174;
        }
    }
    ctx->pc = 0x230148u;
    // 0x230148: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x230148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23014c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x23014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x230150: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x230150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230154: 0xc08c110  jal         func_230440
    ctx->pc = 0x230154u;
    SET_GPR_U32(ctx, 31, 0x23015Cu);
    ctx->pc = 0x230440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230440u, 0x230154u, 0x23015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23015Cu;
label_23015c:
    // 0x23015c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230160: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x230160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x230164: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x230164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x230168: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x230168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x23016c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23016Cu;
    {
        const bool branch_taken_0x23016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23016c) {
            ctx->pc = 0x23019Cu;
            goto label_23019c;
        }
    }
    ctx->pc = 0x230174u;
label_230174:
    // 0x230174: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x230174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230178: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x230178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x23017c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23017cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x230180: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x230180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x230184: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x230184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230188: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x230188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x23018c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x23018cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230190: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x230190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230194: 0xc08c06c  jal         func_2301B0
    ctx->pc = 0x230194u;
    SET_GPR_U32(ctx, 31, 0x23019Cu);
    ctx->pc = 0x2301B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301B0u, 0x230194u, 0x23019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23019Cu;
label_23019c:
    // 0x23019c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23019cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2301a0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2301a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2301a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2301A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2301A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2301ACu;
    // 0x2301ac: 0x0  nop
    ctx->pc = 0x2301acu;
    // NOP
    ctx->pc = 0x2301b0u;
}
