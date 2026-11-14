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

// Function: sub_00259220
// Address: 0x259220 - 0x2592a0
void sub_00259220_0x259220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259220_0x259220");
#endif

    switch (ctx->pc) {
        case 0x259248u: goto label_259248;
        case 0x259258u: goto label_259258;
        default: break;
    }

    ctx->pc = 0x259220u;

    // 0x259220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x259220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x259224: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x259224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x259228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x259228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25922c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x259230: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x259230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x259234: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x259234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x259238: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x259238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x25923c: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x25923cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x259240: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x259240u;
    {
        const bool branch_taken_0x259240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259240) {
            ctx->pc = 0x25926Cu;
            goto label_25926c;
        }
    }
    ctx->pc = 0x259248u;
label_259248:
    // 0x259248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x259248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25924c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25924cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x259250: 0xc0964d8  jal         func_259360
    ctx->pc = 0x259250u;
    SET_GPR_U32(ctx, 31, 0x259258u);
    ctx->pc = 0x259360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259360u, 0x259250u, 0x259258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259258u;
label_259258:
    // 0x259258: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x259258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25925c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x259260: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x259260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x259264: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x259264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x259268: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x259268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25926c:
    // 0x25926c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x259270: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x259270u;
    {
        const bool branch_taken_0x259270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x259270) {
            ctx->pc = 0x259248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_259248;
        }
    }
    ctx->pc = 0x259278u;
    // 0x259278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x259278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25927c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25927cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x259280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x259280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x259284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x259284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x259288: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x259288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25928c: 0x3e00008  jr          $ra
    ctx->pc = 0x25928Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25928Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259294u;
    // 0x259294: 0x0  nop
    ctx->pc = 0x259294u;
    // NOP
    // 0x259298: 0x0  nop
    ctx->pc = 0x259298u;
    // NOP
    // 0x25929c: 0x0  nop
    ctx->pc = 0x25929cu;
    // NOP
    ctx->pc = 0x2592a0u;
}
