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

// Function: sub_00414CA0
// Address: 0x414ca0 - 0x414cd8
void sub_00414CA0_0x414ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414CA0_0x414ca0");
#endif

    switch (ctx->pc) {
        case 0x414ca0u: goto label_414ca0;
        case 0x414ca4u: goto label_414ca4;
        case 0x414ca8u: goto label_414ca8;
        case 0x414cacu: goto label_414cac;
        case 0x414cb0u: goto label_414cb0;
        case 0x414cb4u: goto label_414cb4;
        case 0x414cb8u: goto label_414cb8;
        case 0x414cbcu: goto label_414cbc;
        case 0x414cc0u: goto label_414cc0;
        case 0x414cc4u: goto label_414cc4;
        case 0x414cc8u: goto label_414cc8;
        case 0x414cccu: goto label_414ccc;
        case 0x414cd0u: goto label_414cd0;
        case 0x414cd4u: goto label_414cd4;
        default: break;
    }

    ctx->pc = 0x414ca0u;

label_414ca0:
    // 0x414ca0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x414ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_414ca4:
    // 0x414ca4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x414ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_414ca8:
    // 0x414ca8: 0x2785ad70  addiu       $a1, $gp, -0x5290
    ctx->pc = 0x414ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946160));
label_414cac:
    // 0x414cac: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x414cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_414cb0:
    // 0x414cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x414cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_414cb4:
    // 0x414cb4: 0x40f809  jalr        $v0
label_414cb8:
    if (ctx->pc == 0x414CB8u) {
        ctx->pc = 0x414CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CB4u;
        // 0x414cb8: 0xa4200a  movz        $a0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414CBCu;
        goto label_414cbc;
    }
    ctx->pc = 0x414CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x414CBCu);
        ctx->pc = 0x414CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CB4u;
        // 0x414cb8: 0xa4200a  movz        $a0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414CB4u, 0x414CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x414CBCu;
label_414cbc:
    // 0x414cbc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x414cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_414cc0:
    // 0x414cc0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x414cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_414cc4:
    // 0x414cc4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x414cc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_414cc8:
    // 0x414cc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_414ccc:
    // 0x414ccc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x414cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_414cd0:
    // 0x414cd0: 0x3e00008  jr          $ra
label_414cd4:
    if (ctx->pc == 0x414CD4u) {
        ctx->pc = 0x414CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CD0u;
        // 0x414cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x414CD8u;
        goto label_fallthrough_0x414cd0;
    }
    ctx->pc = 0x414CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x414CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414CD0u;
        // 0x414cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x414cd0:
    ctx->pc = 0x414CD8u;
}
