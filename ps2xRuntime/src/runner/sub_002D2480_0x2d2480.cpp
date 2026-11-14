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

// Function: sub_002D2480
// Address: 0x2d2480 - 0x2d2500
void sub_002D2480_0x2d2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2480_0x2d2480");
#endif

    switch (ctx->pc) {
        case 0x2d24a4u: goto label_2d24a4;
        case 0x2d24e8u: goto label_2d24e8;
        default: break;
    }

    ctx->pc = 0x2d2480u;

    // 0x2d2480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d2480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d2484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d248c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d248cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d2490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2494: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d2494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d2498: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2d2498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d249c: 0xc0b4708  jal         func_2D1C20
    ctx->pc = 0x2D249Cu;
    SET_GPR_U32(ctx, 31, 0x2D24A4u);
    ctx->pc = 0x2D1C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1C20u, 0x2D249Cu, 0x2D24A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24A4u;
label_2d24a4:
    // 0x2d24a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d24a8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2d24a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d24ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d24acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d24b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d24b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d24b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d24b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d24b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d24b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d24bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2d24bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d24c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2d24c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d24c4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2d24c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d24c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D24C8u;
    {
        const bool branch_taken_0x2d24c8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2d24c8) {
            ctx->pc = 0x2D24D8u;
            goto label_2d24d8;
        }
    }
    ctx->pc = 0x2D24D0u;
    // 0x2d24d0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2d24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2d24d4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2d24d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2d24d8:
    // 0x2d24d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2d24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d24dc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2d24dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d24e0: 0xc0b638c  jal         func_2D8E30
    ctx->pc = 0x2D24E0u;
    SET_GPR_U32(ctx, 31, 0x2D24E8u);
    ctx->pc = 0x2D8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8E30u, 0x2D24E0u, 0x2D24E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D24E8u;
label_2d24e8:
    // 0x2d24e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d24e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d24ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d24ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d24f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D24F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D24F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D24F8u;
    // 0x2d24f8: 0x0  nop
    ctx->pc = 0x2d24f8u;
    // NOP
    // 0x2d24fc: 0x0  nop
    ctx->pc = 0x2d24fcu;
    // NOP
    ctx->pc = 0x2d2500u;
}
