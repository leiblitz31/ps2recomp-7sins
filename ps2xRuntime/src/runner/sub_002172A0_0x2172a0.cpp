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

// Function: sub_002172A0
// Address: 0x2172a0 - 0x217320
void sub_002172A0_0x2172a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002172A0_0x2172a0");
#endif

    switch (ctx->pc) {
        case 0x2172c4u: goto label_2172c4;
        case 0x217308u: goto label_217308;
        default: break;
    }

    ctx->pc = 0x2172a0u;

    // 0x2172a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2172a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2172a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2172a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2172a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2172a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2172ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2172acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2172b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2172b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2172b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2172b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2172bc: 0xc0859d0  jal         func_216740
    ctx->pc = 0x2172BCu;
    SET_GPR_U32(ctx, 31, 0x2172C4u);
    ctx->pc = 0x216740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216740u, 0x2172BCu, 0x2172C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172C4u;
label_2172c4:
    // 0x2172c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2172c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172c8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2172c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2172ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2172d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2172d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2172d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2172d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2172d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2172dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2172dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2172e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2172e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2172e4: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x2172e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2172e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2172E8u;
    {
        const bool branch_taken_0x2172e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2172e8) {
            ctx->pc = 0x2172F8u;
            goto label_2172f8;
        }
    }
    ctx->pc = 0x2172F0u;
    // 0x2172f0: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x2172f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x2172f4: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x2172f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_2172f8:
    // 0x2172f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2172f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2172fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2172fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217300: 0xc085ba0  jal         func_216E80
    ctx->pc = 0x217300u;
    SET_GPR_U32(ctx, 31, 0x217308u);
    ctx->pc = 0x216E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216E80u, 0x217300u, 0x217308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217308u;
label_217308:
    // 0x217308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21730c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x21730cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x217310: 0x3e00008  jr          $ra
    ctx->pc = 0x217310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217318u;
    // 0x217318: 0x0  nop
    ctx->pc = 0x217318u;
    // NOP
    // 0x21731c: 0x0  nop
    ctx->pc = 0x21731cu;
    // NOP
    ctx->pc = 0x217320u;
}
