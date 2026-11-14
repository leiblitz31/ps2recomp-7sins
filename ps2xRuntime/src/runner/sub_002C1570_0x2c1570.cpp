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

// Function: sub_002C1570
// Address: 0x2c1570 - 0x2c15f0
void sub_002C1570_0x2c1570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1570_0x2c1570");
#endif

    switch (ctx->pc) {
        case 0x2c1594u: goto label_2c1594;
        case 0x2c15d8u: goto label_2c15d8;
        default: break;
    }

    ctx->pc = 0x2c1570u;

    // 0x2c1570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c1570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c1574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c157c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1584: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c1584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1588: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c1588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c158c: 0xc0b048c  jal         func_2C1230
    ctx->pc = 0x2C158Cu;
    SET_GPR_U32(ctx, 31, 0x2C1594u);
    ctx->pc = 0x2C1230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1230u, 0x2C158Cu, 0x2C1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1594u;
label_2c1594:
    // 0x2c1594: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1598: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2c1598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c159c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c15a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c15a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c15a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c15ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2c15acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c15b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c15b4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2c15b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2c15b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C15B8u;
    {
        const bool branch_taken_0x2c15b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2c15b8) {
            ctx->pc = 0x2C15C8u;
            goto label_2c15c8;
        }
    }
    ctx->pc = 0x2C15C0u;
    // 0x2c15c0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2c15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2c15c4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2c15c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2c15c8:
    // 0x2c15c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2c15c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c15cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c15ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c15d0: 0xc0b29ec  jal         func_2CA7B0
    ctx->pc = 0x2C15D0u;
    SET_GPR_U32(ctx, 31, 0x2C15D8u);
    ctx->pc = 0x2CA7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA7B0u, 0x2C15D0u, 0x2C15D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C15D8u;
label_2c15d8:
    // 0x2c15d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c15d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c15dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c15dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c15e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C15E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C15E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C15E8u;
    // 0x2c15e8: 0x0  nop
    ctx->pc = 0x2c15e8u;
    // NOP
    // 0x2c15ec: 0x0  nop
    ctx->pc = 0x2c15ecu;
    // NOP
    ctx->pc = 0x2c15f0u;
}
