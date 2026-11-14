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

// Function: sub_002591A0
// Address: 0x2591a0 - 0x259220
void sub_002591A0_0x2591a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002591A0_0x2591a0");
#endif

    switch (ctx->pc) {
        case 0x2591c4u: goto label_2591c4;
        case 0x259208u: goto label_259208;
        default: break;
    }

    ctx->pc = 0x2591a0u;

    // 0x2591a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2591a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2591a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2591a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2591a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2591a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2591ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2591acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2591b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2591b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2591b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2591b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2591bc: 0xc096124  jal         func_258490
    ctx->pc = 0x2591BCu;
    SET_GPR_U32(ctx, 31, 0x2591C4u);
    ctx->pc = 0x258490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258490u, 0x2591BCu, 0x2591C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2591C4u;
label_2591c4:
    // 0x2591c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2591c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591c8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2591c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2591ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2591d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2591d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2591d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2591d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2591d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2591dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2591dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2591e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2591e4: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x2591e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2591e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2591E8u;
    {
        const bool branch_taken_0x2591e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2591e8) {
            ctx->pc = 0x2591F8u;
            goto label_2591f8;
        }
    }
    ctx->pc = 0x2591F0u;
    // 0x2591f0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2591f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2591f4: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x2591f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_2591f8:
    // 0x2591f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2591f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2591fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2591fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x259200: 0xc0971a8  jal         func_25C6A0
    ctx->pc = 0x259200u;
    SET_GPR_U32(ctx, 31, 0x259208u);
    ctx->pc = 0x25C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6A0u, 0x259200u, 0x259208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259208u;
label_259208:
    // 0x259208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x259208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25920c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25920cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x259210: 0x3e00008  jr          $ra
    ctx->pc = 0x259210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x259210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x259218u;
    // 0x259218: 0x0  nop
    ctx->pc = 0x259218u;
    // NOP
    // 0x25921c: 0x0  nop
    ctx->pc = 0x25921cu;
    // NOP
    ctx->pc = 0x259220u;
}
