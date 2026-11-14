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

// Function: sub_0025E150
// Address: 0x25e150 - 0x25e1e0
void sub_0025E150_0x25e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E150_0x25e150");
#endif

    switch (ctx->pc) {
        case 0x25e18cu: goto label_25e18c;
        case 0x25e1ccu: goto label_25e1cc;
        default: break;
    }

    ctx->pc = 0x25e150u;

    // 0x25e150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e158: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25e158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25e15c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25e160: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e164: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x25e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e168: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e16c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25e170: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25E170u;
    {
        const bool branch_taken_0x25e170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e170) {
            ctx->pc = 0x25E1A4u;
            goto label_25e1a4;
        }
    }
    ctx->pc = 0x25E178u;
    // 0x25e178: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25e178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e17c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e180: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25e180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e184: 0xc097950  jal         func_25E540
    ctx->pc = 0x25E184u;
    SET_GPR_U32(ctx, 31, 0x25E18Cu);
    ctx->pc = 0x25E540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E540u, 0x25E184u, 0x25E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E18Cu;
label_25e18c:
    // 0x25e18c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e190: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25e194: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x25e194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x25e198: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x25e198u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x25e19c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25E19Cu;
    {
        const bool branch_taken_0x25e19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e19c) {
            ctx->pc = 0x25E1CCu;
            goto label_25e1cc;
        }
    }
    ctx->pc = 0x25E1A4u;
label_25e1a4:
    // 0x25e1a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e1a8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x25e1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x25e1ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25e1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e1b0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25e1b4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x25e1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e1b8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x25e1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25e1bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x25e1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e1c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25e1c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25e1c4: 0xc097878  jal         func_25E1E0
    ctx->pc = 0x25E1C4u;
    SET_GPR_U32(ctx, 31, 0x25E1CCu);
    ctx->pc = 0x25E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E1E0u, 0x25E1C4u, 0x25E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E1CCu;
label_25e1cc:
    // 0x25e1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e1d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25e1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25e1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E1DCu;
    // 0x25e1dc: 0x0  nop
    ctx->pc = 0x25e1dcu;
    // NOP
    ctx->pc = 0x25e1e0u;
}
