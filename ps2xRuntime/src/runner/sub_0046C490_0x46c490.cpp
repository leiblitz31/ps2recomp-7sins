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

// Function: sub_0046C490
// Address: 0x46c490 - 0x46c520
void sub_0046C490_0x46c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C490_0x46c490");
#endif

    switch (ctx->pc) {
        case 0x46c4bcu: goto label_46c4bc;
        case 0x46c4ccu: goto label_46c4cc;
        case 0x46c4e4u: goto label_46c4e4;
        case 0x46c4fcu: goto label_46c4fc;
        case 0x46c50cu: goto label_46c50c;
        default: break;
    }

    ctx->pc = 0x46c490u;

    // 0x46c490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x46c490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x46c494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c498: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c49c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46c49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46c4a0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x46c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c4a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c4a8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x46C4A8u;
    {
        const bool branch_taken_0x46c4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x46c4a8) {
            ctx->pc = 0x46C50Cu;
            goto label_46c50c;
        }
    }
    ctx->pc = 0x46C4B0u;
    // 0x46c4b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c4b4: 0xc11ac6c  jal         func_46B1B0
    ctx->pc = 0x46C4B4u;
    SET_GPR_U32(ctx, 31, 0x46C4BCu);
    ctx->pc = 0x46B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B1B0u, 0x46C4B4u, 0x46C4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C4BCu;
label_46c4bc:
    // 0x46c4bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c4c0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c4c4: 0xc11b168  jal         func_46C5A0
    ctx->pc = 0x46C4C4u;
    SET_GPR_U32(ctx, 31, 0x46C4CCu);
    ctx->pc = 0x46C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C5A0u, 0x46C4C4u, 0x46C4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C4CCu;
label_46c4cc:
    // 0x46c4cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46c4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c4d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c4d4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x46c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46c4d8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x46c4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46c4dc: 0xc11b160  jal         func_46C580
    ctx->pc = 0x46C4DCu;
    SET_GPR_U32(ctx, 31, 0x46C4E4u);
    ctx->pc = 0x46C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C580u, 0x46C4DCu, 0x46C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C4E4u;
label_46c4e4:
    // 0x46c4e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46c4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c4e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c4ec: 0x24640002  addiu       $a0, $v1, 0x2
    ctx->pc = 0x46c4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x46c4f0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x46c4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x46c4f4: 0xc11b148  jal         func_46C520
    ctx->pc = 0x46C4F4u;
    SET_GPR_U32(ctx, 31, 0x46C4FCu);
    ctx->pc = 0x46C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C520u, 0x46C4F4u, 0x46C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C4FCu;
label_46c4fc:
    // 0x46c4fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c500: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46c500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46c504: 0xc11b4d0  jal         func_46D340
    ctx->pc = 0x46C504u;
    SET_GPR_U32(ctx, 31, 0x46C50Cu);
    ctx->pc = 0x46D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D340u, 0x46C504u, 0x46C50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C50Cu;
label_46c50c:
    // 0x46c50c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c514: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x46c514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x46c518: 0x3e00008  jr          $ra
    ctx->pc = 0x46C518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C520u;
}
