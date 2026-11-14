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

// Function: sub_001D6870
// Address: 0x1d6870 - 0x1d6920
void sub_001D6870_0x1d6870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6870_0x1d6870");
#endif

    switch (ctx->pc) {
        case 0x1d68e0u: goto label_1d68e0;
        case 0x1d6900u: goto label_1d6900;
        default: break;
    }

    ctx->pc = 0x1d6870u;

    // 0x1d6870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6878: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d687c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1d687cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d6880: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6884: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D6884u;
    {
        const bool branch_taken_0x1d6884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6884) {
            ctx->pc = 0x1D6900u;
            goto label_1d6900;
        }
    }
    ctx->pc = 0x1D688Cu;
    // 0x1d688c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6890: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d6894: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6894u;
    {
        const bool branch_taken_0x1d6894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6894) {
            ctx->pc = 0x1D68E0u;
            goto label_1d68e0;
        }
    }
    ctx->pc = 0x1D689Cu;
    // 0x1d689c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d689cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68a0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1d68a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68a8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d68ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d68acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d68b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d68b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d68bc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1d68bcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1d68c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D68C0u;
    {
        const bool branch_taken_0x1d68c0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1d68c0) {
            ctx->pc = 0x1D68D0u;
            goto label_1d68d0;
        }
    }
    ctx->pc = 0x1D68C8u;
    // 0x1d68c8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1d68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1d68cc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1d68ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1d68d0:
    // 0x1d68d0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d68d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d68d4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d68d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d68d8: 0xc079c38  jal         func_1E70E0
    ctx->pc = 0x1D68D8u;
    SET_GPR_U32(ctx, 31, 0x1D68E0u);
    ctx->pc = 0x1E70E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E70E0u, 0x1D68D8u, 0x1D68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68E0u;
label_1d68e0:
    // 0x1d68e0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1d68e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d68e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d68e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d68e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d68e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d68ec: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D68ECu;
    {
        const bool branch_taken_0x1d68ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d68ec) {
            ctx->pc = 0x1D6900u;
            goto label_1d6900;
        }
    }
    ctx->pc = 0x1D68F4u;
    // 0x1d68f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d68f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d68f8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1D68F8u;
    SET_GPR_U32(ctx, 31, 0x1D6900u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1D68F8u, 0x1D6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6900u;
label_1d6900:
    // 0x1d6900: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1d6900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6904: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6908: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d6908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d690c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D690Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D690Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6914u;
    // 0x1d6914: 0x0  nop
    ctx->pc = 0x1d6914u;
    // NOP
    // 0x1d6918: 0x0  nop
    ctx->pc = 0x1d6918u;
    // NOP
    // 0x1d691c: 0x0  nop
    ctx->pc = 0x1d691cu;
    // NOP
    ctx->pc = 0x1d6920u;
}
