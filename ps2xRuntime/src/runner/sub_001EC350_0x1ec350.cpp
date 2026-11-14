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

// Function: sub_001EC350
// Address: 0x1ec350 - 0x1ec3d0
void sub_001EC350_0x1ec350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC350_0x1ec350");
#endif

    switch (ctx->pc) {
        case 0x1ec374u: goto label_1ec374;
        case 0x1ec3b8u: goto label_1ec3b8;
        default: break;
    }

    ctx->pc = 0x1ec350u;

    // 0x1ec350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec358: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ec358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ec35c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1ec35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ec360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec364: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ec364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec368: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ec368u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec36c: 0xc07a7f4  jal         func_1E9FD0
    ctx->pc = 0x1EC36Cu;
    SET_GPR_U32(ctx, 31, 0x1EC374u);
    ctx->pc = 0x1E9FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9FD0u, 0x1EC36Cu, 0x1EC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC374u;
label_1ec374:
    // 0x1ec374: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ec374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec378: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1ec378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec37c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ec37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec380: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ec380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ec384: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ec384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ec388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ec38c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1ec38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ec390: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ec390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ec394: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1ec394u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1ec398: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC398u;
    {
        const bool branch_taken_0x1ec398 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1ec398) {
            ctx->pc = 0x1EC3A8u;
            goto label_1ec3a8;
        }
    }
    ctx->pc = 0x1EC3A0u;
    // 0x1ec3a0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1ec3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1ec3a4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1ec3a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1ec3a8:
    // 0x1ec3a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1ec3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1ec3ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ec3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ec3b0: 0xc07c2e4  jal         func_1F0B90
    ctx->pc = 0x1EC3B0u;
    SET_GPR_U32(ctx, 31, 0x1EC3B8u);
    ctx->pc = 0x1F0B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0B90u, 0x1EC3B0u, 0x1EC3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC3B8u;
label_1ec3b8:
    // 0x1ec3b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec3bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ec3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ec3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC3C8u;
    // 0x1ec3c8: 0x0  nop
    ctx->pc = 0x1ec3c8u;
    // NOP
    // 0x1ec3cc: 0x0  nop
    ctx->pc = 0x1ec3ccu;
    // NOP
    ctx->pc = 0x1ec3d0u;
}
